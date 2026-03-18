/*
 * XREFs of SepTokenDeleteMethod @ 0x14051E5E0
 * Callers:
 *     <none>
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000DBA0 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepFreeTokenCapabilities @ 0x14002CEFC (SepFreeTokenCapabilities.c)
 *     SepDereferenceLuidToIndexEntry @ 0x140066818 (SepDereferenceLuidToIndexEntry.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x14011B1A0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140430FB8 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x140461664 (SepDereferenceCachedHandlesEntry.c)
 *     SepDeReferenceLogonSession @ 0x14057D950 (SepDeReferenceLogonSession.c)
 *     SepModifyTokenPolicyCounter @ 0x1406F0E4C (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x1406F6D38 (SepDeleteTokenUserAndGroups.c)
 *     SepRemoveTokenLogonSession @ 0x1406F77FC (SepRemoveTokenLogonSession.c)
 *     SepDeleteClaimAttributes @ 0x1406F95BC (SepDeleteClaimAttributes.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD *v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  struct _ERESOURCE *v14; // rcx
  void *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  if ( SeTokenLeakTracking )
  {
    SepRemoveTokenLogonSession(a1);
    v18 = *(void **)(a1 + 1144);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
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
    v3 = *(_QWORD *)(a1 + 1080);
    if ( v3 )
      SepDereferenceLowBoxNumberEntry(*(_DWORD *)(a1 + 120), v3);
    v4 = *(_QWORD *)(a1 + 1088);
    if ( v4 )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216), v4);
    v5 = *(_QWORD *)(a1 + 1152);
    if ( v5 )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216), v5);
    v6 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(v6 + 3);
    v7 = v6[3];
    while ( v7 - 1 > 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(v6 + 3, v7 - 1, v7);
      if ( v8 == v7 )
        goto LABEL_15;
    }
    if ( v7 != 1 )
      __fastfail(0xEu);
    v16 = v6[1];
    v17 = v6[20];
    v19 = v16;
    SepDeReferenceLogonSession(&v19, v17);
  }
LABEL_15:
  v9 = *(void **)(a1 + 1160);
  if ( v9 )
    ObfDereferenceObject(v9);
  v10 = *(void **)(a1 + 1112);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( *(_BYTE *)(a1 + 118) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0LL);
  v11 = *(_QWORD *)(a1 + 1136);
  if ( v11 )
    SepDereferenceLuidToIndexEntry(v11);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776));
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v12 = *(void **)(a1 + 176);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v13 = *(void **)(a1 + 784);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v14 )
  {
    ExDeleteResourceLite(v14);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v15 = *(void **)(a1 + 1104);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
}
