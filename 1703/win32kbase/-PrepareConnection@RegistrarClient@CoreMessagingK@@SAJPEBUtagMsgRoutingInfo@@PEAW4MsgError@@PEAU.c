/*
 * XREFs of ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C006BA6C
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C006B6F4 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     CoreUICallSend @ 0x1C006BF70 (CoreUICallSend.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C0156840 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::PrepareConnection(
        const struct tagMsgRoutingInfo *a1,
        enum MsgError *a2,
        struct _GUID *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // eax
  int v9; // edx
  const GUID *v10; // r9
  unsigned int v11; // ebx
  int v12; // ecx
  unsigned int v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v17[16]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-60h]
  __int128 v19; // [rsp+B0h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  const struct tagMsgRoutingInfo *v21; // [rsp+E0h] [rbp-20h]
  int v22; // [rsp+E8h] [rbp-18h]
  int v23; // [rsp+ECh] [rbp-14h]
  char *v24; // [rsp+F0h] [rbp-10h]
  int v25; // [rsp+F8h] [rbp-8h]
  int v26; // [rsp+FCh] [rbp-4h]
  char *v27; // [rsp+100h] [rbp+0h]
  int v28; // [rsp+108h] [rbp+8h]
  int v29; // [rsp+10Ch] [rbp+Ch]
  char *v30; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+118h] [rbp+18h]
  int v32; // [rsp+11Ch] [rbp+1Ch]
  int *v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  int v35; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v36; // [rsp+130h] [rbp+30h]
  int v37; // [rsp+138h] [rbp+38h]
  int v38; // [rsp+13Ch] [rbp+3Ch]
  struct _GUID *v39; // [rsp+140h] [rbp+40h]
  int v40; // [rsp+148h] [rbp+48h]
  int v41; // [rsp+14Ch] [rbp+4Ch]

  v16[0] = &CoreMessagingK::SendHost::s_Vtbl;
  memset(&v16[1], 0, 0x30uLL);
  v6 = *(_OWORD *)a1;
  CoreMessagingK::RegistrarClient::s_Reply_Parameter1 = 0LL;
  v7 = *((_OWORD *)a1 + 1);
  v15 = 0LL;
  *(_OWORD *)&v16[1] = v6;
  LODWORD(v16[2]) = 0;
  v16[5] = *((_QWORD *)a1 + 4);
  *(_OWORD *)v17 = *(_OWORD *)&v16[1];
  CoreMessagingK::RegistrarClient::s_Reply_Result = 18;
  v18 = v7;
  v19 = *(_OWORD *)&v16[5];
  v8 = CoreUICallSend((struct IMessageCallSendHost *)v16, 1, (unsigned __int8 *)&byte_1C016199E, (char)v17);
  if ( v8 < 0 )
  {
    v11 = CoreMessagingK::HResultUtil::NtStatusFromHRESULT((CoreMessagingK::HResultUtil *)(unsigned int)v8, v9);
  }
  else
  {
    v11 = 0;
    *(_DWORD *)a2 = CoreMessagingK::RegistrarClient::s_Reply_Result;
    *a3 = *(struct _GUID *)((char *)CoreMessagingK::RegistrarClient::s_Reply_Parameter1 + 24);
  }
  v12 = *(_DWORD *)a2;
  v14 = v11;
  if ( dword_1C0186C30 > 5u )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v24 = (char *)a1 + 4;
    v27 = (char *)a1 + 8;
    v30 = (char *)a1 + 24;
    v33 = (int *)&v14;
    v36 = &v15;
    v21 = a1;
    v22 = 4;
    v25 = 4;
    v28 = 4;
    v31 = 16;
    v34 = 4;
    LODWORD(v15) = v12;
    v37 = 4;
    v39 = a3;
    v40 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1C0186C30, &unk_1C016BD7D, 0LL, v10, 9u, &pData);
  }
  return v11;
}
