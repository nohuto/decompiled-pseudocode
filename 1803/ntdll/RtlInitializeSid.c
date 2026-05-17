/*
 * XREFs of RtlInitializeSid @ 0x180044340
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002EB0 (RtlDefaultNpAcl.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800380F0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlGetAppContainerParent @ 0x180043B90 (RtlGetAppContainerParent.c)
 *     RtlCapabilityCheck @ 0x180043D40 (RtlCapabilityCheck.c)
 *     sub_180043FA0 @ 0x180043FA0 (sub_180043FA0.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     RtlInitializeSidEx @ 0x1800442E0 (RtlInitializeSidEx.c)
 *     RtlCreateServiceSid @ 0x1800445F0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180049350 (RtlCreateVirtualAccountSid.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 *     sub_1800D7A54 @ 0x1800D7A54 (sub_1800D7A54.c)
 *     sub_1800E03C0 @ 0x1800E03C0 (sub_1800E03C0.c)
 *     sub_1800E0A40 @ 0x1800E0A40 (sub_1800E0A40.c)
 *     sub_1800E1BF4 @ 0x1800E1BF4 (sub_1800E1BF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSid(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  if ( a3 > 0xFu )
    return 3221225485LL;
  *(_BYTE *)(a1 + 1) = a3;
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 2) = *(_DWORD *)a2;
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 4);
  return 0LL;
}
