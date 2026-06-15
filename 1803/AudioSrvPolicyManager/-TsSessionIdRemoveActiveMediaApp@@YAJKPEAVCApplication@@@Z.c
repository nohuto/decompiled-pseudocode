/*
 * XREFs of ?TsSessionIdRemoveActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180026260
 * Callers:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180011654 (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x1800116DC (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001DBA4 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001DE14 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180017594 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x180025C38 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x1800260E4 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdRemoveActiveMediaApp(DWORD a1, struct CApplication *a2)
{
  unsigned int v4; // edi
  int v5; // eax
  struct TSSession *v6; // rbx
  __int64 i; // rdx
  struct TSSession *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = TsSessionFromSessionId(a1, 0, 0LL, &v9);
  if ( v5 )
  {
    v4 = (unsigned __int16)v5 | 0x80070000;
    if ( v5 <= 0 )
      v4 = v5;
  }
  else
  {
    v6 = v9;
    for ( i = *((_QWORD *)v9 + 13); i; i = *(_QWORD *)i )
    {
      if ( *(struct CApplication **)(i + 16) == a2 )
        goto LABEL_10;
    }
    i = 0LL;
LABEL_10:
    if ( i )
    {
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt((__int64 **)v9 + 13, (__int64 *)i);
      TsSessionSendAppManagerNotification(v6);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  return v4;
}
