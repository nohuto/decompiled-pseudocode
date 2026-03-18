/*
 * XREFs of ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0020170
 * Callers:
 *     ?NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z @ 0x1C00029A4 (-NotifyContextCreation@DXGADAPTER@@QEAAXPEAVDXGCONTEXT@@EI@Z.c)
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C001E4EC (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x1C001E93C (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C001EC80 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1C00202B8 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkSetPowerComponentLatencyCB @ 0x1C0025CF0 (DxgkSetPowerComponentLatencyCB.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0114290 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     McTemplateK0pqx @ 0x1C0020AA4 (McTemplateK0pqx.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentLatencyCB(DXGADAPTER *this, int a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rcx

  if ( *((_BYTE *)this + 2785) )
  {
    v5 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1180);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0pqx((_DWORD)this, (unsigned int)&Dxgk_SetPowerComponentLatencyCB, a3, (_DWORD)this, v5, a3);
    v6 = *((_QWORD *)this + 293) + 520LL * v5;
    if ( a3 != *(_QWORD *)(v6 + 368) )
    {
      *(_QWORD *)(v6 + 368) = a3;
      PoFxSetComponentLatency(*((_QWORD *)this + 294), v5, a3);
    }
  }
}
