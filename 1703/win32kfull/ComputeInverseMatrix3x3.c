/*
 * XREFs of ComputeInverseMatrix3x3 @ 0x1C0103ABC
 * Callers:
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00ED180 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeColorSpaceXForm @ 0x1C010356C (ComputeColorSpaceXForm.c)
 * Callees:
 *     MulFD6 @ 0x1C0034154 (MulFD6.c)
 *     DivFD6 @ 0x1C0034DF8 (DivFD6.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall ComputeInverseMatrix3x3(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int128 v3; // xmm1
  __int64 v4; // rdi
  __int64 v5; // r14
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // r13
  int *v9; // r15
  int v10; // esi
  __int64 v11; // r9
  int v12; // r11d
  __int64 v13; // rbx
  __int64 v14; // r10
  int v15; // edx
  int v16; // ecx
  int v17; // esi
  __int64 v18; // rbx
  __int64 v19; // r14
  int v20; // eax
  int v21; // ecx
  __int64 v22; // r15
  int *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // r14
  int v26; // r13d
  __int64 v27; // rdi
  __int64 v28; // r15
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // r12d
  int v32; // ecx
  __int128 v33; // xmm1
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // r10
  _BYTE *v39; // r11
  __int64 v40; // r8
  _DWORD *v41; // rdx
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // [rsp+20h] [rbp-89h]
  int v46; // [rsp+24h] [rbp-85h]
  int *v47; // [rsp+28h] [rbp-81h]
  __int64 v48; // [rsp+30h] [rbp-79h]
  __int64 v49; // [rsp+38h] [rbp-71h]
  int *v50; // [rsp+40h] [rbp-69h]
  __int64 v51; // [rsp+48h] [rbp-61h]
  __int64 v52; // [rsp+50h] [rbp-59h]
  __int64 v53; // [rsp+58h] [rbp-51h]
  __int64 v54; // [rsp+60h] [rbp-49h]
  _OWORD v56[2]; // [rsp+70h] [rbp-39h] BYREF
  int v57; // [rsp+90h] [rbp-19h]
  _BYTE v58[36]; // [rsp+98h] [rbp-11h] BYREF

  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_OWORD *)(a1 + 16);
  v45 = 1;
  v56[0] = *(_OWORD *)a1;
  v57 = v2;
  v56[1] = v3;
  memset(v58, 0, sizeof(v58));
  v4 = 0LL;
  v51 = 0LL;
  v5 = 0LL;
  *(_DWORD *)&v58[32] = 1000000;
  v6 = 0;
  *(_DWORD *)&v58[16] = 1000000;
  v7 = 12LL;
  *(_DWORD *)v58 = 1000000;
  v8 = -(__int64)v56;
  v52 = 12LL;
  v9 = (int *)v56;
  v48 = 0LL;
  v53 = -(__int64)v56;
  v47 = (int *)v56;
  do
  {
    v10 = v6;
    v46 = v6 + 1;
    v54 = v4 + 1;
    v11 = v4;
    v12 = v6 + 1;
    v13 = v4 + 1;
    if ( v6 + 1 < 3 )
    {
      v14 = v7;
      do
      {
        v15 = *(_DWORD *)((char *)v56 + 4 * v4 + v14);
        if ( v15 < 0 )
          v15 = -v15;
        v16 = *(_DWORD *)((char *)v56 + 4 * v4 + v5);
        if ( v16 < 0 )
          v16 = -v16;
        if ( v15 > v16 )
        {
          v10 = v12;
          v11 = v13;
          v5 = v14;
        }
        ++v12;
        ++v13;
        v14 += 12LL;
      }
      while ( v12 < 3 );
      v5 = v48;
      v9 = v47;
    }
    if ( *((_DWORD *)v56 + 2 * v11 + v11 + v4) )
    {
      if ( v10 != v6 )
      {
        v35 = 3 * v11;
        v36 = v4 - v11;
        v37 = 3LL;
        v38 = 3 * v36;
        v39 = &v58[12 * v36 - (_QWORD)v56];
        v40 = 4 * v35;
        do
        {
          v41 = (_DWORD *)((char *)v56 + v40);
          v42 = *(_DWORD *)((char *)v56 + v40 + v38 * 4);
          v41[v38] = *v41;
          v43 = *(_DWORD *)&v58[v40];
          *v41 = v42;
          v44 = *(_DWORD *)((char *)v56 + v40 + (_QWORD)v39);
          *(_DWORD *)((char *)v41 + (_QWORD)v39) = v43;
          *(_DWORD *)&v58[v40] = v44;
          v40 += 4LL;
          --v37;
        }
        while ( v37 );
      }
      v17 = *v9;
      v18 = v5;
      v19 = 3LL;
      do
      {
        v20 = DivFD6(*(_DWORD *)((char *)v56 + v18), v17);
        v21 = *(_DWORD *)&v58[v18];
        *(_DWORD *)((char *)v56 + v18) = v20;
        *(_DWORD *)&v58[v18] = DivFD6(v21, v17);
        v18 += 4LL;
        --v19;
      }
      while ( v19 );
      v22 = 0LL;
      v23 = (int *)v56 + v4;
      v49 = 0LL;
      v50 = v23;
      v24 = 0LL;
      v25 = v8;
      do
      {
        if ( v22 != v4 )
        {
          v26 = *v23;
          if ( *v23 )
          {
            v27 = v24;
            v28 = 3LL;
            do
            {
              v29 = MulFD6(*(_DWORD *)((char *)v56 + (_QWORD)v56 + v27 + v25), v26);
              v30 = *(_DWORD *)&v58[v25 + (_QWORD)v56 + v27];
              *(_DWORD *)((char *)v56 + v27) -= v29;
              *(_DWORD *)&v58[v27] -= MulFD6(v30, v26);
              v27 += 4LL;
              --v28;
            }
            while ( v28 );
            v4 = v51;
            v22 = v49;
            v23 = v50;
          }
        }
        ++v22;
        v23 += 3;
        v25 -= 12LL;
        v49 = v22;
        v24 += 12LL;
        v50 = v23;
      }
      while ( v24 < 36 );
      v8 = v53;
      v5 = v48;
      v9 = v47;
      v31 = v45;
    }
    else
    {
      v31 = 0;
      v45 = 0;
    }
    v9 += 4;
    v6 = v46;
    v7 = v52 + 12;
    v4 = v54;
    v5 += 12LL;
    v8 += 12LL;
    v51 = v54;
    v47 = v9;
    v48 = v5;
    v52 += 12LL;
    v53 = v8;
  }
  while ( v46 < 3 );
  v32 = *(_DWORD *)&v58[32];
  v33 = *(_OWORD *)&v58[16];
  *(_OWORD *)a2 = *(_OWORD *)v58;
  *(_OWORD *)(a2 + 16) = v33;
  *(_DWORD *)(a2 + 32) = v32;
  return v31;
}
