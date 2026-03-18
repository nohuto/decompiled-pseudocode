/*
 * XREFs of ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1802127B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x18000B384 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000B418 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004F820 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800BFE40 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x180140A0C (-UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CLightPreComputeHelper::ProcessTransformParentStack(
        CLightPreComputeHelper *this,
        const struct CVisualTree *a2,
        __int64 a3,
        char a4)
{
  int *v4; // r13
  struct _LIST_ENTRY *TreeData; // r14
  unsigned __int64 Blink; // r15
  CVisual *v8; // rbx
  CVisual *TransformParentNoRef; // rax
  char v10; // bp
  int v11; // eax
  unsigned int v12; // esi
  struct CVisual *v13; // rax
  CPreComputeHelper *v14; // rcx
  struct CTreeData *v15; // rdi
  unsigned __int64 v16; // rax
  int updated; // eax
  CVisual *v19; // [rsp+80h] [rbp+8h] BYREF
  struct CTreeData *v20; // [rsp+88h] [rbp+10h] BYREF
  __int64 v21; // [rsp+90h] [rbp+18h]
  char v22; // [rsp+98h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  v19 = 0LL;
  v4 = (int *)((char *)this + 8);
  TreeData = 0LL;
  Blink = 1LL;
  CWatermarkStack<CVisual *,64,2,10>::Pop((int *)this + 2, &v19);
  v8 = v19;
  if ( v19 != *((CVisual **)a2 + 3) )
  {
    TransformParentNoRef = CVisual::GetTransformParentNoRef(v19);
    if ( !TransformParentNoRef )
      TransformParentNoRef = (CVisual *)*((_QWORD *)v8 + 10);
    TreeData = CVisual::FindTreeData(TransformParentNoRef, a2);
    Blink = (unsigned __int64)TreeData[7].Blink;
  }
  while ( 1 )
  {
    v20 = 0LL;
    v10 = 0;
    v11 = CVisual::EnsureTreeData(v8, a2, &v20);
    v12 = v11;
    if ( v11 < 0 )
      break;
    v13 = CVisual::GetTransformParentNoRef(v8);
    v15 = v20;
    if ( v13 && ((*((_BYTE *)v20 + 16) & 4) == 0 || *((_QWORD *)v20 + 27) != v21) )
      v10 = 1;
    CPreComputeHelper::UpdateRelativeLayout(v14, v8);
    v16 = *((_QWORD *)v15 + 15);
    if ( v16 < Blink )
    {
      updated = CVisual::UpdateWorldTransform(
                  (CComposition **)v8,
                  (CVisual **)a2,
                  v15,
                  v10,
                  (const struct CTreeData *)TreeData);
      v12 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2A7u);
        return v12;
      }
      if ( !v22 )
        CVisual::PropagateFlags((__int64)v8, 5u, 0);
      *((_QWORD *)v15 + 22) = 0LL;
      v16 = *((_QWORD *)v15 + 15);
    }
    TreeData = (struct _LIST_ENTRY *)v15;
    Blink = v16;
    if ( !CWatermarkStack<CVisual *,64,2,10>::Pop(v4, &v19) )
      return v12;
    v8 = v19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x295u);
  return v12;
}
