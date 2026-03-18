/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C01CDBC4
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C01CECD4 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C00363D0 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     CreateTokenManagerSessionGlobal @ 0x1C0049570 (CreateTokenManagerSessionGlobal.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C01C9C48 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C01C9E64 (-InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  __int64 v2; // r14
  struct ITokenManager **v3; // r15
  OUTPUTDUPL_SESSION_MGR *v5; // rax
  OUTPUTDUPL_SESSION_MGR *v6; // rbx
  OUTPUTDUPL_SESSION_MGR *v7; // rcx
  __int16 SuiteMask; // ax
  bool v9; // zf
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 (__fastcall *v17)(_QWORD *); // rax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  char v21; // al
  __int64 (*v22)(void); // rax
  __int64 (*v23)(void); // rax
  struct DXGPROCESS *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *CurrentProcess; // rax
  __int64 v28; // rcx
  __int64 ProcessServerSilo; // rax
  __int64 HostSilo; // rax
  __int64 v31; // rdi
  int v32; // ebx
  DXGSESSIONDATA *result; // rax
  _QWORD v34[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+48h] [rbp-B8h]
  const wchar_t *v37; // [rsp+50h] [rbp-B0h]
  int *v38; // [rsp+58h] [rbp-A8h]
  int v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  int v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+80h] [rbp-80h]
  _BYTE v44[40]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-50h] BYREF
  int v46; // [rsp+B8h] [rbp-48h]
  const wchar_t *v47; // [rsp+C0h] [rbp-40h]
  int *v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+F0h] [rbp-10h]
  _BYTE v54[40]; // [rsp+F8h] [rbp-8h] BYREF
  int v55; // [rsp+160h] [rbp+60h] BYREF
  char v56; // [rsp+168h] [rbp+68h] BYREF
  int v57; // [rsp+170h] [rbp+70h] BYREF
  enum _NT_PRODUCT_TYPE ProductType; // [rsp+178h] [rbp+78h] BYREF

  v2 = a2;
  *(_DWORD *)this = a2;
  v3 = (struct ITokenManager **)((char *)this + 18680);
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = -1;
  *((_DWORD *)this + 12) = 32;
  *((_QWORD *)this + 4) = 0LL;
  *((_WORD *)this + 9244) = 0;
  *((_QWORD *)this + 2313) = 0LL;
  *((_QWORD *)this + 2314) = 0LL;
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  *((_DWORD *)this + 4634) = 61;
  *((_QWORD *)this + 2326) = 0LL;
  *((_QWORD *)this + 2327) = 0LL;
  *((_DWORD *)this + 4658) = 0;
  *((_DWORD *)this + 4659) = 81;
  *((_DWORD *)this + 4660) = 1;
  *((_QWORD *)this + 2328) = 0LL;
  *((_QWORD *)this + 2331) = 0LL;
  *((_QWORD *)this + 2332) = 0LL;
  *((_QWORD *)this + 2335) = 0LL;
  *((_QWORD *)this + 2336) = 0LL;
  *((_QWORD *)this + 2337) = 0LL;
  *((_DWORD *)this + 4678) = 0;
  *((_DWORD *)this + 4679) = -1;
  *((_DWORD *)this + 4680) = 26;
  *((_QWORD *)this + 2338) = 0LL;
  *((_DWORD *)this + 4682) = 0;
  *((_QWORD *)this + 2342) = 0LL;
  v5 = (OUTPUTDUPL_SESSION_MGR *)operator new[](0x1B8uLL, 0x674D444Fu, PagedPool);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 1) = 0;
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    OUTPUTDUPL_SESSION_MGR::InitializeMaxActiveOutputDuplApps(v5);
    *((_DWORD *)v6 + 12) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 1) = v6;
  if ( v6 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v6) < 0 )
  {
    v7 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v7 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v7);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2319) = (char *)this + 18544;
  *((_QWORD *)this + 2318) = (char *)this + 18544;
  *((_QWORD *)this + 2321) = (char *)this + 18560;
  *((_QWORD *)this + 2320) = (char *)this + 18560;
  *((_QWORD *)this + 2323) = (char *)this + 18576;
  *((_QWORD *)this + 2322) = (char *)this + 18576;
  RtlGetNtProductType(&ProductType);
  SuiteMask = RtlGetSuiteMask();
  if ( ProductType != NtProductServer || (v9 = (SuiteMask & 0x110) == 16, v10 = 0, !v9) )
    v10 = 1;
  *((_BYTE *)this + 18490) = v10;
  v45 = 0LL;
  v50 = 0LL;
  v47 = L"bEnumerateHWBeforeSW";
  v46 = 292;
  v48 = &v55;
  v49 = 0x4000000;
  v51 = 0;
  v52 = 0LL;
  v53 = 0;
  memset(v54, 0, sizeof(v54));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v45,
              0LL,
              0LL) >= 0 )
    goto LABEL_14;
  v35 = 0LL;
  v36 = 292;
  v37 = L"fUseHardwareGPU";
  v39 = 0x4000000;
  v38 = &v55;
  v40 = 0LL;
  v41 = 0;
  v42 = 0LL;
  v43 = 0;
  memset(v44, 0, sizeof(v44));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v35,
              0LL,
              0LL) >= 0 )
