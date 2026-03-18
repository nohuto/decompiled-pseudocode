/*
 * XREFs of ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C006A5D0
 * Callers:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C006B91C (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C006CEF8 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C006CF2C (-Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall CoreMessagingK::ServerPorts::HandleConnectionRequest(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct _PORT_MESSAGE *a2)
{
  int DoNotUseThisField_low; // r15d
  __int64 v3; // rbx
  int v4; // r12d
  bool v5; // di
  int v8; // eax
  __int64 v9; // rdx
  int v10; // r14d
  const WCHAR *v11; // rdx
  LPCGUID v12; // r9
  bool v13; // [rsp+40h] [rbp-C0h]
  bool v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+58h] [rbp-A8h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  int v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  __int128 v22; // [rsp+90h] [rbp-70h]
  _QWORD v23[10]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  char *v25; // [rsp+110h] [rbp+10h]
  int v26; // [rsp+118h] [rbp+18h]
  int v27; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  bool *v29; // [rsp+130h] [rbp+30h]
  int v30; // [rsp+138h] [rbp+38h]
  int v31; // [rsp+13Ch] [rbp+3Ch]
  int *v32; // [rsp+140h] [rbp+40h]
  int v33; // [rsp+148h] [rbp+48h]
  int v34; // [rsp+14Ch] [rbp+4Ch]
  int *v35; // [rsp+150h] [rbp+50h]
  int v36; // [rsp+158h] [rbp+58h]
  int v37; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v38; // [rsp+160h] [rbp+60h]
  int v39; // [rsp+168h] [rbp+68h]
  int v40; // [rsp+16Ch] [rbp+6Ch]

  DoNotUseThisField_low = LODWORD(a2->DoNotUseThisField);
  v3 = 0LL;
  v4 = *((_DWORD *)&a2->DoNotUseThisField + 2);
  v5 = 0;
  if ( a2->u1.s1.DataLength == 8 )
  {
    v8 = CoreMessagingK::Runtime::Alloc(32LL, 1229147459LL, &v17);
    if ( v8 >= 0 )
    {
      v3 = v17;
      *(_DWORD *)(v17 + 16) = 1;
    }
    v5 = v8 == 0;
  }
  v19 = 0LL;
  v20 = 0LL;
  v18 = 48;
  v21 = 512;
  v22 = 0LL;
  memset(v23, 0, 0x48uLL);
  v9 = *((_QWORD *)a1 + 1);
  v13 = v5;
  LODWORD(v23[0]) = 0x100000;
  v23[2] = 0xFFFFLL;
  v10 = ZwAlpcAcceptConnectPort(v3 & -(__int64)v5, v9, 0LL, &v18, v23, v3 & -(__int64)v5, a2, 0LL, v13);
  if ( v10 >= 0 && v5 )
  {
    *(_DWORD *)(v3 + 8) = DoNotUseThisField_low;
    *(_DWORD *)(v3 + 12) = v4;
    *(_QWORD *)(v3 + 24) = *((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 5) = v3;
    v3 = 0LL;
  }
  if ( v3 )
    CoreMessagingK::ClientPortInfo::Release((CoreMessagingK::ClientPortInfo *)v3);
  LODWORD(v17) = v4;
  v16 = DoNotUseThisField_low;
  v15 = v10;
  v14 = v5;
  if ( dword_1C0186C30 > 5u )
  {
    v11 = (const WCHAR *)*((_QWORD *)a1 + 4);
    v27 = 0;
    v25 = (char *)a1 + 16;
    v26 = 16;
    TlgCreateWsz(&pDesc, v11);
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v32 = &v15;
    v35 = &v16;
    v29 = &v14;
    v38 = &v17;
    v30 = 1;
    v33 = 4;
    v36 = 4;
    v39 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0186C30, &unk_1C016BF2D, 0LL, v12, 8u, &pData);
  }
}
