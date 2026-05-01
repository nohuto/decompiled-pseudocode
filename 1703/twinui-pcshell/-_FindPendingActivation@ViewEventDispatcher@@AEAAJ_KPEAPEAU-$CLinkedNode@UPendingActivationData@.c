/*
 * XREFs of ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x1800FACC8
 * Callers:
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1800F2778 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 *     ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x1800F6880 (-RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z.c)
 *     ?GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800F6920 (-GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation.c)
 * Callees:
 *     ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x1800FF3DC (--$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??$PendingActivationFind@AEA_KAEAY08$$CBG@ViewManagerInteropTraceLogging@@SAXAEA_KAEAY08$$CBG@Z @ 0x1800FF49C (--$PendingActivationFind@AEA_KAEAY08$$CBG@ViewManagerInteropTraceLogging@@SAXAEA_KAEAY08$$CBG@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindPendingActivation(__int64 a1, __int64 *a2, __int64 ***a3)
{
  __int64 ***v3; // rcx
  __int64 **v4; // rbx
  __int64 result; // rax
  PCWSTR StringRawBuffer; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *a3 = 0LL;
  v3 = (__int64 ***)(a1 + 488);
  v4 = 0LL;
  while ( 1 )
  {
    if ( v4 )
    {
      v4 = (__int64 **)*v4;
    }
    else
    {
      if ( !v3 )
        break;
      v4 = *v3;
    }
    if ( !v4 )
      break;
    if ( a2 == v4[1] )
    {
      StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v4[2], 0LL);
      ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
        &v8,
        &StringRawBuffer);
      result = 0LL;
      *a3 = v4;
      return result;
    }
  }
  ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const (&)[9]>(&v8);
  return 2147647531LL;
}
