/*
 * XREFs of StorPortAdapterPowerNotRequiredStep1 @ 0x1C0036840
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0014F3C (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtq @ 0x1C0034204 (McTemplateK0pqtq.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0034E68 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1C00368B8 (StorPortAdapterPowerNotRequiredStep2.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep1(_DWORD *Context, __int64 a2, __int64 a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
  {
    v5 = Context[14];
    McTemplateK0pqtq((__int64)Context, a2, a3, **((_QWORD **)Context + 636), v5);
  }
  *(_DWORD *)(*((_QWORD *)Context + 636) + 20LL) &= ~2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)Context);
  return StorPortAdapterPowerNotRequiredStep2(Context);
}
