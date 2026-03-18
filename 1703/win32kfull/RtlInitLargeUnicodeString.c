/*
 * XREFs of RtlInitLargeUnicodeString @ 0x1C004DB0C
 * Callers:
 *     NtUserfnINSTRINGNULL @ 0x1C004A520 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C004D940 (NtUserfnINLPCREATESTRUCT.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     xxxSetInformationThread @ 0x1C00C74B0 (xxxSetInformationThread.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00C9E70 (xxxCreateDefaultImeWindow.c)
 *     xxxProcessAsyncSendMessage @ 0x1C00CD168 (xxxProcessAsyncSendMessage.c)
 *     NtUserfnINSTRING @ 0x1C00EA550 (NtUserfnINSTRING.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C0137370 (NtUserfnINLPMDICREATESTRUCT.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CAAC4 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01D6090 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitLargeUnicodeString(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // rax
  int v4; // eax

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) &= ~0x80000000;
  v2 = *(_DWORD *)(a1 + 4);
  if ( a2 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(a2 + 2 * v3) );
    v4 = 2 * v3;
    *(_DWORD *)a1 = v4;
    *(_DWORD *)(a1 + 4) = v2 ^ (v2 ^ (v4 + 2)) & 0x7FFFFFFF;
  }
  else
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = v2 & 0x80000000;
  }
}
