/*
 * XREFs of HviGetHypervisorVersion @ 0x1402C0C70
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x140226EA0 (HvlpHvIdentityInfoCallback.c)
 *     HvlPhase0Initialize @ 0x140628830 (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x140717888 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140172300 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetHypervisorVersion(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741826LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
