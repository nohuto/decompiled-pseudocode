/*
 * XREFs of ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180068DA8
 * Callers:
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x180068E4C (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x1800699B4 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180068D2C (-HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall HampSlsBlockerEntryFind(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **a3)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  int v8; // esi
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned __int64)a1 + 32;
  v12 = *((_QWORD *)a2 - 4);
  v4 = 0;
  v6 = *(_QWORD *)(v3 + 8);
  v7 = *(_QWORD *)v3;
  if ( (v6 & 1) != 0 )
  {
    if ( v7 )
      v7 ^= v3;
    else
      v7 = 0LL;
  }
  v8 = v6 & 1;
  if ( !v7 )
    return (unsigned int)-1073741275;
  do
  {
    v9 = HampSlsBlockerEntryCompare(&v12, (struct _RTL_BALANCED_NODE *)v7);
    if ( v9 >= 0 )
    {
      if ( v9 <= 0 )
        break;
      v10 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v7;
    }
    if ( v8 && v10 )
      v7 ^= v10;
    else
      v7 = v10;
  }
  while ( v7 );
  if ( v7 )
    *a3 = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)v7;
  else
    return (unsigned int)-1073741275;
  return v4;
}
