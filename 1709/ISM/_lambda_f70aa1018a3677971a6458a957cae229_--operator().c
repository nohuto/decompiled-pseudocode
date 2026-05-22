/*
 * XREFs of _lambda_f70aa1018a3677971a6458a957cae229_::operator() @ 0x180057FE4
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x180057CEC (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180067D8C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall lambda_f70aa1018a3677971a6458a957cae229_::operator()(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _OWORD *a6)
{
  int v10; // eax
  int v11; // ecx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  LARGE_INTEGER v14; // rax
  char v16; // [rsp+20h] [rbp-28h]
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  memset((void *)a2, 0, 0xB20uLL);
  v16 = 1;
  v10 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0LL, a3, a5, a2, v16);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x28C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x1800580DELL);
  }
  *(_DWORD *)(a2 + 1320) = 1;
  v11 = *(_DWORD *)(*(_QWORD *)a1 + 3136LL);
  *(_DWORD *)(a2 + 1376) = 0;
  *(_DWORD *)(a2 + 1324) = v11;
  *(_DWORD *)(a2 + 1340) = a4;
  v12 = a6[1];
  *(_OWORD *)(a2 + 848) = *a6;
  *(_DWORD *)(a2 + 1368) = 1065353216;
  v13 = a6[2];
  *(_OWORD *)(a2 + 864) = v12;
  *(_DWORD *)(a2 + 1372) = a3;
  *(_OWORD *)(a2 + 880) = v13;
  QueryPerformanceCounter(&PerformanceCount);
  v14 = PerformanceCount;
  *(_DWORD *)(a2 + 1412) = -1;
  *(LARGE_INTEGER *)(a2 + 1400) = v14;
  return a2;
}
