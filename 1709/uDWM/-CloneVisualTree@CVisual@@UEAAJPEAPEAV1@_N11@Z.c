/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180018840
 * Callers:
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180015730 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800198A0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800233A0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002C4C0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000D70C (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180013F00 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800140E0 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180015730 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180016860 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018E30 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800233A0 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18002C4C0 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CloneVisualTree(CVisual *this, struct CVisual **a2)
{
  struct CVisual *v2; // rbx
  unsigned int v4; // r15d
  unsigned int v6; // esi
  char v7; // bp
  __int64 (__usercall *v8)@<rax>(CAtlasedRectsVisual *__hidden@<rcx>, struct CVisual **@<rdx>, bool@<r8b>, bool@<r9b>, bool); // r8
  __int64 (__fastcall *v9)(CCanvasVisual *, struct CVisual **, bool, bool, bool); // r9
  const struct tagSIZE *v10; // rdx
  __int64 (__fastcall *v11)(struct tagSIZE *, const struct tagSIZE *); // rax
  double v12; // xmm6_8
  double v13; // xmm5_8
  float v14; // xmm0_4
  float v15; // xmm0_4
  char v16; // r8
  char v17; // cl
  void (__fastcall *v18)(CVisual *__hidden, double); // rax
  CCanvasVisual *v20; // rcx
  __int64 (__fastcall *v21)(CText *, struct CVisual **, bool, bool, bool); // rax
  int inserted; // eax
  struct CVisual *v23; // rcx
  void (__fastcall *v24)(CVisual *, int); // rax
  void (__fastcall *v25)(CVisual *, int); // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29[4]; // [rsp+20h] [rbp-58h]
  struct CVisual *v30; // [rsp+30h] [rbp-48h] BYREF
  struct CVisual *v31; // [rsp+38h] [rbp-40h] BYREF

  v2 = *a2;
  v4 = 0;
  v31 = 0LL;
  v30 = 0LL;
  if ( v2 )
  {
    v31 = v2;
  }
  else
  {
    v26 = CVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v31);
    v4 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x63Du);
      v2 = v31;
LABEL_53:
      if ( v2 )
        CBaseObject::Release(v2);
      goto LABEL_20;
    }
    v2 = v31;
  }
  v6 = -1;
  v7 = 0;
