/*
 * XREFs of ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C0130A60
 * Callers:
 *     ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C013086C (-bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z.c)
 * Callees:
 *     ?vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C0130D28 (-vEdgeDDA@@YAXPEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
 *     ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C0130E78 (-vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z.c)
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
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  LONG v22; // ecx
  LONG v23; // eax
  __int64 v24; // rsi
  int v25; // edi
  int v26; // r9d
  __int64 v27; // rcx
  int v28; // ecx
  LONG v29; // [rsp+20h] [rbp-79h] BYREF
  LONG v30; // [rsp+24h] [rbp-75h]
  int v31; // [rsp+28h] [rbp-71h]
  int v32; // [rsp+2Ch] [rbp-6Dh]
  __int64 v33; // [rsp+30h] [rbp-69h]
  __int64 v34; // [rsp+38h] [rbp-61h]
  int v35; // [rsp+40h] [rbp-59h]
  int v36; // [rsp+44h] [rbp-55h]
  int v37; // [rsp+48h] [rbp-51h]
  LONG v38; // [rsp+4Ch] [rbp-4Dh]
  int v39; // [rsp+50h] [rbp-49h]
  int v40; // [rsp+54h] [rbp-45h]
  int v41; // [rsp+58h] [rbp-41h]
  __int64 v42; // [rsp+60h] [rbp-39h]
  __int64 v43; // [rsp+68h] [rbp-31h]
  __int64 v44; // [rsp+70h] [rbp-29h]
  __int64 v45; // [rsp+78h] [rbp-21h]
  __int64 v46; // [rsp+80h] [rbp-19h]
  __int64 v47; // [rsp+88h] [rbp-11h]
  __int64 v48; // [rsp+90h] [rbp-9h]
  __int64 v49; // [rsp+98h] [rbp-1h]
  __int64 v50; // [rsp+A0h] [rbp+7h]
  __int64 v51; // [rsp+A8h] [rbp+Fh]
  __int64 v52; // [rsp+100h] [rbp+67h]
  __int64 v53; // [rsp+110h] [rbp+77h]
  __int64 v54; // [rsp+118h] [rbp+7Fh]

  v4 = *((_QWORD *)a3 + 6);
  v6 = *((_QWORD *)a3 + 7);
  v8 = *((_QWORD *)a3 + 8);
  y = a1->y;
  v52 = *((_QWORD *)a3 + 9);
  v49 = v52;
  v10 = a2->y;
  v46 = v4;
  v47 = v6;
  v48 = v8;
  if ( v10 < y )
  {
    x = a2->x;
    v12 = a1->x;
    v13 = y - v10;
    v32 = y - v10;
    y = v10;
    v30 = v10;
  }
  else
  {
    x = a1->x;
    v12 = a2->x;
    v13 = v10 - y;
    v32 = v10 - y;
    v30 = y;
  }
  v29 = x;
  v14 = v12 - x;
  v15 = y - *((_DWORD *)a3 + 35);
  v21 = x - *((_DWORD *)a3 + 34);
  v53 = *((_QWORD *)a3 + 2);
  v31 = v14;
  v16 = *((_QWORD *)a3 + 3);
  v42 = *((_QWORD *)a3 + 10) + v4 * v15 + v53 * v21;
  v54 = v16;
  v17 = v6 * v15 + v16 * v21;
  v18 = *((_QWORD *)a3 + 4);
  v43 = *((_QWORD *)a3 + 11) + v17;
  v50 = v18;
  v19 = v8 * v15 + v18 * v21;
  v20 = *((_QWORD *)a3 + 5);
  v44 = *((_QWORD *)a3 + 12) + v19;
  v51 = v20;
  v45 = *((_QWORD *)a3 + 13) + v52 * v15 + v20 * v21;
  LODWORD(v21) = 0;
  if ( !v13 )
  {
    vHorizontalLine(a1, a2, a3, (struct _TRIDDA *)&v29);
    return;
  }
  v39 = 1;
  v22 = y + v13;
  v40 = y - *((_DWORD *)a3 + 28);
  v23 = *((_DWORD *)a3 + 3);
  v41 = v13;
  if ( y <= v23 && v22 >= *((_DWORD *)a3 + 1) )
  {
    if ( v22 > v23 )
      v41 = v23 - y;
    v38 = y;
    v24 = v13 * (x + 1LL) - v14 * (__int64)y;
    v33 = v24 - 1;
    if ( v14 > 0 )
    {
      LODWORD(v34) = v14 / v13;
      v28 = v13 * (v14 / v13);
      v25 = v14 / v13;
    }
    else
    {
      if ( v14 >= 0 )
      {
        v25 = 0;
        v34 = 0LL;
        v26 = 0;
LABEL_11:
        v27 = y * v26 + v24 - 1;
        if ( v27 <= 0 )
        {
          if ( v27 < 0 )
            v21 = ~(~v27 / v13);
        }
        else
        {
          LODWORD(v21) = v27 / v13;
        }
        v35 = v27 - v21 * v13;
        v37 = v21 + y * v25;
        v36 = v13 - v35 - 1;
        v46 = v53 * v25 + v4;
        v47 = v54 * v25 + v6;
        v48 = v50 * v25 + v8;
        v49 = v51 * v25 + v52;
        vEdgeDDA(a3, (struct _TRIDDA *)&v29);
        return;
      }
      v28 = -v14;
      v31 = -v14;
      v25 = ~((-v14 - 1) / v13);
      LODWORD(v34) = v25;
      v14 = v13 * ((-v14 - 1) / v13 + 1);
    }
    v26 = v14 - v28;
    HIDWORD(v34) = v26;
    goto LABEL_11;
  }
}
