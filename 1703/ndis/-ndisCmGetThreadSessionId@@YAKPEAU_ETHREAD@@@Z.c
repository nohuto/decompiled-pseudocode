/*
 * XREFs of ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C000CF38
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00075D0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00084A0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     NdisGetSessionCompartmentId @ 0x1C000CE40 (NdisGetSessionCompartmentId.c)
 *     ndisGetNsiClientInfo @ 0x1C000CE98 (ndisGetNsiClientInfo.c)
 *     NdisGetThreadObjectCompartmentScope @ 0x1C000F800 (NdisGetThreadObjectCompartmentScope.c)
 *     NdisGetThreadObjectCompartmentId @ 0x1C000F8F0 (NdisGetThreadObjectCompartmentId.c)
 *     ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C000FEB8 (-ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00675E0 (NdisSetSessionCompartmentId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCmGetThreadSessionId(struct _ETHREAD *a1)
{
  PACCESS_TOKEN v2; // rax
  void *v3; // rsi
  NTSTATUS v5; // ebx
  PVOID TokenInformation; // [rsp+20h] [rbp-28h] BYREF
  BOOLEAN EffectiveOnly; // [rsp+58h] [rbp+10h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+60h] [rbp+18h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+68h] [rbp+20h] BYREF

  if ( KeGetCurrentIrql() >= 2u )
    return PsGetCurrentProcessSessionId(a1);
  v2 = PsReferenceImpersonationToken(a1, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
  v3 = v2;
  if ( v2
    && (v5 = SeQueryInformationToken(v2, TokenSessionId, &TokenInformation), PsDereferenceImpersonationToken(v3),
                                                                             v5 >= 0) )
  {
    return (unsigned int)TokenInformation;
  }
  else
  {
    return PsGetThreadSessionId(a1);
  }
}
