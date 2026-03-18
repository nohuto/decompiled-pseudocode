/*
 * XREFs of ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18004DB60
 * Callers:
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000DED0 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004F74C (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000B418 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::EnsureWorldTransform(CVisual *this, const struct CVisualTree *a2, struct CTreeData *a3)
{
  struct _LIST_ENTRY *TreeData; // rbx
  char v4; // r15
  __int64 v8; // r14
  __int64 v9; // rax
  CVisual *v10; // rcx
  unsigned __int64 Blink; // rax
  __int64 result; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v15; // ebx
  int v16; // edx
  int *v17; // rcx
  CVisual *v18; // rax
  _QWORD *v19; // [rsp+50h] [rbp+8h]

  TreeData = 0LL;
  v4 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
  v9 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v9 + 4) & 0x10000000) != 0 )
  {
    v16 = *(_DWORD *)(v9 + 12);
    v17 = (int *)(v9 + 12);
    if ( (v16 & 0x7F000000) != 0x4000000 )
    {
      do
      {
        v17 = (int *)((char *)v17 + (v16 & 0xFFFFFF) + 4);
        v16 = *v17;
      }
      while ( (*v17 & 0x7F000000) != 0x4000000 );
    }
    v19 = *(_QWORD **)(v17 + 1);
    if ( v19 )
    {
      v18 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 152LL))(*v19);
      if ( v18 )
      {
        if ( (*((_BYTE *)a3 + 16) & 4) == 0 || *((_QWORD *)a3 + 27) != v8 )
        {
          v4 = 1;
          TreeData = CVisual::FindTreeData(v18, a2);
          if ( TreeData )
            goto LABEL_6;
        }
      }
    }
  }
  if ( this != *((CVisual **)a2 + 3) )
  {
    v10 = (CVisual *)*((_QWORD *)this + 10);
    TreeData = 0LL;
    if ( *((_BYTE *)a2 + 32) )
    {
      TreeData = (struct _LIST_ENTRY *)((char *)v10 + 288);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v10);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
          {
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_5;
          }
          TreeData = Flink - 14;
        }
      }
    }
  }
LABEL_5:
  if ( TreeData )
LABEL_6:
    Blink = (unsigned __int64)TreeData[7].Blink;
  else
    Blink = 1LL;
  if ( *((_QWORD *)a3 + 15) >= Blink )
    return 0LL;
  result = CVisual::UpdateWorldTransform(
             (CComposition **)this,
             (CVisual **)a2,
             a3,
             v4,
             (const struct CTreeData *)TreeData);
  v15 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x6ADu);
    return v15;
  }
  return result;
}
