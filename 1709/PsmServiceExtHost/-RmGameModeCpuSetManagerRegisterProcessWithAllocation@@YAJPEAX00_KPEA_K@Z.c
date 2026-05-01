/*
 * XREFs of ?RmGameModeCpuSetManagerRegisterProcessWithAllocation@@YAJPEAX00_KPEA_K@Z @ 0x1800308C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RmGameModeCpuSetManagerRegisterProcessWithAllocation(
        void *a1,
        struct _RM_CPU_SET_CLIENT_CONTEXT *a2,
        void *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  return RmSrvCpuSetManagerRegisterProcessWithAllocation(a2, a3, a4, a5);
}
