/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00D3CC0
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C016C1CC (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  struct _KTHREAD **v7; // rsi
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // rbx
  char *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // r11d
  unsigned int v14; // ecx
  struct _KTHREAD *v15; // r8
  unsigned int v16; // edx
  int v17; // r10d
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  int v31; // [rsp+30h] [rbp-89h] BYREF
  __int64 v32; // [rsp+38h] [rbp-81h]
  char v33[8]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v34; // [rsp+48h] [rbp-71h]
  char v35; // [rsp+50h] [rbp-69h]
  char v36[8]; // [rsp+60h] [rbp-59h] BYREF
  char v37[8]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v38; // [rsp+70h] [rbp-49h]
  __int64 v39; // [rsp+78h] [rbp-41h]
  char v40; // [rsp+80h] [rbp-39h]
  char v41[8]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v42; // [rsp+90h] [rbp-29h]
  __int64 v43; // [rsp+98h] [rbp-21h]
  char v44; // [rsp+A0h] [rbp-19h]
  struct DXGDEVICE *v45; // [rsp+A8h] [rbp-11h]
  char v46; // [rsp+B0h] [rbp-9h]
  _BYTE v47[16]; // [rsp+C0h] [rbp+7h] BYREF
  _BYTE v48[32]; // [rsp+D0h] [rbp+17h] BYREF
  struct DXGDEVICE *v49; // [rsp+130h] [rbp+77h] BYREF
  struct DXGDEVICE *v50; // [rsp+138h] [rbp+7Fh] BYREF

  v32 = 0LL;
  v3 = a2;
  v4 = (unsigned int)a1;
  v31 = 3018;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 3018);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 3018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( !Current )
  {
    v21 = -1073741811;
    v25 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    *(_QWORD *)(v25 + 32) = PsGetCurrentProcess(v27, v26);
    WdLogEvent5_WdError(v25);
    goto LABEL_28;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, v4, Current, &v49);
  v9 = v49;
  if ( v49 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v47, v49);
    v10 = (char *)v9 + 16;
    v35 = 0;
    v34 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    v11 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
    v39 = v11;
    v40 = 0;
    if ( v11 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
      v9 = v49;
      v38 = -1LL;
    }
    v12 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
    v43 = v12;
    v44 = 0;
    if ( v12 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
      v9 = v49;
      v42 = -1LL;
    }
    v45 = v9;
    v46 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v36);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 16LL) + 176LL) != 4 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v48, v7);
      v13 = *((_DWORD *)v7 + 62);
      v14 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
      if ( v14 < v13
        && (v15 = v7[29], v16 = *((_DWORD *)v15 + 4 * v14 + 2), v17 = (v16 >> 5) & 3, (unsigned int)v3 >> 30 == v17)
        && (v16 & 0x2000) == 0
        && (v16 & 0x1F) == 5 )
      {
        v18 = *((_QWORD *)v15 + 2 * v14);
        if ( v18 && v14 < v13 && (unsigned int)v3 >> 30 == v17 && (v16 & 0x1F) != 0 )
          *((_DWORD *)v15 + 4 * (((unsigned int)v3 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
      }
      else
      {
        v18 = 0LL;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
      if ( !v18 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v30 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
        v29[4] = v49;
        v29[3] = v30;
        v29[5] = v3;
        WdLogEvent5_WdError(v29);
        v21 = -1073741811;
        goto LABEL_22;
      }
      v20 = *((unsigned int *)v49 + 106);
      if ( (_DWORD)v20 == 4 )
        DxgkDestroyClientAllocation(v20, v49, 0LL, 0LL, *(_QWORD *)(v18 + 40));
      else
        DXGDEVICE::DestroyAllocationInternal(
          v49,
          0,
          0LL,
          *(struct DXGRESOURCE **)(v18 + 40),
          (struct COREDEVICEACCESS *)v36,
          DXGDEVICE::DestroyFlagsDefault);
    }
    v21 = 0;
LABEL_22:
    COREACCESS::~COREACCESS((COREACCESS *)v41);
    COREACCESS::~COREACCESS((COREACCESS *)v37);
    if ( v35 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v47);
    goto LABEL_25;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v21 = -1073741811;
  v28[3] = -1073741811LL;
  v28[4] = v4;
  v28[5] = v7;
  WdLogEvent5_WdError(v28);
LABEL_25:
  if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v31);
  return v21;
}
