/*
 * XREFs of ?InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z @ 0x18004054C
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x1800C7264 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18003BCD0 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 */

__int64 __fastcall CSpatialProperties::InitSpatialTechList(CSpatialProperties *this, struct IMMDevice *a2)
{
  __int64 result; // rax
  HMODULE ModuleHandleW; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rcx

  result = 0LL;
  if ( !*((_BYTE *)this + 49) )
  {
    ModuleHandleW = GetModuleHandleW(L"AudioSrv.dll");
    result = CSpatialAudioTechnologies::CreateTopologyList(v5, ModuleHandleW);
    if ( (int)result >= 0 )
      *((_BYTE *)this + 49) = 1;
  }
  return result;
}
