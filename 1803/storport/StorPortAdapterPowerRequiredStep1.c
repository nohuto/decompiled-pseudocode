/*
 * XREFs of StorPortAdapterPowerRequiredStep1 @ 0x1C00369E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C0014F3C (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtx @ 0x1C00342A0 (McTemplateK0pqtx.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0034E68 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterPowerRequiredStep2 @ 0x1C0036AD0 (StorPortAdapterPowerRequiredStep2.c)
 */

__int64 __fastcall StorPortAdapterPowerRequiredStep1(unsigned __int64 Context, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  int v5; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5368) )
  {
    a2 = *(unsigned int *)(*(_QWORD *)(Context + 5088) + 20LL);
    if ( (a2 & 8) != 0 || *(char *)(Context + 108) < 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5368);
      a2 = Context / 0x2710;
      v3[672] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v3 + 1358);
      if ( !v3[670] )
        v3[670] = v3[667];
    }
    v3[671] = 0LL;
  }
  ++*((_DWORD *)v3 + 1356);
  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
  {
    v5 = *((_DWORD *)v3 + 14);
    McTemplateK0pqtx(Context, a2, a3, *(_QWORD *)v3[636], v5);
  }
  *(_DWORD *)(v3[636] + 20LL) |= 2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)v3, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)v3);
  return StorPortAdapterPowerRequiredStep2(v3);
}
