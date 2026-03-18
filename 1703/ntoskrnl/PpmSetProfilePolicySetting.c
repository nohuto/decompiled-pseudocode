/*
 * XREFs of PpmSetProfilePolicySetting @ 0x1404C13FC
 * Callers:
 *     PopSetNewPolicyValue @ 0x1404C1AA4 (PopSetNewPolicyValue.c)
 *     PpmProcessSettingsFromQueryTable @ 0x1406D5CD4 (PpmProcessSettingsFromQueryTable.c)
 * Callees:
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x14007157C (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140088D60 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpmInfoAdjustSetting @ 0x1404C23F0 (PpmInfoAdjustSetting.c)
 *     PpmPerfRecomputeBackgroundPolicy @ 0x1405819C0 (PpmPerfRecomputeBackgroundPolicy.c)
 *     PpmReapplyIdlePolicy @ 0x14059B744 (PpmReapplyIdlePolicy.c)
 *     PpmGetPolicyAction @ 0x1405C0044 (PpmGetPolicyAction.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 *     PpmEventTraceProfileSetting @ 0x1405CC7D8 (PpmEventTraceProfileSetting.c)
 */

__int64 __fastcall PpmSetProfilePolicySetting(_QWORD *a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r12
  bool v6; // al
  bool v7; // r14
  bool v8; // si
  GUID **v11; // rdi
  char v12; // r13
  unsigned int v13; // r9d
  GUID **v14; // rdx
  unsigned int v15; // r14d
  BOOL v16; // r8d
  unsigned int v17; // r8d
  unsigned __int8 v18; // r10
  __int64 v19; // rcx
  unsigned int v20; // ebx
  int v21; // r13d
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 *v24; // rsi
  __int64 v25; // r15
  char v26; // al
  int v27; // r9d
  unsigned int v28; // ecx
  __int64 v30; // r15
  _QWORD *v31; // rsi
  char v32; // cl
  __int64 v33; // rax
  char v34; // al
  unsigned int v35; // edx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // r12
  char v40; // al
  int v41; // r9d
  unsigned int v42; // ecx
  int v43; // eax
  char v44; // [rsp+48h] [rbp-31h]
  bool v45; // [rsp+50h] [rbp-29h]
  bool v46; // [rsp+54h] [rbp-25h]
  __int64 v47; // [rsp+58h] [rbp-21h]
  int v48; // [rsp+58h] [rbp-21h]
  int v49; // [rsp+60h] [rbp-19h] BYREF
  __int64 v50; // [rsp+68h] [rbp-11h]
  __int64 v51; // [rsp+70h] [rbp-9h]
  __int16 v52; // [rsp+78h] [rbp-1h] BYREF
  __int64 v53; // [rsp+80h] [rbp+7h] BYREF
  __int64 v54; // [rsp+88h] [rbp+Fh]
  GUID v55; // [rsp+90h] [rbp+17h]

  v5 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v54 = a4;
  LODWORD(v51) = a3;
  v11 = 0LL;
  v44 = 0;
  v12 = 0;
  v46 = 0;
  v45 = 0;
  if ( !a5 || !a4 )
  {
    v20 = -1073741811;
LABEL_24:
    if ( v6 && PpmPerfVirtualHeterogeneitySupported && (unsigned __int8)(KeHeteroSystem - 1) > 1u )
    {
      LOWORD(v49) = 0;
      v49 |= 0x20u;
      PpmReapplyPerfPolicy(&v49);
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    }
    if ( v7 )
      PpmPerfRecomputeBackgroundPolicy(0LL);
    if ( v8 )
    {
      v32 = *((_BYTE *)v11 + 36);
      v52 = 0;
      v53 = 1LL << v32;
      PpmGetPolicyAction(&v53, &v52);
      if ( (*((_BYTE *)v11 + 37) & 1) != 0 )
      {
        PpmReapplyPerfPolicy(&v52);
        return v20;
      }
      PpmReapplyIdlePolicy();
      goto LABEL_34;
    }
    if ( !v12 )
      return v20;
LABEL_29:
    if ( (*((_BYTE *)v11 + 37) & 1) != 0 )
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
      return v20;
    }
LABEL_34:
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    return v20;
  }
  v13 = 0;
  v14 = &off_1403E3868;
  do
  {
    v11 = v14 - 1;
    v15 = 0;
    v16 = (*((_BYTE *)v14 + 29) & 4) != 0;
    v55 = **v14;
    v17 = v16 + 1;
    if ( v17 )
    {
      v18 = v55.Data4[7];
      while ( 1 )
      {
        v19 = *(_QWORD *)&v55.Data1 - *a2;
        if ( *(_QWORD *)&v55.Data1 == *a2 )
          v19 = *(_QWORD *)v55.Data4 - a2[1];
        if ( !v19 )
          break;
        ++v18;
        ++v15;
        v55.Data4[7] = v18;
        if ( v15 >= v17 )
          goto LABEL_10;
      }
      v21 = v15;
      v22 = 1LL << *((_BYTE *)v11 + 36);
      if ( (*((_BYTE *)v11 + 37) & 1) != 0 )
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      else
        PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
      *(_QWORD *)&v55.Data1 = PpmCurrentProfile;
      LODWORD(v50) = dword_14034BB2C;
      v23 = *a1 - *(_QWORD *)&NullGuid.Data1;
      if ( *a1 == *(_QWORD *)&NullGuid.Data1 )
        v23 = a1[1] - *(_QWORD *)NullGuid.Data4;
      if ( !v23 )
      {
        v53 = v5;
        v47 = 1400 * v5;
        v24 = &PpmDefaultProfile[175 * v5 + 5];
        LODWORD(v51) = *((_DWORD *)v11 + 8);
        v25 = (__int64)v11[3] + v15 * (unsigned int)v51 + (_QWORD)v24;
        if ( (*((_BYTE *)v11 + 37) & 4) != 0 && !v15 && (v22 & v24[1]) == 0 )
        {
          v44 = 1;
          v21 = 1;
        }
        v26 = PpmInfoAdjustSetting((_DWORD)v11, 1400 * v5 + (unsigned int)&PpmDefaultProfile[5], v15, v21, v54, a5);
        v28 = v15;
        v24[v15] |= v22;
        if ( v26 )
        {
          LOBYTE(v27) = v15;
          LOBYTE(v28) = byte_140349208;
          PpmEventTraceProfileSetting(v28, (unsigned int)*v11, (unsigned int)v11[1], v27, v25, v51, v5, 0);
          if ( *(__int64 **)&v55.Data1 == PpmDefaultProfile )
            v45 = (_DWORD)v50 == (_DWORD)v5;
          if ( PpmProfileCount )
          {
            v30 = (int)v50;
            v51 = (unsigned __int8)PpmProfileCount;
            v50 = PpmBackgroundProfile;
            v31 = (_QWORD *)(v47 + 40 + PpmProfiles);
            while ( 1 )
            {
              if ( (v31[v15] & v22) == 0 && (!v15 || (v22 & *v31) == 0) )
              {
                if ( (*((_BYTE *)v11 + 37) & 4) != 0 && !v15 )
                {
                  if ( v44 )
                  {
                    if ( (v22 & v31[1]) == 0 )
                      v21 = 1;
                  }
                  else
                  {
                    v21 = 0;
                  }
                }
                PpmInfoAdjustSetting((_DWORD)v11, (_DWORD)v31, v15, v21, v54, a5);
                if ( *(_QWORD **)&v55.Data1 == &v31[v47 / 0xFFFFFFFFFFFFFFF8uLL - 5] )
                {
                  v33 = v53;
                  if ( v30 == v53 )
                  {
                    v45 = 1;
                    goto LABEL_59;
                  }
                }
                else if ( (_QWORD *)v50 == &v31[v47 / 0xFFFFFFFFFFFFFFF8uLL - 5] )
                {
                  v33 = v53;
LABEL_59:
                  if ( v30 == v33 )
                  {
                    v34 = v46;
                    if ( (*((_BYTE *)v11 + 37) & 0x20) != 0 )
                      v34 = 1;
                    v46 = v34;
                  }
                }
              }
              v31 += 360;
              if ( !--v51 )
                goto LABEL_22;
            }
          }
        }
        goto LABEL_22;
      }
      v35 = 0;
      if ( !PpmProfileCount )
      {
LABEL_68:
        v20 = -1073741275;
        goto LABEL_29;
      }
      while ( 1 )
      {
        v36 = PpmProfiles + 2880LL * v35;
        v37 = *(_QWORD *)(v36 + 12) - *a1;
        if ( !v37 )
          v37 = *(_QWORD *)(v36 + 20) - a1[1];
        if ( !v37 )
          break;
        if ( ++v35 >= (unsigned __int8)PpmProfileCount )
          goto LABEL_68;
      }
      v48 = *((_DWORD *)v11 + 8);
      v38 = v36 + 1400 * v5 + 40;
      v39 = (__int64)v11[3] + v15 * v48 + v38;
      if ( (*((_BYTE *)v11 + 37) & 4) != 0 && !v15 && (v22 & *(_QWORD *)(v38 + 8)) == 0 )
        v21 = 1;
      v40 = PpmInfoAdjustSetting((_DWORD)v11, v38, v15, v21, v54, a5);
      v42 = v15;
      *(_QWORD *)(v38 + 8LL * v15) |= v22;
      if ( !v40 )
        goto LABEL_22;
      LOBYTE(v41) = v15;
      LOBYTE(v42) = *(_BYTE *)(v36 + 8);
      PpmEventTraceProfileSetting(v42, (unsigned int)*v11, (unsigned int)v11[1], v41, v39, v48, v51, 0);
      if ( *(_QWORD *)&v55.Data1 == v36 )
      {
        v43 = v50;
        if ( (_DWORD)v50 != (_DWORD)v51 )
          goto LABEL_81;
        v45 = 1;
      }
      else
      {
        if ( PpmBackgroundProfile != v36 )
          goto LABEL_22;
        v43 = v50;
      }
      if ( v43 == (_DWORD)v51 )
        v46 = (*((_BYTE *)v11 + 37) & 0x20) != 0;
LABEL_81:
      if ( PpmBackgroundProfile == v36 )
      {
        v6 = (*((_BYTE *)v11 + 37) & 0x20) != 0;
        goto LABEL_23;
      }
LABEL_22:
      v6 = 0;
LABEL_23:
      v8 = v45;
      v20 = 0;
      v7 = v46;
      v12 = 1;
      goto LABEL_24;
    }
LABEL_10:
    ++v13;
    v14 += 5;
  }
  while ( v13 < 0x2B );
  return (unsigned int)-1073741275;
}
