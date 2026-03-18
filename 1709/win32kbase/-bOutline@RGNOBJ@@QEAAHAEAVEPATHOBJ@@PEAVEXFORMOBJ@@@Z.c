/*
 * XREFs of ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C009FC50
 * Callers:
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00A0240 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C001CA70 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C001CBE0 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C001CC30 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::bOutline(RGNOBJ *this, struct EPATHOBJ *a2, struct EXFORMOBJ *a3)
{
  struct EXFORMOBJ *v3; // r9
  EPATHOBJ *v4; // rsi
  _DWORD *v5; // r13
  int v6; // eax
  int v7; // r14d
  bool v8; // zf
  _DWORD *v10; // rdi
  int v11; // r15d
  unsigned int v12; // r10d
  _DWORD *v13; // rsi
  int v14; // ebx
  int v15; // r12d
  LONG v16; // eax
  signed int v17; // r14d
  int v18; // eax
  struct EXFORMOBJ *v19; // r15
  int v20; // eax
  int v21; // r12d
  _DWORD *v22; // rsi
  int v23; // ebx
  LONG v24; // eax
  __int64 v25; // rcx
  int v26; // r8d
  LONG v27; // edx
  int v28; // eax
  int v29; // ebx
  unsigned int v30; // r9d
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // r8d
  LONG v38; // edx
  unsigned int v39; // r9d
  int v40; // ebx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rcx
  int v44; // ecx
  int v45; // eax
  int *v46; // rsi
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  LONG v57; // eax
  int v58; // eax
  int i; // [rsp+20h] [rbp-28h]
  int v60; // [rsp+24h] [rbp-24h]
  __int64 j; // [rsp+28h] [rbp-20h]
  struct _POINTL v62; // [rsp+30h] [rbp-18h] BYREF
  int v63; // [rsp+38h] [rbp-10h]
  int v64; // [rsp+3Ch] [rbp-Ch]
  unsigned int v65; // [rsp+90h] [rbp+48h]
  int v68; // [rsp+A8h] [rbp+60h]

  v3 = a3;
  v4 = a2;
  v5 = (_DWORD *)(*(_QWORD *)this + 104LL);
  v6 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  if ( v6 )
  {
LABEL_2:
    v7 = 0;
    v60 = v6 - 1;
    v8 = *v5 == 0;
    for ( i = *v5; ; v8 = v7 == i )
    {
      v68 = v7;
      if ( v8 )
      {
        v6 = v60;
        v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
        if ( v60 )
          goto LABEL_2;
        return 1LL;
      }
      if ( (int)v5[v7 + 3] > 0x7FFFFFF )
        goto LABEL_7;
      v62.x = v5[v7 + 3];
      v62.y = v5[1];
      v10 = v5;
      v11 = v7;
      if ( !(unsigned int)EPATHOBJ::bMoveTo(v4, v3, &v62) )
        return 0LL;
      v12 = v7 & 1;
      v65 = v12;
      v13 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      v5[v7 + 3] += 0x10000000;
LABEL_10:
      v14 = *v13;
      v15 = 1;
      if ( !*v13 )
        goto LABEL_11;
      v25 = v12;
      for ( j = v12; ; v25 = j )
      {
        v26 = v10[v11 + 3];
        v27 = v26;
        if ( v26 > 0x7FFFFFF )
          v27 = v26 - 0x10000000;
        v28 = v13[v25 + 3];
        v29 = v14 - v12 - 1;
        v30 = v12;
        if ( v28 > 0x7FFFFFF )
          v28 -= 0x10000000;
        if ( v28 > v27 )
        {
          v29 = v12;
        }
        else
        {
          v31 = v13[v29 + 3];
          if ( v31 > 0x7FFFFFF )
            v31 -= 0x10000000;
          if ( v31 <= v27 )
            goto LABEL_11;
          v32 = (v29 + v12) >> 1;
          if ( (_DWORD)v32 != v12 )
          {
            do
            {
              v33 = v13[v32 + 3];
              if ( v33 > 0x7FFFFFF )
                v33 -= 0x10000000;
              if ( v33 <= v27 )
                v30 = v32;
              else
                v29 = v32;
              v32 = (v29 + v30) >> 1;
            }
            while ( (_DWORD)v32 != v30 );
          }
        }
        if ( (v29 & 1) != v12 )
          break;
        v51 = v13[v29 + 3];
        if ( v51 > 0x7FFFFFF )
          v51 -= 0x10000000;
        v52 = v10[v11 + 4];
        if ( v52 > 0x7FFFFFF )
          v52 -= 0x10000000;
        if ( v51 >= v52 )
          goto LABEL_11;
LABEL_42:
        v34 = v13[v29 + 3];
        v35 = v34;
        if ( v34 > 0x7FFFFFF )
          v35 = v34 - 0x10000000;
        if ( v27 != v35 )
          goto LABEL_119;
        if ( v26 > 0x7FFFFFF )
          v26 -= 0x10000000;
        if ( v26 != v35 )
          goto LABEL_119;
        if ( v34 > 0x7FFFFFF )
          v34 -= 0x10000000;
        if ( v34 != v35 )
        {
LABEL_119:
          v62.x = v27;
          v62.y = v10[2];
          v64 = v10[2];
          v63 = v35;
          if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v62, 2) )
            return 0LL;
          v12 = v65;
        }
        v36 = *v13;
        v10 = v13;
        v11 = v29;
        v13[v29 + 3] += 0x10000000;
        v13 = (_DWORD *)((char *)v13 + (unsigned int)(4 * v36 + 16));
        v14 = *v13;
        if ( !*v13 )
          goto LABEL_11;
      }
      if ( !v11 )
        break;
      v53 = v13[v29 + 2];
      if ( v53 > 0x7FFFFFF )
        v53 -= 0x10000000;
      v54 = v10[v11 + 2];
      if ( v54 > 0x7FFFFFF )
        v54 -= 0x10000000;
      if ( v53 >= v54 )
        break;
      v15 = -1;
LABEL_11:
      v16 = v10[v11 + 3];
      if ( v16 > 0x7FFFFFF )
        v16 -= 0x10000000;
      v62.x = v16;
      v17 = v15 + v11;
      v62.y = v10[2];
      v64 = v10[2];
      v18 = v10[v15 + 3 + v11];
      if ( v18 > 0x7FFFFFF )
        v18 -= 0x10000000;
      v19 = a3;
      v63 = v18;
      if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v62, 2) )
        return 0LL;
      v20 = *(v10 - 1);
      v21 = -1;
      v10[v17 + 3] += 0x10000000;
      v22 = (_DWORD *)((char *)v10 - (unsigned int)(4 * v20 + 16));
      v23 = *v22;
      if ( !*v22 )
        goto LABEL_17;
      while ( 2 )
      {
        v37 = v10[v17 + 3];
        v38 = v37;
        if ( v37 > 0x7FFFFFF )
          v38 = v37 - 0x10000000;
        v39 = v65;
        v40 = v23 - v65 - 1;
        v41 = v22[v40 + 3];
        if ( v41 > 0x7FFFFFF )
          v41 -= 0x10000000;
        if ( v41 >= v38 )
        {
          v42 = v22[v65 + 3];
          if ( v42 > 0x7FFFFFF )
            v42 -= 0x10000000;
          if ( v42 >= v38 )
            goto LABEL_76;
          v43 = (v40 + v65) >> 1;
          if ( (_DWORD)v43 != v65 )
          {
            do
            {
              v48 = v22[v43 + 3];
              if ( v48 > 0x7FFFFFF )
                v48 -= 0x10000000;
              if ( v48 >= v38 )
                v40 = v43;
              else
                v39 = v43;
              v43 = (v40 + v39) >> 1;
            }
            while ( (_DWORD)v43 != v39 );
          }
          v40 = v39;
        }
        if ( (v40 & 1) != v65 )
        {
          v49 = v22[v40 + 3];
          if ( v49 > 0x7FFFFFF )
            v49 -= 0x10000000;
          v50 = v10[v17 + 2];
          if ( v50 > 0x7FFFFFF )
            v50 -= 0x10000000;
          if ( v49 <= v50 )
            goto LABEL_76;
LABEL_66:
          v44 = v22[v40 + 3];
          v45 = v44;
          if ( v44 > 0x7FFFFFF )
            v45 = v44 - 0x10000000;
          if ( v38 != v45 )
            goto LABEL_124;
          if ( v37 > 0x7FFFFFF )
            v37 -= 0x10000000;
          if ( v37 != v45 )
            goto LABEL_124;
          if ( v44 > 0x7FFFFFF )
            v44 -= 0x10000000;
          if ( v44 != v45 )
          {
LABEL_124:
            v62.x = v38;
            v62.y = v10[1];
            v64 = v10[1];
            v63 = v45;
            if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v62, 2) )
              return 0LL;
          }
          v10 = v22;
          v17 = v40;
          v46 = v22 - 1;
          v47 = *v46;
          v10[v40 + 3] += 0x10000000;
          v22 = (int *)((char *)v46 - (unsigned int)(4 * v47 + 16) + 4);
          v23 = *v22;
          if ( !*v22 )
            goto LABEL_76;
          continue;
        }
        break;
      }
      if ( v17 >= (unsigned int)(*v10 - 1) )
        goto LABEL_65;
      v55 = v22[v40 + 4];
      if ( v55 > 0x7FFFFFF )
        v55 -= 0x10000000;
      v56 = v10[v17 + 4];
      if ( v56 > 0x7FFFFFF )
        v56 -= 0x10000000;
      if ( v55 <= v56 )
      {
LABEL_65:
        ++v40;
        goto LABEL_66;
      }
      v21 = 1;
LABEL_76:
      v19 = a3;
LABEL_17:
      if ( v5 != v10 || v68 != v17 - 1 )
      {
        v57 = v10[v17 + 3];
        if ( v57 > 0x7FFFFFF )
          v57 -= 0x10000000;
        v62.x = v57;
        v11 = v21 + v17;
        v62.y = v10[1];
        v64 = v10[1];
        v58 = v10[v21 + 3 + v17];
        if ( v58 > 0x7FFFFFF )
          v58 -= 0x10000000;
        v63 = v58;
        if ( (unsigned int)EPATHOBJ::bPolyLineTo(a2, a3, &v62, 2) )
        {
          v12 = v65;
          v13 = (_DWORD *)((char *)v10 + (unsigned int)(4 * *v10 + 16));
          v10[v11 + 3] += 0x10000000;
          goto LABEL_10;
        }
        return 0LL;
      }
      v24 = v10[v17 + 3];
      if ( v24 > 0x7FFFFFF )
        v24 -= 0x10000000;
      v4 = a2;
      v62.x = v24;
      v62.y = v10[1];
      if ( !(unsigned int)EPATHOBJ::bPolyLineTo(a2, v19, &v62, 1) || !(unsigned int)EPATHOBJ::bCloseFigure(a2) )
        return 0LL;
      v7 = v68;
      v3 = a3;
LABEL_7:
      ++v7;
    }
    --v29;
    goto LABEL_42;
  }
  return 1LL;
}
