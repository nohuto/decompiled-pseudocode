/*
 * XREFs of ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C0067A6C
 * Callers:
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C000411C (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     NdisSetJobObjectCompartmentId @ 0x1C00EE63C (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00418D4 (ndisIfDereferenceCompartmentForUser.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0041AAC (ndisIfReferenceCompartmentForUser.c)
 */

void __fastcall ndisCmAssignCompartmentHandleToCmState(
        struct _NDIS_CM_STATE *a1,
        struct _NDIS_IF_COMPARTMENT_BLOCK *a2)
{
  unsigned int *v4; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int *)*((_QWORD *)a1 + 1);
  if ( a2 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)v4 )
  {
    if ( v4 )
      ndisIfDereferenceCompartmentForUser(v4);
    *((_QWORD *)a1 + 1) = a2;
    if ( a2 )
    {
      v5 = a2;
      ndisIfReferenceCompartmentForUser(0LL, 0, &v5);
    }
  }
}
