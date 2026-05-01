/*
 * XREFs of ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800319A4
 * Callers:
 *     ?GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180033D00 (-GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation.c)
 *     ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x180033D90 (-RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180036674 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 * Callees:
 *     ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x1800919BC (--$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x180092668 (-Step@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ.c)
 *     ??$PendingActivationFind@AEA_KAEAY08$$CBG@ViewManagerInteropTraceLogging@@SAXAEA_KAEAY08$$CBG@Z @ 0x1801C7280 (--$PendingActivationFind@AEA_KAEAY08$$CBG@ViewManagerInteropTraceLogging@@SAXAEA_KAEAY08$$CBG@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindPendingActivation(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  *a3 = 0LL;
  v9 = a1 + 560;
  v10 = 0LL;
  do
  {
    if ( !(unsigned int)CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(&v9) )
    {
      ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const (&)[9]>(&v12);
      return 2147647531LL;
    }
    v6 = v10;
    v7 = (_QWORD *)(v10 + 8);
    if ( !v10 )
      v7 = (_QWORD *)v4;
  }
  while ( v5 != *v7 );
  if ( v10 )
    v4 = v10 + 8;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v4 + 8), 0LL);
  ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
    &v12,
    &StringRawBuffer);
  result = 0LL;
  *a3 = v6;
  return result;
}
