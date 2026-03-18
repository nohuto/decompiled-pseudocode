/*
 * XREFs of NtCreateCompositionSurfaceHandle @ 0x1C000AD30
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVIDxgkCompositionObject@@@Z3PEAPEAX@Z @ 0x1C000DDD0 (-Create@DxgkCompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4DxgkCompositionObjectType@@KP6AJP.c)
 */

__int64 __fastcall NtCreateCompositionSurfaceHandle(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx

  KeEnterCriticalRegion();
  LOBYTE(v6) = 1;
  v7 = DxgkCompositionObject::Create(v6, a1, a2);
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = -1LL;
  }
  else
  {
    v7 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return v7;
}
