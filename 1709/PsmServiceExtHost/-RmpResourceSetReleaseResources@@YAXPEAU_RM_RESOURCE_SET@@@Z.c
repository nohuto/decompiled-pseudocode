/*
 * XREFs of ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180015ED0
 * Callers:
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800121D0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x18000160C (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x1800351CC (-RmpRsEnforcedThresholdsDisarmCheckDestroy@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z.c)
 */

void __fastcall RmpResourceSetReleaseResources(char *P)
{
  _QWORD *v1; // rax
  void *v3; // rcx
  void *v4; // r8
  ExecutionModel::ResourceSet *v5; // rdi
  __int64 v6; // rax
  __int64 (__fastcall *v7)(ExecutionModel::ResourceSet *); // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  char *i; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h]

  v1 = P + 128;
  if ( *((_QWORD *)P + 16) )
  {
    v11 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v12 = (_QWORD *)*((_QWORD *)P + 17), (_QWORD *)*v12 != v1) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *v1 = 0LL;
    v1[1] = 0LL;
  }
  v3 = (void *)*((_QWORD *)P + 18);
  if ( v3 )
    RmpRsEnforcedThresholdsDisarmCheckDestroy(v3);
  v4 = (void *)*((_QWORD *)P + 19);
  if ( v4 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    *((_QWORD *)P + 19) = 0LL;
  }
  while ( *((_DWORD *)P + 20) )
    RmpResourceSetRemoveRecipient((struct _RM_RESOURCE_SET *)P, **((struct _RM_RESOURCE_SET ***)P + 9), 0x48u);
  while ( *((_DWORD *)P + 26) )
    RmpResourceSetRemoveRecipient(**((struct _RM_RESOURCE_SET ***)P + 12), (struct _RM_RESOURCE_SET *)P, 0x43u);
  v5 = (ExecutionModel::ResourceSet *)*((_QWORD *)P + 5);
  RmpObjectRelease(P);
  v6 = *(_QWORD *)v5;
  *((_QWORD *)v5 + 179) = 0LL;
  v7 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(v6 + 16);
  if ( v7 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release(v5);
  else
    v7(v5);
  v8 = *((_QWORD *)P + 14);
  *((_QWORD *)P + 5) = 0LL;
  v9 = *(_QWORD *)(v8 + 24) + 536LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(v8 + 24) + 552LL);
  v13 = *((_QWORD *)P + 1) & (-1LL << (*(_DWORD *)(v9 + 4) & 0x1F));
  for ( i = (char *)(*(_QWORD *)(v9 + 8)
                   + 8LL
                   * ((37
                     * (BYTE6(v13)
                      + 37
                      * (BYTE5(v13)
                       + 37
                       * (BYTE4(v13)
                        + 37
                        * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                     + HIBYTE(v13)) & (unsigned int)((*(_DWORD *)(v9 + 4) >> 5) - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(char **)i )
  {
    if ( *(char **)i == P )
    {
      *(_QWORD *)i = *(_QWORD *)P;
      --*(_DWORD *)v9;
      *(_QWORD *)P |= 0x8000000000000002uLL;
      break;
    }
  }
  *((_DWORD *)P + 5) |= 0x80000000;
  RtlReleaseSRWLockExclusive(v9 + 16);
  RmpObjectRelease(P);
}
