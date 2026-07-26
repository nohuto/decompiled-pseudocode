/*
 * XREFs of ndisGetSetBusConfigSpace @ 0x1C0062AF4
 * Callers:
 *     NdisReadPciSlotInformation @ 0x1C0062830 (NdisReadPciSlotInformation.c)
 *     NdisReadPcmciaAttributeMemory @ 0x1C00628C0 (NdisReadPcmciaAttributeMemory.c)
 *     NdisWritePciSlotInformation @ 0x1C0062960 (NdisWritePciSlotInformation.c)
 *     NdisWritePcmciaAttributeMemory @ 0x1C00629F0 (NdisWritePcmciaAttributeMemory.c)
 *     NdisImmediateReadPciSlotInformation @ 0x1C010FB40 (NdisImmediateReadPciSlotInformation.c)
 *     NdisImmediateWritePciSlotInformation @ 0x1C010FBD0 (NdisImmediateWritePciSlotInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisGetSetBusConfigSpace(__int64 a1, unsigned int a2, __int64 a3, int a4, unsigned int a5, char a6)
{
  unsigned int v10; // edi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, _QWORD, int); // rax
  __int64 v13; // rcx

  v10 = 0;
  if ( (unsigned __int8)byte_1C009960E >= 4u )
    WPP_SF_q(0x18u, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, a1);
  if ( a6 && (*(_DWORD *)(a1 + 3704) & 0x40) != 0 || (*(_DWORD *)(a1 + 3704) & 0x80u) != 0 )
    return 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 3712);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 3728);
    if ( v13 )
    {
      if ( a6 )
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 3720);
      v10 = v12(v13, a5, a3, a2, a4);
    }
  }
  if ( (unsigned __int8)byte_1C009960E >= 4u )
    WPP_SF_q(0x19u, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, a1);
  return v10;
}
