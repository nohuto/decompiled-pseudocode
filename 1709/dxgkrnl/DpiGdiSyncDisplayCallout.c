/*
 * XREFs of DpiGdiSyncDisplayCallout @ 0x1C0104AC4
 * Callers:
 *     DpiGdiHandleAsyncDisplayCallout @ 0x1C0104AA0 (DpiGdiHandleAsyncDisplayCallout.c)
 *     ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01ABDD8 (-RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 DpiGdiSyncDisplayCallout()
{
  __int64 v0; // r8
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v7; // rax
  _DWORD v8[10]; // [rsp+30h] [rbp-28h] BYREF

  memset(v8, 0, 0x20uLL);
  LOBYTE(v0) = 1;
  v8[0] = 8;
  v1 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, _QWORD, _QWORD, _QWORD))SMgrGdiCallout)(
         v8,
         0LL,
         v0,
         0LL,
         0LL,
         0LL);
  v5 = v1;
  if ( v1 < 0 || v8[6] < 0 )
  {
    v7 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v7 + 24) = v5;
    WdLogEvent5_WdWarning(v7);
  }
  return (unsigned int)v5;
}
