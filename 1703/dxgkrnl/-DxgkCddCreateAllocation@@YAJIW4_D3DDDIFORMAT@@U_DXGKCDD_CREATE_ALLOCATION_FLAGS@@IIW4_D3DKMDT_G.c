/*
 * XREFs of ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00FD820
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00BF56C (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C9C30 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct _KTHREAD **v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  DXGDEVICE *v23; // r14
  char *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // edi
  __int64 v43; // rcx
  __int64 v44; // r8
  int v46; // eax
  __int64 v47; // rbx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  int v51; // eax
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD *v58; // rax
  enum _D3DKMT_DEVICEEXECUTION_STATE v60; // [rsp+24h] [rbp-DCh] BYREF
  DXGDEVICE *v61; // [rsp+28h] [rbp-D8h] BYREF
  struct DXGDEVICE *v62; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v63; // [rsp+38h] [rbp-C8h]
  __int64 v64; // [rsp+40h] [rbp-C0h]
  __int64 v65; // [rsp+48h] [rbp-B8h]
  __int64 v66; // [rsp+50h] [rbp-B0h]
  _QWORD *v67; // [rsp+58h] [rbp-A8h]
  _DWORD *v68; // [rsp+60h] [rbp-A0h]
  _BYTE v69[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v70; // [rsp+70h] [rbp-90h]
  char v71; // [rsp+78h] [rbp-88h]
  PERESOURCE *v72; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v73[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+98h] [rbp-68h]
  char v76; // [rsp+A0h] [rbp-60h]
  _BYTE v77[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-50h]
  __int64 v79; // [rsp+B8h] [rbp-48h]
  char v80; // [rsp+C0h] [rbp-40h]
  DXGDEVICE *v81; // [rsp+C8h] [rbp-38h]
  char v82; // [rsp+D0h] [rbp-30h]
  _BYTE v83[16]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v84[52]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v85[2]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v86; // [rsp+298h] [rbp+198h]
  _DWORD v87[3]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v88; // [rsp+2ACh] [rbp+1ACh]
  int v89; // [rsp+2B4h] [rbp+1B4h]
  _DWORD v90[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v91; // [rsp+2C0h] [rbp+1C0h]

  v14 = a3;
  v65 = a7;
  v66 = a8;
  v64 = a9;
  v63 = a11;
  v68 = a12;
  v67 = a13;
  v16 = (unsigned int)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v20 = Current;
  if ( !Current )
  {
    v42 = -1073741811;
    v47 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v47 + 24) = -1073741811LL;
    *(_QWORD *)(v47 + 32) = PsGetCurrentProcess(v48);
    WdLogEvent5_WdError(v47);
    goto LABEL_30;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v62, (unsigned int)v16, Current, &v61);
  v23 = v61;
  if ( v61 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v83, v61);
    v24 = (char *)v23 + 16;
    v25 = *((_QWORD *)v23 + 2);
    v71 = 0;
    v70 = *(_QWORD *)(v25 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
    v26 = *(_QWORD *)(*((_QWORD *)v23 + 2) + 16LL);
    v75 = v26;
    v76 = 0;
    if ( v26 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v26 + 24));
      v74 = -1LL;
      v23 = v61;
    }
    v27 = *(_QWORD *)(*(_QWORD *)v24 + 16LL);
    v79 = v27;
    v80 = 0;
    if ( v27 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
      v78 = -1LL;
      v23 = v61;
    }
    v81 = v23;
    v82 = 0;
    v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)&v72);
    v32 = v28;
    if ( v28 < 0 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdEvent(v29);
      v50[3] = v32;
      v50[4] = v23;
      v50[5] = v20;
      WdLogEvent5_WdEvent(v50);
LABEL_74:
      v42 = v32;
LABEL_24:
      COREACCESS::~COREACCESS((COREACCESS *)v77);
      COREACCESS::~COREACCESS((COREACCESS *)v73);
      if ( v71 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v83);
      goto LABEL_27;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 16LL) + 300LL) & 0x10) != 0 )
    {
      LODWORD(v32) = DXGDEVICE::GetDeviceExecutionState(v23, &v60, v30, v31);
      if ( (int)v32 < 0 || v60 != D3DKMT_DEVICEEXECUTION_ACTIVE )
      {
        LODWORD(v32) = -1073741130;
        goto LABEL_74;
      }
    }
    memset(v84, 0, 0x198uLL);
    v84[39] = v64;
    LODWORD(v84[40]) = a10;
    v36 = *(_QWORD **)(*(_QWORD *)v24 + 16LL);
    v37 = *((_DWORD *)v36 + 415);
    if ( (v37 & 4) == 0 && ((v37 & 0x10000000) == 0 || ((a6 - 6) & 0xFFFFFFFD) != 0) )
    {
      if ( a6 == 1 )
      {
LABEL_61:
        v41 = a4;
        LODWORD(v84[2]) = 2;
        v90[0] = a4;
        v84[3] = v90;
        v90[1] = a5;
        v91 = a2;
        LODWORD(v32) = DXGDEVICE::CreateStandardAllocation(v23, (struct _D3DKM_CREATESTANDARDALLOCATION *)v84, &v72);
        goto LABEL_20;
      }
      if ( a6 != 2 )
      {
        if ( a6 == 3 || a6 == 6 )
          goto LABEL_61;
LABEL_19:
        v41 = a4;
        goto LABEL_20;
      }
      v41 = a4;
      LODWORD(v84[0]) |= 2u;
      LODWORD(v84[2]) = 2;
      v84[3] = v85;
      v85[0] = a4;
      v85[1] = a5;
      v86 = a2;
      LODWORD(v32) = DXGDEVICE::CreateStandardAllocation(v23, (struct _D3DKM_CREATESTANDARDALLOCATION *)v84, &v72);
      if ( (int)v32 >= 0 )
      {
        v51 = HIDWORD(v86);
        if ( !HIDWORD(v86) )
        {
          v52 = WdLogNewEntry5_WdAssertion(v36, v33, v34, v35);
          *(_QWORD *)(v52 + 24) = 1028LL;
          WdLogEvent5_WdAssertion(v52);
          v51 = HIDWORD(v86);
        }
        *a14 = v51;
LABEL_20:
        if ( (int)v32 >= 0 )
        {
          if ( !LODWORD(v84[1]) )
          {
            v57 = WdLogNewEntry5_WdAssertion(v36, v33, v34, v35);
            *(_QWORD *)(v57 + 24) = 1045LL;
            WdLogEvent5_WdAssertion(v57);
          }
          v42 = 0;
          *v63 = HIDWORD(v84[6]);
          goto LABEL_24;
        }
      }
LABEL_73:
      v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v33, v34, v35);
      v58[3] = (int)v32;
      v58[5] = v41;
      v58[4] = v23;
      v58[6] = a5;
      WdLogEvent5_WdWarning(v58);
      goto LABEL_74;
    }
    v89 = 0;
    v87[0] = a4;
    v84[3] = v87;
    v87[1] = a5;
    v38 = (LOBYTE(v84[0]) ^ (unsigned __int8)(8 * v14)) & 0x18 ^ LODWORD(v84[0]);
    v87[2] = a2;
    v88 = (unsigned int)a6;
    LODWORD(v84[2]) = 4;
    LODWORD(v84[0]) = v38;
    switch ( a6 )
    {
      case 1:
        goto LABEL_12;
      case 2:
        v39 = v38 | 2;
        goto LABEL_13;
      case 5:
        LODWORD(v84[0]) = v38 | 4;
        v84[4] = v65;
        v84[5] = v66;
        break;
      case 6:
LABEL_12:
        v39 = v38 | 1;
LABEL_13:
        LODWORD(v84[0]) = v39;
        break;
      default:
        if ( a6 > 6 && a6 <= 8 )
        {
          v39 = v38 | 0x21;
          goto LABEL_13;
        }
        break;
    }
    LODWORD(v32) = DXGDEVICE::CreateStandardAllocation(v23, (struct _D3DKM_CREATESTANDARDALLOCATION *)v84, &v72);
    if ( (int)v32 < 0 )
    {
      v41 = a4;
      goto LABEL_73;
    }
    if ( a6 == 1 )
    {
LABEL_16:
      v40 = HIDWORD(v84[1]);
      if ( !HIDWORD(v84[1]) )
      {
        v56 = WdLogNewEntry5_WdAssertion(v36, v33, v34, v35);
        *(_QWORD *)(v56 + 24) = 983LL;
        WdLogEvent5_WdAssertion(v56);
      }
      *v68 = v40;
      goto LABEL_19;
    }
    if ( a6 == 2 || a6 == 5 )
    {
      v46 = v89;
      if ( !v89 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v36, v33, v34, v35);
        *(_QWORD *)(v55 + 24) = 988LL;
        WdLogEvent5_WdAssertion(v55);
        v46 = v89;
      }
      *a14 = v46;
      goto LABEL_19;
    }
    if ( a6 != 6 )
    {
      if ( a6 == 7 )
        goto LABEL_16;
      if ( a6 != 8 )
        goto LABEL_19;
    }
    v36 = v67;
    *v67 = v84[41];
    v53 = v89;
    if ( !v89 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v36, v33, v34, v35);
      *(_QWORD *)(v54 + 24) = 976LL;
      WdLogEvent5_WdAssertion(v54);
      v53 = v89;
    }
    *a14 = v53;
    goto LABEL_16;
  }
  v49 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
  v42 = -1073741811;
  v49[3] = -1073741811LL;
  v49[4] = v16;
  v49[5] = v20;
  WdLogEvent5_WdError(v49);
LABEL_27:
  if ( v62 )
  {
    v43 = _InterlockedExchangeAdd64((volatile signed __int64 *)v62 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v43 == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62 + 2), v62);
  }
LABEL_30:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v43, &EventProfilerExit, v44, 3017);
  return v42;
}
