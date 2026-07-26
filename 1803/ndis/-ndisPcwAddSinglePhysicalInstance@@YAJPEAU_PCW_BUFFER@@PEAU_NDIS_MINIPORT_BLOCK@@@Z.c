/*
 * XREFs of ?ndisPcwAddSinglePhysicalInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F15D0
 * Callers:
 *     ?ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C006B80C (-ndisPcwCollectPhysicalData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisPcwAddSinglePhysicalInstance(struct _PCW_BUFFER *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  int v2; // r8d
  ULONG v3; // r8d
  _UNICODE_STRING *pModifiedInstanceName; // rax
  struct _PCW_DATA Data; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2->IfIndex ^ (a2->NetLuid.Value >> 24);
  Data.Data = a2->PhysicalPerformanceCounters;
  v3 = (a2->NetLuid.Value >> 24) ^ v2 & 0xFFFFFF;
  Data.Size = 32;
  pModifiedInstanceName = a2->pModifiedInstanceName;
  if ( !pModifiedInstanceName )
    pModifiedInstanceName = a2->pAdapterInstanceName;
  return PcwAddInstance(a1, pModifiedInstanceName, v3, 1u, &Data);
}
