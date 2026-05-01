/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800A8510
 * Callers:
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009FF90 (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_18009FF90.c)
 *     ??1?$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180107BA8 (--1-$ActivityData@VHolographicPositionerProvider@@U_TlgReflectorTag_Param0IsProvide_ea_180107BA8.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall _TlgWriteActivityAutoStop<0,4>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  TLG_STATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 4u )
    return TlgWrite(a1, &unk_18025A4B2, a2, 0LL, 2u, &pData);
  return result;
}
