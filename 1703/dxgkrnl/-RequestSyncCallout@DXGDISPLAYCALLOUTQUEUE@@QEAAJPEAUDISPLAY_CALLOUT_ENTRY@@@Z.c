/*
 * XREFs of ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C0196C7C
 * Callers:
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C0197728 (DxgkRequestSyncDisplaySwitchCallout.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C00383B8 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     DpiGdiSyncDisplayCallout @ 0x1C01C2594 (DpiGdiSyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::RequestSyncCallout(
        DXGDISPLAYCALLOUTQUEUE *this,
        struct DISPLAY_CALLOUT_ENTRY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char **v9; // rax
  char *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)a2 + 20) = 1;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v9 = (char **)*((_QWORD *)this + 6);
  v10 = (char *)this + 40;
  if ( *v9 != v10 )
    __fastfail(3u);
  *(_QWORD *)a2 = v10;
  *((_QWORD *)a2 + 1) = v9;
  *v9 = (char *)a2;
  *((_QWORD *)v10 + 1) = a2;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v6, v7, v8);
  v11 = DpiGdiSyncDisplayCallout();
  v14 = v11;
  if ( v11 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = v14;
    WdLogEvent5_WdError(v15);
  }
  else
  {
    LODWORD(v14) = *((_DWORD *)a2 + 14);
  }
  DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'(a2);
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20, v16, v17, v18);
  return (unsigned int)v14;
}
