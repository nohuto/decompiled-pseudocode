/*
 * XREFs of ndisOidPostRemovePMProtocolOffload @ 0x1C00497B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeletePatternEntry @ 0x1C000251C (ndisDeletePatternEntry.c)
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     ndisGetCombinedPMConfig @ 0x1C0003200 (ndisGetCombinedPMConfig.c)
 *     ndisGetPatternEffectivePriority @ 0x1C0048B80 (ndisGetPatternEffectivePriority.c)
 *     ndisUpdateWmiPMParamsForProtocolOffloads @ 0x1C004A8BC (ndisUpdateWmiPMParamsForProtocolOffloads.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00ADFCC (ndisMiniportPMParametersUpdated.c)
 */

char __fastcall ndisOidPostRemovePMProtocolOffload(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // ebp
  __int64 OidSourceHandle; // rax
  _QWORD *v8; // r10
  __int64 v9; // r11
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // r9
  int PatternEffectivePriority; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v1 = &retaddr;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 40) )
    return (char)v1;
  v1 = *(_UNKNOWN ***)(v4 + 40);
  v5 = *(_QWORD *)a1;
  v6 = *(_DWORD *)v1;
  if ( !*(_QWORD *)a1 )
    goto LABEL_19;
  OidSourceHandle = ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32));
  v8 = (_QWORD *)(v5 + 976);
  v9 = OidSourceHandle;
  v1 = *(_UNKNOWN ***)(v5 + 976);
  if ( !v1 )
    return (char)v1;
  do
  {
    v10 = v1;
    if ( *((_DWORD *)v1 + 49) == v6 )
      break;
    v8 = v1;
    v10 = 0LL;
    v1 = (_UNKNOWN **)*v1;
  }
  while ( v1 );
  if ( !v10 )
    return (char)v1;
  v11 = 0LL;
  v12 = v10 + 1;
  if ( v10 == (_QWORD *)-8LL )
    return (char)v1;
  do
  {
    v13 = v12 - 1;
    if ( v12[2] == v9 )
      break;
    v11 = v12;
    v13 = 0LL;
    v12 = (_QWORD *)*v12;
  }
  while ( v12 );
  if ( !v13 )
    return (char)v1;
  if ( v11 )
  {
    *v11 = *v12;
LABEL_15:
    PatternEffectivePriority = ndisGetPatternEffectivePriority((__int64)v10);
    *(_DWORD *)(v15 + 36) = PatternEffectivePriority;
    goto LABEL_17;
  }
  if ( *v12 )
  {
    v10 = (_QWORD *)(*v12 - 8LL);
    *v8 = v10;
    *v10 = *v1;
    goto LABEL_15;
  }
  *v8 = *v1;
LABEL_17:
  ExFreePoolWithTag(v13, 0);
  v1 = (_UNKNOWN **)ndisGetOidSourceHandle(v4);
  if ( v1 == (_UNKNOWN **)&ndisIntReqWmi )
  {
    ndisUpdateWmiPMParamsForProtocolOffloads(v5);
    ndisGetCombinedPMConfig(v5, v5 + 1120);
    LOBYTE(v1) = ndisMiniportPMParametersUpdated(v5);
  }
LABEL_19:
  if ( *(_QWORD *)(a1 + 24) )
    LOBYTE(v1) = ndisDeletePatternEntry((_DWORD *)(v3 + 512), v6);
  v16 = *(_QWORD *)(a1 + 8);
  if ( v16 && (*(_DWORD *)(v4 + 88) & 0x4000) == 0 )
    LOBYTE(v1) = ndisDeletePatternEntry((_DWORD *)(v16 + 872), v6);
  return (char)v1;
}
