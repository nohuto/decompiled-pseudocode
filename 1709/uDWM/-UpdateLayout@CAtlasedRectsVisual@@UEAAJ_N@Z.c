/*
 * XREFs of ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180023C40
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180018C40 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateLayout(CAtlasedRectsVisual *this)
{
  __int64 v2; // rcx
  int v3; // ebp
  int v4; // esi
  unsigned int v5; // r8d
  int v6; // edx
  int v7; // edi
  struct tagSIZE v8; // rax
  unsigned int v9; // eax
  int v10; // eax
  __int64 (__fastcall *v11)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v12; // eax
  __int64 v13; // rdi
  char v14; // si
  CVisual *v15; // rcx
  void (__fastcall *v16)(CVisual *, int); // rax
  int v17; // eax
  CVisual *v18; // r14
  int v19; // ecx
  void (__fastcall *v20)(CVisual *); // rax
  void (__fastcall *v21)(CVisual *, int); // rax
  int v23; // eax
  int v24; // eax
  struct tagSIZE v25; // [rsp+70h] [rbp+8h] BYREF
  __int64 v26; // [rsp+80h] [rbp+18h]

  v2 = *((_QWORD *)this + 3);
  v3 = 0;
  if ( v2 )
  {
    v4 = *((_DWORD *)this + 32);
    v5 = *((_DWORD *)this + 33);
    v6 = *((_DWORD *)this + 35);
    v7 = *((_DWORD *)this + 34);
    if ( __PAIR64__(v5, v4) != 0x7FFFFFFF7FFFFFFFLL || v7 != 0x7FFFFFFF || v6 != 0x7FFFFFFF )
    {
      v8 = (struct tagSIZE)*((_QWORD *)this + 15);
      v25 = v8;
      if ( v5 == 0x7FFFFFFF )
      {
        v23 = 0;
        if ( v4 != 0x7FFFFFFF )
          v23 = v4;
        v4 = v23;
        LODWORD(v26) = v23;
      }
      else if ( v4 == 0x7FFFFFFF )
      {
        v4 = *(_DWORD *)(v2 + 120) - v5 - v8.cx;
        LODWORD(v26) = v4;
      }
      else
      {
        v9 = *(_DWORD *)(v2 + 120) - v5;
        LODWORD(v26) = v4;
        v25.cx = v9 - v4;
      }
      if ( v6 == 0x7FFFFFFF )
      {
        v24 = 0;
        if ( v7 != 0x7FFFFFFF )
          v24 = v7;
        v7 = v24;
        HIDWORD(v26) = v24;
      }
      else if ( v7 == 0x7FFFFFFF )
      {
        v7 = *(_DWORD *)(v2 + 124) - *((_DWORD *)this + 31) - v6;
        HIDWORD(v26) = v7;
      }
      else
      {
        v10 = *(_DWORD *)(v2 + 124) - v7;
        HIDWORD(v26) = v7;
        v25.cy = v10 - v6;
      }
      if ( v25.cx <= 0 )
        v25.cx = 0;
      if ( v25.cy <= 0 )
        v25.cy = 0;
      v11 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
      if ( v11 == CVisual::SetSize )
        v12 = CVisual::SetSize((struct tagSIZE *)this, &v25);
      else
        v12 = v11((struct tagSIZE *)this, &v25);
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x160u);
        goto LABEL_31;
      }
      if ( v4 != *((_DWORD *)this + 28) || v7 != *((_DWORD *)this + 29) )
      {
        *((_QWORD *)this + 14) = v26;
        (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
      }
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
    v16 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v15 + 24LL);
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
          v20 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v18 + 32LL);
          if ( v20 == CVisual::SetDirtyChildren )
            *((_DWORD *)v18 + 20) = v19 | 1;
          else
            v20(v18);
        }
      }
    }
    else
    {
      v16(v15, 2);
    }
  }
LABEL_31:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xC6u);
  }
  else
  {
    v21 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)this + 24LL);
    if ( v21 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 4096);
    else
      v21(this, 4096);
  }
  return (unsigned int)v3;
}
