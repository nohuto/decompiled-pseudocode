/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x1400A77B0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rdi
  bool v4; // zf
  KIRQL v8; // al
  __int64 *v9; // rcx
  KIRQL v10; // si
  __int64 v12; // r8
  unsigned __int64 v13; // rbx

  v3 = 0LL;
  v4 = qword_14036C040 == (_QWORD)&qword_14036C040;
  *a3 = 0;
  *a2 = 0LL;
  if ( v4
    || (a1 < 0xFFFF800000000000uLL || byte_14036D700[((a1 >> 39) & 0x1FF) - 256] != 12)
    && (!PsNtosImageBase
     || (a1 < (unsigned __int64)PsNtosImageBase || a1 >= PsNtosImageEnd)
     && (a1 < (unsigned __int64)PsHalImageBase || a1 >= PsHalImageEnd))
    && (unsigned int)MiGetSystemRegionType(a1) != 1 )
  {
    return 0LL;
  }
  v8 = ExAcquireSpinLockShared(&dword_14036C088);
  v9 = (__int64 *)qword_14036C040;
  v10 = v8;
  if ( (__int64 *)qword_14036C040 != &qword_14036C040 )
  {
    while ( a1 < v9[2] || a1 > v9[3] )
    {
      v9 = (__int64 *)*v9;
      if ( v9 == &qword_14036C040 )
        goto LABEL_7;
    }
    v12 = v9[2];
    v13 = (a1 - v12) >> 12;
    if ( _bittest(*(const signed __int32 **)(v9[5] + 8), v13) )
    {
      v3 = v12 - v9[4];
      *a2 = v9[6];
      *a3 = v13;
    }
  }
LABEL_7:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036C088);
  __writecr8(v10);
  return v3;
}
