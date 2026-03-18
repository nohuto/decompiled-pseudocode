/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00FADC0
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00DDAE8 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C0001208 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C008C03C (-InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C008C144 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  __int64 v2; // r14
  OUTPUTDUPL_SESSION_MGR *v4; // rax
  OUTPUTDUPL_SESSION_MGR *v5; // rbx
  __int16 SuiteMask; // ax
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(_QWORD *); // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  char v15; // al
  __int64 (*v16)(void); // rax
  struct DXGPROCESS *v17; // rax
  __int64 v18; // rcx
  void *CurrentProcess; // rax
  __int64 ProcessServerSilo; // rax
  DXGSESSIONDATA *result; // rax
  OUTPUTDUPL_SESSION_MGR *v22; // rcx
  __int64 v23; // rax
  __int64 HostSilo; // rax
  __int64 v25; // rdi
  int v26; // ebx
  _QWORD v27[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+48h] [rbp-B8h]
  const wchar_t *v30; // [rsp+50h] [rbp-B0h]
  int *v31; // [rsp+58h] [rbp-A8h]
  int v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  int v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  int v36; // [rsp+80h] [rbp-80h]
  _BYTE v37[40]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+B8h] [rbp-48h]
  const wchar_t *v40; // [rsp+C0h] [rbp-40h]
  int *v41; // [rsp+C8h] [rbp-38h]
  int v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+F0h] [rbp-10h]
  _BYTE v47[40]; // [rsp+F8h] [rbp-8h] BYREF
  int v48; // [rsp+160h] [rbp+60h] BYREF
  char v49; // [rsp+168h] [rbp+68h] BYREF
  int v50; // [rsp+170h] [rbp+70h] BYREF
  _NT_PRODUCT_TYPE ProductType; // [rsp+178h] [rbp+78h] BYREF

  v2 = a2;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 11) = -1;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 12) = 32;
  *((_QWORD *)this + 4) = 0LL;
  *((_WORD *)this + 9244) = 0;
  *((_QWORD *)this + 2313) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  *((_QWORD *)this + 2314) = 0LL;
  *((_DWORD *)this + 4632) = 61;
  *((_QWORD *)this + 2325) = 0LL;
  v4 = (OUTPUTDUPL_SESSION_MGR *)operator new(0x1B8uLL, 0x674D444Fu, PagedPool);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 1) = 0;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    OUTPUTDUPL_SESSION_MGR::InitializeMaxActiveOutputDuplApps(v4);
    *((_DWORD *)v5 + 12) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 1) = v5;
  if ( v5 && (int)OUTPUTDUPL_SESSION_MGR::Initialize(v5) < 0 )
  {
    v22 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v22 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v22);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_QWORD *)this + 2318) = (char *)this + 18536;
  *((_QWORD *)this + 2317) = (char *)this + 18536;
  *((_QWORD *)this + 2320) = (char *)this + 18552;
  *((_QWORD *)this + 2319) = (char *)this + 18552;
  *((_QWORD *)this + 2322) = (char *)this + 18568;
  *((_QWORD *)this + 2321) = (char *)this + 18568;
  RtlGetNtProductType(&ProductType);
  SuiteMask = RtlGetSuiteMask();
  *((_BYTE *)this + 18490) = ProductType != NtProductServer || (SuiteMask & 0x110) != 0x10;
  v38 = 0LL;
  v40 = L"bEnumerateHWBeforeSW";
  v39 = 292;
  v41 = &v48;
  v43 = 0LL;
  v42 = 0x4000000;
  v44 = 0;
  v45 = 0LL;
  v46 = 0;
  memset(v47, 0, sizeof(v47));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v38,
              0LL,
              0LL) >= 0 )
    goto LABEL_26;
  v28 = 0LL;
  v30 = L"fUseHardwareGPU";
  v29 = 292;
  v31 = &v48;
  v32 = 0x4000000;
  v33 = 0LL;
  v34 = 0;
  v35 = 0LL;
  v36 = 0;
  memset(v37, 0, sizeof(v37));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v28,
              0LL,
              0LL) >= 0 )
LABEL_26:
    *((_BYTE *)this + 18490) = v48 != 0;
  v49 = 0;
  *(_QWORD *)((char *)this + 18492) = 0LL;
  v27[1] = &v49;
  *((_DWORD *)this + 4625) = 0;
  v27[0] = 0x100000003LL;
  Current = DXGPROCESS::GetCurrent(v7);
  if ( Current )
    v10 = *((_QWORD *)Current + 9);
  else
    v10 = 0LL;
  if ( v10 && (v11 = *(__int64 (__fastcall **)(_QWORD *))(v10 + 368)) != 0LL && (v12 = v11(v27), v14 = v12, v12 < 0) )
  {
    v23 = WdLogNewEntry5_WdError(v9, v13);
    *(_QWORD *)(v23 + 24) = v2;
    *(_QWORD *)(v23 + 32) = v14;
    WdLogEvent5_WdError(v23);
    v15 = 0;
    v49 = 0;
  }
  else
  {
    v15 = v49;
  }
  *((_BYTE *)this + 18488) = v15;
  if ( v10 )
  {
    v16 = *(__int64 (**)(void))(v10 + 352);
    if ( v16 )
      *((_QWORD *)this + 2313) = v16();
  }
  v17 = DXGPROCESS::GetCurrent(v9);
  *((_QWORD *)this + 2324) = v17;
  *((_BYTE *)v17 + 272) = 1;
  CurrentProcess = (void *)PsGetCurrentProcess(v18);
  *((_QWORD *)this + 2323) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)this + 2323));
  if ( !(unsigned __int8)PsIsHostSilo(ProcessServerSilo) )
  {
    v50 = 0;
    v28 = 0LL;
    v30 = L"DisableContainerSessionVersionCheck";
    v29 = 292;
    v31 = &v50;
    v32 = 67108868;
    v33 = 0LL;
    v34 = 0;
    v35 = 0LL;
    v36 = 0;
    memset(v37, 0, sizeof(v37));
    HostSilo = PsGetHostSilo();
    v25 = PsAttachSiloToCurrentThread(HostSilo);
    v26 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v28, 0LL, 0LL);
    PsAttachSiloToCurrentThread(v25);
    if ( v26 < 0 || !v50 )
      *((_BYTE *)this + 18489) = 1;
  }
  *((_DWORD *)this + 4652) = 0;
  result = this;
  *((_QWORD *)this + 2327) = 0LL;
  return result;
}
