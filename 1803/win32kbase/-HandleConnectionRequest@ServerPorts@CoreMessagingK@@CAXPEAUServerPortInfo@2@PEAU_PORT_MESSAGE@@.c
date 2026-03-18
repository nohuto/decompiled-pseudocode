/*
 * XREFs of ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C0166A94
 * Callers:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0166760 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C0166328 (-Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     ?TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z @ 0x1C0166E28 (-TraceConnectionRequest@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@EJII@Z.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C01676F0 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 */

void __fastcall CoreMessagingK::ServerPorts::HandleConnectionRequest(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct _PORT_MESSAGE *a2)
{
  unsigned int DoNotUseThisField_low; // r15d
  unsigned __int8 v3; // di
  int v4; // r12d
  unsigned __int64 v5; // rbx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // r14d
  unsigned __int8 v11; // [rsp+40h] [rbp-79h]
  _DWORD *v12; // [rsp+50h] [rbp-69h] BYREF
  int v13; // [rsp+58h] [rbp-61h] BYREF
  __int64 v14; // [rsp+60h] [rbp-59h]
  __int64 v15; // [rsp+68h] [rbp-51h]
  int v16; // [rsp+70h] [rbp-49h]
  __int128 v17; // [rsp+78h] [rbp-41h]
  _QWORD v18[10]; // [rsp+90h] [rbp-29h] BYREF

  DoNotUseThisField_low = LODWORD(a2->DoNotUseThisField);
  v3 = 0;
  v4 = *((_DWORD *)&a2->DoNotUseThisField + 2);
  v5 = 0LL;
  if ( a2->u1.s1.DataLength == 8 )
  {
    v8 = CoreMessagingK::Runtime::Alloc(0x20uLL, 1229147459LL, (void **)&v12);
    if ( v8 >= 0 )
    {
      v5 = (unsigned __int64)v12;
      v12[4] = 1;
    }
    v3 = v8 == 0;
  }
  v14 = 0LL;
  v15 = 0LL;
  v13 = 48;
  v16 = 512;
  v17 = 0LL;
  memset(v18, 0, 0x48uLL);
  v9 = *((_QWORD *)a1 + 1);
  v11 = v3;
  LODWORD(v18[0]) = 0x100000;
  v18[2] = 0xFFFFLL;
  v10 = ZwAlpcAcceptConnectPort(v5 & -(__int64)(v3 != 0), v9, 0LL, &v13, v18, v5 & -(__int64)(v3 != 0), a2, 0LL, v11);
  if ( v10 >= 0 && v3 )
  {
    *(_DWORD *)(v5 + 8) = DoNotUseThisField_low;
    *(_DWORD *)(v5 + 12) = v4;
    *(_QWORD *)(v5 + 24) = *((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 5) = v5;
    v5 = 0LL;
  }
  if ( v5 )
    CoreMessagingK::ClientPortInfo::Release((CoreMessagingK::ClientPortInfo *)v5);
  CoreMessagingK::Log::TraceConnectionRequest(a1, v3, v10, DoNotUseThisField_low, v4);
}
