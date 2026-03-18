/*
 * XREFs of RtlInitLargeUnicodeString @ 0x1C0093D64
 * Callers:
 *     xxxSetInformationThread @ 0x1C0047F90 (xxxSetInformationThread.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     NtUserfnINSTRINGNULL @ 0x1C0093AA0 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C0093B80 (NtUserfnINLPCREATESTRUCT.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00CD8AC (xxxCreateDefaultImeWindow.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     NtUserfnINSTRING @ 0x1C00FF280 (NtUserfnINSTRING.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C013DC00 (NtUserfnINLPMDICREATESTRUCT.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01CEF08 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01E28F8 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitLargeUnicodeString(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // eax

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) &= ~0x80000000;
  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *(_WORD *)(a2 + 2 * v2) );
    v3 = 2 * v2;
    *(_DWORD *)a1 = v3;
    *(_DWORD *)(a1 + 4) = (v3 + 2) & 0x7FFFFFFF;
  }
  else
  {
    *(_DWORD *)(a1 + 4) &= 0x80000000;
    *(_DWORD *)a1 = 0;
  }
}
