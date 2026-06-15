/*
 * XREFs of ?AddTail@?$TList@VCKsNotificationsMonitor@@@@QEAAPEAXPEAVCKsNotificationsMonitor@@@Z @ 0x180090A4C
 * Callers:
 *     ?KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V?$CComPtr@UIConnector@@@ATL@@V?$CComPtr@UIDeviceTopology@@@3@@Z @ 0x180090AC0 (-KsNotifications_CreateMonitor@@YAXPEBGW4__MIDL___MIDL_itf_devicetopology_0000_0000_0013@@V-$CCo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall TList<CKsNotificationsMonitor>::AddTail(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v3 = operator new(0x18uLL);
  v4 = v3;
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    v4[2] = a2;
    v4[1] = qword_18014C448;
    *v4 = 0LL;
    if ( qword_18014C448 )
      *(_QWORD *)qword_18014C448 = v4;
    else
      g_lstKsNotificationMonitors = v4;
    ++dword_18014C450;
    qword_18014C448 = (__int64)v4;
  }
  return v4;
}
