/*
 * XREFs of ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x1C0020218
 * Callers:
 *     DxgkSetPowerComponentResidencyCB @ 0x1C0025D60 (DxgkSetPowerComponentResidencyCB.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0114290 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     McTemplateK0pqx @ 0x1C0020AA4 (McTemplateK0pqx.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentResidencyCB(DXGADAPTER *this, int a2, __int64 a3)
{
  unsigned int v5; // edi

  if ( *((_BYTE *)this + 2785) )
  {
    v5 = (unsigned __int16)a2 + *((unsigned __int16 *)this + HIWORD(a2) + 1180);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0pqx((_DWORD)this, (unsigned int)&Dxgk_SetPowerComponentResidencyCB, a3, (_DWORD)this, v5, a3);
    }
    *(_QWORD *)(520LL * v5 + *((_QWORD *)this + 293) + 376) = a3;
    PoFxSetComponentResidency(*((_QWORD *)this + 294), v5, a3);
  }
}
