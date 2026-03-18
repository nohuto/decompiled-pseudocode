/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C001F034
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001BBD0 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C001BF64 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 *     WPP_RECORDER_SF_sqL @ 0x1C0020584 (WPP_RECORDER_SF_sqL.c)
 */

bool ACPIIsPhase3ListEmptyOfUnblockedItems()
{
  char v0; // si
  char v1; // bp
  __int64 *v2; // rbx
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 *v5; // rcx
  __int64 *v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  const char *v9; // rdx
  const char *v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // rcx
  int v14; // [rsp+38h] [rbp-20h]

  v0 = 0;
  v1 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  if ( AcpiPowerCurrentPagingPathTransitions > 0 )
  {
    v2 = (__int64 *)AcpiPowerPhase3List;
    while ( v2 != &AcpiPowerPhase3List )
    {
      v3 = (__int64)v2;
      v2 = (__int64 *)*v2;
      if ( !*(_DWORD *)(v3 + 48) && (*(_DWORD *)(v3 + 56) & 0x2000000) != 0 )
        ACPIDevicePowerEnumerateAssociatedPowerNodes(
          v3,
          (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIMarkPagingPathPowerNodeEnum,
          v3);
    }
  }
  v4 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    do
    {
      v5 = v4;
      v6 = v4;
      v4 = (__int64 *)*v4;
      v7 = *((_DWORD *)v5 + 16);
      if ( v7 == 1 )
      {
        v8 = v5[2];
        if ( (v8 & 0x1000) == 0
          || (AcpiPowerCurrentPagingPathTransitions <= 0 || (v8 & 0x40000) != 0) && (__int64 *)v6[13] == v6 + 13 )
        {
          _InterlockedAnd64(v5 + 2, 0xFFFFFFFFFFFFFFF7uLL);
          v1 = 1;
        }
        else
        {
          _InterlockedOr64(v5 + 2, 8uLL);
          v0 = 1;
        }
        v9 = "NOT";
        v14 = v6[2];
        v10 = "IS";
        if ( (v14 & 8) == 0 )
          v10 = "NOT";
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_sqL(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v9,
          10,
          47,
          (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
          (__int64)v10,
          (char)v6,
          v14);
      }
      else if ( (unsigned int)(v7 - 3) <= 1 )
      {
        v0 = 1;
      }
      _InterlockedAnd64(v6 + 2, 0xFFFFFFFFFFFBFFFFuLL);
    }
    while ( v4 != &AcpiPowerNodeList );
    if ( !v1 && v0 )
    {
      v11 = (__int64 *)AcpiPowerPhase3List;
      while ( v11 != &AcpiPowerPhase3List )
      {
        v12 = (__int64)v11;
        v11 = (__int64 *)*v11;
        if ( !*(_DWORD *)(v12 + 48) )
          ACPIDevicePowerEnumerateAssociatedPowerNodes(
            v12,
            (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum,
            v12);
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0;
}
