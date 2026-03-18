/*
 * XREFs of PpmSetProfilePolicySetting @ 0x1404DEB98
 * Callers:
 *     PopSetNewPolicyValue @ 0x1404DF45C (PopSetNewPolicyValue.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14070BA48 (PpmProcessSettingsFromQueryTable.c)
 * Callees:
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PpmInfoAdjustSetting @ 0x1404E00A8 (PpmInfoAdjustSetting.c)
 *     PpmInfoReleaseLocks @ 0x1404E1168 (PpmInfoReleaseLocks.c)
 *     PpmReapplyPerfPolicy @ 0x1405B5D08 (PpmReapplyPerfPolicy.c)
 *     PpmGetPolicyAction @ 0x1405E1004 (PpmGetPolicyAction.c)
 *     PpmEventTraceProfileSetting @ 0x1405E1CDC (PpmEventTraceProfileSetting.c)
 *     PpmReapplyIdlePolicy @ 0x1406F68F8 (PpmReapplyIdlePolicy.c)
 */

__int64 __fastcall PpmSetProfilePolicySetting(_QWORD *a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  __int64 v6; // r12
  unsigned int v9; // r9d
  GUID **v10; // rdx
  GUID **v11; // rsi
  unsigned int v12; // r14d
  unsigned int v13; // r8d
  unsigned __int8 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // r15d
  __int64 v18; // rax
  __int64 *v19; // rbp
  __int64 v20; // r13
  char v21; // al
  __int64 v22; // rdx
  int v23; // r9d
  unsigned int v24; // ecx
  bool v26; // r13
  __int64 v27; // r12
  _QWORD *v28; // rbp
  char v29; // cl
  unsigned __int8 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rbp
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 v35; // r12
  int v36; // ecx
  int v37; // r9d
  char v38; // [rsp+40h] [rbp-88h]
  bool v39; // [rsp+44h] [rbp-84h]
  bool v40; // [rsp+48h] [rbp-80h]
  int v41; // [rsp+50h] [rbp-78h]
  __int64 v42; // [rsp+58h] [rbp-70h]
  int v43; // [rsp+58h] [rbp-70h]
  __int16 v44; // [rsp+60h] [rbp-68h] BYREF
  __int64 v45; // [rsp+68h] [rbp-60h]
  __int64 v46; // [rsp+70h] [rbp-58h]
  __int64 v47; // [rsp+78h] [rbp-50h] BYREF
  GUID v48; // [rsp+80h] [rbp-48h]

  v5 = 0;
  v6 = a3;
  LODWORD(v45) = a3;
  v46 = a4;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( !a5 || !a4 )
    return (unsigned int)-1073741811;
  v9 = 0;
  v10 = &off_140400968;
LABEL_4:
  v11 = v10 - 1;
  v12 = 0;
  v13 = ((*((_BYTE *)v10 + 29) & 4) != 0) + 1;
  v48 = **v10;
  v14 = v48.Data4[7];
  while ( 1 )
  {
    v15 = *(_QWORD *)&v48.Data1 - *a2;
    if ( *(_QWORD *)&v48.Data1 == *a2 )
      v15 = *(_QWORD *)v48.Data4 - a2[1];
    if ( !v15 )
      break;
    ++v14;
    ++v12;
    v48.Data4[7] = v14;
    if ( v12 >= v13 )
    {
      ++v9;
      v10 += 5;
      if ( v9 < 0x2D )
        goto LABEL_4;
      return (unsigned int)-1073741275;
    }
  }
  v16 = 1LL << *((_BYTE *)v11 + 36);
  v17 = v12;
  if ( (*((_BYTE *)v11 + 37) & 1) != 0 )
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  else
    PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  *(_QWORD *)&v48.Data1 = PpmCurrentProfile;
  v41 = dword_1403661AC;
  v18 = *a1 - *(_QWORD *)&NullGuid.Data1;
  if ( *a1 == *(_QWORD *)&NullGuid.Data1 )
    v18 = a1[1] - *(_QWORD *)NullGuid.Data4;
  if ( !v18 )
  {
    v47 = v6;
    v42 = 2688 * v6;
    v19 = &PpmDefaultProfile[336 * v6 + 5];
    LODWORD(v45) = *((_DWORD *)v11 + 8);
    v20 = (__int64)v11[3] + v12 * (unsigned int)v45 + (_QWORD)v19;
    if ( (*((_BYTE *)v11 + 37) & 4) != 0 && !v12 && (v16 & v19[1]) == 0 )
    {
      v38 = 1;
      v17 = 1;
    }
    v21 = PpmInfoAdjustSetting((_DWORD)v11, 2688 * v6 + (unsigned int)&PpmDefaultProfile[5], v12, v17, v46, a5);
    v24 = v12;
    v19[v12] |= v16;
    if ( !v21 )
      goto LABEL_18;
    LOBYTE(v23) = v12;
    LOBYTE(v24) = byte_140362DE8;
    PpmEventTraceProfileSetting(v24, (unsigned int)*v11, (unsigned int)v11[1], v23, v20, v45, v6, 0);
    v26 = 0;
    if ( *(__int64 **)&v48.Data1 == PpmDefaultProfile )
    {
      v26 = v41 == (_DWORD)v6;
      v39 = v41 == (_DWORD)v6;
    }
    if ( PpmProfileCount )
    {
      v27 = (unsigned __int8)PpmProfileCount;
      v22 = v42 + 40;
      v28 = (_QWORD *)(v42 + 40 + PpmProfiles);
      v45 = v42 + 40;
      do
      {
        if ( (v28[v12] & v16) == 0 && (!v12 || (v16 & *v28) == 0) )
        {
          if ( (*((_BYTE *)v11 + 37) & 4) != 0 && !v12 )
          {
            if ( v38 )
            {
              if ( (v16 & v28[1]) == 0 )
                v17 = 1;
            }
            else
            {
              v17 = 0;
            }
          }
          PpmInfoAdjustSetting((_DWORD)v11, (_DWORD)v28, v12, v17, v46, a5);
          if ( *(_QWORD **)&v48.Data1 == (_QWORD *)((char *)v28 - v45) && v41 == v47 )
            v26 = 1;
        }
        v28 += 682;
        --v27;
      }
      while ( v27 );
      v39 = v26;
    }
LABEL_34:
    if ( v39 )
      goto LABEL_35;
    goto LABEL_18;
  }
  v31 = 0LL;
  if ( !PpmProfileCount )
  {
LABEL_54:
    PpmInfoReleaseLocks(v11, v31);
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v32 = PpmProfiles + 5456LL * (unsigned int)v31;
    v33 = *(_QWORD *)(v32 + 12) - *a1;
    if ( !v33 )
      v33 = *(_QWORD *)(v32 + 20) - a1[1];
    if ( !v33 )
      break;
    v31 = (unsigned int)(v31 + 1);
    if ( (unsigned int)v31 >= (unsigned __int8)PpmProfileCount )
      goto LABEL_54;
  }
  v43 = *((_DWORD *)v11 + 8);
  v34 = v32 + 2688 * v6 + 40;
  v35 = (__int64)v11[3] + v12 * v43 + v34;
  if ( (*((_BYTE *)v11 + 37) & 4) != 0 && !v12 && (v16 & *(_QWORD *)(v34 + 8)) == 0 )
    v17 = 1;
  LOBYTE(v36) = PpmInfoAdjustSetting((_DWORD)v11, v34, v12, v17, v46, a5);
  *(_QWORD *)(v34 + 8LL * v12) |= v16;
  if ( (_BYTE)v36 )
  {
    LOBYTE(v37) = v12;
    LOBYTE(v36) = *(_BYTE *)(v32 + 8);
    PpmEventTraceProfileSetting(v36, (unsigned int)*v11, (unsigned int)v11[1], v37, v35, v43, v45, 0);
    if ( *(_QWORD *)&v48.Data1 == v32 )
      v39 = v41 == (_DWORD)v45;
    if ( PpmBackgroundProfile == v32 || PpmEntryLevelPerfProfile == v32 )
      v40 = v41 == (_DWORD)v45;
    goto LABEL_34;
  }
LABEL_18:
  if ( !PopHeteroSystem || !PpmPerfSchedulerDirectedPerfStatesSupported || !v40 )
  {
    PpmInfoReleaseLocks(v11, v22);
    return v5;
  }
LABEL_35:
  v29 = *((_BYTE *)v11 + 36);
  v44 = 0;
  v47 = 1LL << v29;
  PpmGetPolicyAction(&v47, &v44);
  if ( (v30 & *((_BYTE *)v11 + 37)) != 0 )
  {
    PpmReapplyPerfPolicy(&v44);
  }
  else
  {
    PpmReapplyIdlePolicy();
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  }
  return v5;
}
