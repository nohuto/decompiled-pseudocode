/*
 * XREFs of MiCreateSection @ 0x14050C860
 * Callers:
 *     MmCreateSystemSection @ 0x140034178 (MmCreateSystemSection.c)
 *     MmCreateSection @ 0x140436B00 (MmCreateSection.c)
 *     MmCreateSectionEx @ 0x140493E0C (MmCreateSectionEx.c)
 *     NtCreateSection @ 0x14050FCB0 (NtCreateSection.c)
 *     MmCreateCacheManagerSection @ 0x140515F54 (MmCreateCacheManagerSection.c)
 *     MmCreateSpecialImageSection @ 0x140546050 (MmCreateSpecialImageSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmExtendSection @ 0x140492D14 (MmExtendSection.c)
 *     MiInitializeCreateSectionPacket @ 0x14050CA20 (MiInitializeCreateSectionPacket.c)
 *     MiFinishCreateSection @ 0x14050CC90 (MiFinishCreateSection.c)
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 *     MiLogSectionObjectEvent @ 0x1406B5330 (MiLogSectionObjectEvent.c)
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
  __int64 result; // rax
  int v17; // esi
  unsigned __int64 v18; // rax
  char v19; // r8
  __int64 v20; // rbx
  void *v21; // rdi
  __int64 v22; // rcx
  LARGE_INTEGER v23[2]; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD v24[24]; // [rsp+70h] [rbp-C8h] BYREF

  LODWORD(v24[0]) = 0;
  memset(&v24[1], 0, 0xB0uLL);
  result = MiInitializeCreateSectionPacket((unsigned int)v24, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( (int)result >= 0 )
  {
    result = v24[5] || v24[6] ? MiCreateImageOrDataSection(v24) : MiCreatePagingFileMap(v24);
    if ( (int)result >= 0 )
    {
      result = MiFinishCreateSection(v24);
      v17 = result;
      if ( (int)result >= 0 )
      {
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)v24[8] + 24LL), -1LL, -1LL);
        v19 = v24[0];
        v20 = v24[8];
        v21 = (void *)v24[18];
        if ( ((v24[0] & 9) == 0 && (*(_DWORD *)(v24[8] + 56LL) & 0x8000) != 0 || *(_QWORD *)(v24[18] + 48LL) > v18)
          && (v23[0] = *(LARGE_INTEGER *)(v24[18] + 48LL),
              v22 = v24[18],
              *(_QWORD *)(v24[18] + 48LL) = v18,
              v17 = MmExtendSection(v22, v23, v19 & 1),
              v17 < 0) )
        {
          ObfDereferenceObject(v21);
        }
        else
        {
          *a1 = v21;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v20 + 64) )
            MiLogSectionObjectEvent(v21, 1LL);
        }
        return (unsigned int)v17;
      }
    }
  }
  return result;
}
