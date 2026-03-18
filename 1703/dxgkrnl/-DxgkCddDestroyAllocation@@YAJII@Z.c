/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00FD580
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C017FFCC (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  struct _KTHREAD **Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rbx
  char *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ecx
  struct _KTHREAD *v18; // r8
  unsigned int v19; // edx
  __int64 v20; // rbx
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rbx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  char v34[8]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v35; // [rsp+38h] [rbp-71h]
  char v36; // [rsp+40h] [rbp-69h]
  PERESOURCE *v37; // [rsp+50h] [rbp-59h] BYREF
  char v38[8]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v39; // [rsp+60h] [rbp-49h]
  __int64 v40; // [rsp+68h] [rbp-41h]
  char v41; // [rsp+70h] [rbp-39h]
  char v42[8]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v43; // [rsp+80h] [rbp-29h]
  __int64 v44; // [rsp+88h] [rbp-21h]
  char v45; // [rsp+90h] [rbp-19h]
  struct DXGDEVICE *v46; // [rsp+98h] [rbp-11h]
  char v47; // [rsp+A0h] [rbp-9h]
  _BYTE v48[16]; // [rsp+B0h] [rbp+7h] BYREF
  _BYTE v49[32]; // [rsp+C0h] [rbp+17h] BYREF
  struct DXGDEVICE *v50; // [rsp+120h] [rbp+77h] BYREF
  struct DXGDEVICE *v51; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = a2;
  v4 = (unsigned int)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v8 = Current;
  if ( !Current )
  {
    v25 = -1073741811;
    v29 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    *(_QWORD *)(v29 + 32) = PsGetCurrentProcess(v30);
    WdLogEvent5_WdError(v29);
    goto LABEL_30;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v51, (unsigned int)v4, Current, &v50);
  v11 = v50;
  if ( v50 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48, v50);
    v12 = (char *)v11 + 16;
    v36 = 0;
    v35 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    v13 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
    v40 = v13;
    v41 = 0;
    if ( v13 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
      v11 = v50;
      v39 = -1LL;
    }
    v14 = *(_QWORD *)(*(_QWORD *)v12 + 16LL);
    v44 = v14;
    v45 = 0;
    if ( v14 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
      v11 = v50;
      v43 = -1LL;
    }
    v46 = v11;
    v47 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v37);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 16LL) + 176LL) != 4 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v49,
        (struct DXGPROCESS *)v8,
        v15,
        v16);
      v17 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
      if ( v17 < *((_DWORD *)v8 + 52)
        && (v18 = v8[24], v19 = *((_DWORD *)v18 + 4 * v17 + 2), (unsigned int)v3 >> 30 == ((v19 >> 4) & 3))
        && (v19 & 0x1000) == 0
        && (v19 & 0xF) != 0
        && (*((_BYTE *)v18 + 16 * v17 + 8) & 0xF) == 5 )
      {
        v20 = *((_QWORD *)v18 + 2 * v17);
        if ( v20 )
        {
          if ( v17 < *((_DWORD *)v8 + 52) )
          {
            v21 = *((_DWORD *)v18 + 4 * v17 + 2);
            if ( (unsigned int)v3 >> 30 == ((v21 >> 4) & 3) && (v21 & 0x1000) == 0 && (v21 & 0xF) != 0 )
              *((_DWORD *)v18 + 4 * (((unsigned __int64)(unsigned int)v3 >> 6) & 0xFFFFFF) + 2) |= 0x1000u;
          }
        }
      }
      else
      {
        v20 = 0LL;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v49);
      if ( !v20 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
        v33 = *(_QWORD *)(*(_QWORD *)v12 + 16LL);
        v32[4] = v50;
        v32[3] = v33;
        v32[5] = v3;
        WdLogEvent5_WdError(v32);
        v25 = -1073741811;
        goto LABEL_24;
      }
      v24 = *((unsigned int *)v50 + 102);
      if ( (_DWORD)v24 == 4 )
        DxgkDestroyClientAllocation(v24, v50, 0LL, 0LL, *(_QWORD *)(v20 + 40));
      else
        DXGDEVICE::DestroyAllocationInternal(
          v50,
          0,
          0LL,
          *(struct DXGRESOURCE **)(v20 + 40),
          &v37,
          DXGDEVICE::DestroyFlagsDefault);
    }
    v25 = 0;
LABEL_24:
    COREACCESS::~COREACCESS((COREACCESS *)v42);
    COREACCESS::~COREACCESS((COREACCESS *)v38);
    if ( v36 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v48);
    goto LABEL_27;
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
  v25 = -1073741811;
  v31[3] = -1073741811LL;
  v31[4] = v4;
  v31[5] = v8;
  WdLogEvent5_WdError(v31);
LABEL_27:
  if ( v51 )
  {
    v26 = _InterlockedDecrement64((volatile signed __int64 *)v51 + 8);
    if ( !v26 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v51 + 2), v51);
  }
LABEL_30:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 3018);
  return v25;
}
