/*
 * XREFs of ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180026110
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180026760 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180017800 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::UpdateLayout(CVisual *this, char a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx
  unsigned int v6; // r14d
  unsigned int v7; // r8d
  int v8; // edx
  int v9; // esi
  unsigned __int64 v10; // r10
  int v11; // eax
  int v12; // eax
  __int64 (__fastcall *v13)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v14; // eax
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  char *v19; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-8h]
  __int16 v21; // [rsp+3Ch] [rbp-4h]
  struct tagSIZE v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 v23; // [rsp+80h] [rbp+40h]

  v3 = 0;
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    v6 = *((_DWORD *)this + 32);
    v7 = *((_DWORD *)this + 33);
    v8 = *((_DWORD *)this + 35);
    v9 = *((_DWORD *)this + 34);
    if ( __PAIR64__(v7, v6) != 0x7FFFFFFF7FFFFFFFLL || v9 != 0x7FFFFFFF || v8 != 0x7FFFFFFF )
    {
      v22 = (struct tagSIZE)*((_QWORD *)this + 15);
      v10 = HIDWORD(*(unsigned __int64 *)&v22);
      if ( v7 == 0x7FFFFFFF )
      {
        v16 = 0;
        if ( v6 != 0x7FFFFFFF )
          v16 = v6;
        v6 = v16;
        LODWORD(v23) = v16;
      }
      else
      {
        v11 = *(_DWORD *)(v4 + 120);
        if ( v6 == 0x7FFFFFFF )
        {
          v6 = v11 - v22.cx - v7;
          LODWORD(v23) = v6;
        }
        else
        {
          LODWORD(v23) = v6;
          v22.cx = v11 - v7 - v6;
        }
      }
      if ( v8 == 0x7FFFFFFF )
      {
        v17 = 0;
        if ( v9 != 0x7FFFFFFF )
          v17 = v9;
        v9 = v17;
        HIDWORD(v23) = v17;
      }
      else
      {
        v12 = *(_DWORD *)(v4 + 124);
        if ( v9 == 0x7FFFFFFF )
        {
          v9 = v12 - v10 - v8;
          HIDWORD(v23) = v9;
        }
        else
        {
          HIDWORD(v23) = v9;
          v22.cy = v12 - v9 - v8;
        }
      }
      if ( v22.cx <= 0 )
        v22.cx = 0;
      if ( v22.cy <= 0 )
        v22.cy = 0;
      v13 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)this + 80LL);
      if ( v13 == CVisual::SetSize )
        v14 = CVisual::SetSize((struct tagSIZE *)this, &v22);
      else
        v14 = v13((struct tagSIZE *)this, &v22);
      v3 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x11Cu);
        return v3;
      }
      if ( v6 != *((_DWORD *)this + 28) || v9 != *((_DWORD *)this + 29) )
      {
        *((_QWORD *)this + 14) = v23;
        (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
      }
    }
  }
  if ( a2 )
  {
    v20 = -1;
    v19 = (char *)this + 32;
    v21 = 0;
    while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v19) )
    {
      v18 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 8LL * v20);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, 2LL);
    }
  }
  return v3;
}
