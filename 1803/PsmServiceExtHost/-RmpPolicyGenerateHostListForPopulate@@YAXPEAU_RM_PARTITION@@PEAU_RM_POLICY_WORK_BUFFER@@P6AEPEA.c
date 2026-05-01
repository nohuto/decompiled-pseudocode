/*
 * XREFs of ?RmpPolicyGenerateHostListForPopulate@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@P6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z3@Z @ 0x18002D478
 * Callers:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18002DFA0 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18002D574 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18002DA40 (-RmpPolicyFilterActivityHostWithFlags@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18002E010 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpPolicyGenerateHostListForPopulate(
        struct _RM_PARTITION *a1,
        struct _RM_POLICY_WORK_BUFFER *a2,
        unsigned __int8 (__fastcall *a3)(struct _RM_ACTIVITY_HOST *, void *),
        void *a4)
{
  struct _RM_OBJECT_HEADER *Next; // rax
  char *v9; // rdi
  unsigned __int8 v10; // al
  _QWORD *v11; // rbx
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  *((_DWORD *)a2 + 9) = 0;
  memset_0(*(void **)a2, 0, (unsigned __int64)*((unsigned int *)a2 + 8) << 6);
  RmpObjectTableEnumerationBegin(
    (struct _RM_OBJECT_TABLE *)(*((_QWORD *)a1 + 3) + 16LL),
    (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v12);
  while ( 1 )
  {
    Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v12);
    v9 = (char *)Next;
    if ( !Next )
      break;
    if ( (*((_QWORD *)Next + 4) & 0xF000000000000000uLL) != 0x2000000000000000LL
      && *((struct _RM_PARTITION **)Next + 7) == a1 )
    {
      if ( !a3
        || (a3 != RmpPolicyFilterActivityHostWithFlags
          ? (v10 = a3(Next, a4))
          : (v10 = RmpPolicyFilterActivityHostWithFlags(Next, a4)),
            v10) )
      {
        v11 = (_QWORD *)(*(_QWORD *)a2 + ((unsigned __int64)*((unsigned int *)a2 + 9) << 6));
        memset_0(v11, 0, 0x40uLL);
        v11[6] = v9;
        ++*((_DWORD *)a2 + 9);
      }
    }
    RmpObjectRelease(v9);
  }
  RtlReleaseSRWLockShared(v12[0] + 16LL);
}
