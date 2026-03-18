/*
 * XREFs of KeConfigureHeteroProcessors @ 0x140418848
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400229D0 (KeGenericCallDpc.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140410C0C (KiConfigureCpuSetSchedulingInformation.c)
 */

__int64 __fastcall KeConfigureHeteroProcessors(__int64 a1, int a2, char a3, int a4, _DWORD *a5)
{
  int v5; // esi
  unsigned int v6; // ebx
  int v7; // ebp
  int v8; // eax
  unsigned int v9; // edi
  char v10; // dl
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+2Ch] [rbp-1Ch]
  char v15; // [rsp+30h] [rbp-18h]

  v5 = KiDefaultHeteroCpuPolicy;
  v6 = 0;
  v7 = (unsigned __int8)KeHeteroSystem;
  if ( (unsigned int)KiDesiredHeteroCpuPolicy >= 9 )
    KiDesiredHeteroCpuPolicy = 0;
  if ( (unsigned int)KiDefaultDynamicHeteroCpuPolicy >= 5 )
    KiDefaultDynamicHeteroCpuPolicy = 0;
  if ( (unsigned int)KiDynamicHeteroCpuPolicyImportant >= 5 )
    KiDynamicHeteroCpuPolicyImportant = 0;
  if ( (unsigned int)KiDynamicHeteroCpuPolicyImportantShort >= 5 )
    KiDynamicHeteroCpuPolicyImportantShort = 0;
  if ( (unsigned int)KiDynamicHeteroCpuPolicyMask > 7 )
    KiDynamicHeteroCpuPolicyMask = 0;
  v8 = *(_DWORD *)(KiProcessorBlock[0] + 68) * KiDynamicHeteroCpuPolicyExpectedRuntime;
  v13 = a2;
  v12 = a1;
  v15 = a3;
  v14 = a4;
  KiDynamicHeteroCpuPolicyExpectedCycles = v8;
  KeGenericCallDpc((__int64)KiConfigureHeteroProcessorsTarget, (__int64)&v12);
  v9 = 0;
  v10 = KeHeteroSystem;
  *a5 = (unsigned __int8)KeHeteroSystem;
  for ( KiDefaultHeteroCpuPolicy = v10 != 0 ? KiDesiredHeteroCpuPolicy : 0; v9 < (unsigned int)KeNumberProcessors_0; ++v9 )
    KiConfigureCpuSetSchedulingInformation(KiProcessorBlock[v9]);
  if ( v5 != KiDefaultHeteroCpuPolicy || (v7 != 0) != (KeHeteroSystem != 0) )
    return 1;
  return v6;
}
