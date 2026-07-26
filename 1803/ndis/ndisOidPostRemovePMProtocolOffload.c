/*
 * XREFs of ndisOidPostRemovePMProtocolOffload @ 0x1C00147F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeletePatternEntry @ 0x1C0014950 (ndisDeletePatternEntry.c)
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     ndisGetCombinedPMConfig @ 0x1C0020AF0 (ndisGetCombinedPMConfig.c)
 *     ndisGetPatternEffectivePriority @ 0x1C0049F90 (ndisGetPatternEffectivePriority.c)
 *     ndisUpdateWmiPMParamsForProtocolOffloads @ 0x1C004B894 (ndisUpdateWmiPMParamsForProtocolOffloads.c)
 *     ndisMiniportPMParametersUpdated @ 0x1C00C5BBC (ndisMiniportPMParametersUpdated.c)
 */

void __fastcall ndisOidPostRemovePMProtocolOffload(__int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // ebp
  __int64 v6; // rcx
  __int64 OidSourceHandle; // rax
  _QWORD *v8; // rcx
  __int64 v9; // r15
  __int64 *v10; // rax
  int v11; // edx
  _QWORD *v12; // r9
  _QWORD *v13; // r8
  _QWORD *v14; // r10
  bool v15; // zf
  _QWORD *v16; // r8
  _QWORD *v17; // r10
  _QWORD *v18; // rcx
  _QWORD *v19; // r14
  _QWORD *v20; // rdx
  __int64 v21; // r11
  _QWORD *v22; // r12
  bool v23; // zf
  void *v24; // r10
  int PatternEffectivePriority; // eax
  __int64 v26; // r8

  v2 = a1[3];
  v3 = *a1;
  v4 = a1[4];
  if ( *((_DWORD *)a1 + 10) )
    return;
  v5 = **(_DWORD **)(v4 + 40);
  if ( !v3 )
    goto LABEL_3;
  OidSourceHandle = ndisGetOidSourceHandle(a1[4]);
  v8 = (_QWORD *)(v3 + 976);
  v9 = OidSourceHandle;
  v10 = *(__int64 **)(v3 + 976);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *((_DWORD *)v10 + 49);
      v12 = v10;
      v13 = v8;
      v14 = v10;
      v15 = v11 == v5;
      if ( v11 == v5 )
        break;
      v8 = v10;
      v10 = (__int64 *)*v10;
      if ( !v10 )
      {
        v15 = v11 == v5;
        break;
      }
    }
    if ( v15 )
      v12 = v13;
    v16 = 0LL;
    if ( v11 == v5 )
      v16 = v14;
    if ( v16 )
    {
      v17 = 0LL;
      v18 = v16 + 1;
      if ( v16 != (_QWORD *)-8LL )
      {
        while ( 1 )
        {
          v19 = v18 - 1;
          v20 = v18;
          v21 = v18[2];
          v22 = v17;
          v23 = v21 == v9;
          if ( v21 == v9 )
            break;
          v17 = v18;
          v18 = (_QWORD *)*v18;
          if ( !v18 )
          {
            v23 = v21 == v9;
            break;
          }
        }
        if ( v23 )
          v20 = v22;
        v24 = 0LL;
        if ( v21 == v9 )
          v24 = v19;
        if ( v24 )
        {
          if ( v20 )
          {
            *v20 = *v18;
          }
          else
          {
            if ( !*v18 )
            {
              *v12 = *v10;
              goto LABEL_27;
            }
            v16 = (_QWORD *)(*v18 - 8LL);
            *v12 = v16;
            *v16 = *v10;
          }
          PatternEffectivePriority = ndisGetPatternEffectivePriority(v16);
          *(_DWORD *)(v26 + 36) = PatternEffectivePriority;
LABEL_27:
          ExFreePoolWithTag(v24, 0);
          if ( (_UNKNOWN *)ndisGetOidSourceHandle(v4) == &ndisIntReqWmi )
          {
            ndisUpdateWmiPMParamsForProtocolOffloads(v3);
            ndisGetCombinedPMConfig(v3, v3 + 1120);
            ndisMiniportPMParametersUpdated(v3);
          }
LABEL_3:
          if ( a1[3] )
            ndisDeletePatternEntry(v2 + 512, v5);
          v6 = a1[1];
          if ( v6 )
          {
            if ( (*(_DWORD *)(v4 + 88) & 0x4000) == 0 )
              ndisDeletePatternEntry(v6 + 872, v5);
          }
        }
      }
    }
  }
}
