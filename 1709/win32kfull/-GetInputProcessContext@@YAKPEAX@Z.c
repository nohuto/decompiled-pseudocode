/*
 * XREFs of ?GetInputProcessContext@@YAKPEAX@Z @ 0x1C0144154
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@KPEAGPEAI@Z @ 0x1C01F6604 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetInputProcessContext(unsigned __int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rdx
  unsigned int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  LOBYTE(v3) = 19;
  v4 = *(_DWORD *)(CurrentProcessWin32Process + 56);
  v7 = HMValidateHandleNoSecure(a1, v3, v5, v6);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 472);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 276) & 0x20) != 0 && (unsigned int)(*(_DWORD *)(v8 + 24) - 1) <= 3 )
      {
        v9 = *(_QWORD *)(v7 + 376);
        if ( v9 )
          return *(unsigned int *)(v9 + 84);
      }
    }
  }
  return v4;
}
