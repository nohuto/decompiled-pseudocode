/*
 * XREFs of ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00B2A74
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C0090170 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z @ 0x1C000F1A0 (--_GOUTPUTDUPL_SESSION_MGR@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C00FAF4C (-InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ.c)
 *     ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C00FB054 (-Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ.c)
 */

DXGSESSIONDATA *__fastcall DXGSESSIONDATA::DXGSESSIONDATA(DXGSESSIONDATA *this, unsigned int a2)
{
  __int64 v2; // r14
  OUTPUTDUPL_SESSION_MGR *v4; // rax
  OUTPUTDUPL_SESSION_MGR *v5; // rbx
  __int16 SuiteMask; // ax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  __int64 (__fastcall *v13)(_QWORD *); // rax
  int v14; // eax
  __int64 v15; // rdi
  char v16; // al
  __int64 (*v17)(void); // rax
  __int64 (*v18)(void); // rax
  struct DXGPROCESS *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *CurrentProcess; // rax
  __int64 ProcessServerSilo; // rax
  DXGSESSIONDATA *result; // rax
  OUTPUTDUPL_SESSION_MGR *v25; // rcx
  __int64 v26; // rax
  __int64 HostSilo; // rax
  __int64 v28; // rdi
  int v29; // ebx
  _QWORD v30[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+48h] [rbp-B8h]
  const wchar_t *v33; // [rsp+50h] [rbp-B0h]
  int *v34; // [rsp+58h] [rbp-A8h]
  int v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  int v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  int v39; // [rsp+80h] [rbp-80h]
  _BYTE v40[40]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+B8h] [rbp-48h]
  const wchar_t *v43; // [rsp+C0h] [rbp-40h]
  int *v44; // [rsp+C8h] [rbp-38h]
  int v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  int v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+F0h] [rbp-10h]
  _BYTE v50[40]; // [rsp+F8h] [rbp-8h] BYREF
  int v51; // [rsp+160h] [rbp+60h] BYREF
  char v52; // [rsp+168h] [rbp+68h] BYREF
  int v53; // [rsp+170h] [rbp+70h] BYREF
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
  *((_QWORD *)this + 2314) = 0LL;
  *((_QWORD *)this + 2316) = 0LL;
  *((_QWORD *)this + 2315) = 0LL;
  *((_DWORD *)this + 4634) = 61;
  *((_QWORD *)this + 2326) = 0LL;
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
    v25 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)this + 1);
    if ( v25 )
      OUTPUTDUPL_SESSION_MGR::`scalar deleting destructor'(v25);
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
  *((_BYTE *)this + 18490) = ProductType != NtProductServer || (SuiteMask & 0x110) != 0x10;
  v41 = 0LL;
  v43 = L"bEnumerateHWBeforeSW";
  v42 = 292;
  v44 = &v51;
  v46 = 0LL;
  v45 = 0x4000000;
  v47 = 0;
  v48 = 0LL;
  v49 = 0;
  memset(v50, 0, sizeof(v50));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\Terminal Services",
              &v41,
              0LL,
              0LL) >= 0 )
    goto LABEL_28;
  v31 = 0LL;
  v33 = L"fUseHardwareGPU";
  v32 = 292;
  v34 = &v51;
  v35 = 0x4000000;
  v36 = 0LL;
  v37 = 0;
  v38 = 0LL;
  v39 = 0;
  memset(v40, 0, sizeof(v40));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations",
              &v31,
              0LL,
              0LL) >= 0 )
LABEL_28:
    *((_BYTE *)this + 18490) = v51 != 0;
  v52 = 0;
  *(_QWORD *)((char *)this + 18492) = 0LL;
  v30[1] = &v52;
  *((_DWORD *)this + 4625) = 0;
  v30[0] = 0x100000003LL;
  Current = DXGPROCESS::GetCurrent(v8, v7);
  if ( Current )
    v12 = (_QWORD *)*((_QWORD *)Current + 12);
  else
    v12 = 0LL;
  if ( v12 && (v13 = (__int64 (__fastcall *)(_QWORD *))v12[46]) != 0LL && (v14 = v13(v30), v15 = v14, v14 < 0) )
  {
    v26 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v26 + 24) = v2;
    *(_QWORD *)(v26 + 32) = v15;
    WdLogEvent5_WdError(v26);
    v16 = 0;
    v52 = 0;
  }
  else
  {
    v16 = v52;
  }
  *((_BYTE *)this + 18488) = v16;
  if ( v12 )
  {
    v17 = (__int64 (*)(void))v12[44];
    if ( v17 )
      *((_QWORD *)this + 2313) = v17();
    v18 = (__int64 (*)(void))v12[50];
    if ( v18 )
      *((_QWORD *)this + 2314) = v18();
  }
  v19 = DXGPROCESS::GetCurrent(v11, v10);
  *((_QWORD *)this + 2325) = v19;
  *((_BYTE *)v19 + 304) = 1;
  CurrentProcess = (void *)PsGetCurrentProcess(v21, v20);
  *((_QWORD *)this + 2324) = CurrentProcess;
  ObfReferenceObject(CurrentProcess);
  ProcessServerSilo = PsGetProcessServerSilo(*((_QWORD *)this + 2324));
  if ( !(unsigned __int8)PsIsHostSilo(ProcessServerSilo) )
  {
    v53 = 0;
    v31 = 0LL;
    v33 = L"DisableContainerSessionVersionCheck";
    v32 = 292;
    v34 = &v53;
    v35 = 67108868;
    v36 = 0LL;
    v37 = 0;
    v38 = 0LL;
    v39 = 0;
    memset(v40, 0, sizeof(v40));
    HostSilo = PsGetHostSilo();
    v28 = PsAttachSiloToCurrentThread(HostSilo);
    v29 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v31, 0LL, 0LL);
    PsAttachSiloToCurrentThread(v28);
    if ( v29 < 0 || !v53 )
      *((_BYTE *)this + 18489) = 1;
  }
  *((_DWORD *)this + 4654) = 0;
  result = this;
  *((_QWORD *)this + 2328) = 0LL;
  return result;
}
