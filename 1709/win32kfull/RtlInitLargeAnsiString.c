/*
 * XREFs of RtlInitLargeAnsiString @ 0x1C010EAF0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     NtUserfnINSTRINGNULL @ 0x1C0093AA0 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C0093B80 (NtUserfnINLPCREATESTRUCT.c)
 *     NtUserfnINSTRING @ 0x1C00FF280 (NtUserfnINSTRING.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C013DC00 (NtUserfnINLPMDICREATESTRUCT.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C01E28F8 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitLargeAnsiString(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) |= 0x80000000;
  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *(_BYTE *)(a2 + v2) );
    *(_DWORD *)a1 = v2;
    *(_DWORD *)(a1 + 4) = (v2 + 1) | 0x80000000;
  }
  else
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0x80000000;
  }
}
