/*
 * XREFs of ?EnsureWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18004FD08
 * Callers:
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1800A06F0 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004FBE4 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::EnsureWorldTransform(CVisual **this, const struct CVisualTree *a2, struct CTreeData *a3)
{
  unsigned int v3; // esi
  struct CTreeData *TreeData; // r10
  char v5; // r15
  unsigned __int64 v9; // r14
  CVisual *v10; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  __int64 v14; // rcx
  int updated; // eax

  v3 = 0;
  TreeData = 0LL;
  v5 = 0;
  v9 = 1LL;
  if ( (*((_DWORD *)this[26] + 1) & 0x10000000) != 0 )
  {
    v14 = *(_QWORD *)CVisual::GetTransformParentDataInternal((CVisual *)this);
    if ( (*((_BYTE *)a3 + 16) & 4) == 0 || *((_QWORD *)a3 + 27) != *((_QWORD *)this[2] + 45) )
    {
      v5 = 1;
      TreeData = CVisual::FindTreeData(*(CVisual **)(v14 + 8), a2);
      if ( TreeData )
        goto LABEL_6;
    }
  }
  if ( this != *((CVisual ***)a2 + 3) )
  {
    v10 = this[10];
    if ( *((_BYTE *)a2 + 32) )
    {
      TreeData = (CVisual *)((char *)v10 + 280);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v10);
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          if ( (const struct CVisualTree *)i[2].Flink == a2 )
          {
            TreeData = (struct CTreeData *)&i[-14];
            break;
          }
        }
      }
    }
  }
  if ( TreeData )
LABEL_6:
    v9 = *((_QWORD *)TreeData + 15);
  if ( *((_QWORD *)a3 + 15) < v9 )
  {
    updated = CVisual::UpdateWorldTransform((CVisual *)this, (CVisual **)a2, a3, v5, TreeData);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x63Bu);
  }
  return v3;
}
