/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800357A0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x18004E7C0 (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004DD70 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x18009653C (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCpuClippingData::Update(int *a1, __int64 a2, CVisual *a3, int a4, char a5)
{
  int v5; // r11d
  int v6; // r13d
  unsigned int v10; // esi
  char v11; // r12
  char *p_Blink; // rbp
  CVisual *v13; // rcx
  struct _LIST_ENTRY *v14; // r10
  _QWORD *v15; // r10
  _QWORD *v16; // rdi
  char v17; // r15
  __int64 v19; // r13
  void *v20; // rcx
  bool v21; // r8
  int v22; // edx
  unsigned __int64 v23; // rcx
  int v24; // edx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  int v27; // eax
  unsigned __int64 v28; // rdx
  CVisual *v29; // rax
  unsigned __int64 v30; // r8
  char v31; // cl
  struct _LIST_ENTRY *v32; // rdi
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v36; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v38; // rax
  struct _LIST_ENTRY *v39; // rcx
  unsigned __int64 v40; // [rsp+30h] [rbp-58h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  bool v42; // [rsp+90h] [rbp+8h]
  _QWORD *v43; // [rsp+98h] [rbp+10h]
  unsigned __int64 v44; // [rsp+A0h] [rbp+18h]
  bool v45; // [rsp+A8h] [rbp+20h]

  v5 = *a1;
  v6 = a4;
  v42 = a4 == 2;
  v45 = *a1 == 0;
  v10 = 0;
  v11 = 0;
  p_Blink = 0LL;
  if ( *(CVisual **)(a2 + 24) == a3 )
    goto LABEL_54;
  v13 = (CVisual *)*((_QWORD *)a3 + 10);
  if ( *(_BYTE *)(a2 + 32) )
  {
    v14 = (struct _LIST_ENTRY *)((char *)v13 + 280);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(v13);
    v36 = TreeDataListHead;
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( Flink != v36 )
      {
        while ( Flink[2].Flink != (struct _LIST_ENTRY *)a2 )
        {
          Flink = Flink->Flink;
          if ( Flink == v36 )
            goto LABEL_4;
        }
        v14 = Flink - 14;
      }
    }
  }
LABEL_4:
  p_Blink = (char *)&v14[8].Blink;
  if ( LODWORD(v14[8].Blink) == 5 )
  {
LABEL_54:
    if ( v6 <= 3 )
      v6 = 3;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a3 + 26) + 4LL) & 0x10000000) != 0 )
    v15 = *(_QWORD **)(*(_QWORD *)CVisual::GetTransformParentDataInternal(a3) + 8LL);
  else
    v15 = 0LL;
  v16 = p_Blink;
  if ( v15 )
  {
    v28 = 0LL;
    v30 = 0LL;
    v43 = (_QWORD *)*((_QWORD *)a3 + 10);
    v29 = (CVisual *)v43;
    v16 = p_Blink;
    v44 = 0LL;
    v40 = 0LL;
    if ( v43 )
    {
      v31 = *(_BYTE *)(a2 + 32);
      while ( 1 )
      {
        v32 = 0LL;
        if ( v31 )
        {
          v32 = (struct _LIST_ENTRY *)(v43 + 35);
        }
        else
        {
          v38 = CVisual::GetTreeDataListHead(v29);
          if ( v38 )
          {
            v39 = v38->Flink;
            if ( v38->Flink != v38 )
            {
              while ( v39[2].Flink != (struct _LIST_ENTRY *)a2 )
              {
                v39 = v39->Flink;
                if ( v39 == v38 )
                  goto LABEL_103;
              }
              v32 = v39 - 14;
            }
          }
LABEL_103:
          v30 = v40;
          v28 = v44;
          v31 = *(_BYTE *)(a2 + 32);
        }
        v16 = &v32[8].Blink;
        if ( v43 == v15 )
          break;
        if ( (unsigned int)(*(_DWORD *)v16 - 1) > 1 )
        {
          v16 = p_Blink;
          if ( v6 <= 3 )
            v6 = 3;
          goto LABEL_70;
        }
        if ( v28 <= v16[1] )
        {
          v28 = v16[1];
          v44 = v28;
        }
        if ( v43[29] )
        {
          if ( v30 <= v16[4] )
            v30 = v16[4];
          v40 = v30;
        }
        v43 = (_QWORD *)v43[10];
        v29 = (CVisual *)v43;
        if ( !v43 )
        {
          v16 = p_Blink;
          break;
        }
      }
    }
    if ( v28 > *((_QWORD *)a1 + 8) )
      v45 = 1;
LABEL_70:
    if ( v30 > *((_QWORD *)a1 + 8) )
      *((_QWORD *)a1 + 5) = 0LL;
  }
  v17 = v6 > v5 || v45;
  if ( !*((_QWORD *)a1 + 5) )
  {
    v17 = 1;
    v11 = 1;
    *((_QWORD *)a1 + 5) = *(_QWORD *)(*((_QWORD *)a3 + 2) + 360LL);
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    v17 = 1;
    v11 = 1;
    *((_QWORD *)a1 + 7) = *(_QWORD *)(*((_QWORD *)a3 + 2) + 360LL);
  }
  if ( *((_QWORD *)a1 + 6) )
  {
    if ( !v17 )
      goto LABEL_16;
  }
  else
  {
    v17 = 1;
    v11 = 1;
    *((_QWORD *)a1 + 6) = *(_QWORD *)(*((_QWORD *)a3 + 2) + 360LL);
  }
  v27 = CCpuClippingData::CalcMode(a3, (unsigned int)v6, v42);
  if ( *a1 != v27 )
  {
    *a1 = v27;
    v11 = 1;
    *((_QWORD *)a1 + 1) = *(_QWORD *)(*((_QWORD *)a3 + 2) + 360LL);
  }
