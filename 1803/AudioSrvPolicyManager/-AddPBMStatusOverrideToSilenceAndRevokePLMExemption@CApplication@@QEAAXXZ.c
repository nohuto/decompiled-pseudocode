/*
 * XREFs of ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x180012430
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001CF54 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001DA1C (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001E348 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x180028FC0 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(CApplication *this)
{
  if ( *((_DWORD *)this + 131) != 1 )
  {
    *((_DWORD *)this + 133) = 0;
    *((_DWORD *)this + 135) = 0;
    *((_DWORD *)this + 131) = 1;
    *((_DWORD *)this + 132) = 1;
    *((_DWORD *)this + 134) = 1;
    *((_DWORD *)this + 136) = 1;
    *((_DWORD *)this + 137) = 1;
  }
}
