/*
 * XREFs of ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180018770
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180018A20 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::UpdateLayout(CCanvasVisual *this)
{
  int v1; // esi
  const struct tagSIZE *v3; // rcx
  __int64 v4; // r8
  __int64 (__fastcall *v5)(CVisual *__hidden, const struct tagSIZE *); // rax
  bool v6; // zf
  void (__fastcall *v7)(CThumbnailVisual *, int); // rax
  int v8; // eax
  CVisual *v9; // rdi
  int v10; // ecx
  void (__fastcall *v11)(CVisual *__hidden); // rax
  __int64 v12; // rdi
  char v13; // bp
  CVisual *v14; // rcx
  void (__fastcall *v15)(CVisual *__hidden, unsigned int); // rax
  int v16; // eax
  CVisual *v17; // r14
  int v18; // ecx
  void (__fastcall *v19)(CVisual *__hidden); // rax
  void (__fastcall *v20)(CVisual *__hidden, unsigned int); // rax
  int v21; // eax
  CVisual *i; // rbx
  int v24; // ecx
  void (__fastcall *v25)(CVisual *__hidden); // rax
  void (__fastcall *v26)(CVisual *__hidden, unsigned int); // rax
  int v27; // eax
  struct tagSIZE v28; // [rsp+60h] [rbp+8h] BYREF
  struct tagPOINT v29; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0;
  v3 = (const struct tagSIZE *)*((_QWORD *)this + 3);
  if ( v3
    && CVisual::DoCanvasLayout(
         v3 + 15,
         (const struct _MARGINS *)this + 8,
         (const struct tagSIZE *)this + 15,
         &v29,
         &v28) )
  {
    v4 = *(_QWORD *)this;
    v5 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
    if ( v5 == CVisual::SetSize )
    {
      if ( *((_QWORD *)this + 15) != v28 )
      {
        v6 = (*((_BYTE *)this + 84) & 1) == 0;
        *((struct tagSIZE *)this + 15) = v28;
        if ( !v6 )
        {
          (*(void (__fastcall **)(CCanvasVisual *, __int64))(v4 + 24))(this, 16LL);
          v4 = *(_QWORD *)this;
        }
        v7 = *(void (__fastcall **)(CThumbnailVisual *, int))(v4 + 24);
        if ( (char *)v7 == (char *)CVisual::SetDirtyFlags )
        {
          v8 = *((_DWORD *)this + 20);
          if ( (v8 & 2) == 0 )
          {
            v9 = (CVisual *)*((_QWORD *)this + 3);
            for ( *((_DWORD *)this + 20) = v8 | 2; v9; v9 = (CVisual *)*((_QWORD *)v9 + 3) )
            {
              v10 = *((_DWORD *)v9 + 20);
              if ( (v10 & 1) != 0 )
                break;
              v11 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v9 + 32LL);
              if ( v11 == CVisual::SetDirtyChildren )
                *((_DWORD *)v9 + 20) = v10 | 1;
              else
                v11(v9);
            }
          }
        }
        else if ( v7 == CThumbnailVisual::SetDirtyFlags )
        {
          CThumbnailVisual::SetDirtyFlags(this, 2);
        }
        else
        {
          v7(this, 2);
        }
      }
    }
    else
    {
      v27 = v5(this, &v28);
      v1 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x11Cu);
        goto LABEL_28;
      }
    }
    if ( v29 != *((_QWORD *)this + 14) )
    {
      *((struct tagPOINT *)this + 14) = v29;
      v26 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
      if ( v26 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(this, 8u);
      else
        v26(this, 8u);
    }
  }
  LODWORD(v12) = -1;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 )
    {
      v12 = (unsigned int)(v12 + 1);
    }
    else
    {
      v13 = 1;
      v12 = 0LL;
    }
    if ( (unsigned int)v12 >= *((_DWORD *)this + 18) )
      break;
    v14 = *(CVisual **)(*((_QWORD *)this + 6) + 8 * v12);
    v15 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v14 + 24LL);
    if ( v15 == CVisual::SetDirtyFlags )
    {
      v16 = *((_DWORD *)v14 + 20);
      if ( (v16 & 2) == 0 )
      {
        v17 = (CVisual *)*((_QWORD *)v14 + 3);
        for ( *((_DWORD *)v14 + 20) = v16 | 2; v17; v17 = (CVisual *)*((_QWORD *)v17 + 3) )
        {
          v18 = *((_DWORD *)v17 + 20);
          if ( (v18 & 1) != 0 )
            break;
          v19 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v17 + 32LL);
          if ( v19 == CVisual::SetDirtyChildren )
            *((_DWORD *)v17 + 20) = v18 | 1;
          else
            v19(v17);
        }
      }
    }
    else
    {
      v15(v14, 2u);
    }
  }
LABEL_28:
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x51u);
  }
  else
  {
    v20 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v20 == CVisual::SetDirtyFlags )
    {
      v21 = *((_DWORD *)this + 20);
      if ( (v21 & 4) == 0 )
      {
        *((_DWORD *)this + 20) = v21 | 4;
        for ( i = (CVisual *)*((_QWORD *)this + 3); i; i = (CVisual *)*((_QWORD *)i + 3) )
        {
          v24 = *((_DWORD *)i + 20);
          if ( (v24 & 1) != 0 )
            break;
          v25 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)i + 32LL);
          if ( v25 == CVisual::SetDirtyChildren )
            *((_DWORD *)i + 20) = v24 | 1;
          else
            v25(i);
        }
      }
    }
    else
    {
      v20(this, 4u);
    }
  }
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x39u);
  return (unsigned int)v1;
}
