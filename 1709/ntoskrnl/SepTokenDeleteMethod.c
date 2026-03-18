/*
 * XREFs of SepTokenDeleteMethod @ 0x14048D160
 * Callers:
 *     <none>
 * Callees:
 *     ExDeleteResourceLite @ 0x14001ED40 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14001EED0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepDereferenceLuidToIndexEntry @ 0x14001EFC4 (SepDereferenceLuidToIndexEntry.c)
 *     SepFreeTokenCapabilities @ 0x14001EFEC (SepFreeTokenCapabilities.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SepDereferenceCachedHandlesEntry @ 0x14048D324 (SepDereferenceCachedHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14048D434 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDeReferenceLogonSession @ 0x1405A7534 (SepDeReferenceLogonSession.c)
 *     SepModifyTokenPolicyCounter @ 0x14072886C (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x14072E858 (SepDeleteTokenUserAndGroups.c)
 *     SepRemoveTokenLogonSession @ 0x14072F3CC (SepRemoveTokenLogonSession.c)
 *     SepDeleteClaimAttributes @ 0x14073100C (SepDeleteClaimAttributes.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  _QWORD *v3; // rdx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  struct _ERESOURCE *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  void *v15; // rcx
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  if ( SeTokenLeakTracking )
  {
    SepRemoveTokenLogonSession(a1);
    v15 = *(void **)(a1 + 1144);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
  }
  v2 = *(void **)(a1 + 1096);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  if ( SepTokenSidSharingEnabled )
    SepDeleteTokenUserAndGroups(a1);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    if ( *(_QWORD *)(a1 + 1080) )
      SepDereferenceLowBoxNumberEntry(*(unsigned int *)(a1 + 120));
    if ( *(_QWORD *)(a1 + 1088) )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216));
    if ( *(_QWORD *)(a1 + 1152) )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216));
    v3 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v3 + 3);
    v4 = v3[3];
    while ( v4 - 1 > 0 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 3, v4 - 1, v4);
      if ( v5 == v4 )
        goto LABEL_15;
    }
    if ( v4 != 1 )
      __fastfail(0xEu);
    v13 = v3[1];
    v14 = v3[20];
    v16 = v13;
    SepDeReferenceLogonSession(&v16, v14);
  }
LABEL_15:
  v6 = *(void **)(a1 + 1160);
  if ( v6 )
    ObfDereferenceObject(v6);
  v7 = *(void **)(a1 + 1112);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( *(_BYTE *)(a1 + 118) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0LL);
  v8 = *(_QWORD *)(a1 + 1136);
  if ( v8 )
    SepDereferenceLuidToIndexEntry(v8);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v9 = *(void **)(a1 + 176);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v10 = *(void **)(a1 + 784);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v11 )
  {
    ExDeleteResourceLite(v11);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v12 = *(void **)(a1 + 1104);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
}
