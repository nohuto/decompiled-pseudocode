/*
 * XREFs of ?__abi_QueryInterface@DispatchedHandler@Core@UI@Windows@@UE$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x180200D10
 * Callers:
 *     ?__abi_QueryInterface@DispatchedHandler@Core@UI@Windows@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1800A9D00 (-__abi_QueryInterface@DispatchedHandler@Core@UI@Windows@@W7E$AAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     ?__abi_QueryInterface@DispatchedHandler@Core@UI@Windows@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1800A9D10 (-__abi_QueryInterface@DispatchedHandler@Core@UI@Windows@@WBA@E$AAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x18013E9F4 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?Increment@__abi_FTMWeakRefData@@QECAKXZ @ 0x1801FB048 (-Increment@__abi_FTMWeakRefData@@QECAKXZ.c)
 *     ?__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801FB634 (-__abi_QueryInterface@__abi_FTMWeakRefData@@QEAAJAEAVGuid@Platform@@PEAPEAX@Z.c)
 */

__int64 __fastcall Windows::UI::Core::DispatchedHandler::__abi_QueryInterface(__int64 a1, Platform::Guid *a2)
{
  Platform::Guid *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r9
  Platform::Guid *v5; // rcx
  Platform::Guid *v6; // r10
  __int64 v7; // r8
  void *v8; // r9
  struct Platform::Guid *v9; // r10
  void **v10; // r11
  __int64 v11; // rcx

  if ( Platform::Guid::Equals(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || Platform::Guid::Equals(v2, &_uuidof__AVDispatchedHandler_Core_UI_Windows__)
    || *(_QWORD *)(v4 + 32) && v4 != -24 && Platform::Guid::Equals(v5, &_uuidof__AUIAgileObject_Details_Platform__) )
  {
    *v3 = v4;
    v11 = v4 + 24;
    goto LABEL_12;
  }
  if ( Platform::Guid::Equals(v6, &_uuidof__AVDispatchedHandler_Core_UI_Windows__) )
  {
    *v10 = v8;
    v11 = v7;
LABEL_12:
    __abi_FTMWeakRefData::Increment(v11);
    return 0LL;
  }
  if ( !*(_QWORD *)(v7 + 8)
    || (unsigned int)__abi_FTMWeakRefData::__abi_QueryInterface(
                       (__abi_FTMWeakRefData *)(v7 & -(__int64)(*(_QWORD *)(v7 + 8) != 0LL)),
                       v9,
                       v10) )
  {
    return 2147500034LL;
  }
  return 0LL;
}
