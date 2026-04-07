/*
 * XREFs of ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180020980
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18001C8A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x18001F8D0 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180038390 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::UpdateLayout(CCanvasVisual *this)
{
  int v1; // esi
  const struct tagSIZE *v3; // rcx
  _DWORD *v4; // r8
  __int64 v5; // r9
  __int64 (__fastcall *v6)(CVisual *__hidden, const struct tagSIZE *); // rax
  bool v7; // zf
  void (__fastcall *v8)(CVisual *__hidden, unsigned int); // rax
  int v9; // eax
  CVisual *v10; // rdi
  int v11; // ecx
  void (__fastcall *v12)(CVisual *__hidden); // rax
  __int64 v13; // rdi
  char v14; // bp
  CVisual *v15; // rcx
  void (__fastcall *v16)(CVisual *__hidden, unsigned int); // rax
  int v17; // eax
  CVisual *v18; // r14
  int v19; // ecx
  void (__fastcall *v20)(CVisual *__hidden); // rax
  void (__fastcall *v21)(CVisual *__hidden, unsigned int); // rax
  int v22; // eax
  CVisual *i; // rbx
  int v25; // ecx
  void (__fastcall *v26)(CVisual *__hidden); // rax
  void (__fastcall *v27)(CVisual *__hidden, unsigned int); // rax
  int v28; // eax
  struct tagSIZE v29[2]; // [rsp+30h] [rbp-38h] BYREF
  struct tagPOINT v30; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  v3 = (const struct tagSIZE *)*((_QWORD *)this + 3);
  if ( v3
    && CVisual::DoCanvasLayout(v3 + 15, (const struct _MARGINS *)this + 8, (const struct tagSIZE *)this + 15, &v30, v29) )
  {
    v5 = *(_QWORD *)this;
    v6 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
    if ( v6 == CVisual::SetSize )
    {
      if ( __PAIR64__(*((_DWORD *)this + 31), *v4) != *(_QWORD *)v29 )
      {
        v7 = (*((_BYTE *)this + 84) & 1) == 0;
        *(struct tagSIZE *)v4 = v29[0];
        if ( !v7 )
          (*(void (__fastcall **)(CCanvasVisual *, __int64))(v5 + 24))(this, 16LL);
        v8 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
        if ( v8 == CVisual::SetDirtyFlags )
        {
          v9 = *((_DWORD *)this + 20);
          if ( (v9 & 2) == 0 )
          {
            v10 = (CVisual *)*((_QWORD *)this + 3);
            for ( *((_DWORD *)this + 20) = v9 | 2; v10; v10 = (CVisual *)*((_QWORD *)v10 + 3) )
            {
              v11 = *((_DWORD *)v10 + 20);
              if ( (v11 & 1) != 0 )
                break;
              v12 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v10 + 32LL);
              if ( v12 == CVisual::SetDirtyChildren )
                *((_DWORD *)v10 + 20) = v11 | 1;
              else
                v12(v10);
            }
          }
        }
        else if ( v8 == CThumbnailVisual::SetDirtyFlags )
        {
          CThumbnailVisual::SetDirtyFlags(this, 2u);
        }
        else
        {
          v8(this, 2u);
        }
      }
    }
    else
    {
      v28 = v6(this, v29);
      v1 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x160u);
        goto LABEL_28;
      }
    }
    if ( v30 != *((_QWORD *)this + 14) )
    {
      *((struct tagPOINT *)this + 14) = v30;
      v27 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
      if ( v27 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(this, 8u);
      else
        v27(this, 8u);
    }
  }
  LODWORD(v13) = -1;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 )
    {
      v13 = (unsigned int)(v13 + 1);
    }
    else
    {
      v14 = 1;
      v13 = 0LL;
    }
    if ( (unsigned int)v13 >= *((_DWORD *)this + 18) )
      break;
    v15 = *(CVisual **)(*((_QWORD *)this + 6) + 8 * v13);
    v16 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v15 + 24LL);
    if ( v16 == CVisual::SetDirtyFlags )
    {
      v17 = *((_DWORD *)v15 + 20);
      if ( (v17 & 2) == 0 )
      {
        v18 = (CVisual *)*((_QWORD *)v15 + 3);
        for ( *((_DWORD *)v15 + 20) = v17 | 2; v18; v18 = (CVisual *)*((_QWORD *)v18 + 3) )
        {
          v19 = *((_DWORD *)v18 + 20);
          if ( (v19 & 1) != 0 )
            break;
          v20 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v18 + 32LL);
          if ( v20 == CVisual::SetDirtyChildren )
            *((_DWORD *)v18 + 20) = v19 | 1;
          else
            v20(v18);
        }
      }
    }
    else
    {
      v16(v15, 2u);
    }
  }
LABEL_28:
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x51u);
  }
  else
  {
    v21 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v21 == CVisual::SetDirtyFlags )
    {
      v22 = *((_DWORD *)this + 20);
      if ( (v22 & 4) == 0 )
      {
        *((_DWORD *)this + 20) = v22 | 4;
        for ( i = (CVisual *)*((_QWORD *)this + 3); i; i = (CVisual *)*((_QWORD *)i + 3) )
        {
          v25 = *((_DWORD *)i + 20);
          if ( (v25 & 1) != 0 )
            break;
          v26 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)i + 32LL);
          if ( v26 == CVisual::SetDirtyChildren )
            *((_DWORD *)i + 20) = v25 | 1;
          else
            v26(i);
        }
      }
    }
    else
    {
      v21(this, 4u);
    }
  }
  if ( v1 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x39u);
  return (unsigned int)v1;
}
