/*
 * XREFs of ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C012C3F8
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00E9730 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C012FA60 (-bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall EPATHOBJ::vUpdateCosmeticStyleState(EPATHOBJ *this, struct SURFACE *a2, struct _LINEATTRS *a3)
{
  int v4; // esi
  _DWORD *v6; // rax
  int v7; // esi
  int v8; // r12d
  PFLOAT_LONG pstyle; // rdx
  union _FLOAT_LONG *i; // rcx
  struct _POINTFIX *j; // rbx
  FIX x; // eax
  unsigned __int64 v13; // rdi
  struct _POINTFIX *v14; // rbp
  struct _POINTFIX *v15; // r14
  unsigned __int64 v16; // r13
  int v17; // ecx
  FIX y; // r8d
  __int64 v19; // rdx
  FIX v20; // eax
  int v21; // ecx
  int v22; // r8d
  BOOL v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // [rsp+20h] [rbp-88h]
  unsigned int v28; // [rsp+24h] [rbp-84h]
  unsigned int v29; // [rsp+28h] [rbp-80h]
  _BYTE v31[32]; // [rsp+38h] [rbp-70h] BYREF
  int v32; // [rsp+58h] [rbp-50h]
  int v33; // [rsp+5Ch] [rbp-4Ch]
  int v34; // [rsp+60h] [rbp-48h]
  int v35; // [rsp+64h] [rbp-44h]

  v4 = 2;
  if ( (a3->fl & 2) != 0 )
  {
    v27 = 1;
    v8 = 1;
    v28 = 1;
    v29 = 1;
  }
  else
  {
    v6 = (_DWORD *)*((_QWORD *)a2 + 6);
    v7 = 0;
    v8 = v6[559];
    v28 = v6[558];
    pstyle = a3->pstyle;
    v27 = v6[557];
    v29 = v8;
    for ( i = &pstyle[a3->cstyle]; i > pstyle; v7 += i->l )
      --i;
    v4 = 2 * v8 * v7;
  }
  for ( j = *(struct _POINTFIX **)(*((_QWORD *)this + 1) + 40LL); ; j = (struct _POINTFIX *)j[1] )
  {
    x = j[2].x;
    if ( (x & 1) != 0 )
      break;
  }
  LODWORD(v13) = 0;
  if ( (x & 4) == 0 )
    LODWORD(v13) = LOWORD(a3->elStyleState.e) + v8 * HIWORD(a3->elStyleState.l);
  v14 = j + 3;
  v15 = j + 4;
  while ( 2 )
  {
    v16 = (unsigned __int64)&j[(unsigned int)j[2].y + 3];
    while ( (unsigned __int64)v15 < v16 )
    {
      if ( !(unsigned int)DDA_CLIPLINE::bInit((DDA_CLIPLINE *)v31, v14, v15) )
        goto LABEL_26;
      v17 = v15->x - v14->x;
      y = v14->y;
      v19 = (unsigned int)(v14->x - v15->x);
      v20 = v15->y;
      if ( v17 >= 0 )
        v19 = (unsigned int)v17;
      v21 = v20 - y;
      v22 = y - v20;
      if ( v21 >= 0 )
        v22 = v21;
      if ( v27 == v28 )
      {
        v23 = (int)v19 >= v22;
      }
      else
      {
        if ( (unsigned __int64)v27 * v19 >= v28 * (unsigned __int64)(unsigned int)v22 )
        {
LABEL_21:
          if ( (v31[0] & 5) == 0 )
            goto LABEL_22;
          goto LABEL_35;
        }
        v23 = 0;
      }
      if ( v23 )
        goto LABEL_21;
      if ( (v31[0] & 5) != 0 )
      {
LABEL_22:
        v24 = v27;
        v25 = v34 - v32;
        goto LABEL_23;
      }
LABEL_35:
      v24 = v28;
      v25 = v35 - v33;
LABEL_23:
      v26 = (unsigned int)(v25 + 1);
      if ( (v26 & 0xFFFF0000) != 0 )
      {
        v13 = ((int)v13 + v24 * v26) % (unsigned __int64)(unsigned int)v4;
      }
      else
      {
        LODWORD(v13) = v24 * v26 + v13;
        if ( (int)v13 >= v4 )
          LODWORD(v13) = (int)v13 % v4;
      }
LABEL_26:
      v14 = v15++;
    }
    j = (struct _POINTFIX *)*j;
    if ( j )
    {
      v15 = j + 3;
      continue;
    }
    break;
  }
  a3->elStyleState.l = (unsigned __int16)((unsigned int)v13 % v29) | ((unsigned __int16)((unsigned int)v13 / v29) << 16);
}
