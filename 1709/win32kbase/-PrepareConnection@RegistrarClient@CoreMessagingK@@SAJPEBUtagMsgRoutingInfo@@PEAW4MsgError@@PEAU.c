/*
 * XREFs of ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C0088274
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0087EF0 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     CoreUICallSend @ 0x1C008726C (CoreUICallSend.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C0155E30 (-NtStatusFromHRESULT@HResultUtil@CoreMessagingK@@YAJJ@Z.c)
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
  __int64 v20; // [rsp+C0h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  const struct tagMsgRoutingInfo *v22; // [rsp+F0h] [rbp-10h]
  int v23; // [rsp+F8h] [rbp-8h]
  int v24; // [rsp+FCh] [rbp-4h]
  char *v25; // [rsp+100h] [rbp+0h]
  int v26; // [rsp+108h] [rbp+8h]
  int v27; // [rsp+10Ch] [rbp+Ch]
  char *v28; // [rsp+110h] [rbp+10h]
  int v29; // [rsp+118h] [rbp+18h]
  int v30; // [rsp+11Ch] [rbp+1Ch]
  char *v31; // [rsp+120h] [rbp+20h]
  int v32; // [rsp+128h] [rbp+28h]
  int v33; // [rsp+12Ch] [rbp+2Ch]
  int *v34; // [rsp+130h] [rbp+30h]
  int v35; // [rsp+138h] [rbp+38h]
  int v36; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v37; // [rsp+140h] [rbp+40h]
  int v38; // [rsp+148h] [rbp+48h]
  int v39; // [rsp+14Ch] [rbp+4Ch]
  struct _GUID *v40; // [rsp+150h] [rbp+50h]
  int v41; // [rsp+158h] [rbp+58h]
  int v42; // [rsp+15Ch] [rbp+5Ch]

  v16[0] = &CoreMessagingK::SendHost::s_Vtbl;
  memset(&v16[1], 0, 0x38uLL);
  v6 = *(_OWORD *)a1;
  CoreMessagingK::RegistrarClient::s_Reply_Parameter1 = 0LL;
  v7 = *((_OWORD *)a1 + 1);
  v15 = 0LL;
  *(_OWORD *)&v16[1] = (unsigned __int64)v6;
  v16[5] = *((_QWORD *)a1 + 4);
  v18 = v7;
  *(_OWORD *)v17 = (unsigned __int64)v6;
  CoreMessagingK::RegistrarClient::s_Reply_Result = 18;
  v20 = v16[7];
  v19 = *(_OWORD *)&v16[5];
  v8 = CoreUICallSend(
         (struct IMessageCallSendHost *)v16,
         (__int64)&v15,
         1u,
         1u,
         1u,
         (unsigned __int8 *)&byte_1C0161F50,
         v17);
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
  if ( dword_1C0188C40 > 5u )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v25 = (char *)a1 + 4;
    v28 = (char *)a1 + 8;
    v31 = (char *)a1 + 24;
    v34 = (int *)&v14;
    v37 = &v15;
    v22 = a1;
    v23 = 4;
    v26 = 4;
    v29 = 8;
    v32 = 16;
    v35 = 4;
    LODWORD(v15) = v12;
    v38 = 4;
    v40 = a3;
    v41 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188C40, &unk_1C016C18D, 0LL, v10, 9u, &pData);
  }
  return v11;
}
