/*
 * XREFs of ?Thunk_SetCaptureState_98@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x18018B640
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ @ 0x18016D244 (-InternalRelease@-$ComPtr@VCManipulation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x18018A184 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 */

__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_SetCaptureState_98(__int64 a1, __int64 a2)
{
  int *v2; // rax
  __int64 *v3; // rdx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  v2 = *(int **)(a2 + 8);
  v3 = *(__int64 **)a2;
  v6 = 0LL;
  v4 = *v2;
  Microsoft::WRL::ComPtr<CManipulation>::Attach(&v6, *v3);
  *(_DWORD *)(v6 + 412) = v4;
  Microsoft::WRL::ComPtr<CManipulation>::InternalRelease(&v6);
  return 0LL;
}
