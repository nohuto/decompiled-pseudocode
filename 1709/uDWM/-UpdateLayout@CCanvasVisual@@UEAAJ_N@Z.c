/*
 * XREFs of ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180016910
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180012990 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180014E60 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCanvasVisual::UpdateLayout(CCanvasVisual *this)
{
  int v1; // esi
  const struct tagSIZE *v3; // rcx
  __int64 (__fastcall *v4)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v5; // eax
  char v6; // bp
  __int64 v7; // rdi
  CVisual *v8; // rcx
  void (__fastcall *v9)(CVisual *__hidden, unsigned int); // rax
  int v10; // eax
  CVisual *v11; // r14
  int v12; // ecx
  void (__fastcall *v13)(CVisual *__hidden); // rax
  void (__fastcall *v14)(CVisual *__hidden, unsigned int); // rax
  int v15; // eax
  CVisual *i; // rbx
  int v17; // ecx
  void (__fastcall *v19)(CVisual *__hidden); // rax
  void (__fastcall *v20)(CVisual *__hidden, unsigned int); // rax
  struct tagSIZE v21; // [rsp+70h] [rbp+8h] BYREF
  struct tagPOINT v22; // [rsp+80h] [rbp+18h] BYREF

  v1 = 0;
  v3 = (const struct tagSIZE *)*((_QWORD *)this + 3);
  if ( v3
    && CVisual::DoCanvasLayout(
         v3 + 15,
         (const struct _MARGINS *)this + 8,
         (const struct tagSIZE *)this + 15,
         &v22,
         &v21) )
  {
    v4 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
    if ( v4 == CVisual::SetSize )
      v5 = CVisual::SetSize(this, &v21);
    else
      v5 = v4(this, &v21);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x160u);
      goto LABEL_20;
    }
    if ( v22 != *((_QWORD *)this + 14) )
    {
      *((struct tagPOINT *)this + 14) = v22;
      v20 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
      if ( v20 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(this, 8u);
      else
        v20(this, 8u);
    }
  }
  v6 = 0;
  LODWORD(v7) = -1;
  while ( 1 )
  {
    if ( v6 )
    {
      v7 = (unsigned int)(v7 + 1);
    }
    else
    {
      v6 = 1;
      v7 = 0LL;
    }
    if ( (unsigned int)v7 >= *((_DWORD *)this + 18) )
      break;
    v8 = *(CVisual **)(*((_QWORD *)this + 6) + 8 * v7);
    v9 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v8 + 24LL);
    if ( v9 == CVisual::SetDirtyFlags )
    {
      v10 = *((_DWORD *)v8 + 20);
      if ( (v10 & 2) == 0 )
      {
        v11 = (CVisual *)*((_QWORD *)v8 + 3);
        for ( *((_DWORD *)v8 + 20) = v10 | 2; v11; v11 = (CVisual *)*((_QWORD *)v11 + 3) )
        {
          v12 = *((_DWORD *)v11 + 20);
          if ( (v12 & 1) != 0 )
            break;
          v13 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v11 + 32LL);
          if ( v13 == CVisual::SetDirtyChildren )
            *((_DWORD *)v11 + 20) = v12 | 1;
          else
            v13(v11);
        }
      }
    }
    else
    {
      v9(v8, 2u);
    }
  }
LABEL_20:
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x51u);
  }
  else
  {
    v14 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v14 == CVisual::SetDirtyFlags )
    {
      v15 = *((_DWORD *)this + 20);
      if ( (v15 & 4) == 0 )
      {
        *((_DWORD *)this + 20) = v15 | 4;
        for ( i = (CVisual *)*((_QWORD *)this + 3); i; i = (CVisual *)*((_QWORD *)i + 3) )
        {
          v17 = *((_DWORD *)i + 20);
          if ( (v17 & 1) != 0 )
            break;
          v19 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)i + 32LL);
          if ( v19 == CVisual::SetDirtyChildren )
            *((_DWORD *)i + 20) = v17 | 1;
          else
            v19(i);
        }
      }
    }
    else
    {
      v14(this, 4u);
    }
  }
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x39u);
  return (unsigned int)v1;
}
