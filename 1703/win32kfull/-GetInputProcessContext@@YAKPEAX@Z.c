/*
 * XREFs of ?GetInputProcessContext@@YAKPEAX@Z @ 0x1C013DFEC
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@KPEAGPEAI@Z @ 0x1C01EA710 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetInputProcessContext(unsigned __int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax

  v3 = *(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 56);
  v4 = HMValidateHandleNoSecure(a1, 19);
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 472);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 260) & 0x20) != 0 && (unsigned int)(*(_DWORD *)(v5 + 24) - 1) <= 3 )
      {
        v6 = *(_QWORD *)(v4 + 376);
        if ( v6 )
          return *(unsigned int *)(v6 + 84);
      }
    }
  }
  return v3;
}
