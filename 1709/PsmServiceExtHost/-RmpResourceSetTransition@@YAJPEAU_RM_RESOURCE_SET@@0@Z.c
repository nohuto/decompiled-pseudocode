/*
 * XREFs of ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001825C
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800319C0 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x18001808C (-RmpResourceSetTransitionSponsorships@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x1800182E8 (-RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU.c)
 *     ?RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180018344 (-RmpRsEnforcedThresholdsCheckTransition@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEA.c)
 */

__int64 __fastcall RmpResourceSetTransition(struct _RM_RESOURCE_SET *a1, struct _RM_RESOURCE_SET *a2)
{
  int v4; // ebx
  int v5; // ebx
  char **v6; // rdi
  _OWORD *Heap; // rax
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  if ( *((_QWORD *)a1 + 19) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
    *((_QWORD *)a2 + 19) = Heap;
    v9 = Heap;
    if ( !Heap )
      return (unsigned int)-805306345;
    v10 = (_OWORD *)*((_QWORD *)a1 + 19);
    *v9 = *v10;
    v9[1] = v10[1];
  }
  v4 = RmpRsEnforcedThresholdsCheckCreate(a2, 0LL, (struct _RM_RS_ENFORCEMENT_CONTEXT **)&P);
  if ( v4 < 0 )
  {
    v5 = v4 | 0x10000000;
  }
  else
  {
    v5 = RmpResourceSetTransitionSponsorships(a1, a2);
    if ( v5 >= 0 )
    {
      RmpRsEnforcedThresholdsCheckTransition(a2, 0LL, (struct _RM_RS_ENFORCEMENT_CONTEXT *)P);
      v6 = 0LL;
      P = 0LL;
      goto LABEL_5;
    }
  }
  v6 = (char **)P;
LABEL_5:
  if ( v6 )
  {
    RmpObjectRelease(*v6);
    if ( v6[5] )
      TpReleaseTimer();
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return (unsigned int)v5;
}
