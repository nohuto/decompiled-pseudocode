/*
 * XREFs of RmpHandlePsmRetrieveHostMemoryLimit @ 0x1800179D4
 * Callers:
 *     PsmRetrieveHostMemoryLimit @ 0x180017790 (PsmRetrieveHostMemoryLimit.c)
 * Callees:
 *     ?RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180005BC4 (-RmpActivityHostComputeEnforcementSettings@@YAXPEAU_RM_ACTIVITY_HOST@@_KPEAW4_RM_COMMIT_LEVEL@@P.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017BA0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpHandlePsmRetrieveHostMemoryLimit(
        void *Src,
        int a2,
        const wchar_t *a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  ULONG v10; // eax
  _OWORD *v11; // rdx
  wchar_t *v12; // rax
  __int64 v13; // r8
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  struct _RM_SERVICE_GLOBALS *v22; // rcx
  __int128 v23; // xmm1
  __int64 v24; // rax
  int v25; // eax
  char *v26; // rbx
  unsigned int v27; // edi
  __int64 v29; // rax
  bool v30; // zf
  PVOID P; // [rsp+20h] [rbp-E0h] BYREF
  char v32[16]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h]
  wchar_t Destination[232]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v35[68]; // [rsp+230h] [rbp+130h] BYREF
  int v36; // [rsp+274h] [rbp+174h]
  int v37; // [rsp+278h] [rbp+178h]
  __int64 v38; // [rsp+280h] [rbp+180h]
  _BYTE v39[560]; // [rsp+290h] [rbp+190h] BYREF

  P = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, a3);
  memset_0(v35, 0, sizeof(v35));
  v10 = RtlLengthSid(Src);
  memcpy_0(v35, Src, v10);
  v38 = a5;
  v36 = a2;
  v37 = a4;
  RmpAcquireGlobalLock();
  v11 = v39;
  v12 = Destination;
  v13 = 4LL;
  do
  {
    v14 = *((_OWORD *)v12 + 1);
    *v11 = *(_OWORD *)v12;
    v15 = *((_OWORD *)v12 + 2);
    v11[1] = v14;
    v16 = *((_OWORD *)v12 + 3);
    v11[2] = v15;
    v17 = *((_OWORD *)v12 + 4);
    v11[3] = v16;
    v18 = *((_OWORD *)v12 + 5);
    v11[4] = v17;
    v19 = *((_OWORD *)v12 + 6);
    v11[5] = v18;
    v20 = *((_OWORD *)v12 + 7);
    v12 += 64;
    v11[6] = v19;
    v11 += 8;
    *(v11 - 1) = v20;
    --v13;
  }
  while ( v13 );
  v21 = *(_OWORD *)v12;
  v22 = RmSvcGlobals;
  v23 = *((_OWORD *)v12 + 1);
  v24 = *((_QWORD *)v12 + 4);
  *v11 = v21;
  v11[1] = v23;
  *((_QWORD *)v11 + 4) = v24;
  v25 = RmpActivityHostFindByTypeAndIdentifier(v22, 0LL, v39, &P);
  v26 = (char *)P;
  v27 = v25;
  if ( v25 >= 0 )
  {
    RmpActivityHostComputeEnforcementSettings(
      (struct _RM_ACTIVITY_HOST *)P,
      0LL,
      0LL,
      (struct _RM_ENFORCEMENT_SETTINGS *)v32);
    v29 = v33;
    v30 = v33 == -1;
    *((_QWORD *)v26 + 111) = v33;
    if ( v30 )
      v29 = 0LL;
    *a6 = v29;
    v27 = 0;
  }
  RmpReleaseGlobalLock();
  if ( v26 )
    RmpObjectRelease(v26);
  return v27;
}