LABEL_16:
  *((_BYTE *)a1 + 76) = a5;
  if ( v16
    && *(_DWORD *)v16 != 5
    && v16[4] > *((_QWORD *)a1 + 4)
    && ((unsigned int)(*a1 - 1) <= 1 || *a1 == 4 && *((_QWORD *)a3 + 29)) )
  {
    v11 = 1;
  }
  else if ( !v11 )
  {
    goto LABEL_20;
  }
  if ( *a1 != 5 )
  {
    v19 = 0LL;
    if ( v16 && *(_DWORD *)v16 != 5 )
      v19 = v16[2];
    if ( !*((_QWORD *)a1 + 2) )
    {
      v33 = HeapAlloc(WPF::g_processHeap, 0, 0x44uLL);
      if ( !v33 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v33[16] = 0;
      *((_QWORD *)a1 + 2) = v33;
    }
    if ( *((_QWORD *)a3 + 29) )
    {
      if ( !*((_QWORD *)a1 + 3) )
      {
        v34 = operator new(0x44uLL);
        if ( v34 )
          v34[16] = 0;
        else
          v34 = 0LL;
        *((_QWORD *)a1 + 3) = v34;
        if ( !v34 )
        {
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x183u);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xCCu);
          return v10;
        }
      }
    }
    else
    {
      v20 = (void *)*((_QWORD *)a1 + 3);
      if ( v20 )
      {
        WPF::ProcessHeapImpl::Free(v20);
        *((_QWORD *)a1 + 3) = 0LL;
      }
    }
    CVisual::CalcEffectiveTransform(a3, (unsigned int)*a1, v19, &a5, *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3));
    *((_QWORD *)a1 + 4) = *(_QWORD *)(*((_QWORD *)a3 + 2) + 360LL);
  }
LABEL_20:
  if ( v17 || v11 )
  {
    v21 = p_Blink && *((_DWORD *)p_Blink + 18);
    v22 = *a1;
    v23 = *((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 8) = v23;
    a1[18] = 0;
    v24 = v22 - 1;
    if ( v24 )
    {
      if ( v24 != 2 )
        return v10;
    }
    else
    {
      if ( v23 <= *((_QWORD *)p_Blink + 8) )
        v23 = *((_QWORD *)p_Blink + 8);
      *((_QWORD *)a1 + 8) = v23;
      if ( v21 )
      {
        a1[18] = *((_DWORD *)p_Blink + 18);
        v25 = *((_QWORD *)a1 + 5);
        if ( v23 > v25 )
          v25 = v23;
        *((_QWORD *)a1 + 8) = v25;
      }
    }
    v26 = *((_QWORD *)a1 + 6);
    if ( *((_QWORD *)a1 + 8) > v26 )
      v26 = *((_QWORD *)a1 + 8);
    *((_QWORD *)a1 + 8) = v26;
    if ( v21 || *((_QWORD *)a3 + 29) )
    {
      if ( v26 <= *((_QWORD *)a1 + 7) )
        v26 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 8) = v26;
      if ( *((_QWORD *)a3 + 29) )
        ++a1[18];
    }
  }
  return v10;
}
