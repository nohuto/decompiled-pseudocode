/*
 * XREFs of ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14003D550
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x1400087E0 (-AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x1400334AC (-InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall ATL::CComAggObject<CSystemAudioDeviceOffload>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  const struct _GUID *v5; // rdx
  char **v6; // r8
  char *v7; // r9

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  if ( ATL::InlineIsEqualUnknown(a2) )
  {
    *v6 = v7;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    return (unsigned int)ATL::AtlInternalQueryInterface(
                           v7 + 24,
                           (const struct ATL::_ATL_INTMAP_ENTRY *)&`CSystemAudioDeviceOffload::_GetEntries'::`2'::_entries,
                           v5,
                           v6);
  }
  return v3;
}
