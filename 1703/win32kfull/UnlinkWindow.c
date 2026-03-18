/*
 * XREFs of UnlinkWindow @ 0x1C005FA3C
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     ImeSetTopmost @ 0x1C001E790 (ImeSetTopmost.c)
 *     SetWindowGroupBand @ 0x1C001ED20 (SetWindowGroupBand.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005D85C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     DwmAsyncChildUnlink @ 0x1C00628D4 (DwmAsyncChildUnlink.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01ED618 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

__int64 __fastcall UnlinkWindow(__int64 a1, __int64 a2)
{
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // rax
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h]

  v4 = -__CFSHR__(*(_DWORD *)(a1 + 304), 5);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, 0LL, a2);
  v5 = a2 + 112;
  v6 = 0LL;
  if ( *(_QWORD *)(a2 + 112) != a1 )
  {
    v7 = *(_QWORD *)(a1 + 96);
    if ( !v7 )
      goto LABEL_7;
    v5 = v7 + 88;
  }
  v16 = v5;
  v17 = *(_QWORD *)(a1 + 88);
  HMAssignmentLock(&v16);
LABEL_7:
  v8 = *(_QWORD *)(a1 + 88);
  if ( v8 )
  {
    v16 = v8 + 96;
    v17 = *(_QWORD *)(a1 + 96);
    HMAssignmentLock(&v16);
    HMAssignmentUnlock(a1 + 88);
  }
  result = HMAssignmentUnlock(a1 + 96);
  *(_DWORD *)(a1 + 304) &= 0xFFFFFFE7;
  if ( v4 )
  {
    result = IsWindowDesktopComposed(a1);
    if ( (_DWORD)result )
    {
      result = GetDesktopWindow(a1, v10);
      if ( a1 != result )
      {
        result = *(_QWORD *)(a1 + 24);
        if ( result )
          v6 = *(_QWORD *)(result + 104);
        if ( a1 != v6 )
        {
          result = gTermIO[0];
          if ( a2 != gTermIO[1] )
          {
            v15 = (void *)ReferenceDwmApiPort(v12, v11, v13, v14);
            return DwmAsyncChildUnlink(v15);
          }
        }
      }
    }
  }
  return result;
}
