/*
 * XREFs of ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x180028D90
 * Callers:
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180029018 (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180040134 (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BB78 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026BB8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddTerminateDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        __int64 a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  __int64 v10; // r9
  _WORD *v11; // rax
  __int64 v12; // rdx
  __int16 v13; // cx
  _WORD *v14; // rcx
  __int16 v15; // ax
  char *v16; // rax
  __int128 *v17; // rcx
  __int64 v18; // r8
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v27; // edi
  struct _HAM_DEPENDENCY_GROUP *v28; // rbx
  struct _HAM_DEPENDENCY_GROUP *v30; // [rsp+30h] [rbp-D0h] BYREF
  char v31[8]; // [rsp+40h] [rbp-C0h] BYREF
  char v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+1C8h] [rbp+C8h]
  __int64 v34; // [rsp+1D0h] [rbp+D0h]
  __int64 v35; // [rsp+1D8h] [rbp+D8h]
  int v36; // [rsp+1E0h] [rbp+E0h]
  int v37; // [rsp+1E4h] [rbp+E4h]
  _DWORD v38[3]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v39[128]; // [rsp+1FCh] [rbp+FCh] BYREF
  _BYTE v40[128]; // [rsp+27Ch] [rbp+17Ch] BYREF
  int v41; // [rsp+2FCh] [rbp+1FCh]
  int v42; // [rsp+304h] [rbp+204h]
  _BYTE v43[40]; // [rsp+308h] [rbp+208h] BYREF
  __int64 v44; // [rsp+330h] [rbp+230h]
  __int64 v45; // [rsp+338h] [rbp+238h]
  __int64 v46; // [rsp+340h] [rbp+240h]
  __int64 v47; // [rsp+348h] [rbp+248h]
  __int64 v48; // [rsp+350h] [rbp+250h]
  int v49; // [rsp+358h] [rbp+258h]
  int v50; // [rsp+35Ch] [rbp+25Ch]

  v30 = 0LL;
  memset_0(v38, 0, 0x180uLL);
  v38[0] = 524304;
  v10 = 64LL;
  v11 = v39;
  v12 = 64LL;
  while ( v12 != -2147483582 )
  {
    v13 = *(_WORD *)((char *)v11 + (char *)&pwsz - v39);
    if ( !v13 )
      break;
    *v11++ = v13;
    if ( !--v12 )
    {
      --v11;
      break;
    }
  }
  *v11 = 0;
  v14 = v40;
  while ( v10 != -2147483582 )
  {
    v15 = *(_WORD *)((char *)v14 + (char *)&pwsz - v40);
    if ( !v15 )
      break;
    *v14++ = v15;
    if ( !--v10 )
    {
      --v14;
      break;
    }
  }
  *v14 = 0;
  v41 = 5;
  v42 = -1;
  memset_0(v43, 0, 0x60uLL);
  v44 |= 0x200uLL;
  v48 = -1LL;
  v47 = -1LL;
  v46 = -1LL;
  v45 = -1LL;
  v49 = 100;
  v50 = 33;
  memset_0(v31, 0, 0x1A8uLL);
  v16 = &v32;
  v33 = 0LL;
  v17 = (__int128 *)v38;
  v31[0] = 3;
  v18 = 3LL;
  do
  {
    v16 += 128;
    v19 = *v17;
    v20 = v17[1];
    v17 += 8;
    *((_OWORD *)v16 - 8) = v19;
    v21 = *(v17 - 6);
    *((_OWORD *)v16 - 7) = v20;
    v22 = *(v17 - 5);
    *((_OWORD *)v16 - 6) = v21;
    v23 = *(v17 - 4);
    *((_OWORD *)v16 - 5) = v22;
    v24 = *(v17 - 3);
    *((_OWORD *)v16 - 4) = v23;
    v25 = *(v17 - 2);
    *((_OWORD *)v16 - 3) = v24;
    v26 = *(v17 - 1);
    *((_OWORD *)v16 - 2) = v25;
    *((_OWORD *)v16 - 1) = v26;
    --v18;
  }
  while ( v18 );
  v37 = a5;
  v34 = a4;
  v36 = a6 | 0xC00;
  v35 = a2;
  v27 = HampDepGroupAddDependency(a3, a1, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v31, 0LL, &v30);
  if ( v27 >= 0 )
    v27 = 0;
  v28 = v30;
  if ( v30 )
  {
    HampDepGroupRunStateChangeWorker(v30);
    HampDepGroupDereference(v28);
  }
  return (unsigned int)v27;
}
