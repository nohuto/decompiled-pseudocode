/*
 * XREFs of ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C0166A24
 * Callers:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0166760 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     ?TraceClientDisconnect@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@PEBUClientPortInfo@2@@Z @ 0x1C0166D70 (-TraceClientDisconnect@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@PEBUClientPortInfo@2@@Z.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C01676F0 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 */

void __fastcall CoreMessagingK::ServerPorts::HandleClientDisconnect(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct CoreMessagingK::ClientPortInfo *a2)
{
  struct CoreMessagingK::ClientPortInfo *v4; // rax
  struct CoreMessagingK::ClientPortInfo *v5; // rdx
  __int64 v6; // rax

  CoreMessagingK::Log::TraceClientDisconnect(a1, a2);
  v4 = (struct CoreMessagingK::ClientPortInfo *)*((_QWORD *)a1 + 5);
  v5 = 0LL;
  while ( v4 )
  {
    if ( v4 == a2 )
    {
      v6 = *((_QWORD *)a2 + 3);
      if ( v5 )
        *((_QWORD *)v5 + 3) = v6;
      else
        *((_QWORD *)a1 + 5) = v6;
      *((_QWORD *)a2 + 3) = 0LL;
      break;
    }
    v5 = v4;
    v4 = (struct CoreMessagingK::ClientPortInfo *)*((_QWORD *)v4 + 3);
  }
  ZwClose(*(HANDLE *)a2);
  *(_QWORD *)a2 = 0LL;
  CoreMessagingK::ClientPortInfo::Release(a2);
}
