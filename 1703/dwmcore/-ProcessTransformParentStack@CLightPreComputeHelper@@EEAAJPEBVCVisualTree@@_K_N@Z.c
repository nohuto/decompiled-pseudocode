/*
 * XREFs of ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1801B3E00
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180085500 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800881FC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18008AE80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800C1A68 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x1801360A8 (-UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z.c)
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
  CVisual *v9; // rcx
  char v10; // bp
  int v11; // eax
  unsigned int v12; // edi
  CPreComputeHelper *v13; // rcx
  struct CTreeData *v14; // rsi
  int updated; // eax
  CVisual *v17; // [rsp+90h] [rbp+8h] BYREF
  struct CTreeData *v18; // [rsp+98h] [rbp+10h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+18h]
  char v20; // [rsp+A8h] [rbp+20h]

  v20 = a4;
  v19 = a3;
  v17 = 0LL;
  v4 = (int *)((char *)this + 8);
  TreeData = 0LL;
  Blink = 1LL;
  CWatermarkStack<CVisual *,64,2,10>::Pop((int *)this + 2, &v17);
  v8 = v17;
  if ( v17 != *((CVisual **)a2 + 3) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v17 + 26) + 4LL) & 0x10000000) != 0 )
      v9 = *(CVisual **)(*(_QWORD *)CVisual::GetTransformParentDataInternal(v17) + 8LL);
    else
      v9 = (CVisual *)*((_QWORD *)v17 + 10);
    TreeData = CVisual::FindTreeData(v9, a2);
    Blink = (unsigned __int64)TreeData[7].Blink;
  }
  while ( 1 )
  {
    v18 = 0LL;
    v10 = 0;
    v11 = CVisual::EnsureTreeData(v8, a2, &v18);
    v12 = v11;
    if ( v11 < 0 )
      break;
    v13 = (CPreComputeHelper *)*((_QWORD *)v8 + 26);
    v14 = v18;
    if ( (*((_DWORD *)v13 + 1) & 0x10000000) != 0 && ((*((_BYTE *)v18 + 16) & 4) == 0 || *((_QWORD *)v18 + 27) != v19) )
      v10 = 1;
    CPreComputeHelper::UpdateRelativeLayout(v13, v8);
    if ( *((_QWORD *)v14 + 15) < Blink )
    {
      updated = CVisual::UpdateWorldTransform(v8, (CVisual **)a2, v14, v10, (const struct CTreeData *)TreeData);
      v12 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2CAu);
        return v12;
      }
      if ( !v20 )
        CVisual::PropagateFlags(v8, 1, 1, 0, 0, 0, 0, 0);
      *((_QWORD *)v14 + 22) = 0LL;
    }
    Blink = *((_QWORD *)v14 + 15);
    TreeData = (struct _LIST_ENTRY *)v14;
    if ( !CWatermarkStack<CVisual *,64,2,10>::Pop(v4, &v17) )
      return v12;
    v8 = v17;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2B6u);
  return v12;
}
