/*
 * XREFs of ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00F7B70
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C0066F68 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0067044 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall DrvCreatePathModalityFromAllPaths(
        struct D3DKMT_GETPATHSMODALITY **a1,
        __int64 a2,
        struct D3DKMT_GETPATHSMODALITY **a3,
        __int64 a4)
{
  int v5; // ebx
  unsigned int i; // ebp
  __int64 v8; // r14
  int PathsModality; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rax
  int v23; // edx
  struct D3DKMT_GETPATHSMODALITY *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  struct D3DKMT_GETPATHSMODALITY *v29; // rax
  struct D3DKMT_GETPATHSMODALITY *v30; // rcx
  _OWORD *v31; // r8
  _OWORD *v32; // rax
  __int128 v33; // xmm1

  v5 = a2;
  i = 0;
  v8 = 2LL;
  if ( (unsigned int)a2 < 2 )
  {
    PathsModality = GetPathsModality((__int64)a1, a3, (_DWORD)a2 != 0 ? 8 : 1, 0LL);
    v13 = PathsModality;
    if ( PathsModality < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v11, v10, v12);
      *(_QWORD *)(v14 + 24) = v13;
      *(_QWORD *)(v14 + 32) = 23628LL;
      WdLogEvent5_WdError(v14);
    }
    return (unsigned int)v13;
  }
  if ( !*a1 )
  {
    if ( (_DWORD)a2 != 2 )
    {
      v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v16);
    }
    v17 = GetPathsModality((__int64)a1, a1, 16LL, 0LL);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v19 + 24) = v18;
      *(_QWORD *)(v19 + 32) = 23648LL;
      WdLogEvent5_WdError(v19);
      return (unsigned int)v18;
    }
    if ( !*a1 )
    {
      v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v20);
    }
  }
  v21 = v5 - 1;
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
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
    v28 = WdLogNewEntry5_WdLowResource(v26, v25, v27);
    LODWORD(v13) = -1073741670;
    *(_QWORD *)(v28 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v28);
    return (unsigned int)v13;
  }
  *((_WORD *)v24 + 10) = 1;
  *((_DWORD *)*a3 + 8) = 8;
  v29 = *a1;
  v30 = *a3;
  *(_OWORD *)v30 = *(_OWORD *)*a1;
  *((_DWORD *)v30 + 4) = *((_DWORD *)v29 + 4);
  v31 = (_OWORD *)((char *)*a3 + 48);
  v32 = (_OWORD *)((char *)*a1 + 264 * i + 48);
  do
  {
    *v31 = *v32;
    v31[1] = v32[1];
    v31[2] = v32[2];
    v31[3] = v32[3];
    v31[4] = v32[4];
    v31[5] = v32[5];
    v31[6] = v32[6];
    v31 += 8;
    v33 = v32[7];
    v32 += 8;
    *(v31 - 1) = v33;
    --v8;
  }
  while ( v8 );
  *(_QWORD *)v31 = *(_QWORD *)v32;
  *((_QWORD *)*a3 + 33) = 0LL;
  return 0LL;
}
