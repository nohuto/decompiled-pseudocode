/*
 * XREFs of ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x180066914
 * Callers:
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009680 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BB78 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026BB8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampSystemPpleIsHostCacheEligible@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F8B8 (-HampSystemPpleIsHostCacheEligible@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddPpleDependency(struct _RM_HAM_ACTIVITY_HOST *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _WORD *v6; // rcx
  __int16 v7; // ax
  _WORD *v8; // rax
  _WORD *v9; // rcx
  __int16 v10; // ax
  _WORD *v11; // rax
  int IsHostCacheEligible; // eax
  char *v13; // rcx
  __int128 *v14; // rax
  __int64 v15; // r8
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int v24; // ebx
  struct _HAM_DEPENDENCY_GROUP *v25; // rdi
  struct _HAM_HOST_DEPENDENCY *v27; // [rsp+30h] [rbp-D0h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v28; // [rsp+38h] [rbp-C8h] BYREF
  char v29[8]; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+1C8h] [rbp+C8h]
  _DWORD v32[3]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v33[128]; // [rsp+1FCh] [rbp+FCh] BYREF
  _BYTE v34[128]; // [rsp+27Ch] [rbp+17Ch] BYREF
  int v35; // [rsp+2FCh] [rbp+1FCh]
  int v36; // [rsp+304h] [rbp+204h]
  _BYTE v37[40]; // [rsp+308h] [rbp+208h] BYREF
  __int64 v38; // [rsp+330h] [rbp+230h]
  __int64 v39; // [rsp+338h] [rbp+238h]
  __int64 v40; // [rsp+340h] [rbp+240h]
  __int64 v41; // [rsp+348h] [rbp+248h]
  __int64 v42; // [rsp+350h] [rbp+250h]
  int v43; // [rsp+358h] [rbp+258h]
  int v44; // [rsp+35Ch] [rbp+25Ch]

  v27 = 0LL;
  v28 = 0LL;
  memset_0(v32, 0, 0x180uLL);
  v4 = 64LL;
  v32[0] = 524304;
  v5 = 64LL;
  v6 = v33;
  do
  {
    if ( v5 == -2147483582 )
      break;
    v7 = *(_WORD *)((char *)v6 + (char *)L"PpleDependency" - v33);
    if ( !v7 )
      break;
    *v6++ = v7;
    --v5;
  }
  while ( v5 );
  v8 = v6 - 1;
  if ( v5 )
    v8 = v6;
  v9 = v34;
  *v8 = 0;
  do
  {
    if ( v4 == -2147483582 )
      break;
    v10 = *(_WORD *)((char *)v9 + (char *)L"DefaultPPLE" - v34);
    if ( !v10 )
      break;
    *v9++ = v10;
    --v4;
  }
  while ( v4 );
  v11 = v9 - 1;
  if ( v4 )
    v11 = v9;
  *v11 = 0;
  v35 = 5;
  memset_0(v37, 0, 0x60uLL);
  v38 |= 0x200uLL;
  v42 = -1LL;
  v41 = -1LL;
  v40 = -1LL;
  v39 = -1LL;
  v43 = 100;
  v44 = 33;
  IsHostCacheEligible = HampSystemPpleIsHostCacheEligible(a2);
  v32[0] |= 2u;
  v36 = -(IsHostCacheEligible != 0);
  memset_0(v29, 0, 0x1A8uLL);
  v13 = &v30;
  v31 = 0LL;
  v14 = (__int128 *)v32;
  v29[0] = 2;
  v15 = 3LL;
  do
  {
    v13 += 128;
    v16 = *v14;
    v17 = v14[1];
    v14 += 8;
    *((_OWORD *)v13 - 8) = v16;
    v18 = *(v14 - 6);
    *((_OWORD *)v13 - 7) = v17;
    v19 = *(v14 - 5);
    *((_OWORD *)v13 - 6) = v18;
    v20 = *(v14 - 4);
    *((_OWORD *)v13 - 5) = v19;
    v21 = *(v14 - 3);
    *((_OWORD *)v13 - 4) = v20;
    v22 = *(v14 - 2);
    *((_OWORD *)v13 - 3) = v21;
    v23 = *(v14 - 1);
    *((_OWORD *)v13 - 2) = v22;
    *((_OWORD *)v13 - 1) = v23;
    --v15;
  }
  while ( v15 );
  v24 = HampDepGroupAddDependency(a1, a2, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v29, &v27, &v28);
  if ( v24 >= 0 )
  {
    v24 = 0;
    *((_QWORD *)a1 + 84) = v27;
  }
  v25 = v28;
  if ( v28 )
  {
    HampDepGroupRunStateChangeWorker(v28);
    HampDepGroupDereference(v25);
  }
  return (unsigned int)v24;
}
