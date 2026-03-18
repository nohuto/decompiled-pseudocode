/*
 * XREFs of ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01A0FEC
 * Callers:
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C01A1FF8 (DxgkRequestSyncDisplaySwitchCallout.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C003273C (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     DpiGdiSyncDisplayCallout @ 0x1C01EE714 (DpiGdiSyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::RequestSyncCallout(DXGDISPLAYCALLOUTQUEUE *this, _BYTE *P)
{
  char **v4; // rax
  char *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  P[20] = 1;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v4 = (char **)*((_QWORD *)this + 6);
  v5 = (char *)this + 40;
  if ( *v4 != v5 )
    __fastfail(3u);
  *(_QWORD *)P = v5;
  *((_QWORD *)P + 1) = v4;
  *v4 = P;
  *((_QWORD *)v5 + 1) = P;
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
    LODWORD(v8) = *((_DWORD *)P + 14);
  }
  DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'((DISPLAY_CALLOUT_ENTRY *)P);
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return (unsigned int)v8;
}
