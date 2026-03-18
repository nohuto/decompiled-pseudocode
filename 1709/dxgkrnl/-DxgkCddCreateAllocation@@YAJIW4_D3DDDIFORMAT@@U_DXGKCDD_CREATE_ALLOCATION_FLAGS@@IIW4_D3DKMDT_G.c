/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00BAF80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00941C8 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D810 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddCreateAllocation(
        __int64 a1,
        __int64 a2,
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
  unsigned int v15; // r12d
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
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v36; // edi
  __int64 v37; // rcx
  __int64 v38; // r8
  int v40; // eax
  int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  enum _D3DKMT_DEVICEEXECUTION_STATE v55; // [rsp+24h] [rbp-DCh] BYREF
  DXGDEVICE *v56; // [rsp+28h] [rbp-D8h] BYREF
  struct DXGDEVICE *v57; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v58; // [rsp+38h] [rbp-C8h]
  __int64 v59; // [rsp+40h] [rbp-C0h]
  __int64 v60; // [rsp+48h] [rbp-B8h]
  __int64 v61; // [rsp+50h] [rbp-B0h]
  _QWORD *v62; // [rsp+58h] [rbp-A8h]
  _DWORD *v63; // [rsp+60h] [rbp-A0h]
  _BYTE v64[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+70h] [rbp-90h]
  char v66; // [rsp+78h] [rbp-88h]
  PERESOURCE *v67; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v68[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h]
  char v71; // [rsp+A0h] [rbp-60h]
  _BYTE v72[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v73; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h]
  char v75; // [rsp+C0h] [rbp-40h]
  DXGDEVICE *v76; // [rsp+C8h] [rbp-38h]
  char v77; // [rsp+D0h] [rbp-30h]
  _BYTE v78[16]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v79[54]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v80[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v81; // [rsp+2A8h] [rbp+1A8h]
  _DWORD v82[3]; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v83; // [rsp+2BCh] [rbp+1BCh]
  int v84; // [rsp+2C4h] [rbp+1C4h]
  _DWORD v85[2]; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int64 v86; // [rsp+2D0h] [rbp+1D0h]

  v14 = a3;
  v15 = a2;
  v60 = a7;
  v61 = a8;
  v59 = a9;
  v58 = a11;
  v63 = a12;
  v62 = a13;
  v16 = (unsigned int)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 3017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v19 = Current;
  if ( !Current )
  {
    v36 = -1073741811;
    v42 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    *(_QWORD *)(v42 + 32) = PsGetCurrentProcess(v44, v43);
    WdLogEvent5_WdError(v42);
    goto LABEL_30;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v57, v16, Current, &v56);
  v21 = v56;
  if ( v56 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v78, v56);
    v22 = (char *)v21 + 16;
    v23 = *((_QWORD *)v21 + 2);
    v66 = 0;
    v65 = *(_QWORD *)(v23 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
    v24 = *(_QWORD *)(*((_QWORD *)v21 + 2) + 16LL);
    v70 = v24;
    v71 = 0;
    if ( v24 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v24 + 24));
      v69 = -1LL;
      v21 = v56;
    }
    v25 = *(_QWORD *)(*(_QWORD *)v22 + 16LL);
    v74 = v25;
    v75 = 0;
    if ( v25 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v25 + 24));
      v73 = -1LL;
      v21 = v56;
    }
    v76 = v21;
    v77 = 0;
    v26 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v67);
    v27 = v26;
    if ( v26 < 0 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v46[3] = v27;
      v46[4] = v21;
      v46[5] = v19;
      WdLogEvent5_WdEvent(v46);
      goto LABEL_75;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 16LL) + 300LL) & 0x10) != 0 )
    {
      LODWORD(v27) = DXGDEVICE::GetDeviceExecutionState(v21, &v55);
      if ( (int)v27 < 0 || v55 != D3DKMT_DEVICEEXECUTION_ACTIVE )
      {
        LODWORD(v27) = -1073741130;
LABEL_75:
        v36 = v27;
LABEL_24:
        COREACCESS::~COREACCESS((COREACCESS *)v72);
        COREACCESS::~COREACCESS((COREACCESS *)v68);
        if ( v66 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v64);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v78);
        goto LABEL_27;
      }
    }
    memset(v79, 0, 0x134uLL);
    memset(&v79[39], 0, 120);
    v79[39] = v59;
    LODWORD(v79[40]) = a10;
    v30 = *(_QWORD **)(*(_QWORD *)v22 + 16LL);
    v31 = *((_DWORD *)v30 + 421);
    if ( (v31 & 4) == 0 && ((v31 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
      {
LABEL_65:
        v35 = a4;
        LODWORD(v79[2]) = 2;
        v85[0] = a4;
        v79[3] = v85;
        v85[1] = a5;
        v86 = v15;
        LODWORD(v27) = DXGDEVICE::CreateStandardAllocation(v21, (struct _D3DKM_CREATESTANDARDALLOCATION *)v79, &v67);
        goto LABEL_20;
      }
      if ( a6 != 2 )
      {
        if ( a6 == 3 || a6 == 6 )
          goto LABEL_65;
LABEL_19:
        v35 = a4;
        goto LABEL_20;
      }
      v35 = a4;
      LODWORD(v79[0]) |= 2u;
      LODWORD(v79[2]) = 2;
      v79[3] = v80;
      v80[0] = a4;
      v80[1] = a5;
      v81 = v15;
      LODWORD(v27) = DXGDEVICE::CreateStandardAllocation(v21, (struct _D3DKM_CREATESTANDARDALLOCATION *)v79, &v67);
      if ( (int)v27 >= 0 )
      {
        v47 = HIDWORD(v81);
        if ( !HIDWORD(v81) )
        {
          v48 = WdLogNewEntry5_WdAssertion(v30);
          *(_QWORD *)(v48 + 24) = 1035LL;
          WdLogEvent5_WdAssertion(v48);
          v47 = HIDWORD(v81);
        }
        *a14 = v47;
LABEL_20:
        if ( (int)v27 >= 0 )
        {
          if ( !LODWORD(v79[1]) )
          {
            v52 = WdLogNewEntry5_WdAssertion(v30);
            *(_QWORD *)(v52 + 24) = 1052LL;
            WdLogEvent5_WdAssertion(v52);
          }
          v36 = 0;
          *v58 = HIDWORD(v79[6]);
          goto LABEL_24;
        }
      }
LABEL_74:
      v53 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v28, v29);
      v53[3] = (int)v27;
      v53[5] = v35;
      v53[4] = v21;
      v53[6] = a5;
      WdLogEvent5_WdWarning(v53);
      goto LABEL_75;
    }
    v84 = 0;
    v82[0] = a4;
    v79[3] = v82;
    v82[1] = a5;
    v32 = (LOBYTE(v79[0]) ^ (unsigned __int8)(8 * v14)) & 0x18 ^ LODWORD(v79[0]);
    v82[2] = v15;
    v83 = (unsigned int)a6;
    LODWORD(v79[2]) = 4;
    LODWORD(v79[0]) = v32;
    switch ( a6 )
    {
      case 1:
        goto LABEL_12;
      case 2:
        v33 = v32 | 2;
        goto LABEL_13;
      case 5:
        LODWORD(v79[0]) = v32 | 4;
        v79[4] = v60;
        v79[5] = v61;
        break;
      case 6:
LABEL_12:
        v33 = v32 | 1;
LABEL_13:
        LODWORD(v79[0]) = v33;
        break;
      default:
        if ( a6 > 6 && a6 <= 8 )
        {
          v33 = v32 | 0x21;
          goto LABEL_13;
        }
        break;
    }
    LODWORD(v27) = DXGDEVICE::CreateStandardAllocation(v21, (struct _D3DKM_CREATESTANDARDALLOCATION *)v79, &v67);
    if ( (int)v27 < 0 )
    {
      v35 = a4;
      goto LABEL_74;
    }
    if ( a6 == 1 )
    {
LABEL_16:
      v34 = HIDWORD(v79[1]);
      if ( !HIDWORD(v79[1]) )
      {
        v51 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v51 + 24) = 990LL;
        WdLogEvent5_WdAssertion(v51);
      }
      *v63 = v34;
      goto LABEL_19;
    }
    if ( a6 == 2 || a6 == 5 )
    {
      v41 = v84;
      if ( !v84 )
      {
        v50 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v50 + 24) = 995LL;
        WdLogEvent5_WdAssertion(v50);
        v41 = v84;
      }
      *a14 = v41;
      goto LABEL_19;
    }
    if ( a6 != 6 )
    {
      if ( a6 == 7 )
        goto LABEL_16;
      if ( a6 != 8 )
        goto LABEL_19;
    }
    v30 = v62;
    *v62 = v79[41];
    v40 = v84;
    if ( !v84 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v49 + 24) = 983LL;
      WdLogEvent5_WdAssertion(v49);
      v40 = v84;
    }
    *a14 = v40;
    goto LABEL_16;
  }
  v45 = (_QWORD *)WdLogNewEntry5_WdError(v20);
  v36 = -1073741811;
  v45[3] = -1073741811LL;
  v45[4] = v16;
  v45[5] = v19;
  WdLogEvent5_WdError(v45);
LABEL_27:
  if ( v57 )
  {
    v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v37 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v57 + 2), v57);
  }
LABEL_30:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, 3017);
  return v36;
}
