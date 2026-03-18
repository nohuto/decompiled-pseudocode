/*
 * XREFs of ACPIIsPowerRequestBlocked @ 0x1C0028654
 * Callers:
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C0003500 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerProcessBlockedItems @ 0x1C00285BC (ACPIDevicePowerProcessBlockedItems.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C004A090 (ACPIMovePowerListUnblockedItems.c)
 * Callees:
 *     WPP_RECORDER_SF_qsLLdqss @ 0x1C001DE80 (WPP_RECORDER_SF_qsLLdqss.c)
 */

char __fastcall ACPIIsPowerRequestBlocked(__int64 a1)
{
  __int64 v1; // r8
  char v3; // bl
  __int64 v4; // r10
  void *v5; // rcx
  __int64 v6; // rax
  void *v7; // r11
  __int64 v8; // rdx
  const char *v9; // rdx
  int v11; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+48h] [rbp-30h]

  v1 = *(unsigned int *)(a1 + 56);
  if ( (v1 & 0x10000000) != 0
    || (v3 = 0, (v1 & 0x1000000) != 0)
    && ((v1 & 0x4000000) != 0
     || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 952LL) & 0x40) != 0
     && (*(_QWORD *)(a1 + 64) != a1 + 64 || (v1 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
  {
    v3 = 1;
  }
  v4 = *(_QWORD *)(a1 + 40);
  v5 = &unk_1C0067B08;
  LOBYTE(v6) = 0;
  v7 = &unk_1C0067B08;
  if ( v4 )
  {
    v8 = *(_QWORD *)(v4 + 8);
    v6 = *(_QWORD *)(a1 + 40);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = *(void **)(v4 + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = *(void **)(v4 + 568);
    }
  }
  v9 = "IS";
  if ( !v3 )
    v9 = "NOT";
  WPP_RECORDER_SF_qsLLdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v9,
    v1,
    a1,
    v11,
    a1,
    v9,
    v1,
    *(_DWORD *)(v4 + 952),
    v12,
    v6,
    (__int64)v5,
    (__int64)v7);
  return v3;
}
