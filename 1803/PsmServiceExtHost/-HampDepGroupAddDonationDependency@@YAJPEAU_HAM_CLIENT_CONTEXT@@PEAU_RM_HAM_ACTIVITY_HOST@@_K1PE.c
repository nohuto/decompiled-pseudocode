/*
 * XREFs of ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180004AD8
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180013070 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 * Callees:
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180004CC8 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BB78 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026BB8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x1800405A0 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddDonationDependency(
        struct _HOST_ACTIVITY_MANAGER **a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        __int64 a3,
        struct _RM_HAM_ACTIVITY_HOST *a4,
        struct _HAM_ACTIVITY_PROPERTIES *a5,
        struct _HAM_ACTIVITY **a6)
{
  __int64 v10; // r8
  char *v11; // rcx
  struct _HAM_ACTIVITY_PROPERTIES *v12; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  struct _HAM_ACTIVITY_PROPERTIES *v21; // rax
  _OWORD *v22; // rcx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  int CanDonate; // ebx
  unsigned __int64 v31; // rdx
  struct _HAM_ACTIVITY *v32; // rdx
  struct _HAM_DEPENDENCY_GROUP *v33; // rdi
  struct _HAM_DEPENDENCY_GROUP *v35; // [rsp+30h] [rbp-D0h] BYREF
  struct _HAM_HOST_DEPENDENCY *v36; // [rsp+38h] [rbp-C8h] BYREF
  char v37[8]; // [rsp+40h] [rbp-C0h] BYREF
  char v38; // [rsp+48h] [rbp-B8h] BYREF
  struct _HOST_ACTIVITY_MANAGER **v39; // [rsp+1C8h] [rbp+C8h]
  __int64 v40; // [rsp+1D0h] [rbp+D0h]
  _BYTE v41[344]; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int64 v42; // [rsp+348h] [rbp+248h]

  v35 = 0LL;
  memset_0(v37, 0, 0x1A8uLL);
  v10 = 3LL;
  v39 = a1;
  v37[0] = 4;
  v11 = &v38;
  v12 = a5;
  v13 = 3LL;
  do
  {
    v14 = *((_OWORD *)v12 + 1);
    *(_OWORD *)v11 = *(_OWORD *)v12;
    v15 = *((_OWORD *)v12 + 2);
    *((_OWORD *)v11 + 1) = v14;
    v16 = *((_OWORD *)v12 + 3);
    *((_OWORD *)v11 + 2) = v15;
    v17 = *((_OWORD *)v12 + 4);
    *((_OWORD *)v11 + 3) = v16;
    v18 = *((_OWORD *)v12 + 5);
    *((_OWORD *)v11 + 4) = v17;
    v19 = *((_OWORD *)v12 + 6);
    *((_OWORD *)v11 + 5) = v18;
    v20 = *((_OWORD *)v12 + 7);
    v12 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v12 + 128);
    *((_OWORD *)v11 + 6) = v19;
    v11 += 128;
    *((_OWORD *)v11 - 1) = v20;
    --v13;
  }
  while ( v13 );
  v21 = a5;
  v22 = v41;
  do
  {
    v23 = *((_OWORD *)v21 + 1);
    *v22 = *(_OWORD *)v21;
    v24 = *((_OWORD *)v21 + 2);
    v22[1] = v23;
    v25 = *((_OWORD *)v21 + 3);
    v22[2] = v24;
    v26 = *((_OWORD *)v21 + 4);
    v22[3] = v25;
    v27 = *((_OWORD *)v21 + 5);
    v22[4] = v26;
    v28 = *((_OWORD *)v21 + 6);
    v22[5] = v27;
    v29 = *((_OWORD *)v21 + 7);
    v21 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v21 + 128);
    v22[6] = v28;
    v22 += 8;
    *(v22 - 1) = v29;
    --v10;
  }
  while ( v10 );
  CanDonate = HampRmPopulateDefaultProperties((struct _HAM_ACTIVITY_PROPERTIES *)v41, *a1, 1u);
  if ( CanDonate >= 0 )
  {
    v31 = 0LL;
    if ( (*(_DWORD *)a5 & 0x400) == 0 )
      v31 = v42;
    CanDonate = HampHostCanDonate(a2, v31);
    if ( CanDonate >= 0 )
    {
      v40 = a3;
      CanDonate = HampDepGroupAddDependency(a2, a4, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v37, &v36, &v35);
      if ( CanDonate >= 0 )
      {
        v32 = *(struct _HAM_ACTIVITY **)v36;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)v36 + 24LL)) <= 1 )
          __fastfail(0xEu);
        *a6 = v32;
        CanDonate = 0;
      }
      v33 = v35;
      if ( v35 )
      {
        HampDepGroupRunStateChangeWorker(v35);
        HampDepGroupDereference(v33);
      }
    }
  }
  return (unsigned int)CanDonate;
}
