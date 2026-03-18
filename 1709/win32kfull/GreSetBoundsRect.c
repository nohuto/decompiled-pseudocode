/*
 * XREFs of GreSetBoundsRect @ 0x1C010359C
 * Callers:
 *     NtGdiSetBoundsRect @ 0x1C0103540 (NtGdiSetBoundsRect.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0018388 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C001B914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GreSetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  unsigned int v5; // r15d
  int v6; // r12d
  struct tagRECT *v7; // rdi
  int v8; // ebx
  BOOL v9; // eax
  __int64 v10; // rdx
  int v11; // r9d
  int v12; // r8d
  __int128 v14; // xmm0
  LONG v15; // ecx
  LONG v16; // eax
  LONG v17; // edx
  LONG v18; // r8d
  LONG v19; // eax
  LONG v20; // r9d
  LONG v21; // eax
  LONG v22; // eax
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // edx
  LONG v27; // r8d
  LONG v28; // ecx
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // r9d
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  _QWORD v37[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v38[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v39[2]; // [rsp+40h] [rbp-30h] BYREF
  LONG x; // [rsp+50h] [rbp-20h]
  LONG y; // [rsp+54h] [rbp-1Ch]
  LONG v42; // [rsp+58h] [rbp-18h]
  LONG v43; // [rsp+5Ch] [rbp-14h]

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v37, a1);
  if ( !v37[0] )
    return v5;
  v6 = 0;
  if ( a3 < 0 )
  {
    v7 = (struct tagRECT *)(v37[0] + 1480LL);
    v8 = 32;
  }
  else if ( (a3 & 0x4000) != 0 )
  {
    v7 = (struct tagRECT *)(v37[0] + 1496LL);
    v8 = 64;
  }
  else
  {
    v7 = (struct tagRECT *)(v37[0] + 1512LL);
    v8 = 128;
  }
  v9 = IsRectEmptyInl(v7);
  v5 = v11 | (v9 ? 1 : 3) | (v12 != 0 ? 4 : 8);
  if ( (a3 & 1) != 0 )
  {
    v7->top = 0x7FFFFFFF;
    v7->left = 0x7FFFFFFF;
    v7->bottom = 0x80000000;
    v7->right = 0x80000000;
    v10 = v37[0];
  }
  if ( (a3 & 2) == 0 )
    goto LABEL_8;
  if ( v11 )
    goto LABEL_87;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v38, (struct XDCOBJ *)v37, 516);
  if ( (*(_DWORD *)(v38[0] + 32LL) & 1) != 0 )
  {
    if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, a2, 2LL) )
      goto LABEL_87;
    goto LABEL_20;
  }
  v14 = *(_OWORD *)&a2->x;
  x = a2->x;
  y = a2[1].y;
  v42 = a2[1].x;
  v43 = a2->y;
  *(_OWORD *)&v39[0].x = v14;
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v38, v39, 4LL) )
  {
LABEL_20:
    v6 = 1;
    goto LABEL_87;
  }
  v15 = v39[1].x;
  v16 = v39[1].x;
  v17 = v39[0].x;
  v18 = x;
  if ( v39[0].x < v39[1].x )
    v16 = v39[0].x;
  if ( v16 >= x )
  {
    v19 = x;
  }
  else
  {
    v19 = v39[1].x;
    if ( v39[0].x < v39[1].x )
      v19 = v39[0].x;
  }
  v20 = v42;
  if ( v19 >= v42 )
  {
    v22 = v42;
  }
  else
  {
    v21 = v39[1].x;
    if ( v39[0].x < v39[1].x )
      v21 = v39[0].x;
    if ( v21 >= x )
    {
      v22 = x;
    }
    else
    {
      v22 = v39[1].x;
      if ( v39[0].x < v39[1].x )
        v22 = v39[0].x;
    }
  }
  a2->x = v22;
  v23 = v15;
  if ( v17 > v15 )
    v23 = v17;
  if ( v23 <= v18 )
  {
    v24 = v18;
  }
  else
  {
    v24 = v15;
    if ( v17 > v15 )
      v24 = v17;
  }
  if ( v24 <= v20 )
  {
    v15 = v20;
  }
  else
  {
    v25 = v15;
    if ( v17 > v15 )
      v25 = v17;
    if ( v25 <= v18 )
    {
      v15 = v18;
    }
    else if ( v17 > v15 )
    {
      v15 = v17;
    }
  }
  v26 = v39[0].y;
  v27 = y;
  a2[1].x = v15;
  v28 = v39[1].y;
  v29 = v39[1].y;
  if ( v26 < v39[1].y )
    v29 = v26;
  if ( v29 >= v27 )
  {
    v30 = v27;
  }
  else
  {
    v30 = v39[1].y;
    if ( v26 < v39[1].y )
      v30 = v26;
  }
  v31 = v43;
  if ( v30 >= v43 )
  {
    v33 = v43;
  }
  else
  {
    v32 = v39[1].y;
    if ( v26 < v39[1].y )
      v32 = v26;
    if ( v32 >= v27 )
    {
      v33 = v27;
    }
    else
    {
      v33 = v39[1].y;
      if ( v26 < v39[1].y )
        v33 = v26;
    }
  }
  a2->y = v33;
  v34 = v28;
  if ( v26 > v28 )
    v34 = v26;
  if ( v34 <= v27 )
  {
    v35 = v27;
  }
  else
  {
    v35 = v28;
    if ( v26 > v28 )
      v35 = v26;
  }
  if ( v35 <= v31 )
  {
    v28 = v31;
  }
  else
  {
    v36 = v28;
    if ( v26 > v28 )
      v36 = v26;
    if ( v36 <= v27 )
    {
      v28 = v27;
    }
    else if ( v26 > v28 )
    {
      v28 = v26;
    }
  }
  a2[1].y = v28;
LABEL_87:
  ERECTL::operator|=(v7, a2);
  v10 = v37[0];
  if ( !v6 )
  {
LABEL_8:
    if ( (a3 & 4) != 0 )
    {
      *(_DWORD *)(v10 + 36) |= v8;
      v10 = v37[0];
    }
    if ( (a3 & 8) != 0 )
    {
      *(_DWORD *)(v10 + 36) &= ~v8;
      v10 = v37[0];
    }
    goto LABEL_12;
  }
  v5 = 0;
LABEL_12:
  if ( v10 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v37);
  return v5;
}
