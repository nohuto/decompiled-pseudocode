/*
 * XREFs of ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002EF70
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001F380 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001FF90 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x180052974 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x18005381C (-RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z.c)
 */

void __fastcall RmpResourceSetReleaseResources(char *P)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  void *v4; // rcx
  void *v5; // r8
  ExecutionModel::ResourceSet *v6; // rdi
  __int64 v7; // rax
  __int64 (__fastcall *v8)(ExecutionModel::ResourceSet *); // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // r9
  char *i; // rdx
  _QWORD *v13; // rdx

  v1 = P + 136;
  v3 = *((_QWORD *)P + 17);
  if ( v3 )
  {
    if ( *(_QWORD **)(v3 + 8) != v1 || (v13 = (_QWORD *)v1[1], (_QWORD *)*v13 != v1) )
      __fastfail(3u);
    *v13 = v3;
    *(_QWORD *)(v3 + 8) = v13;
    *v1 = 0LL;
    v1[1] = 0LL;
  }
  v4 = (void *)*((_QWORD *)P + 19);
  if ( v4 )
    RmpRsEnforcedThresholdsDisarmCheckDestroy(v4);
  v5 = (void *)*((_QWORD *)P + 20);
  if ( v5 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    *((_QWORD *)P + 20) = 0LL;
  }
  while ( *((_DWORD *)P + 22) )
    RmpResourceSetRemoveRecipient(P, **((PVOID **)P + 10), 0x48u);
  while ( *((_DWORD *)P + 28) )
    RmpResourceSetRemoveRecipient(**((PVOID **)P + 13), P, 0x43u);
  v6 = (ExecutionModel::ResourceSet *)*((_QWORD *)P + 6);
  RmpObjectRelease(P);
  v7 = *(_QWORD *)v6;
  *((_QWORD *)v6 + 179) = 0LL;
  v8 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(v7 + 16);
  if ( v8 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release(v6);
  else
    v8(v6);
  v9 = *((_QWORD *)P + 15);
  *((_QWORD *)P + 6) = 0LL;
  v10 = *(_QWORD *)(v9 + 24) + 560LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(v9 + 24) + 576LL);
  v11 = *((_QWORD *)P + 1) & (-1LL << (*(_DWORD *)(v10 + 4) & 0x1F));
  for ( i = (char *)(*(_QWORD *)(v10 + 8)
                   + 8
                   * ((HIBYTE(v11)
                     + 37
                     * (BYTE6(v11)
                      + 37
                      * (BYTE5(v11)
                       + 37
                       * (BYTE4(v11)
                        + 37
                        * (((*((_DWORD *)P + 2) & (unsigned int)(-1 << (*(_DWORD *)(v10 + 4) & 0x1F))) >> 24)
                         + 37
                         * ((unsigned __int8)((*((_DWORD *)P + 2) & (unsigned int)(-1 << (*(_DWORD *)(v10 + 4) & 0x1F))) >> 16)
                          + 37
                          * ((unsigned __int8)((unsigned __int16)(*((_WORD *)P + 4) & (-1 << (*(_DWORD *)(v10 + 4) & 0x1F))) >> 8)
                           + 37 * ((unsigned __int8)v11 + 11623883)))))))) & ((*(_DWORD *)(v10 + 4) >> 5) - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(char **)i )
  {
    if ( *(char **)i == P )
    {
      *(_QWORD *)i = *(_QWORD *)P;
      --*(_DWORD *)v10;
      *(_QWORD *)P |= 0x8000000000000002uLL;
      break;
    }
  }
  *((_DWORD *)P + 6) |= 0x80000000;
  RtlReleaseSRWLockExclusive(v10 + 16);
  RmpObjectRelease(P);
}
