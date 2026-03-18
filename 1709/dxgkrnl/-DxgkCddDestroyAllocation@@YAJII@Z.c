/*
 * XREFs of ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00BB380
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkDestroyClientAllocation @ 0x1C0184098 (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DxgkCddDestroyAllocation(__int64 a1, __int64 a2, __int64 a3)
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
  struct _KTHREAD *v15; // rdx
  unsigned int v16; // r8d
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
  char v31[8]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v32; // [rsp+38h] [rbp-71h]
  char v33; // [rsp+40h] [rbp-69h]
  DXGADAPTER *v34; // [rsp+50h] [rbp-59h] BYREF
  char v35[8]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v36; // [rsp+60h] [rbp-49h]
  __int64 v37; // [rsp+68h] [rbp-41h]
  char v38; // [rsp+70h] [rbp-39h]
  char v39[8]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v40; // [rsp+80h] [rbp-29h]
  __int64 v41; // [rsp+88h] [rbp-21h]
  char v42; // [rsp+90h] [rbp-19h]
  struct DXGDEVICE *v43; // [rsp+98h] [rbp-11h]
  char v44; // [rsp+A0h] [rbp-9h]
  _BYTE v45[16]; // [rsp+B0h] [rbp+7h] BYREF
  _BYTE v46[32]; // [rsp+C0h] [rbp+17h] BYREF
  struct DXGDEVICE *v47; // [rsp+120h] [rbp+77h] BYREF
  struct DXGDEVICE *v48; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = (unsigned int)a2;
  v4 = (unsigned int)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 3018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
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
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, v4, Current, &v47);
  v9 = v47;
  if ( v47 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v45, v47);
    v10 = (char *)v9 + 16;
    v33 = 0;
    v32 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    v11 = *(_QWORD *)(*((_QWORD *)v9 + 2) + 16LL);
    v37 = v11;
    v38 = 0;
    if ( v11 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24));
      v9 = v47;
      v36 = -1LL;
    }
    v12 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
    v41 = v12;
    v42 = 0;
    if ( v12 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24));
      v9 = v47;
      v40 = -1LL;
    }
    v43 = v9;
    v44 = 0;
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v34);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 16LL) + 176LL) != 4 )
    {
      DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
        (DXGHANDLETABLELOCKEXCLUSIVE *)v46,
        (struct DXGPROCESS *)v7);
      v13 = *((_DWORD *)v7 + 60);
      v14 = ((unsigned int)v3 >> 6) & 0xFFFFFF;
      if ( v14 < v13
        && (v15 = v7[28], v16 = *((_DWORD *)v15 + 4 * v14 + 2), v17 = (v16 >> 5) & 3, (unsigned int)v3 >> 30 == v17)
        && (v16 & 0x2000) == 0
        && (v16 & 0x1F) != 0
        && (*((_BYTE *)v15 + 16 * v14 + 8) & 0x1F) == 5 )
      {
        v18 = *((_QWORD *)v15 + 2 * v14);
        if ( v18 && v14 < v13 && (unsigned int)v3 >> 30 == v17 )
          *((_DWORD *)v15 + 4 * (((unsigned int)v3 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
      }
      else
      {
        v18 = 0LL;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
      if ( !v18 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v30 = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
        v29[4] = v47;
        v29[3] = v30;
        v29[5] = v3;
        WdLogEvent5_WdError(v29);
        v21 = -1073741811;
        goto LABEL_22;
      }
      v20 = *((unsigned int *)v47 + 102);
      if ( (_DWORD)v20 == 4 )
        DxgkDestroyClientAllocation(v20, v47, 0LL, 0LL, *(_QWORD *)(v18 + 40));
      else
        DXGDEVICE::DestroyAllocationInternal(
          v47,
          0,
          0LL,
          *(struct DXGRESOURCE **)(v18 + 40),
          &v34,
          DXGDEVICE::DestroyFlagsDefault);
    }
    v21 = 0;
LABEL_22:
    COREACCESS::~COREACCESS((COREACCESS *)v39);
    COREACCESS::~COREACCESS((COREACCESS *)v35);
    if ( v33 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v45);
    goto LABEL_25;
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v8);
  v21 = -1073741811;
  v28[3] = -1073741811LL;
  v28[4] = v4;
  v28[5] = v7;
  WdLogEvent5_WdError(v28);
LABEL_25:
  if ( v48 )
  {
    v22 = _InterlockedDecrement64((volatile signed __int64 *)v48 + 8);
    if ( !v22 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
  }
LABEL_28:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, 3018);
  return v21;
}
