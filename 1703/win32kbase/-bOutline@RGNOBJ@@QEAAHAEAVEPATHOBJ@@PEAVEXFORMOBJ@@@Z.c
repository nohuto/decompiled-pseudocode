/*
 * XREFs of ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0097120
 * Callers:
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00976F0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0023090 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0023200 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0023250 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bOutline(RGNOBJ *this, struct EPATHOBJ *a2, struct EXFORMOBJ *a3)
{
  struct EXFORMOBJ *v3; // r9
  EPATHOBJ *v4; // rsi
  _DWORD *v5; // r13
  int v6; // eax
  int v7; // r15d
  bool v8; // zf
  __int64 v10; // rbx
  _DWORD *v11; // rdi
  int v12; // r14d
  unsigned int v13; // r15d
  _DWORD *v14; // rsi
  int v15; // ebx
  int v16; // r12d
  LONG v17; // eax
  signed int v18; // r14d
  int v19; // eax
  int v20; // r12d
  _DWORD *v21; // rsi
  int v22; // ebx
  LONG v23; // eax
  __int64 v24; // rcx
  int v25; // r8d
  LONG v26; // edx
  int v27; // eax
  int v28; // ebx
  unsigned int v29; // r9d
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  int v36; // r8d
  LONG v37; // edx
  unsigned int v38; // r9d
  int v39; // ebx
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  int v43; // ecx
  int v44; // eax
  int *v45; // rsi
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  LONG v56; // eax
  int v57; // eax
  int v58; // [rsp+20h] [rbp-28h]
  int v59; // [rsp+24h] [rbp-24h]
  __int64 i; // [rsp+28h] [rbp-20h]
  struct _POINTL v61; // [rsp+30h] [rbp-18h] BYREF
  int v62; // [rsp+38h] [rbp-10h]
  int v63; // [rsp+3Ch] [rbp-Ch]
  unsigned int v64; // [rsp+90h] [rbp+48h]
  int v67; // [rsp+A8h] [rbp+60h]

  v3 = a3;
  v4 = a2;
  v5 = (_DWORD *)(*(_QWORD *)this + 104LL);
  v6 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  while ( 2 )
  {
    if ( !v6 )
      return 1LL;
    v7 = 0;
    v59 = v6 - 1;
    v8 = *v5 == 0;
    v58 = *v5;
LABEL_3:
    v67 = v7;
    if ( v8 )
    {
      v6 = v59;
      v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      continue;
    }
    break;
  }
  v10 = v7;
  if ( (int)v5[v7 + 3] > 0x7FFFFFF )
    goto LABEL_8;
  v61.x = v5[v7 + 3];
  v61.y = v5[1];
  v11 = v5;
  v12 = v7;
  if ( (unsigned int)EPATHOBJ::bMoveTo(v4, v3, &v61) )
  {
    v13 = v7 & 1;
    v64 = v13;
    v14 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
    v5[v10 + 3] += 0x10000000;
LABEL_11:
    v15 = *v14;
    v16 = 1;
    if ( !*v14 )
      goto LABEL_12;
    v24 = v13;
    for ( i = v13; ; v24 = i )
    {
      v25 = v11[v12 + 3];
      v26 = v25;
      if ( v25 > 0x7FFFFFF )
        v26 = v25 - 0x10000000;
      v27 = v14[v24 + 3];
      v28 = v15 - v13 - 1;
      v29 = v13;
      if ( v27 > 0x7FFFFFF )
        v27 -= 0x10000000;
      if ( v27 > v26 )
      {
        v28 = v13;
      }
      else
      {
        v30 = v14[v28 + 3];
        if ( v30 > 0x7FFFFFF )
          v30 -= 0x10000000;
        if ( v30 <= v26 )
          goto LABEL_12;
        v31 = (v28 + v13) >> 1;
        if ( (_DWORD)v31 != v13 )
        {
          do
          {
            v32 = v14[v31 + 3];
            if ( v32 > 0x7FFFFFF )
              v32 -= 0x10000000;
            if ( v32 <= v26 )
              v29 = v31;
            else
              v28 = v31;
            v31 = (v28 + v29) >> 1;
          }
          while ( (_DWORD)v31 != v29 );
        }
      }
      if ( (v28 & 1) == v13 )
      {
        v50 = v14[v28 + 3];
        if ( v50 > 0x7FFFFFF )
          v50 -= 0x10000000;
        v51 = v11[v12 + 4];
        if ( v51 > 0x7FFFFFF )
          v51 -= 0x10000000;
        if ( v50 >= v51 )
          goto LABEL_12;
      }
      else
      {
        if ( v12 )
        {
          v52 = v14[v28 + 2];
          if ( v52 > 0x7FFFFFF )
            v52 -= 0x10000000;
          v53 = v11[v12 + 2];
          if ( v53 > 0x7FFFFFF )
            v53 -= 0x10000000;
          if ( v52 < v53 )
          {
            v16 = -1;
LABEL_12:
            v17 = v11[v12 + 3];
            if ( v17 > 0x7FFFFFF )
              v17 -= 0x10000000;
            v61.x = v17;
            v18 = v16 + v12;
            v61.y = v11[2];
            v63 = v11[2];
            v19 = v11[v18 + 3];
            if ( v19 > 0x7FFFFFF )
              v19 -= 0x10000000;
            v62 = v19;
            if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
              return 0LL;
            v20 = -1;
            v21 = (_DWORD *)((char *)v11 - (unsigned int)(4 * *(v11 - 1) + 16));
            v11[v18 + 3] += 0x10000000;
            v22 = *v21;
            if ( *v21 )
            {
              while ( 1 )
              {
                v36 = v11[v18 + 3];
                v37 = v36;
                if ( v36 > 0x7FFFFFF )
                  v37 = v36 - 0x10000000;
                v38 = v13;
                v39 = v22 - v13 - 1;
                v40 = v21[v39 + 3];
                if ( v40 > 0x7FFFFFF )
                  v40 -= 0x10000000;
                if ( v40 >= v37 )
                {
                  v41 = v21[v13 + 3];
                  if ( v41 > 0x7FFFFFF )
                    v41 -= 0x10000000;
                  if ( v41 >= v37 )
                    break;
                  v42 = (v39 + v13) >> 1;
                  if ( (_DWORD)v42 != v13 )
                  {
                    do
                    {
                      v47 = v21[v42 + 3];
                      if ( v47 > 0x7FFFFFF )
                        v47 -= 0x10000000;
                      if ( v47 >= v37 )
                        v39 = v42;
                      else
                        v38 = v42;
                      v42 = (v39 + v38) >> 1;
                    }
                    while ( (_DWORD)v42 != v38 );
                  }
                  v39 = v38;
                }
                if ( (v39 & 1) == v13 )
                {
                  if ( v18 < (unsigned int)(*v11 - 1) )
                  {
                    v54 = v21[v39 + 4];
                    if ( v54 > 0x7FFFFFF )
                      v54 -= 0x10000000;
                    v55 = v11[v18 + 4];
                    if ( v55 > 0x7FFFFFF )
                      v55 -= 0x10000000;
                    if ( v54 > v55 )
                    {
                      v20 = 1;
                      break;
                    }
                  }
                  ++v39;
                }
                else
                {
                  v48 = v21[v39 + 3];
                  if ( v48 > 0x7FFFFFF )
                    v48 -= 0x10000000;
                  v49 = v11[v18 + 2];
                  if ( v49 > 0x7FFFFFF )
                    v49 -= 0x10000000;
                  if ( v48 <= v49 )
                    break;
                }
                v43 = v21[v39 + 3];
                v44 = v43;
                if ( v43 > 0x7FFFFFF )
                  v44 = v43 - 0x10000000;
                if ( v37 != v44 )
                  goto LABEL_124;
                if ( v36 > 0x7FFFFFF )
                  v36 -= 0x10000000;
                if ( v36 != v44 )
                  goto LABEL_124;
                if ( v43 > 0x7FFFFFF )
                  v43 -= 0x10000000;
                if ( v43 != v44 )
                {
LABEL_124:
                  v61.x = v37;
                  v61.y = v11[1];
                  v63 = v11[1];
                  v62 = v44;
                  if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
                    return 0LL;
                }
                v11 = v21;
                v18 = v39;
                v45 = v21 - 1;
                v46 = *v45;
                v11[v39 + 3] += 0x10000000;
                v21 = (int *)((char *)v45 - (unsigned int)(4 * v46 + 16) + 4);
                v22 = *v21;
                if ( !*v21 )
                  break;
                v13 = v64;
              }
            }
            if ( v5 != v11 || (v7 = v67, v67 != v18 - 1) )
            {
              v56 = v11[v18 + 3];
              if ( v56 > 0x7FFFFFF )
                v56 -= 0x10000000;
              v61.x = v56;
              v12 = v20 + v18;
              v61.y = v11[1];
              v63 = v11[1];
              v57 = v11[v12 + 3];
              if ( v57 > 0x7FFFFFF )
                v57 -= 0x10000000;
              v62 = v57;
              if ( (unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
              {
                v13 = v64;
                v14 = (_DWORD *)((char *)v11 + (unsigned int)(4 * *v11 + 16));
                v11[v12 + 3] += 0x10000000;
                goto LABEL_11;
              }
              return 0LL;
            }
            v23 = v11[v18 + 3];
            if ( v23 > 0x7FFFFFF )
              v23 -= 0x10000000;
            v4 = a2;
            v61.x = v23;
            v61.y = v11[1];
            if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 1) || !(unsigned int)EPATHOBJ::bCloseFigure(a2) )
              return 0LL;
            v3 = a3;
LABEL_8:
            v8 = ++v7 == v58;
            goto LABEL_3;
          }
        }
        --v28;
      }
      v33 = v14[v28 + 3];
      v34 = v33;
      if ( v33 > 0x7FFFFFF )
        v34 = v33 - 0x10000000;
      if ( v26 != v34 )
        goto LABEL_125;
      if ( v25 > 0x7FFFFFF )
        v25 -= 0x10000000;
      if ( v25 != v34 )
        goto LABEL_125;
      if ( v33 > 0x7FFFFFF )
        v33 -= 0x10000000;
      if ( v33 != v34 )
      {
LABEL_125:
        v61.x = v26;
        v61.y = v11[2];
        v63 = v11[2];
        v62 = v34;
        if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v61, 2) )
          return 0LL;
      }
      v35 = *v14;
      v11 = v14;
      v12 = v28;
      v14[v28 + 3] += 0x10000000;
      v13 = v64;
      v14 = (_DWORD *)((char *)v14 + (unsigned int)(4 * v35 + 16));
      v15 = *v14;
      if ( !*v14 )
        goto LABEL_12;
    }
  }
  return 0LL;
}
