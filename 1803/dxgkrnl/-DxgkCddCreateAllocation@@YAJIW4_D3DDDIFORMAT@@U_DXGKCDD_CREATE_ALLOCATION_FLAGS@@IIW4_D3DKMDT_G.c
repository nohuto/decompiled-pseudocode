/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00D3910
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00E8670 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1F88 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 */

__int64 __fastcall DxgkCddCreateAllocation(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        _DWORD *a11,
        _DWORD *a12,
        _QWORD *a13,
        _DWORD *a14)
{
  char v14; // bl
  __int64 v16; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v18; // rcx
  struct _KTHREAD **v19; // r15
  __int64 v20; // rcx
  DXGDEVICE *v21; // r14
  char *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  _QWORD *v32; // rcx
  int v33; // eax
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  unsigned int v37; // ebx
  unsigned int v38; // edi
  __int64 v39; // rcx
  __int64 v40; // r8
  int v42; // eax
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  int v48; // eax
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  enum _D3DKMT_DEVICEEXECUTION_STATE v57; // [rsp+24h] [rbp-DCh] BYREF
  DXGDEVICE *v58; // [rsp+28h] [rbp-D8h] BYREF
  struct DXGDEVICE *v59; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v60; // [rsp+38h] [rbp-C8h]
  int v61; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+48h] [rbp-B8h]
  __int64 v63; // [rsp+50h] [rbp-B0h]
  __int64 v64; // [rsp+58h] [rbp-A8h]
  __int64 v65; // [rsp+60h] [rbp-A0h]
  _QWORD *v66; // [rsp+68h] [rbp-98h]
  _DWORD *v67; // [rsp+70h] [rbp-90h]
  _BYTE v68[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v69; // [rsp+80h] [rbp-80h]
  char v70; // [rsp+88h] [rbp-78h]
  _BYTE v71[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v72[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v73; // [rsp+A0h] [rbp-60h]
  __int64 v74; // [rsp+A8h] [rbp-58h]
  char v75; // [rsp+B0h] [rbp-50h]
  _BYTE v76[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-40h]
  __int64 v78; // [rsp+C8h] [rbp-38h]
  char v79; // [rsp+D0h] [rbp-30h]
  DXGDEVICE *v80; // [rsp+D8h] [rbp-28h]
  char v81; // [rsp+E0h] [rbp-20h]
  _BYTE v82[16]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v83[54]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v84[2]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v85; // [rsp+2B8h] [rbp+1B8h]
  _DWORD v86[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 v87; // [rsp+2D0h] [rbp+1D0h]
  _DWORD v88[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v89; // [rsp+2E0h] [rbp+1E0h]

  v62 = 0LL;
  v14 = a3;
  v64 = a7;
  v65 = a8;
  v63 = a9;
  v60 = a11;
  v67 = a12;
  v66 = a13;
  v16 = (unsigned int)a1;
  v61 = 3017;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 3017);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v61, 3017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v19 = Current;
  if ( !Current )
  {
    v38 = -1073741811;
    v43 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    *(_QWORD *)(v43 + 32) = PsGetCurrentProcess(v45, v44);
    WdLogEvent5_WdError(v43);
    goto LABEL_30;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v59, v16, Current, &v58);
  v21 = v58;
  if ( v58 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v82, v58);
    v22 = (char *)v21 + 16;
    v23 = *((_QWORD *)v21 + 2);
    v70 = 0;
    v69 = *(_QWORD *)(v23 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
    v24 = *(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL);
    v74 = v24;
    v75 = 0;
    if ( v24 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v24 + 24));
      v73 = -1LL;
      v21 = v58;
    }
    v25 = *(_QWORD *)(*(_QWORD *)v22 + 16LL);
    v78 = v25;
    v79 = 0;
    if ( v25 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v25 + 24));
      v77 = -1LL;
      v21 = v58;
    }
    v80 = v21;
    v81 = 0;
    v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v71);
    v29 = v26;
    if ( v26 < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdEvent(v28, v27);
      v47[3] = v29;
      v47[4] = v21;
      v47[5] = v19;
      WdLogEvent5_WdEvent(v47);
LABEL_74:
      v38 = v29;
LABEL_24:
      COREACCESS::~COREACCESS((COREACCESS *)v76);
      COREACCESS::~COREACCESS((COREACCESS *)v72);
      if ( v70 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v68);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v82);
      goto LABEL_27;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 16LL) + 300LL) & 0x10) != 0 )
    {
      LODWORD(v29) = DXGDEVICE::GetDeviceExecutionState(v21, &v57);
      if ( (int)v29 < 0 || v57 != D3DKMT_DEVICEEXECUTION_ACTIVE )
      {
        LODWORD(v29) = -1073741130;
        goto LABEL_74;
      }
    }
    memset(v83, 0, 0x134uLL);
    memset(&v83[39], 0, 120);
    v83[39] = v63;
    LODWORD(v83[40]) = a10;
    v32 = *(_QWORD **)(*(_QWORD *)v22 + 16LL);
    v33 = *((_DWORD *)v32 + 455);
    if ( (v33 & 4) == 0 && ((v33 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
      {
LABEL_61:
        v37 = a4;
        LODWORD(v83[2]) = 2;
        v88[0] = a4;
        v83[3] = v88;
        v88[1] = a5;
        v89 = a2;
        LODWORD(v29) = DXGDEVICE::CreateStandardAllocation(
                         v21,
                         (struct _D3DKM_CREATESTANDARDALLOCATION *)v83,
                         (struct COREDEVICEACCESS *)v71);
        goto LABEL_20;
      }
      if ( a6 != 2 )
      {
        if ( a6 == 3 || a6 == 6 )
          goto LABEL_61;
LABEL_19:
        v37 = a4;
        goto LABEL_20;
      }
      v37 = a4;
      LODWORD(v83[0]) |= 2u;
      LODWORD(v83[2]) = 2;
      v83[3] = v84;
      v84[0] = a4;
      v84[1] = a5;
      v85 = a2;
      LODWORD(v29) = DXGDEVICE::CreateStandardAllocation(
                       v21,
                       (struct _D3DKM_CREATESTANDARDALLOCATION *)v83,
                       (struct COREDEVICEACCESS *)v71);
      if ( (int)v29 >= 0 )
      {
        v48 = HIDWORD(v85);
        if ( !HIDWORD(v85) )
        {
          v49 = WdLogNewEntry5_WdAssertion(v32);
          *(_QWORD *)(v49 + 24) = 1075LL;
          WdLogEvent5_WdAssertion(v49);
          v48 = HIDWORD(v85);
        }
        *a14 = v48;
LABEL_20:
        if ( (int)v29 >= 0 )
        {
          if ( !LODWORD(v83[1]) )
          {
            v54 = WdLogNewEntry5_WdAssertion(v32);
            *(_QWORD *)(v54 + 24) = 1092LL;
            WdLogEvent5_WdAssertion(v54);
          }
          v38 = 0;
          *v60 = HIDWORD(v83[6]);
          goto LABEL_24;
        }
      }
LABEL_73:
      v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v30, v31);
      v55[3] = (int)v29;
      v55[5] = v37;
      v55[4] = v21;
      v55[6] = a5;
      WdLogEvent5_WdWarning(v55);
      goto LABEL_74;
    }
    v34 = LODWORD(v83[0]) ^ (LOBYTE(v83[0]) ^ (unsigned __int8)(8 * v14)) & 0x18;
    v87 = 0LL;
    v86[0] = a4;
    v86[1] = a5;
    v86[2] = a2;
    v86[3] = a6;
    LODWORD(v83[2]) = 4;
    v83[3] = v86;
    LODWORD(v83[0]) = v34;
    switch ( a6 )
    {
      case 1:
        goto LABEL_12;
      case 2:
        v35 = v34 | 2;
        break;
      case 5:
        v35 = v34 | 4;
        v83[4] = v64;
        v83[5] = v65;
        break;
      case 6:
LABEL_12:
        v35 = v34 | 1;
        break;
      default:
        if ( a6 <= 6 || a6 > 8 )
        {
LABEL_14:
          LODWORD(v29) = DXGDEVICE::CreateStandardAllocation(
                           v21,
                           (struct _D3DKM_CREATESTANDARDALLOCATION *)v83,
                           (struct COREDEVICEACCESS *)v71);
          if ( (int)v29 < 0 )
          {
            v37 = a4;
            goto LABEL_73;
          }
          if ( a6 == 1 )
          {
LABEL_16:
            v36 = HIDWORD(v83[1]);
            if ( !HIDWORD(v83[1]) )
            {
              v53 = WdLogNewEntry5_WdAssertion(v32);
              *(_QWORD *)(v53 + 24) = 1030LL;
              WdLogEvent5_WdAssertion(v53);
            }
            *v67 = v36;
            goto LABEL_19;
          }
          if ( a6 == 2 || a6 == 5 )
          {
            v42 = HIDWORD(v87);
            if ( !HIDWORD(v87) )
            {
              v52 = WdLogNewEntry5_WdAssertion(v32);
              *(_QWORD *)(v52 + 24) = 1035LL;
              WdLogEvent5_WdAssertion(v52);
              v42 = HIDWORD(v87);
            }
            *a14 = v42;
            goto LABEL_19;
          }
          if ( a6 != 6 )
          {
            if ( a6 == 7 )
              goto LABEL_16;
            if ( a6 != 8 )
              goto LABEL_19;
          }
          v32 = v66;
          *v66 = v83[41];
          v50 = HIDWORD(v87);
          if ( !HIDWORD(v87) )
          {
            v51 = WdLogNewEntry5_WdAssertion(v32);
            *(_QWORD *)(v51 + 24) = 1023LL;
            WdLogEvent5_WdAssertion(v51);
            v50 = HIDWORD(v87);
          }
          *a14 = v50;
          goto LABEL_16;
        }
        v35 = v34 | 0x21;
        break;
    }
    LODWORD(v83[0]) = v35;
    goto LABEL_14;
  }
  v46 = (_QWORD *)WdLogNewEntry5_WdError(v20);
  v38 = -1073741811;
  v46[3] = -1073741811LL;
  v46[4] = v16;
  v46[5] = v19;
  WdLogEvent5_WdError(v46);
LABEL_27:
  if ( v59 && _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v59 + 2), v59);
LABEL_30:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v61);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v61);
  return v38;
}
