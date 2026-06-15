/*
 * XREFs of ?InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z @ 0x180054DDC
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z @ 0x1800FDB98 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18004E558 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 */

__int64 __fastcall CSpatialProperties::InitSpatialTechList(CSpatialProperties *this, struct IMMDevice *a2)
{
  __int64 result; // rax
  HMODULE ModuleHandleW; // rax
  CSpatialAudioTechnologies *v5; // rcx

  result = 0LL;
  if ( !*((_BYTE *)this + 73) )
  {
    ModuleHandleW = GetModuleHandleW(L"AudioSrv.dll");
    result = CSpatialAudioTechnologies::CreateTopologyList(v5, ModuleHandleW);
    if ( (int)result >= 0 )
      *((_BYTE *)this + 73) = 1;
  }
  return result;
}
