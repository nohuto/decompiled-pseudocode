/*
 * XREFs of ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C0123BEC
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0123DBC (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C0129C50 (-bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall EPATHOBJ::vUpdateCosmeticStyleState(EPATHOBJ *this, struct SURFACE *a2, struct _LINEATTRS *a3)
{
  int v4; // ebp
  _DWORD *v6; // rax
  int v7; // ebp
  int v8; // r13d
  PFLOAT_LONG pstyle; // rdx
  union _FLOAT_LONG *i; // rcx
  struct _POINTFIX *j; // rbx
  FIX x; // eax
  unsigned __int64 v13; // rdi
  struct _POINTFIX *v14; // r14
  struct _POINTFIX *v15; // rsi
  unsigned __int64 v16; // r12
  __int64 v17; // rcx
  FIX y; // eax
  int v19; // eax
  BOOL v20; // edx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // [rsp+20h] [rbp-88h]
  unsigned int v25; // [rsp+24h] [rbp-84h]
  unsigned int v26; // [rsp+28h] [rbp-80h]
  _BYTE v28[32]; // [rsp+38h] [rbp-70h] BYREF
  int v29; // [rsp+58h] [rbp-50h]
  int v30; // [rsp+5Ch] [rbp-4Ch]
  int v31; // [rsp+60h] [rbp-48h]
  int v32; // [rsp+64h] [rbp-44h]

  v4 = 2;
  if ( (a3->fl & 2) != 0 )
  {
    v24 = 1;
    v8 = 1;
    v25 = 1;
    v26 = 1;
  }
  else
  {
    v6 = (_DWORD *)*((_QWORD *)a2 + 6);
    v7 = 0;
    v8 = v6[559];
    v25 = v6[558];
    pstyle = a3->pstyle;
    v24 = v6[557];
    v26 = v8;
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
      if ( !(unsigned int)DDA_CLIPLINE::bInit((DDA_CLIPLINE *)v28, v14, v15) )
        goto LABEL_26;
      if ( v15->x - v14->x < 0 )
        v17 = (unsigned int)(v14->x - v15->x);
      else
        v17 = (unsigned int)(v15->x - v14->x);
      y = v14->y;
      if ( v15->y - y < 0 )
        v19 = y - v15->y;
      else
        v19 = v15->y - y;
      if ( v24 == v25 )
      {
        v20 = (int)v17 >= v19;
      }
      else
      {
        if ( (unsigned __int64)v24 * v17 >= v25 * (unsigned __int64)(unsigned int)v19 )
        {
LABEL_21:
          if ( (v28[0] & 5) == 0 )
            goto LABEL_22;
          goto LABEL_37;
        }
        v20 = 0;
      }
      if ( v20 )
        goto LABEL_21;
      if ( (v28[0] & 5) != 0 )
      {
LABEL_22:
        v21 = v24;
        v22 = v31 - v29;
        goto LABEL_23;
      }
LABEL_37:
      v21 = v25;
      v22 = v32 - v30;
LABEL_23:
      v23 = (unsigned int)(v22 + 1);
      if ( (v23 & 0xFFFF0000) != 0 )
      {
        v13 = ((int)v13 + v21 * v23) % (unsigned __int64)(unsigned int)v4;
      }
      else
      {
        LODWORD(v13) = v21 * v23 + v13;
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
  a3->elStyleState.l = (unsigned __int16)((unsigned int)v13 % v26) | ((unsigned __int16)((unsigned int)v13 / v26) << 16);
}
