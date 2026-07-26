/*
 * XREFs of ndisOidPostRemovePMProtocolOffload @ 0x1C004BF00
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C001F33C (ndisGetOidSourceHandle.c)
 *     ndisGetCombinedPMConfig @ 0x1C001F360 (ndisGetCombinedPMConfig.c)
 *     ndisDeletePatternEntry @ 0x1C004AF30 (ndisDeletePatternEntry.c)
 *     ndisGetPatternEffectivePriority @ 0x1C004B120 (ndisGetPatternEffectivePriority.c)
 *     ndisUpdateWmiPMParamsForProtocolOffloads @ 0x1C004D008 (ndisUpdateWmiPMParamsForProtocolOffloads.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00BB04C (ndisMiniportPMParametersUpdated.c)
 */

char __fastcall ndisOidPostRemovePMProtocolOffload(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  int v6; // ebp
  __int64 OidSourceHandle; // rax
  _QWORD *v8; // r10
  __int64 v9; // r11
  __int64 v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // r9
  int PatternEffectivePriority; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v1 = &retaddr;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 40) )
    return (char)v1;
  v1 = *(_UNKNOWN ***)(v5 + 40);
  v6 = *(_DWORD *)v1;
  if ( v4 )
  {
    OidSourceHandle = ndisGetOidSourceHandle(*(_QWORD *)(a1 + 32));
    v8 = (_QWORD *)(v4 + 976);
    v9 = OidSourceHandle;
    v1 = *(_UNKNOWN ***)(v4 + 976);
    if ( !v1 )
      return (char)v1;
    do
    {
      v10 = (__int64)v1;
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
    v12 = (_QWORD *)(v10 + 8);
    if ( v10 == -8 )
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
      PatternEffectivePriority = ndisGetPatternEffectivePriority(v10);
      *(_DWORD *)(v15 + 36) = PatternEffectivePriority;
    }
    else
    {
      v16 = *v12;
      if ( v16 )
      {
        v17 = (_QWORD *)(v16 - 8);
        *v8 = v17;
        *v17 = *v1;
        v18 = ndisGetPatternEffectivePriority((__int64)v17);
        *(_DWORD *)(v19 + 36) = v18;
      }
      else
      {
        *v8 = *v1;
      }
    }
    ExFreePoolWithTag(v13, 0);
    v1 = (_UNKNOWN **)ndisGetOidSourceHandle(v5);
    if ( v1 == (_UNKNOWN **)&ndisIntReqWmi )
    {
      ndisUpdateWmiPMParamsForProtocolOffloads(v4);
      ndisGetCombinedPMConfig(v4, v4 + 1120);
      LOBYTE(v1) = ndisMiniportPMParametersUpdated(v4);
    }
  }
  if ( *(_QWORD *)(a1 + 24) )
    LOBYTE(v1) = ndisDeletePatternEntry((_DWORD *)(v3 + 512), v6);
  v20 = *(_QWORD *)(a1 + 8);
  if ( v20 && (*(_DWORD *)(v5 + 88) & 0x4000) == 0 )
    LOBYTE(v1) = ndisDeletePatternEntry((_DWORD *)(v20 + 872), v6);
  return (char)v1;
}
