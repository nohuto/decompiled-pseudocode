/*
 * XREFs of ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180066634
 * Callers:
 *     ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180062B18 (-HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000BB78 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010FD0 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026BB8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddDynamicDependency(
        struct _HOST_ACTIVITY_MANAGER *a1,
        __int64 a2,
        __int64 a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4)
{
  struct _HAM_DEPENDENCY_GROUP *v4; // rsi
  struct _HAM_ACTIVITY_PROPERTIES *v5; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  _WORD *v12; // rcx
  __int16 v13; // ax
  _WORD *v14; // rax
  _WORD *v15; // rcx
  __int16 v16; // ax
  _WORD *v17; // rax
  char *v18; // rax
  __int64 v19; // r8
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v29; // r14
  int v30; // ebx
  int v31; // eax
  bool v32; // zf
  struct _RM_HAM_ACTIVITY_HOST *v34; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v35; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v36; // [rsp+40h] [rbp-C0h] BYREF
  char v37[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+1D8h] [rbp+D8h]
  _DWORD v40[3]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v41[128]; // [rsp+20Ch] [rbp+10Ch] BYREF
  _BYTE v42[128]; // [rsp+28Ch] [rbp+18Ch] BYREF
  int v43; // [rsp+30Ch] [rbp+20Ch]
  int v44; // [rsp+314h] [rbp+214h]
  _BYTE v45[40]; // [rsp+318h] [rbp+218h] BYREF
  __int64 v46; // [rsp+340h] [rbp+240h]
  __int64 v47; // [rsp+348h] [rbp+248h]
  __int64 v48; // [rsp+350h] [rbp+250h]
  __int64 v49; // [rsp+358h] [rbp+258h]
  __int64 v50; // [rsp+360h] [rbp+260h]
  int v51; // [rsp+368h] [rbp+268h]
  int v52; // [rsp+36Ch] [rbp+26Ch]

  v4 = 0LL;
  v5 = a4;
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v9 = 0LL;
  if ( !a4 )
  {
    memset_0(v40, 0, 0x180uLL);
    v10 = 64LL;
    v40[0] = 524304;
    v11 = 64LL;
    v12 = v41;
    do
    {
      if ( v11 == -2147483582 )
        break;
      v13 = *(_WORD *)((char *)v12 + (char *)L"DynamicHostDependency" - v41);
      if ( !v13 )
        break;
      *v12++ = v13;
      --v11;
    }
    while ( v11 );
    v14 = v12 - 1;
    if ( v11 )
      v14 = v12;
    v15 = v42;
    *v14 = 0;
    do
    {
      if ( v10 == -2147483582 )
        break;
      v16 = *(_WORD *)((char *)v15 + (char *)&pwsz - v42);
      if ( !v16 )
        break;
      *v15++ = v16;
      --v10;
    }
    while ( v10 );
    v17 = v15 - 1;
    if ( v10 )
      v17 = v15;
    *v17 = 0;
    v43 = 5;
    v44 = -1;
    memset_0(v45, 0, 0x60uLL);
    v46 |= 0x200uLL;
    v5 = (struct _HAM_ACTIVITY_PROPERTIES *)v40;
    v50 = -1LL;
    v49 = -1LL;
    v48 = -1LL;
    v47 = -1LL;
    v51 = 100;
    v52 = 33;
  }
  *(_DWORD *)v5 |= 2u;
  memset_0(v37, 0, 0x1A8uLL);
  v18 = &v38;
  v39 = 0LL;
  v19 = 3LL;
  v37[0] = 1;
  do
  {
    v18 += 128;
    v20 = *(_OWORD *)v5;
    v21 = *((_OWORD *)v5 + 1);
    v5 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v5 + 128);
    *((_OWORD *)v18 - 8) = v20;
    v22 = *((_OWORD *)v5 - 6);
    *((_OWORD *)v18 - 7) = v21;
    v23 = *((_OWORD *)v5 - 5);
    *((_OWORD *)v18 - 6) = v22;
    v24 = *((_OWORD *)v5 - 4);
    *((_OWORD *)v18 - 5) = v23;
    v25 = *((_OWORD *)v5 - 3);
    *((_OWORD *)v18 - 4) = v24;
    v26 = *((_OWORD *)v5 - 2);
    *((_OWORD *)v18 - 3) = v25;
    v27 = *((_OWORD *)v5 - 1);
    *((_OWORD *)v18 - 2) = v26;
    *((_OWORD *)v18 - 1) = v27;
    --v19;
  }
  while ( v19 );
  Host = RmHamFindHost(a1, a2, &v35);
  v29 = v35;
  v30 = Host;
  if ( Host >= 0 )
  {
    v31 = RmHamFindHost(a1, a3, &v34);
    v9 = v34;
    v30 = v31;
    if ( v31 >= 0 )
    {
      v30 = HampDepGroupAddDependency(v29, v34, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)v37, 0LL, &v36);
      if ( v30 >= 0 )
        v30 = 0;
      v4 = v36;
    }
  }
  if ( v29 )
  {
    RmpAcquireGlobalLock();
    v32 = (*((_QWORD *)v29 + 72))-- == 1LL;
    if ( v32 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v29 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v9 )
  {
    RmpAcquireGlobalLock();
    v32 = (*((_QWORD *)v9 + 72))-- == 1LL;
    if ( v32 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v9 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v4 )
  {
    HampDepGroupRunStateChangeWorker(v4);
    HampDepGroupDereference(v4);
  }
  return (unsigned int)v30;
}
