/*
 * XREFs of ?NdisPDPIPostAndDrainBufferList@@YAXPEAU_NDIS_PD_QUEUE@@PEAPEAU_PD_BUFFER@@PEAPEAPEAU2@K@Z @ 0x1C0074450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisPDPIPostAndDrainBufferList(
        struct _NDIS_PD_QUEUE *a1,
        struct _PD_BUFFER **a2,
        struct _PD_BUFFER ***a3)
{
  (*(void (__fastcall **)(struct _NDIS_PD_QUEUE *, struct _PD_BUFFER **, struct _PD_BUFFER ***))(*((_QWORD *)a1 + 2)
                                                                                               + 8LL))(
    a1,
    a2,
    a3);
}
