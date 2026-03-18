/*
 * XREFs of KeConfigureHeteroProcessors @ 0x140741178
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x14063F9AC (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140175FAC (KiConfigureCpuSetSchedulingInformation.c)
 */

__int64 __fastcall KeConfigureHeteroProcessors(__int64 a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // ebp
  int v6; // esi
  int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // ebx
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+2Ch] [rbp-1Ch]
  int v14; // [rsp+30h] [rbp-18h]

  v5 = KiDefaultHeteroCpuPolicy;
  v6 = KeHeteroSystem;
  v11 = a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  KeGenericCallDpc((__int64)KiConfigureHeteroProcessorsTarget, (__int64)&v11);
  v7 = KeHeteroSystem;
  *a5 = KeHeteroSystem;
  v8 = 0;
  v9 = 0;
  for ( KiDefaultHeteroCpuPolicy = v7 != 0 ? KiDesiredHeteroCpuPolicy : 0; v9 < (unsigned int)KeNumberProcessors_0; ++v9 )
    KiConfigureCpuSetSchedulingInformation(KiProcessorBlock[v9]);
  if ( v5 != KiDefaultHeteroCpuPolicy || v6 != KeHeteroSystem )
    return 1;
  return v8;
}
