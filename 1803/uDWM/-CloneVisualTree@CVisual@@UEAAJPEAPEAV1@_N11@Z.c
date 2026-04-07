/*
 * XREFs of ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180026320
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180010C20 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180018460 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800195E0 (-CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180023690 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180010C20 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetSize@CText@@UEAAJPEBUtagSIZE@@@Z @ 0x180014290 (-SetSize@CText@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180014470 (-CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180018460 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x1800186C0 (-CloneVisualTree@CCanvasVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x180023690 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FDD8 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CloneVisualTree(CVisual *this, struct CVisual **a2)
{
  CBaseObject *v2; // rbx
  int inserted; // r15d
  unsigned int v6; // esi
  char v7; // bp
  __int64 (__fastcall *v8)(CClientArea *, struct CVisual **, bool, bool, bool); // r9
  __int64 (__fastcall *v9)(CCanvasVisual *, struct CVisual **, bool, bool, bool); // r8
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
  __int64 (__fastcall *v21)(CAtlasedRectsVisual *, struct CVisual **, unsigned __int8, unsigned __int8, bool); // rax
  struct CVisual *v22; // rcx
  void (__fastcall *v23)(CVisual *, int); // rax
  void (__fastcall *v24)(CVisual *, int); // rax
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29[4]; // [rsp+20h] [rbp-58h]
  struct CVisual *v30; // [rsp+30h] [rbp-48h] BYREF
  CBaseObject *v31; // [rsp+38h] [rbp-40h] BYREF

  v2 = *a2;
  inserted = 0;
  v31 = 0LL;
  v30 = 0LL;
  if ( v2 )
  {
    v31 = v2;
  }
  else
  {
    v25 = CVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), &v31);
    v2 = v31;
    inserted = v25;
    if ( v25 < 0 )
    {
      v26 = 1161;
LABEL_52:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v26);
      if ( v2 )
        CBaseObject::Release(v2);
      goto LABEL_20;
    }
  }
  v6 = -1;
  v7 = 0;
LABEL_4:
  v8 = CClientArea::CloneVisualTree;
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
      v21 = *(__int64 (__fastcall **)(CAtlasedRectsVisual *, struct CVisual **, unsigned __int8, unsigned __int8, bool))(*(_QWORD *)v20 + 136LL);
      if ( (char *)v21 == (char *)CCanvasVisual::CloneVisualTree )
      {
        CCanvasVisual::CloneVisualTree(v20, &v30, 0, 0, 1);
      }
      else if ( v21 == CAtlasedRectsVisual::CloneVisualTree )
      {
        CAtlasedRectsVisual::CloneVisualTree(v20, &v30, 0, 0, 1);
      }
      else if ( (char *)v21 == (char *)CClientArea::CloneVisualTree )
      {
        CClientArea::CloneVisualTree(v20, &v30, 0, 0, 1);
      }
      else if ( (char *)v21 == (char *)CText::CloneVisualTree )
      {
        CText::CloneVisualTree(v20, &v30, 0, 0, 1);
      }
      else if ( (char *)v21 == (char *)CRenderDataVisual::CloneVisualTree )
      {
        CRenderDataVisual::CloneVisualTree(v20, &v30, 0, 0, 1);
      }
      else
      {
        v21(v20, &v30, 0, 0, *(_DWORD *)v29);
      }
      v9 = CCanvasVisual::CloneVisualTree;
      v8 = CClientArea::CloneVisualTree;
      if ( v30 )
      {
        inserted = VisualCollection::InsertRelative((CBaseObject *)((char *)v2 + 32), (struct CVisual **)v30, 0LL, 0, 1);
        if ( inserted < 0 )
        {
          v26 = 1186;
          goto LABEL_52;
        }
        v22 = v30;
        v9 = CCanvasVisual::CloneVisualTree;
        v8 = CClientArea::CloneVisualTree;
        if ( v30 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v30 + 2, 0xFFFFFFFF) == 1 && v22 )
            (**(void (__fastcall ***)(struct CVisual *, __int64, __int64 (__fastcall *)(CCanvasVisual *, struct CVisual **, bool, bool, bool), __int64 (__fastcall *)(CClientArea *, struct CVisual **, bool, bool, bool)))v22)(
              v22,
              1LL,
              CCanvasVisual::CloneVisualTree,
              CClientArea::CloneVisualTree);
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
    v23 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v2 + 24LL);
    if ( v23 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v2, 8);
    else
      ((void (__fastcall *)(CBaseObject *, __int64, __int64 (__fastcall *)(CCanvasVisual *, struct CVisual **, bool, bool, bool), __int64 (__fastcall *)(CClientArea *, struct CVisual **, bool, bool, bool)))v23)(
        v2,
        8LL,
        CCanvasVisual::CloneVisualTree,
        CClientArea::CloneVisualTree);
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
    ((void (__fastcall *)(CBaseObject *, const struct tagSIZE *, __int64 (__fastcall *)(CCanvasVisual *, struct CVisual **, bool, bool, bool), __int64 (__fastcall *)(CClientArea *, struct CVisual **, bool, bool, bool)))v11)(
      v2,
      v10,
      v9,
      v8);
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
    (*(void (__fastcall **)(CBaseObject *, __int64))(v27 + 24))(v2, 16LL);
  }
  v16 = *((_BYTE *)v2 + 84);
  v17 = *((_BYTE *)this + 84) & 1;
  if ( v17 != (v16 & 1) )
  {
    v28 = *(_QWORD *)v2;
    *((_BYTE *)v2 + 84) = v17 | v16 & 0xFE;
    (*(void (__fastcall **)(CBaseObject *, __int64))(v28 + 24))(v2, 16LL);
  }
  if ( *((_DWORD *)this + 49) )
  {
    *(_OWORD *)((char *)v2 + 196) = *(_OWORD *)((char *)this + 196);
    *(_OWORD *)((char *)v2 + 212) = *(_OWORD *)((char *)this + 212);
    *(_QWORD *)((char *)v2 + 228) = *(_QWORD *)((char *)this + 228);
    v24 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v2 + 24LL);
    if ( v24 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v2, 64);
    else
      v24(v2, 64);
  }
  v18 = *(void (__fastcall **)(CVisual *__hidden, double))(*(_QWORD *)v2 + 88LL);
  if ( v18 == CVisual::SetOpacity )
    CVisual::SetOpacity(v2, *((double *)this + 23));
  else
    ((void (__fastcall *)(CBaseObject *))v18)(v2);
  *a2 = v2;
LABEL_20:
  if ( v30 )
    CBaseObject::Release(v30);
  return (unsigned int)inserted;
}
