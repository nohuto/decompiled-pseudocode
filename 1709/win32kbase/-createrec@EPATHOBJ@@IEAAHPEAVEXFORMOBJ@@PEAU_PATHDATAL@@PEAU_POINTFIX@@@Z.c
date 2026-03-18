/*
 * XREFs of ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C001CC98
 * Callers:
 *     ?addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z @ 0x1C001D148 (-addpoints@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@@Z.c)
 *     ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C00EE360 (-bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     freepathalloc @ 0x1C001D500 (freepathalloc.c)
 *     newpathalloc @ 0x1C001D560 (newpathalloc.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C009F1D0 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C00EE490 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 *     ?vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z @ 0x1C00EE524 (-vOffsetPoints@@YAXPEAU_POINTFIX@@0IJJ@Z.c)
 */

__int64 __fastcall EPATHOBJ::createrec(
        EPATHOBJ *this,
        struct EXFORMOBJ *a2,
        struct _PATHDATAL *a3,
        struct _POINTFIX *a4)
{
  EXFORMOBJ *v6; // r10
  __int64 v8; // r8
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  int v14; // r8d
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  struct _POINTFIX *v19; // rdx
  __int64 v20; // rax
  _DWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _DWORD *v24; // rax
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+40h] [rbp-38h]

  v6 = a2;
  v8 = *((_QWORD *)this + 1);
  v31 = *(_QWORD *)(v8 + 24);
  v9 = v31;
  LODWORD(v10) = 0;
  if ( v31 )
  {
    v11 = *(_QWORD *)(v31 + 8) + 24LL;
    v12 = v31 + *(unsigned int *)(v31 + 16);
    if ( v12 > v11 )
      v10 = (__int64)(v12 - v11) >> 3;
  }
  v13 = *(_DWORD *)(v8 + 72) & 1;
  v14 = *(_DWORD *)a3;
  if ( (*(_DWORD *)a3 & 0x10) != 0 && (_DWORD)v10 )
    LODWORD(v10) = 3 * (((unsigned int)v10 - v13) / 3) + v13;
  if ( (unsigned int)v10 < v13 + *((_DWORD *)a3 + 1) && (unsigned int)v10 < 8 )
  {
    v30 = newpathalloc();
    v9 = v30;
    if ( !v30 )
    {
      EngSetLastError(8u);
      EPATHOBJ::reinit(this);
      return 0LL;
    }
    *(_QWORD *)v30 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = v30;
    LODWORD(v10) = (unsigned int)(v30 + *(_DWORD *)(v30 + 16) - *(_DWORD *)(v30 + 8) - 24) >> 3;
    v14 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 0x10) != 0 )
      LODWORD(v10) = 3 * (((unsigned int)v10 - v13) / 3) + v13;
    v6 = a2;
  }
  if ( (unsigned int)v10 > v13 + *((_DWORD *)a3 + 1) )
    LODWORD(v10) = v13 + *((_DWORD *)a3 + 1);
  v16 = *(_QWORD *)(v9 + 8);
  *(_DWORD *)(v16 + 16) = v14 | 2;
  *(_DWORD *)(v16 + 20) = v10;
  *(_QWORD *)v16 = 0LL;
  *(_QWORD *)(v16 + 8) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v17 = *((_QWORD *)this + 1);
  if ( v13 )
  {
    *(_QWORD *)(v16 + 24) = *(_QWORD *)(v17 + 64);
    LODWORD(v10) = v10 - 1;
    *(_DWORD *)(v16 + 16) |= *(_DWORD *)(*((_QWORD *)this + 1) + 72LL) & 5;
    *(_DWORD *)(*((_QWORD *)this + 1) + 72LL) &= 0xFFFFFFFA;
  }
  else
  {
    v18 = *(_QWORD *)(v17 + 40);
    if ( v18 )
      *(_DWORD *)(v18 + 16) &= ~2u;
  }
  v19 = (struct _POINTFIX *)*((_QWORD *)a3 + 1);
  if ( a4 )
  {
    vOffsetPoints((struct _POINTFIX *)(v16 + 8 * (v13 + 3LL)), v19, v10, a4->x, a4->y);
  }
  else
  {
    v20 = v13 + 3LL;
    if ( v6 )
      EXFORMOBJ::bXformRound(v6, (struct _POINTL *)v19, (struct _POINTFIX *)(v16 + 8 * v20), (unsigned int)v10);
    else
      memmove((void *)(v16 + 8 * v20), v19, 8LL * (unsigned int)v10);
  }
  *((_DWORD *)a3 + 1) -= v10;
  *((_QWORD *)a3 + 1) += 8LL * (unsigned int)v10;
  *(_DWORD *)a3 &= 0xFFFFFFFA;
  v21 = (_DWORD *)(v16 + 24);
  v22 = *((_QWORD *)this + 1);
  if ( !*(_QWORD *)(v22 + 40) )
  {
    *(_DWORD *)(v22 + 56) = *v21;
    *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 56LL);
    *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = *(_DWORD *)(v16 + 28);
    *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = *(_DWORD *)(*((_QWORD *)this + 1) + 60LL);
  }
  if ( v13 + (_DWORD)v10 )
  {
    v23 = v13 + (unsigned int)v10;
    do
    {
      v24 = (_DWORD *)*((_QWORD *)this + 1);
      v25 = *v21;
      if ( v24[12] > *v21 )
      {
        v24[12] = v25;
      }
      else if ( v24[14] < v25 )
      {
        v24[14] = v25;
      }
      v26 = v21[1];
      if ( v24[15] < v26 )
      {
        v24[15] = v26;
      }
      else if ( v24[13] > v26 )
      {
        v24[13] = v26;
      }
      v21 += 2;
      --v23;
    }
    while ( v23 );
  }
  v27 = *((_QWORD *)this + 1);
  v28 = *(_QWORD **)(v27 + 40);
  if ( v28 )
  {
    *v28 = v16;
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v16;
  }
  else
  {
    *(_QWORD *)(v27 + 40) = v16;
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v16;
  }
  *(_QWORD *)(v9 + 8) = v16 + 8 * (*(unsigned int *)(v16 + 20) + 3LL);
  return 1LL;
}
