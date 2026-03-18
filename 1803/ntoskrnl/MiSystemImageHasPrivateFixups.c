/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x1400B5824
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     MiGetSystemRegionType @ 0x140104010 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

unsigned __int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // zf
  int SystemRegionType; // eax
  KIRQL v9; // al
  __int64 *v10; // rdx
  KIRQL v11; // bp
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdi

  v3 = 0LL;
  v4 = qword_1403CB500 == (_QWORD)&qword_1403CB500;
  *a3 = 0;
  *a2 = 0LL;
  if ( v4 )
    return 0LL;
  SystemRegionType = MiGetSystemRegionType(a1);
  if ( SystemRegionType != 12 && SystemRegionType != 1 )
    return 0LL;
  v9 = ExAcquireSpinLockShared(&dword_1403CB548);
  v10 = (__int64 *)qword_1403CB500;
  v11 = v9;
  while ( v10 != &qword_1403CB500 )
  {
    v12 = v10[2];
    if ( a1 >= v12 && a1 <= v10[3] )
    {
      v13 = (a1 - v12) >> 12;
      if ( _bittest(*(const signed __int32 **)(v10[5] + 8), v13) )
      {
        *a3 = v13;
        v3 = v12 - v10[4];
        *a2 = v10[6];
      }
      break;
    }
    v10 = (__int64 *)*v10;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CB548);
  __writecr8(v11);
  return v3;
}
