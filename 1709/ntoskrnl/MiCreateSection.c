/*
 * XREFs of MiCreateSection @ 0x14049B390
 * Callers:
 *     MmCreateSystemSection @ 0x1400F9864 (MmCreateSystemSection.c)
 *     MmCreateSection @ 0x14049B260 (MmCreateSection.c)
 *     MmCreateSectionEx @ 0x1404FA1DC (MmCreateSectionEx.c)
 *     MmCreateSpecialImageSection @ 0x14053A36C (MmCreateSpecialImageSection.c)
 *     MmCreateCacheManagerSection @ 0x140571B20 (MmCreateCacheManagerSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 *     MiInitializeCreateSectionPacket @ 0x14049B630 (MiInitializeCreateSectionPacket.c)
 *     MiFinishCreateSection @ 0x14049B8E0 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 *     MmExtendSection @ 0x14056BA18 (MmExtendSection.c)
 *     MiLogSectionObjectEvent @ 0x1406E1498 (MiLogSectionObjectEvent.c)
 */

__int64 __fastcall MiCreateSection(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10,
        char a11,
        int a12)
{
  int v16; // ebx
  __int64 v17; // rdx
  int SectionPacket; // edi
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  char v22; // r8
  __int64 v23; // rbx
  void *v24; // rsi
  __int64 v25; // rcx
  __int64 v27; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD v28[24]; // [rsp+70h] [rbp-E8h] BYREF

  v16 = 0;
  memset(v28, 0, sizeof(v28));
  SectionPacket = MiInitializeCreateSectionPacket((unsigned int)v28, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( SectionPacket >= 0 )
  {
    while ( 1 )
    {
      LODWORD(v28[0]) |= v16;
      v16 = 0;
      if ( !v28[5] && !v28[6] )
        break;
      SectionPacket = MiCreateImageOrDataSection(v28);
      if ( SectionPacket != -1073740682 )
        goto LABEL_4;
      if ( v28[22] )
        PsDereferencePartition(v28[22]);
      if ( (v28[0] & 0x1000000) != 0 )
        v16 = 0x1000000;
      memset(v28, 0, sizeof(v28));
      SectionPacket = MiInitializeCreateSectionPacket((unsigned int)v28, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
      if ( SectionPacket < 0 )
        goto LABEL_13;
    }
    SectionPacket = MiCreatePagingFileMap((__int64)v28, v17, v19, v20);
LABEL_4:
    if ( SectionPacket >= 0 )
    {
      SectionPacket = MiFinishCreateSection(v28);
      if ( SectionPacket >= 0 )
      {
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v28[8] + 24LL), -1LL, -1LL);
        v22 = v28[0];
        v23 = v28[8];
        v24 = (void *)v28[18];
        if ( ((v28[0] & 9) == 0 && (*(_DWORD *)(v28[8] + 56LL) & 0x8000) != 0 || *(_QWORD *)(v28[18] + 48LL) > v21)
          && (v27 = *(_QWORD *)(v28[18] + 48LL),
              v25 = v28[18],
              *(_QWORD *)(v28[18] + 48LL) = v21,
              SectionPacket = MmExtendSection(v25, &v27, v22 & 1),
              SectionPacket < 0) )
        {
          ObfDereferenceObject(v24);
        }
        else
        {
          *a1 = v24;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v23 + 64) )
            MiLogSectionObjectEvent(v24, 1LL);
        }
      }
    }
  }
LABEL_13:
  if ( v28[22] )
    PsDereferencePartition(v28[22]);
  return (unsigned int)SectionPacket;
}
