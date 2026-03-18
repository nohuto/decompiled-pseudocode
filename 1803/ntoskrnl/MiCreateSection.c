/*
 * XREFs of MiCreateSection @ 0x1404C32E0
 * Callers:
 *     MmCreateSystemSection @ 0x140161354 (MmCreateSystemSection.c)
 *     MmCreateSectionEx @ 0x1404BF1DC (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x1404C10BC (MmCreateCacheManagerSection.c)
 *     MmCreateSection @ 0x1404C1C80 (MmCreateSection.c)
 *     MmCreateSpecialImageSection @ 0x1404F0B68 (MmCreateSpecialImageSection.c)
 * Callees:
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiCreatePagingFileMap @ 0x1404BC908 (MiCreatePagingFileMap.c)
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 *     MiInitializeCreateSectionPacket @ 0x1404C34D0 (MiInitializeCreateSectionPacket.c)
 *     MiFinishCreateSection @ 0x1404C37A0 (MiFinishCreateSection.c)
 *     MiLogSectionObjectEvent @ 0x14074C284 (MiLogSectionObjectEvent.c)
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
  int SectionPacket; // edi
  unsigned __int64 v18; // rax
  char v19; // r8
  __int64 v20; // rbx
  void *v21; // rsi
  __int64 v22; // rcx
  int v24; // ebx
  LARGE_INTEGER v25[2]; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD v26[24]; // [rsp+70h] [rbp-E8h] BYREF

  v16 = 0;
  memset(v26, 0, sizeof(v26));
  SectionPacket = MiInitializeCreateSectionPacket((unsigned int)v26, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( SectionPacket >= 0 )
  {
    while ( 1 )
    {
      LODWORD(v26[0]) |= v16;
      if ( !v26[5] && !v26[6] )
        break;
      SectionPacket = MiCreateImageOrDataSection((__int64)v26);
      if ( SectionPacket != -1073740682 )
        goto LABEL_5;
      if ( v26[22] )
        PsDereferencePartition(v26[22]);
      v24 = HIBYTE(LODWORD(v26[0]));
      memset(v26, 0, sizeof(v26));
      SectionPacket = MiInitializeCreateSectionPacket((unsigned int)v26, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
      v16 = (v24 & 1) << 24;
      if ( SectionPacket < 0 )
        goto LABEL_12;
    }
    SectionPacket = MiCreatePagingFileMap((__int64)v26);
LABEL_5:
    if ( SectionPacket >= 0 )
    {
      SectionPacket = MiFinishCreateSection(v26);
      if ( SectionPacket >= 0 )
      {
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v26[8] + 24LL), -1LL, -1LL);
        v19 = v26[0];
        v20 = v26[8];
        v21 = (void *)v26[18];
        if ( ((v26[0] & 9) == 0 && (*(_DWORD *)(v26[8] + 56LL) & 0x8000) != 0 || *(_QWORD *)(v26[18] + 48LL) > v18)
          && (v25[0] = *(LARGE_INTEGER *)(v26[18] + 48LL),
              v22 = v26[18],
              *(_QWORD *)(v26[18] + 48LL) = v18,
              SectionPacket = MmExtendSection(v22, v25, v19 & 1),
              SectionPacket < 0) )
        {
          ObfDereferenceObject(v21);
        }
        else
        {
          *a1 = v21;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v20 + 64) )
            MiLogSectionObjectEvent(v21, 1LL);
        }
      }
    }
  }
LABEL_12:
  if ( v26[22] )
    PsDereferencePartition(v26[22]);
  return (unsigned int)SectionPacket;
}
