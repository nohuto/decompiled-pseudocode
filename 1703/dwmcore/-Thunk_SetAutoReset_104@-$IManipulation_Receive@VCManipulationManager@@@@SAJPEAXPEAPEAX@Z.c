/*
 * XREFs of ?Thunk_SetAutoReset_104@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18018B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D244 (-InternalRelease@-$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x18018A184 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_SetAutoReset_104(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int64 *v3; // rdx
  char v4; // bl
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  v2 = *(char **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v7 = 0LL;
  v4 = *v2;
  Microsoft::WRL::ComPtr<CManipulation>::Attach(&v7, *v3);
  v5 = v7;
  *(_BYTE *)(v7 + 408) &= ~4u;
  *(_BYTE *)(v5 + 408) |= 4 * (v4 & 1);
  Microsoft::WRL::ComPtr<CManipulation>::InternalRelease(&v7);
  return 0LL;
}
