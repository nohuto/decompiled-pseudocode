/*
 * XREFs of ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C0166EFC
 * Callers:
 *     ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C0167550 (-OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z.c)
 * Callees:
 *     ?UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C0166144 (-UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C01661F0 (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C01676F0 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 */

void __fastcall CoreMessagingK::ServerPorts::UninitializeServerPort(struct CoreMessagingK::ServerPortInfo *a1)
{
  struct CoreMessagingK::ServerPortInfo *v1; // rax
  struct CoreMessagingK::ServerPortInfo *v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbx
  void *v6; // rcx

  v1 = CoreMessagingK::ServerPorts::s_PortInfos;
  v3 = 0LL;
  while ( v1 )
  {
    if ( v1 == a1 )
    {
      if ( v3 )
        *((_QWORD *)v3 + 6) = *((_QWORD *)a1 + 6);
      else
        CoreMessagingK::ServerPorts::s_PortInfos = (struct CoreMessagingK::ServerPortInfo *)*((_QWORD *)a1 + 6);
      break;
    }
    v3 = v1;
    v1 = (struct CoreMessagingK::ServerPortInfo *)*((_QWORD *)v1 + 6);
  }
  v4 = *((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 24);
      ZwClose(*(HANDLE *)v4);
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)(v4 + 24) = 0LL;
      CoreMessagingK::ClientPortInfo::Release((CoreMessagingK::ClientPortInfo *)v4);
      v4 = v5;
    }
    while ( v5 );
  }
  if ( *((_QWORD *)a1 + 1) )
  {
    CoreMessagingK::RegistrarClient::UnregisterObject(*((LPCWSTR *)a1 + 4));
    CoreMessagingK::RegistrarClient::UnregisterAlpcPort((const struct _GUID *)a1 + 1);
    ZwClose(*((HANDLE *)a1 + 1));
    *((_QWORD *)a1 + 1) = 0LL;
  }
  v6 = (void *)*((_QWORD *)a1 + 4);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x4E534D43u);
    *((_QWORD *)a1 + 4) = 0LL;
  }
}
