/*
 * XREFs of ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x1800251CC
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18005405C (-RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@P.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18002511C (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180025180 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002588C (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DCD4 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmpActivityHostPopulateRunnabilitySettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  char v4; // bl
  int v5; // r11d
  unsigned __int64 v6; // rbp
  int v7; // edi
  unsigned __int64 v8; // r12
  int v9; // r13d
  struct ExecutionModel::ResourceSet *Next; // rax
  char v11; // r15
  struct ExecutionModel::ResourceSet *v12; // rdx
  int v13; // eax
  char v14; // r11
  __int16 v15; // cx
  char v16; // cl
  unsigned __int64 v17; // rcx
  int v18; // r8d
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 First; // [rsp+20h] [rbp-38h] BYREF
  int v23; // [rsp+28h] [rbp-30h]
  int v24; // [rsp+2Ch] [rbp-2Ch]

  v24 = 0;
  v23 = 2;
  v4 = 0;
  First = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 2, 0);
  v6 = (unsigned int)(v5 + 98);
  v7 = *((_DWORD *)a1 + 156) != v5;
  v8 = v6;
  v9 = 0;
  Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
  v11 = *((_BYTE *)a2 + 32);
  while ( 1 )
  {
    v12 = Next;
    if ( !Next )
      break;
    v17 = *((_QWORD *)Next + 193);
    v18 = v7;
    if ( !v17 )
    {
      v20 = *((int *)Next + 364);
      if ( (unsigned int)v20 <= 0x33 )
      {
        v21 = 0xBE0883BCFD008LL;
        if ( _bittest64(&v21, v20) )
        {
          v17 = 1LL;
          goto LABEL_13;
        }
      }
      v17 = v6;
    }
    if ( v17 >= v6 )
      v17 = v6;
LABEL_13:
    v19 = v9 + 1;
    v8 += v17;
    if ( !*((_DWORD *)v12 + 376) )
      v19 = v9;
    v7 = *((_DWORD *)v12 + 375) & 3;
    v9 = v19;
    if ( v7 <= v18 )
      v7 = v18;
    v11 ^= (v11 ^ (v11 | (*((_DWORD *)v12 + 375) >> 2))) & 2;
    *((_BYTE *)a2 + 32) = v11;
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
  }
  v13 = RmpImportanceToRequiredExecutionSpeed(*((unsigned int *)a1 + 366));
  v14 = v11;
  if ( v7 <= v13 )
    v7 = v13;
  if ( v8 < v6 )
    LODWORD(v6) = v8;
  *((_DWORD *)a2 + 7) = v6;
  if ( v9 && v9 == RmpActivityHostGetResourceSetCount(a1, 2u) )
  {
    v14 |= 1u;
    *((_BYTE *)a2 + 32) = v14;
  }
  v15 = (unsigned __int16)*((_DWORD *)a1 + 366) >> 7;
  *((_DWORD *)a2 + 6) = v7;
  v16 = v14 ^ (v14 ^ (4 * v15)) & 4;
  *((_BYTE *)a2 + 32) = v16;
  if ( (*((_WORD *)a1 + 732) & 0x400) != 0
    && (*((_BYTE *)a1 + 1152) & 4) == 0
    && *(_BYTE *)(*((_QWORD *)a1 + 6) + 232LL) )
  {
    v4 = 8;
  }
  *((_BYTE *)a2 + 32) = v4 | v16 & 0xF7;
}
