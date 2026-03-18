/*
 * XREFs of NtDWMSetInputSystemOutputConfig @ 0x1C00E5A50
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C012FC84 (-OnNewConfiguration@CInputConfig@@QEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z.c)
 */

__int64 __fastcall NtDWMSetInputSystemOutputConfig(ULONG64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  int v7; // ebx
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  BOOL v10; // edx
  ULONG v11; // ecx
  unsigned int v12; // edi
  __int64 v13; // r15
  CInputConfig *v14; // rcx
  struct CRegionConfig *v15; // rdi
  unsigned int v16; // edx
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm3
  __int128 v20; // xmm4
  __int64 v21; // rax
  NTSTATUS v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _BYTE v28[4]; // [rsp+20h] [rbp-268h] BYREF
  int v29; // [rsp+24h] [rbp-264h]
  int v30; // [rsp+30h] [rbp-258h]
  unsigned int v31; // [rsp+34h] [rbp-254h]
  _BYTE v32[8]; // [rsp+40h] [rbp-248h] BYREF
  __int64 v33; // [rsp+48h] [rbp-240h]
  int v34; // [rsp+50h] [rbp-238h]
  __int64 v35; // [rsp+58h] [rbp-230h]
  unsigned int v36; // [rsp+60h] [rbp-228h]
  struct CRegionConfig *v37; // [rsp+68h] [rbp-220h]
  __int128 v38; // [rsp+C0h] [rbp-1C8h]
  __int128 v39; // [rsp+D0h] [rbp-1B8h] BYREF
  __int128 v40; // [rsp+E0h] [rbp-1A8h]
  __int128 v41; // [rsp+F0h] [rbp-198h]
  __int128 v42; // [rsp+100h] [rbp-188h]
  __int128 v43; // [rsp+110h] [rbp-178h]
  __int128 v44; // [rsp+120h] [rbp-168h]
  __int128 v45; // [rsp+130h] [rbp-158h]
  __int128 v46; // [rsp+140h] [rbp-148h]
  _OWORD v47[3]; // [rsp+150h] [rbp-138h] BYREF
  __int128 v48; // [rsp+180h] [rbp-108h]
  __int128 v49; // [rsp+190h] [rbp-F8h]
  __int128 v50; // [rsp+1A0h] [rbp-E8h]
  __int128 v51; // [rsp+1B0h] [rbp-D8h]
  __int128 v52; // [rsp+1C0h] [rbp-C8h]
  __int128 v53; // [rsp+1D0h] [rbp-B8h]
  __int128 v54; // [rsp+1E0h] [rbp-A8h]
  __int128 v55; // [rsp+1F0h] [rbp-98h]
  __int128 v56; // [rsp+200h] [rbp-88h]
  __int128 v57; // [rsp+210h] [rbp-78h]
  __int128 v58; // [rsp+220h] [rbp-68h]
  __int128 v59; // [rsp+230h] [rbp-58h]
  __int128 v60; // [rsp+240h] [rbp-48h]

  v5 = (unsigned int)a2;
  v7 = 0;
  v30 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v28, a2, a3, a4);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v32);
  v33 = 0LL;
  v34 = 0;
  v39 = 0uLL;
  *(_QWORD *)&v40 = 0LL;
  *(_QWORD *)&v45 = 0LL;
  *(_QWORD *)&v48 = 0LL;
  BYTE8(v48) = 0;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v8, 0LL);
  v10 = 0;
  if ( CurrentProcess )
    v10 = CurrentProcess == g_pepDwm;
  if ( v10 )
  {
    v12 = -1;
    if ( (unsigned __int64)(80 * v5) <= 0xFFFFFFFF )
      v12 = 80 * v5;
    v31 = v12;
    if ( (unsigned __int64)(80 * v5) <= 0xFFFFFFFF )
    {
      if ( a1 + 12 < a1 || a1 + 12 > MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      v35 = *(_QWORD *)a1;
      v36 = *(_DWORD *)(a1 + 8);
      *(_QWORD *)&v49 = v35;
      *((_QWORD *)&v49 + 1) = v36;
      *(_QWORD *)&v50 = 0LL;
      *(_QWORD *)&v55 = 0LL;
      *(_QWORD *)&v60 = 0LL;
      BYTE8(v60) = 0;
      v39 = v49;
      v40 = v50;
      v41 = v51;
      v42 = v52;
      v43 = v53;
      v44 = v54;
      v45 = v55;
      v46 = v56;
      v47[0] = v57;
      v47[1] = v58;
      v47[2] = v59;
      v48 = v60;
      v13 = 72 * v5;
      if ( 72 * v5 )
      {
        if ( ((PsGetCurrentProcessWow64Process(v47) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v13 + a3 > MmUserProbeAddress || v13 + a3 < a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v15 = (struct CRegionConfig *)Win32AllocPoolWithQuota(v12, 0x63736955u);
      v37 = v15;
      if ( !v15 )
        ExRaiseStatus(-1073741801);
      v16 = 0;
      v29 = 0;
      while ( v16 != (_DWORD)v5 )
      {
        v14 = (CInputConfig *)v16;
        v17 = *(_OWORD *)(a3 + 72LL * v16);
        v18 = *(_OWORD *)(a3 + 72LL * v16 + 16);
        v19 = *(_OWORD *)(a3 + 72LL * v16 + 32);
        v20 = *(_OWORD *)(a3 + 72LL * v16 + 48);
        v38 = *(unsigned __int64 *)(a3 + 72LL * v16 + 64);
        v21 = 10LL * v16;
        *(_OWORD *)((char *)v15 + 8 * v21) = v17;
        *(_OWORD *)((char *)v15 + 8 * v21 + 16) = v18;
        *(_OWORD *)((char *)v15 + 8 * v21 + 32) = v19;
        *(_OWORD *)((char *)v15 + 8 * v21 + 48) = v20;
        *(_OWORD *)((char *)v15 + 8 * v21 + 64) = v38;
        v29 = ++v16;
      }
      v22 = CInputConfig::OnNewConfiguration(v14, (struct COutputConfig *)&v39, v5, v15);
      if ( v22 >= 0 )
      {
        v7 = 1;
        goto LABEL_27;
      }
      Win32FreePool((__int64)v15);
      v11 = RtlNtStatusToDosError(v22);
    }
    else
    {
      v11 = 8;
    }
  }
  else
  {
    v11 = 5;
  }
  UserSetLastError(v11);
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v32);
  UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  return v7;
}
