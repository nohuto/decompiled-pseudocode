/*
 * XREFs of ?ndisMpHookSetDriverContext@@YAXPEAUNDIS_MINIPORT_DRIVER_HANDLE__@@PEAUNDIS_MINIPORT_HOOK_DRIVER_HANDLE__@@@Z @ 0x1C00A7540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisMpHookSetDriverContext(
        struct NDIS_MINIPORT_DRIVER_HANDLE__ *a1,
        struct NDIS_MINIPORT_HOOK_DRIVER_HANDLE__ *a2)
{
  *((_QWORD *)a1 + 112) = a2;
}
