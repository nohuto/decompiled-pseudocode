/*
 * XREFs of ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x180052C6C
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x180052D64 (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053564 (-RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU.c)
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053688 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 */

__int64 __fastcall RmpResourceSetTransition(struct _RM_RESOURCE_SET *a1, struct _RM_RESOURCE_SET *a2)
{
  _OWORD *Heap; // rax
  _OWORD *v5; // rcx
  int v6; // ebx
  _OWORD *v7; // rax
  int v8; // ebx
  char **v9; // rdi
  char *v10; // rcx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  if ( *((_QWORD *)a1 + 20) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
    *((_QWORD *)a2 + 20) = Heap;
    v5 = Heap;
    if ( !Heap )
      return (unsigned int)-805306345;
    v7 = (_OWORD *)*((_QWORD *)a1 + 20);
    *v5 = *v7;
    v5[1] = v7[1];
  }
  v8 = RmpRsEnforcedThresholdsCheckCreate(a2, 0LL, (struct _RM_RS_ENFORCEMENT_CONTEXT **)&P);
  if ( v8 < 0 )
  {
    v6 = v8 | 0x10000000;
LABEL_7:
    v9 = (char **)P;
    goto LABEL_8;
  }
  v6 = RmpResourceSetTransitionSponsorships(a1, a2);
  if ( v6 < 0 )
    goto LABEL_7;
  RmpRsEnforcedThresholdsCheckTransition(a2, 0LL, (struct _RM_RS_ENFORCEMENT_CONTEXT *)P);
  v9 = 0LL;
  P = 0LL;
LABEL_8:
  if ( v9 )
  {
    RmpObjectRelease(*v9);
    v10 = v9[5];
    if ( v10 )
      TpReleaseTimer(v10);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return (unsigned int)v6;
}
