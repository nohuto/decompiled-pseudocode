/*
 * XREFs of ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C012D47C
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C012D28C (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C012D74C (-vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 *     ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C012D89C (-vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 */

void __fastcall vCalculateLine(struct _TRIVERTEX *a1, struct _TRIVERTEX *a2, struct _TRIANGLEDATA *a3)
{
  __int64 v4; // r15
  __int64 v6; // r12
  __int64 v8; // r13
  LONG y; // r11d
  LONG v10; // eax
  LONG x; // edi
  LONG v12; // r9d
  int v13; // r10d
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  LONG v20; // ecx
  LONG v21; // eax
  __int64 v22; // rdi
  int v23; // esi
  int v24; // r9d
  __int64 v25; // rcx
  int v26; // ecx
  LONG v27; // [rsp+20h] [rbp-79h] BYREF
  LONG v28; // [rsp+24h] [rbp-75h]
  int v29; // [rsp+28h] [rbp-71h]
  int v30; // [rsp+2Ch] [rbp-6Dh]
  __int64 v31; // [rsp+30h] [rbp-69h]
  __int64 v32; // [rsp+38h] [rbp-61h]
  int v33; // [rsp+40h] [rbp-59h]
  int v34; // [rsp+44h] [rbp-55h]
  int v35; // [rsp+48h] [rbp-51h]
  LONG v36; // [rsp+4Ch] [rbp-4Dh]
  int v37; // [rsp+50h] [rbp-49h]
  int v38; // [rsp+54h] [rbp-45h]
  int v39; // [rsp+58h] [rbp-41h]
  __int64 v40; // [rsp+60h] [rbp-39h]
  __int64 v41; // [rsp+68h] [rbp-31h]
  __int64 v42; // [rsp+70h] [rbp-29h]
  __int64 v43; // [rsp+78h] [rbp-21h]
  __int64 v44; // [rsp+80h] [rbp-19h]
  __int64 v45; // [rsp+88h] [rbp-11h]
  __int64 v46; // [rsp+90h] [rbp-9h]
  __int64 v47; // [rsp+98h] [rbp-1h]
  __int64 v48; // [rsp+A0h] [rbp+7h]
  __int64 v49; // [rsp+A8h] [rbp+Fh]
  __int64 v50; // [rsp+100h] [rbp+67h]
  __int64 v51; // [rsp+110h] [rbp+77h]
  __int64 v52; // [rsp+118h] [rbp+7Fh]

  v4 = *((_QWORD *)a3 + 6);
  v6 = *((_QWORD *)a3 + 7);
  v8 = *((_QWORD *)a3 + 8);
  y = a1->y;
  v50 = *((_QWORD *)a3 + 9);
  v47 = v50;
  v10 = a2->y;
  v44 = v4;
  v45 = v6;
  v46 = v8;
  if ( v10 < y )
  {
    x = a2->x;
    v12 = a1->x;
    v13 = y - v10;
    v30 = y - v10;
    y = v10;
    v28 = v10;
  }
  else
  {
    x = a1->x;
    v12 = a2->x;
    v13 = v10 - y;
    v30 = v10 - y;
    v28 = y;
  }
  v27 = x;
  v14 = v12 - x;
  v19 = y - *((_DWORD *)a3 + 35);
  v15 = x - *((_DWORD *)a3 + 34);
  v51 = *((_QWORD *)a3 + 2);
  v29 = v14;
  v52 = *((_QWORD *)a3 + 3);
  v40 = *((_QWORD *)a3 + 10) + v4 * v19 + v15 * v51;
  v16 = *((_QWORD *)a3 + 11) + v6 * v19 + v15 * v52;
  v48 = *((_QWORD *)a3 + 4);
  v41 = v16;
  v17 = *((_QWORD *)a3 + 12) + v8 * v19 + v15 * v48;
  v49 = *((_QWORD *)a3 + 5);
  v42 = v17;
  v18 = v50 * v19 + v15 * v49;
  LODWORD(v19) = 0;
  v43 = *((_QWORD *)a3 + 13) + v18;
  if ( !v13 )
  {
    vHorizontalLine(a1, a2, a3, (struct _TRIDDA *)&v27);
    return;
  }
  v37 = 1;
  v20 = y + v13;
  v38 = y - *((_DWORD *)a3 + 28);
  v21 = *((_DWORD *)a3 + 3);
  v39 = v13;
  if ( y <= v21 && v20 >= *((_DWORD *)a3 + 1) )
  {
    if ( v20 > v21 )
      v39 = v21 - y;
    v36 = y;
    v22 = v13 + v13 * (__int64)x - v14 * (__int64)y - 1;
    v31 = v22;
    if ( v14 > 0 )
    {
      LODWORD(v32) = v14 / v13;
      v26 = v13 * (v14 / v13);
      v23 = v14 / v13;
    }
    else
    {
      if ( v14 >= 0 )
      {
        v23 = 0;
        v32 = 0LL;
        v24 = 0;
LABEL_11:
        v25 = v22 + y * v24;
        if ( v25 <= 0 )
        {
          if ( v25 < 0 )
            v19 = ~((-1 - v25) / v13);
        }
        else
        {
          LODWORD(v19) = v25 / v13;
        }
        v33 = v25 - v19 * v13;
        v35 = v19 + y * v23;
        v34 = v13 - v33 - 1;
        v44 = v51 * v23 + v4;
        v45 = v52 * v23 + v6;
        v46 = v48 * v23 + v8;
        v47 = v49 * v23 + v50;
        vEdgeDDA(a3, (struct _TRIDDA *)&v27);
        return;
      }
      v26 = -v14;
      v29 = -v14;
      v23 = ~((-v14 - 1) / v13);
      LODWORD(v32) = v23;
      v14 = v13 * ((-v14 - 1) / v13 + 1);
    }
    v24 = v14 - v26;
    HIDWORD(v32) = v24;
    goto LABEL_11;
  }
}