LABEL_4:
  v8 = CAtlasedRectsVisual::CloneVisualTree;
  v9 = CCanvasVisual::CloneVisualTree;
  while ( 1 )
  {
    if ( v7 )
    {
      ++v6;
    }
    else
    {
      v7 = 1;
      v6 = 0;
    }
    if ( v6 >= *((_DWORD *)this + 18) )
      break;
    v20 = *(CCanvasVisual **)(*((_QWORD *)this + 6) + 8LL * v6);
    if ( (*((_BYTE *)v20 + 84) & 8) == 0 )
    {
      v29[0] = 1;
      v21 = *(__int64 (__fastcall **)(CText *, struct CVisual **, bool, bool, bool))(*(_QWORD *)v20 + 136LL);
      if ( v21 == CCanvasVisual::CloneVisualTree )
      {
        CCanvasVisual::CloneVisualTree(v20, &v30, 0, 0, 1);
      }
      else if ( (char *)v21 == (char *)CAtlasedRectsVisual::CloneVisualTree )
      {
        CAtlasedRectsVisual::CloneVisualTree(v20, &v30, 0, 0, 1);
      }
      else if ( v21 == CClientArea::CloneVisualTree )
      {
        CClientArea::CloneVisualTree(v20, &v30, 0, 0, 1);
      }
      else if ( v21 == CText::CloneVisualTree )
      {
        CText::CloneVisualTree(v20, &v30, 0, 0, 1);
      }
      else if ( v21 == CRenderDataVisual::CloneVisualTree )
      {
        CRenderDataVisual::CloneVisualTree(v20, &v30, 0, 0, 1);
      }
      else
      {
        v21(v20, &v30, 0, 0, *(_DWORD *)v29);
      }
      v8 = CAtlasedRectsVisual::CloneVisualTree;
      v9 = CCanvasVisual::CloneVisualTree;
      if ( v30 )
      {
        inserted = VisualCollection::InsertRelative(
                     (struct CVisual *)((char *)v2 + 32),
                     (struct CVisual **)v30,
                     0LL,
                     0,
                     1);
        v4 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x658u);
          goto LABEL_53;
        }
        v23 = v30;
        v8 = CAtlasedRectsVisual::CloneVisualTree;
        v9 = CCanvasVisual::CloneVisualTree;
        if ( v30 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v30 + 2, 0xFFFFFFFF) == 1 && v23 )
            (**(void (__fastcall ***)(struct CVisual *, __int64, __int64 (__usercall *)@<rax>(CAtlasedRectsVisual *__hidden@<rcx>, struct CVisual **@<rdx>, bool@<r8b>, bool@<r9b>, bool), __int64 (__fastcall *)(CCanvasVisual *, struct CVisual **, bool, bool, bool)))v23)(
              v23,
              1LL,
              CAtlasedRectsVisual::CloneVisualTree,
              CCanvasVisual::CloneVisualTree);
          v2 = v31;
          v30 = 0LL;
          goto LABEL_4;
        }
      }
    }
  }
  if ( *((_DWORD *)this + 28) != *((_DWORD *)v2 + 28) || *((_DWORD *)this + 29) != *((_DWORD *)v2 + 29) )
  {
    *((_QWORD *)v2 + 14) = *((_QWORD *)this + 14);
    v24 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v2 + 24LL);
    if ( v24 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v2, 8);
    else
      ((void (__fastcall *)(struct CVisual *, __int64, __int64 (__usercall *)@<rax>(CAtlasedRectsVisual *__hidden@<rcx>, struct CVisual **@<rdx>, bool@<r8b>, bool@<r9b>, bool), __int64 (__fastcall *)(CCanvasVisual *, struct CVisual **, bool, bool, bool)))v24)(
        v2,
        8LL,
        CAtlasedRectsVisual::CloneVisualTree,
        CCanvasVisual::CloneVisualTree);
  }
  v10 = (const struct tagSIZE *)((char *)this + 120);
  v11 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v2 + 80LL);
  if ( v11 == CVisual::SetSize )
  {
    CVisual::SetSize((struct tagSIZE *)v2, v10);
  }
  else if ( (char *)v11 == (char *)CText::SetSize )
  {
    CText::SetSize(v2, v10);
  }
  else
  {
    ((void (__fastcall *)(struct CVisual *, const struct tagSIZE *, __int64 (__usercall *)@<rax>(CAtlasedRectsVisual *__hidden@<rcx>, struct CVisual **@<rdx>, bool@<r8b>, bool@<r9b>, bool), __int64 (__fastcall *)(CCanvasVisual *, struct CVisual **, bool, bool, bool)))v11)(
      v2,
      v10,
      v8,
      v9);
  }
  v12 = *((double *)this + 21);
  v13 = *((double *)this + 22);
  v14 = v12;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v2 + 21) - v14)) & _xmm) > 0.0000011920929
    || (v15 = v13,
        (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)v2 + 22) - v15)) & _xmm) > 0.0000011920929) )
  {
    v27 = *(_QWORD *)v2;
    *((double *)v2 + 21) = v12;
    *((double *)v2 + 22) = v13;
    (*(void (__fastcall **)(struct CVisual *, __int64))(v27 + 24))(v2, 16LL);
  }
  v16 = *((_BYTE *)v2 + 84);
  v17 = *((_BYTE *)this + 84) & 1;
  if ( v17 != (v16 & 1) )
  {
    v28 = *(_QWORD *)v2;
    *((_BYTE *)v2 + 84) = v17 | v16 & 0xFE;
    (*(void (__fastcall **)(struct CVisual *, __int64))(v28 + 24))(v2, 16LL);
  }
  if ( *((_DWORD *)this + 49) )
  {
    *(_OWORD *)((char *)v2 + 196) = *(_OWORD *)((char *)this + 196);
    *(_OWORD *)((char *)v2 + 212) = *(_OWORD *)((char *)this + 212);
    *(_QWORD *)((char *)v2 + 228) = *(_QWORD *)((char *)this + 228);
    v25 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v2 + 24LL);
    if ( v25 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v2, 64);
    else
      v25(v2, 64);
  }
  v18 = *(void (__fastcall **)(CVisual *__hidden, double))(*(_QWORD *)v2 + 88LL);
  if ( v18 == CVisual::SetOpacity )
    CVisual::SetOpacity(v2, *((double *)this + 23));
  else
    ((void (__fastcall *)(struct CVisual *))v18)(v2);
  *a2 = v2;
LABEL_20:
  if ( v30 )
    CBaseObject::Release(v30);
  return v4;
}
