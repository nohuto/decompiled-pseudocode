/*
 * XREFs of ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01ABDD8
 * Callers:
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C01AC738 (DxgkRequestSyncDisplaySwitchCallout.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C0010FB8 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     DpiGdiSyncDisplayCallout @ 0x1C0104AC4 (DpiGdiSyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::RequestSyncCallout(
        DXGDISPLAYCALLOUTQUEUE *this,
        struct DISPLAY_CALLOUT_ENTRY *a2)
{
  char **v4; // rax
  char *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  *((_BYTE *)a2 + 20) = 1;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v4 = (char **)*((_QWORD *)this + 6);
  v5 = (char *)this + 40;
  if ( *v4 != v5 )
    __fastfail(3u);
  *(_QWORD *)a2 = v5;
  *((_QWORD *)a2 + 1) = v4;
  *v4 = (char *)a2;
  *((_QWORD *)v5 + 1) = a2;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  v6 = DpiGdiSyncDisplayCallout();
  v8 = v6;
  if ( v6 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    LODWORD(v8) = *((_DWORD *)a2 + 14);
  }
  DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'(a2);
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return (unsigned int)v8;
}
