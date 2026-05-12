/*
 * XREFs of StorPortAdapterPowerNotRequiredStep1 @ 0x1C001E820
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C001E878 (StorPortAdapterPowerNotRequiredStep2.c)
 *     McTemplateK0pqtq @ 0x1C0036AC8 (McTemplateK0pqtq.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C00378E0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep1(_QWORD **Context, int a2, int a3)
{
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    McTemplateK0pqtq((_DWORD)Context, a2, a3, *Context[636], *((_DWORD *)Context + 14));
  *((_DWORD *)Context[636] + 5) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport(Context, 0LL);
  return StorPortAdapterPowerNotRequiredStep2(Context);
}
