/*
 * XREFs of _lambda_e1179965494e4fae5678a8549412ec28_::operator() @ 0x18004F25C
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x18004EF44 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x18005F0B0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 __fastcall lambda_e1179965494e4fae5678a8549412ec28_::operator()(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        _OWORD *a6)
{
  __int64 v10; // r9
  int v11; // eax
  int v12; // ecx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  LARGE_INTEGER v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp+10h] BYREF

  memset_0((void *)a2, 0, 0x6C8uLL);
  v10 = a5;
  *(_DWORD *)(a2 + 24) = 1736;
  v11 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0LL, a3, 512LL, v10, a2);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x299,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x18004F360LL);
  }
  *(_DWORD *)(a2 + 1144) = 1;
  v12 = *(_DWORD *)(*(_QWORD *)a1 + 2016LL);
  v13 = a6;
  *(_DWORD *)(a2 + 1200) = 0;
  *(_DWORD *)(a2 + 1148) = v12;
  *(_DWORD *)(a2 + 1164) = a4;
  v14 = v13[1];
  *(_OWORD *)(a2 + 672) = *v13;
  *(_DWORD *)(a2 + 1192) = 1065353216;
  v15 = v13[2];
  *(_OWORD *)(a2 + 688) = v14;
  *(_DWORD *)(a2 + 1196) = a3;
  *(_OWORD *)(a2 + 704) = v15;
  QueryPerformanceCounter(&PerformanceCount);
  v16 = PerformanceCount;
  *(_DWORD *)(a2 + 1236) = -1;
  *(LARGE_INTEGER *)(a2 + 1224) = v16;
  return a2;
}
