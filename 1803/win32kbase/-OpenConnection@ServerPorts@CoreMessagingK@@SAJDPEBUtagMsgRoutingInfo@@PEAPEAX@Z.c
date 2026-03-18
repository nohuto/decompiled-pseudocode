/*
 * XREFs of ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0166BE8
 * Callers:
 *     CoreMsgOpenConnection @ 0x1C016555C (CoreMsgOpenConnection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C0165BBC (-PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01663A8 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0166760 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 *     ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C0166FD4 (-Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z.c)
 */

int __fastcall CoreMessagingK::ServerPorts::OpenConnection(char a1, const struct tagMsgRoutingInfo *a2, void **a3)
{
  int result; // eax
  struct CoreMessagingK::ServerPortInfo *i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct CoreMessagingK::CoreMsgObject *v10; // rcx
  struct CoreMessagingK::CoreMsgObject *v11; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v12; // [rsp+28h] [rbp-30h] BYREF

  *a3 = 0LL;
  result = CoreMessagingK::RegistrarClient::PrepareConnection(a2, (enum MsgError *)&v11, &v12);
  if ( result >= 0 )
  {
    if ( (_DWORD)v11 == 5 )
      return 0;
    if ( (_DWORD)v11 == 10 )
      return -1073741670;
    if ( (_DWORD)v11 )
      return -1073741823;
    for ( i = CoreMessagingK::ServerPorts::s_PortInfos; ; i = (struct CoreMessagingK::ServerPortInfo *)*((_QWORD *)i + 6) )
    {
      if ( !i )
        CoreMessagingK::Runtime::BugCheck(1536, 0LL, 0LL);
      v8 = *(_QWORD *)&v12.Data1 - *((_QWORD *)i + 2);
      if ( *(_QWORD *)&v12.Data1 == *((_QWORD *)i + 2) )
        v8 = *(_QWORD *)v12.Data4 - *((_QWORD *)i + 3);
      if ( !v8 )
        break;
    }
    CoreMessagingK::ServerPorts::DrainPort(i);
    v9 = *((_QWORD *)i + 5);
    if ( !v9 )
      return -1073741823;
    do
    {
      if ( *(_DWORD *)(v9 + 8) == *(_DWORD *)a2 && *(_DWORD *)(v9 + 12) == *((_DWORD *)a2 + 1) )
        break;
      v9 = *(_QWORD *)(v9 + 24);
    }
    while ( v9 );
    if ( !v9 )
      return -1073741823;
    result = CoreMessagingK::CoreMsgObject::Create(
               a1,
               (const struct CoreMessagingK::ObjectImplVtbl *)&CoreMessagingK::ConnectionTargetInfo::s_Vtbl,
               &v11,
               a3);
    if ( result >= 0 )
    {
      v10 = v11;
      *((_QWORD *)v11 + 2) = *((_QWORD *)a2 + 1);
      *((_QWORD *)v10 + 3) = v9;
      ++*(_DWORD *)(v9 + 16);
      return 0;
    }
  }
  return result;
}
