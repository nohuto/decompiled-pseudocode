/*
 * XREFs of ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C00BC500
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C00BC5FC (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C00BC8C4 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C0186920 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddEvict(__int64 a1, __int64 a2, struct _D3DKMT_EVICT *a3)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  struct _KTHREAD **Current; // rax
  __int64 v8; // rcx
  struct _KTHREAD **v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  const D3DKMT_HANDLE *v23; // rsi
  __int64 v24; // rax
  D3DKMT_HANDLE v25; // edi
  __int64 v26; // rax
  struct _KTHREAD *v27; // r8
  int v28; // ecx
  struct _EX_RUNDOWN_REF *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  ULONG_PTR Count; // r8
  __int64 v35; // rdx
  __int64 i; // r8
  __int64 v37; // rax
  struct DXGDEVICE *v38; // [rsp+30h] [rbp-89h] BYREF
  struct _EX_RUNDOWN_REF *v39; // [rsp+38h] [rbp-81h] BYREF
  struct DXGDEVICE *v40; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v41[24]; // [rsp+48h] [rbp-71h] BYREF
  char v42[8]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v43[32]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v44[56]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v45[3]; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v46; // [rsp+D8h] [rbp+1Fh]

  v45[0] = 0LL;
  v46 = 0;
  v4 = (unsigned int)a1;
  if ( !(_BYTE)a2 )
  {
LABEL_2:
    v5 = DxgkEvictInternal(a3, 0);
    goto LABEL_3;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  v9 = Current;
  if ( !Current )
  {
    v5 = -1073741811;
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v12, v11);
    WdLogEvent5_WdError(v10);
    goto LABEL_3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, v4, Current, &v40);
  v14 = v40;
  if ( v40 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41, v40);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v14, 0, v16, 0);
    v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v20 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
      if ( *(int *)(v20 + 1968) < 0x2000 )
        v21 = 1LL;
      else
        v21 = *(unsigned int *)(v20 + 248);
      PagedPoolArray<unsigned int,4>::AllocateElements(v45, v21);
      v23 = (const D3DKMT_HANDLE *)v45[0];
      if ( v45[0] )
      {
        v25 = *a3->AllocationList;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 25));
        v26 = (v25 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v26 < *((_DWORD *)v9 + 60)
          && (v27 = v9[28],
              v28 = *((_DWORD *)v27 + 4 * v26 + 2),
              ((v25 >> 25) & 0x60) == (*((_BYTE *)v27 + 16 * v26 + 8) & 0x60))
          && (v28 & 0x2000) == 0
          && (v28 & 0x1F) != 0
          && (*((_BYTE *)v27 + 16 * (unsigned int)v26 + 8) & 0x1F) == 5 )
        {
          v29 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v27 + 2 * (unsigned int)v26);
        }
        else
        {
          v29 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39, v29);
        ExReleasePushLockSharedEx(v9 + 25, 0LL);
        KeLeaveCriticalRegion();
        v5 = -1073741811;
        if ( v39 )
        {
          Count = v39[5].Count;
          v35 = 0LL;
          if ( !Count )
          {
LABEL_31:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
            COREACCESS::~COREACCESS((COREACCESS *)v44);
            COREACCESS::~COREACCESS((COREACCESS *)v43);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
            if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
            goto LABEL_2;
          }
          for ( i = *(_QWORD *)(Count + 24); ; i = *(_QWORD *)(i + 64) )
          {
            if ( !i )
            {
              a3->AllocationList = v23;
              a3->NumAllocations = v35;
              goto LABEL_31;
            }
            if ( (unsigned int)v35 >= v46 )
              break;
            v23[v35] = *(_DWORD *)(i + 16);
            v35 = (unsigned int)(v35 + 1);
          }
          v37 = WdLogNewEntry5_WdError(v31);
          *(_QWORD *)(v37 + 24) = 3505LL;
          WdLogEvent5_WdError(v37);
        }
        else
        {
          v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
          *(_QWORD *)(v33 + 24) = *a3->AllocationList;
          *(_QWORD *)(v33 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v33);
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v39);
        goto LABEL_36;
      }
      v24 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v24 + 24) = 3479LL;
      WdLogEvent5_WdError(v24);
      LODWORD(v18) = -1073741801;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v19[3] = v18;
      v19[4] = v14;
      v19[5] = v9;
      WdLogEvent5_WdEvent(v19);
    }
    v5 = v18;
LABEL_36:
    COREACCESS::~COREACCESS((COREACCESS *)v44);
    COREACCESS::~COREACCESS((COREACCESS *)v43);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v41);
    goto LABEL_37;
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
  v5 = -1073741811;
  v15[3] = -1073741811LL;
  v15[4] = v4;
  v15[5] = v9;
  WdLogEvent5_WdError(v15);
LABEL_37:
  if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
LABEL_3:
  PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v45);
  return v5;
}