LABEL_14:
    *((_BYTE *)this + 18490) = v55 != 0;
  v56 = 0;
  *(_QWORD *)((char *)this + 18492) = 0LL;
  v34[1] = &v56;
  *((_DWORD *)this + 4625) = 0;
  v34[0] = 0x100000003LL;
  Current = DXGPROCESS::GetCurrent(v12, v11);
  if ( Current )
    v16 = (_QWORD *)*((_QWORD *)Current + 13);
  else
    v16 = 0LL;
  if ( v16 && (v17 = (__int64 (__fastcall *)(_QWORD *))v16[45]) != 0LL && (v18 = v17(v34), v19 = v18, v18 < 0) )
  {
    v20 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v20 + 24) = v2;
    *(_QWORD *)(v20 + 32) = v19;
    WdLogEvent5_WdError(v20);
    v21 = 0;
    v56 = 0;
  }
  else
  {
    v21 = v56;
  }
  *((_BYTE *)this + 18488) = v21;
  if ( v16 )
  {
    v22 = (__int64 (*)(void))v16[43];
    if ( v22 )
      *((_QWORD *)this + 2313) = v22();
    v23 = (__int64 (*)(void))v16[49];
    if ( v23 )
      *((_QWORD *)this + 2314) = v23();
  }
  v24 = DXGPROCESS::GetCurrent(v15, v14);
  *((_QWORD *)this + 2325) = v24;
  *((_BYTE *)v24 + 320) = 1;
  CurrentProcess = (void *)PsGetCurrentProcess(v26, v25);
  *((_QWORD *)this + 2324) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal(v28) + 219) )
    CreateTokenManagerSessionGlobal(v3);
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)this + 2324));
  if ( !(unsigned __int8)PsIsHostSilo(ProcessServerSilo) )
  {
    v57 = 0;
    v35 = 0LL;
    v37 = L"DisableContainerSessionVersionCheck";
    v36 = 292;
    v38 = &v57;
    v39 = 67108868;
    v40 = 0LL;
    v41 = 0;
    v42 = 0LL;
    v43 = 0;
    memset(v44, 0, sizeof(v44));
    HostSilo = PsGetHostSilo();
    v31 = PsAttachSiloToCurrentThread(HostSilo);
    v32 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v35, 0LL, 0LL);
    PsAttachSiloToCurrentThread(v31);
    if ( v32 < 0 || !v57 )
      *((_BYTE *)this + 18489) = 1;
  }
  *((_DWORD *)this + 4666) = 0;
  result = this;
  *((_QWORD *)this + 2334) = 0LL;
  return result;
}
