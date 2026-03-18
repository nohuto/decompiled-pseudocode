/*
 * XREFs of ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C0165BBC
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0166BE8 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?TracePrepareConnection@Log@CoreMessagingK@@SAXPEBUtagMsgRoutingInfo@@JW4MsgError@@PEBU_GUID@@@Z @ 0x1C0165E88 (-TracePrepareConnection@Log@CoreMessagingK@@SAXPEBUtagMsgRoutingInfo@@JW4MsgError@@PEBU_GUID@@@Z.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C01674F8 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 *     CoreUICallSend @ 0x1C0168DF8 (CoreUICallSend.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::PrepareConnection(
        const struct tagMsgRoutingInfo *a1,
        enum MsgError *a2,
        struct _GUID *a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm1
  int v8; // eax
  int v9; // edx
  _OWORD v11[4]; // [rsp+40h] [rbp-39h] BYREF
  _OWORD v12[3]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+37h]
  void *v14; // [rsp+F8h] [rbp+7Fh] BYREF

  v14 = &CoreMessagingK::SendHost::s_Vtbl;
  memset(v11, 0, 0x38uLL);
  v6 = 0;
  v7 = *((_OWORD *)a1 + 1);
  v11[0] = *(_OWORD *)a1;
  *(_QWORD *)&v11[2] = *((_QWORD *)a1 + 4);
  v12[1] = v7;
  *((_QWORD *)&v11[0] + 1) = 0LL;
  v12[0] = *(unsigned __int64 *)&v11[0];
  CoreMessagingK::RegistrarClient::s_Reply_Result = 21;
  CoreMessagingK::RegistrarClient::s_Reply_Parameter1 = 0LL;
  v12[2] = v11[2];
  v13 = *(_QWORD *)&v11[3];
  v8 = CoreUICallSend((struct IMessageCallSendHost *)&v14, 1, byte_1C01753BA, (char)v12);
  if ( v8 >= 0 )
  {
    *(_DWORD *)a2 = CoreMessagingK::RegistrarClient::s_Reply_Result;
    *a3 = *(struct _GUID *)((char *)CoreMessagingK::RegistrarClient::s_Reply_Parameter1 + 24);
  }
  else
  {
    v6 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v8, v9);
  }
  CoreMessagingK::Log::TracePrepareConnection(a1, v6, *(unsigned int *)a2, a3);
  return v6;
}
