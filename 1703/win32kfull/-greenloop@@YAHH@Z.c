/*
 * XREFs of ?greenloop@@YAHH@Z @ 0x1C00D36D0
 * Callers:
 *     ?redloop@@YAHXZ @ 0x1C00D357C (-redloop@@YAHXZ.c)
 * Callees:
 *     ?blueloop@@YAHH@Z @ 0x1C00D3C00 (-blueloop@@YAHH@Z.c)
 */

__int64 __fastcall greenloop(int a1)
{
  int v1; // ebp
  int v2; // ecx
  int v3; // r14d
  int v4; // edx
  int v5; // eax
  int v6; // r12d
  unsigned int v7; // r15d
  int v8; // r13d
  __int64 v9; // r9
  unsigned int v10; // ecx
  int v11; // eax
  char v12; // r11
  int v13; // ebx
  int v14; // r10d
  int v15; // eax
  int v16; // r8d
  int v17; // edi
  int v18; // edx
  unsigned int *v19; // rax
  int v20; // r15d
  _BYTE *v21; // r9
  int v22; // esi
  int v23; // r8d
  int v24; // edx
  unsigned int v25; // eax
  unsigned int *v26; // rcx
  _BYTE *v27; // r9
  int v28; // edx
  bool v29; // cc
  int v30; // r14d
  int v31; // r12d
  __int64 v32; // rbx
  int v33; // r13d
  __int64 v34; // rdi
  int v35; // esi
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int v40; // [rsp+20h] [rbp-78h]
  int v41; // [rsp+24h] [rbp-74h]
  __int64 v42; // [rsp+28h] [rbp-70h]
  __int64 v43; // [rsp+30h] [rbp-68h]
  __int64 v44; // [rsp+38h] [rbp-60h]
  __int64 v45; // [rsp+40h] [rbp-58h]
  int v46; // [rsp+A0h] [rbp+8h]
  int v47; // [rsp+A8h] [rbp+10h]
  int v48; // [rsp+B0h] [rbp+18h]
  int v49; // [rsp+B8h] [rbp+20h]

  v1 = 2 * dword_1C032C78C;
  if ( a1 )
  {
    v2 = dword_1C032C730;
    v5 = 0;
    v3 = dword_1C032C748;
    v4 = 31;
    dword_1C032CAA0 = 0;
    dword_1C032CAA4 = 31;
    dword_1C032CAAC = 0;
    dword_1C032CA9C = dword_1C032C730;
    dword_1C032CAA8 = dword_1C032C748;
    dword_1C032CAB0 = 32;
  }
  else
  {
    v2 = dword_1C032CA9C;
    v3 = dword_1C032CAA8;
    v4 = dword_1C032CAA4;
    v5 = dword_1C032CAA0;
  }
  v6 = dword_1C032C73C;
  v7 = 0;
  v8 = v3;
  v40 = v5;
  v9 = qword_1C032C758;
  v43 = qword_1C032C758;
  v44 = qword_1C032C758;
  v47 = v2;
  v10 = dword_1C032C73C;
  v42 = qword_1C032C770;
  v45 = qword_1C032C770;
  v11 = 1;
  v41 = v4;
  v48 = 0;
  v46 = dword_1C032C73C;
  v49 = dword_1C032C73C;
  if ( dword_1C032CA9C <= v4 )
  {
    v12 = dword_1C032C794;
    v13 = dword_1C032CAD4;
    v14 = dword_1C032CAD8;
    while ( 1 )
    {
      if ( v11 )
      {
        v15 = dword_1C032C72C;
        v13 = 0;
        v14 = 31;
        dword_1C032CAD4 = 0;
        dword_1C032CAD8 = 31;
        dword_1C032CAE4 = 0;
        dword_1C032CAD0 = dword_1C032C72C;
        dword_1C032CADC = dword_1C032C744;
        dword_1C032CAE0 = 32;
      }
      else
      {
        v15 = dword_1C032CAD0;
      }
      v16 = dword_1C032CADC;
      v17 = 0;
      v18 = v15;
      v19 = (unsigned int *)v9;
      v20 = v13;
      v21 = (_BYTE *)v42;
      v22 = v14;
      if ( dword_1C032CAD0 <= v14 )
      {
        while ( *v19 <= v10 )
        {
          v10 += v16;
          ++v18;
          v16 += v1;
          ++v19;
          ++v21;
          if ( v18 > v14 )
            goto LABEL_16;
        }
        if ( v18 > dword_1C032CAD0 )
        {
          dword_1C032CAD0 = v18;
          v20 = v18;
          v43 = (__int64)v19;
          v42 = (__int64)v21;
          v46 = v10;
          dword_1C032CADC = v16;
        }
        v17 = 1;
        if ( v18 <= v14 )
        {
          while ( *v19 > v10 )
          {
            *v19 = v10;
            ++v18;
            v10 += v16;
            *v21++ = v12;
            v16 += v1;
            ++v19;
            if ( v18 > v14 )
              goto LABEL_16;
          }
          v22 = v18 - 1;
        }
      }
LABEL_16:
      v23 = dword_1C032CADC - v1;
      v24 = dword_1C032CAD0 - 1;
      v25 = v46 - (dword_1C032CADC - v1);
      v26 = (unsigned int *)(v43 - 4);
      v27 = (_BYTE *)(v42 - 1);
      if ( v17 )
        goto LABEL_17;
      if ( v24 >= v13 )
        break;
LABEL_47:
      v7 = v48;
      if ( v48 )
      {
        v41 = v47 - 1;
        goto LABEL_28;
      }
      v28 = v47;
LABEL_27:
      v10 = v8 + v46;
      v49 += v8;
      v9 = v43 + 128;
      v44 += 128LL;
      v8 += v1;
      v42 += 32LL;
      v11 = 0;
      v45 += 32LL;
      v47 = v28 + 1;
      v43 += 128LL;
      v46 = v10;
      if ( v28 + 1 > dword_1C032CAA4 )
        goto LABEL_28;
    }
    while ( *v26 <= v25 )
    {
      v23 -= v1;
      --v24;
      v25 -= v23;
      --v26;
      --v27;
      if ( v24 < v13 )
        goto LABEL_47;
    }
    dword_1C032CAD0 = v24;
    v22 = v24;
    v43 = (__int64)v26;
    v42 = (__int64)v27;
    v46 = v25;
    dword_1C032CADC = v23;
LABEL_17:
    if ( v24 >= v13 )
    {
      while ( *v26 > v25 )
      {
        *v26 = v25;
        v23 -= v1;
        *v27 = v12;
        v25 -= v23;
        --v27;
        --v24;
        --v26;
        if ( v24 < v13 )
          goto LABEL_22;
      }
      v20 = v24 + 1;
    }
LABEL_22:
    v28 = v47;
    if ( v22 < dword_1C032CAE4 )
      v14 = v22;
    dword_1C032CAE4 = v22;
    v29 = v20 <= dword_1C032CAE0;
    dword_1C032CAE0 = v20;
    if ( !v29 )
      v13 = v20;
    dword_1C032CAD8 = v14;
    v7 = v48;
    dword_1C032CAD4 = v13;
    if ( !v48 )
    {
      if ( v47 > dword_1C032CA9C )
      {
        v3 = v8;
        v6 = v49;
        qword_1C032C758 = v44;
        qword_1C032C770 = v45;
        dword_1C032CA9C = v47;
        dword_1C032C73C = v49;
        dword_1C032CAA8 = v8;
        v40 = v47;
      }
      v7 = 1;
      v48 = 1;
    }
    goto LABEL_27;
  }
LABEL_28:
  v30 = v3 - v1;
  v31 = v6 - v30;
  v32 = qword_1C032C758 - 128;
  v33 = dword_1C032CAA0;
  v34 = qword_1C032C770 - 32;
  v35 = dword_1C032CA9C - 1;
  dword_1C032CAB8 = v30;
  dword_1C032C738 = v31;
  v36 = 1;
  dword_1C032CAB4 = v31;
  qword_1C032C750 = qword_1C032C758 - 128;
  qword_1C032CAC0 = qword_1C032C758 - 128;
  qword_1C032C768 = qword_1C032C770 - 32;
  for ( qword_1C032CAC8 = qword_1C032C770 - 32; v35 >= v33; dword_1C032CAB4 = v31 )
  {
    if ( (unsigned int)blueloop(v36) )
    {
      if ( !v7 )
      {
        dword_1C032CA9C = v35;
        v7 = 1;
        qword_1C032C758 = v32;
        qword_1C032C770 = v34;
        dword_1C032C73C = v31;
        dword_1C032CAA8 = v30;
        v41 = v35;
      }
    }
    else if ( v7 )
    {
      v37 = v35 + 1;
      goto LABEL_32;
    }
    qword_1C032C750 -= 128LL;
    v30 -= v1;
    dword_1C032C738 -= v30;
    v31 -= v30;
    qword_1C032C768 -= 32LL;
    v32 -= 128LL;
    v34 -= 32LL;
    qword_1C032CAC0 = v32;
    --v35;
    qword_1C032CAC8 = v34;
    v36 = 0;
    dword_1C032CAB8 = v30;
  }
  v37 = v40;
LABEL_32:
  if ( v7 )
  {
    v38 = dword_1C032CAA4;
    if ( v41 < dword_1C032CAAC )
      v38 = v41;
    dword_1C032CAAC = v41;
    dword_1C032CAA4 = v38;
    if ( v37 > dword_1C032CAB0 )
      v33 = v37;
    dword_1C032CAB0 = v37;
    dword_1C032CAA0 = v33;
  }
  return v7;
}
