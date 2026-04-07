/*
 * XREFs of ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x18001A780
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180018C40 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x180014E24 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800182E4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLayout(CTopLevelWindow *this, char a2)
{
  const struct tagSIZE *v2; // rsi
  struct tagSIZE *v5; // rcx
  __int64 (__fastcall *v6)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v7; // eax
  int v8; // ebx
  __int64 v9; // r8
  LONG v10; // r9d
  unsigned int v11; // r11d
  int v12; // r10d
  LONG v13; // ecx
  unsigned int v15; // edx
  int cx; // edx
  LONG v17; // eax
  int v18; // eax
  int cy; // eax
  LONG v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  char *v23; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-8h]
  __int16 v25; // [rsp+3Ch] [rbp-4h]
  struct tagSIZE v26; // [rsp+70h] [rbp+30h] BYREF
  struct tagPOINT v27; // [rsp+80h] [rbp+40h] BYREF

  v2 = (const struct tagSIZE *)((char *)this + 120);
  v5 = (struct tagSIZE *)*((_QWORD *)this + 32);
  v6 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v5 + 80LL);
  if ( v6 == CVisual::SetSize )
    v7 = CVisual::SetSize(v5, v2);
  else
    v7 = v6(v5, v2);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1162u);
    return (unsigned int)v8;
  }
  v9 = *((_QWORD *)this + 3);
  v8 = 0;
  if ( !v9 )
    goto LABEL_8;
  v10 = *((_DWORD *)this + 32);
  v11 = *((_DWORD *)this + 33);
  v12 = *((_DWORD *)this + 35);
  v13 = *((_DWORD *)this + 34);
  if ( __PAIR64__(v11, v10) == 0x7FFFFFFF7FFFFFFFLL && v13 == 0x7FFFFFFF && v12 == 0x7FFFFFFF )
    goto LABEL_8;
  v26 = *v2;
  if ( v11 == 0x7FFFFFFF )
  {
    v17 = 0;
    if ( v10 != 0x7FFFFFFF )
      v17 = v10;
  }
  else
  {
    if ( v10 != 0x7FFFFFFF )
    {
      v15 = *(_DWORD *)(v9 + 120) - v11;
      v27.x = v10;
      cx = v15 - v10;
      goto LABEL_20;
    }
    v17 = *(_DWORD *)(v9 + 120) - v11 - v2->cx;
  }
  cx = v26.cx;
  v27.x = v17;
LABEL_20:
  if ( v12 == 0x7FFFFFFF )
  {
    v20 = 0;
    if ( v13 != 0x7FFFFFFF )
      v20 = v13;
  }
  else
  {
    v18 = *(_DWORD *)(v9 + 124);
    if ( v13 != 0x7FFFFFFF )
    {
      v27.y = v13;
      cy = v18 - v13 - v12;
      goto LABEL_27;
    }
    v20 = v18 - v2->cy - v12;
  }
  v27.y = v20;
  cy = v26.cy;
LABEL_27:
  if ( cx <= 0 )
    cx = 0;
  v26.cx = cx;
  if ( cy <= 0 )
    cy = 0;
  v26.cy = cy;
  v21 = (*(__int64 (__fastcall **)(CTopLevelWindow *, struct tagSIZE *))(*(_QWORD *)this + 80LL))(this, &v26);
  v8 = v21;
  if ( v21 >= 0 )
  {
    CVisual::SetOffset((struct tagPOINT *)this, &v27);
LABEL_8:
    if ( a2 )
    {
      v24 = -1;
      v23 = (char *)this + 32;
      v25 = 0;
      while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v23) )
      {
        v22 = *(_QWORD *)(*((_QWORD *)v23 + 2) + 8LL * v24);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, 2LL);
      }
    }
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x160u);
LABEL_9:
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1164u);
  return (unsigned int)v8;
}
