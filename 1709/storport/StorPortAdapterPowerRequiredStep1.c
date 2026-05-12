/*
 * XREFs of StorPortAdapterPowerRequiredStep1 @ 0x1C001EA80
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterPowerRequiredStep2 @ 0x1C001EB0C (StorPortAdapterPowerRequiredStep2.c)
 *     McTemplateK0pqtx @ 0x1C0036B64 (McTemplateK0pqtx.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C00378E0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

__int64 __fastcall StorPortAdapterPowerRequiredStep1(unsigned __int64 Context, unsigned __int64 a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx

  v3 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5368) )
  {
    LODWORD(a2) = *(_DWORD *)(*(_QWORD *)(Context + 5088) + 20LL);
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
    McTemplateK0pqtx(Context, a2, a3, *(_QWORD *)v3[636], *((_DWORD *)v3 + 14));
  *(_DWORD *)(v3[636] + 20LL) |= 2u;
  if ( (unsigned int)RaidIsAdapterControlSupported((__int64)v3, 7) )
  {
    LOBYTE(v4) = 1;
    RaidAdapterSendPoFxPowerRequiredToMiniport(v3, v4);
  }
  return StorPortAdapterPowerRequiredStep2(v3);
}
