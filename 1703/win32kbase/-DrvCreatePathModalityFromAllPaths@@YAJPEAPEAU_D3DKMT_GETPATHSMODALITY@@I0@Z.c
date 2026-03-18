/*
 * XREFs of ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00F6AEC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C0057970 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0057A4C (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall DrvCreatePathModalityFromAllPaths(
        struct _D3DKMT_GETPATHSMODALITY **a1,
        __int64 a2,
        struct _D3DKMT_GETPATHSMODALITY **a3)
{
  int v4; // ebx
  unsigned int i; // ebp
  __int64 v7; // r14
  int PathsModality; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rax
  int v23; // edx
  struct _D3DKMT_GETPATHSMODALITY *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  struct _D3DKMT_GETPATHSMODALITY *v30; // rax
  struct _D3DKMT_GETPATHSMODALITY *v31; // rcx
  _OWORD *v32; // r8
  _OWORD *v33; // rax
  __int128 v34; // xmm1

  v4 = a2;
  i = 0;
  v7 = 2LL;
  if ( (unsigned int)a2 < 2 )
  {
    PathsModality = GetPathsModality((__int64)a1, a3, (_DWORD)a2 != 0 ? 8 : 1, 0);
    v12 = PathsModality;
    if ( PathsModality < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = v12;
      *(_QWORD *)(v13 + 32) = 24263LL;
      WdLogEvent5_WdError(v13);
    }
    return (unsigned int)v12;
  }
  if ( !*a1 )
  {
    if ( (_DWORD)a2 != 2 )
    {
      v15 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = GetPathsModality((__int64)a1, a1, 0x10u, 0);
    v18 = v16;
    if ( v16 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(a1, a2, v17);
      *(_QWORD *)(v19 + 24) = v18;
      *(_QWORD *)(v19 + 32) = 24283LL;
      WdLogEvent5_WdError(v19);
      return (unsigned int)v18;
    }
    if ( !*a1 )
    {
      v20 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v20);
    }
  }
  v21 = v4 - 1;
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = 0;
  while ( v21 )
  {
    for ( i = 0; i < *((unsigned __int16 *)*a1 + 10); ++i )
    {
      if ( (*((_QWORD *)*a1 + 33 * i + 6) & 0x100000000000000LL) != 0 && v23 != 1 && !--v21 )
        break;
    }
    if ( (unsigned int)++v23 >= 2 )
    {
      if ( v21 )
        return 2147483674LL;
      break;
    }
  }
  v24 = AllocPathsModality(1u);
  *a3 = v24;
  if ( !v24 )
  {
    v29 = WdLogNewEntry5_WdLowResource(v26, v25, v27, v28);
    LODWORD(v12) = -1073741670;
    *(_QWORD *)(v29 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v29);
    return (unsigned int)v12;
  }
  *((_WORD *)v24 + 10) = 1;
  *((_DWORD *)*a3 + 8) = 8;
  v30 = *a1;
  v31 = *a3;
  *(_OWORD *)v31 = *(_OWORD *)*a1;
  *((_DWORD *)v31 + 4) = *((_DWORD *)v30 + 4);
  v32 = (_OWORD *)((char *)*a3 + 48);
  v33 = (_OWORD *)((char *)*a1 + 264 * i + 48);
  do
  {
    *v32 = *v33;
    v32[1] = v33[1];
    v32[2] = v33[2];
    v32[3] = v33[3];
    v32[4] = v33[4];
    v32[5] = v33[5];
    v32[6] = v33[6];
    v32 += 8;
    v34 = v33[7];
    v33 += 8;
    *(v32 - 1) = v34;
    --v7;
  }
  while ( v7 );
  *(_QWORD *)v32 = *(_QWORD *)v33;
  *((_QWORD *)*a3 + 29) = 0LL;
  return 0LL;
}
