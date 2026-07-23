/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x140064EF0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rdi
  bool v4; // zf
  KIRQL v8; // al
  __int64 *v9; // rcx
  KIRQL v10; // si
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // rbx

  v3 = 0LL;
  v4 = qword_140388380 == (_QWORD)&qword_140388380;
  *a3 = 0;
  *a2 = 0LL;
  if ( v4
    || (a1 < 0xFFFF800000000000uLL || byte_1403899D0[((a1 >> 39) & 0x1FF) - 256] != 12)
    && (!PsNtosImageBase
     || (a1 < (unsigned __int64)PsNtosImageBase || a1 >= PsNtosImageEnd)
     && (a1 < (unsigned __int64)PsHalImageBase || a1 >= PsHalImageEnd))
    && (unsigned int)MiGetSystemRegionType(a1) != 1 )
  {
    return 0LL;
  }
  v8 = ExAcquireSpinLockShared(&dword_1403883C8);
  v9 = (__int64 *)qword_140388380;
  v10 = v8;
  if ( (__int64 *)qword_140388380 != &qword_140388380 )
  {
    while ( 1 )
    {
      v11 = v9[2];
      if ( a1 >= v11 && a1 <= v9[3] )
        break;
      v9 = (__int64 *)*v9;
      if ( v9 == &qword_140388380 )
        goto LABEL_7;
    }
    v13 = (a1 - v11) >> 12;
    if ( _bittest(*(const signed __int32 **)(v9[5] + 8), v13) )
    {
      v3 = v9[2] - v9[4];
      *a2 = v9[6];
      *a3 = v13;
    }
  }
LABEL_7:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1403883C8);
  __writecr8(v10);
  return v3;
}
