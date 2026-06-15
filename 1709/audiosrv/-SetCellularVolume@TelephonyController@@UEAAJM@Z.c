/*
 * XREFs of ?SetCellularVolume@TelephonyController@@UEAAJM@Z @ 0x1800EED90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVolumeOnKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@M@Z @ 0x1800EEDCC (-SetVolumeOnKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@M@Z.c)
 */

__int64 __fastcall TelephonyController::SetCellularVolume(TelephonyController *this, float a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ebx
  int v4; // eax

  v3 = 0;
  v4 = SetVolumeOnKsTopology(
         (const struct _GUID *)this + 13,
         v2,
         *((struct IKsControl **)this + 25),
         (struct KSPROPERTY_STEPPING_LONG *)(((unsigned __int64)this + 208) & -(__int64)(*((_DWORD *)this + 56) != 0)),
         a2);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v3;
}
