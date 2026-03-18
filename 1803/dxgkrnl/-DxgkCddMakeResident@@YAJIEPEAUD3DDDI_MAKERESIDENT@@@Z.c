/*
 * XREFs of ?DxgkCddMakeResident@@YAJIEPEAUD3DDDI_MAKERESIDENT@@@Z @ 0x1C00D5D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00D5DFC (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C00E62E0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C016E7F0 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddMakeResident(unsigned int a1, char a2, struct D3DDDI_MAKERESIDENT *a3)
{
  __int64 v4; // rsi
  unsigned int ResidentInternal; // edi
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  const D3DKMT_HANDLE *v25; // rsi
  __int64 v26; // rax
  D3DKMT_HANDLE v27; // edi
  __int64 v28; // rax
  struct _KTHREAD *v29; // r8
  int v30; // ecx
  struct DXGALLOCATION *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 i; // r8
  __int64 v39; // rax
  struct DXGDEVICE *v40; // [rsp+30h] [rbp-89h] BYREF
  __int64 v41; // [rsp+38h] [rbp-81h] BYREF
  struct DXGDEVICE *v42; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v43[24]; // [rsp+48h] [rbp-71h] BYREF
  char v44[8]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v45[32]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v46[56]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v47[3]; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp+1Fh]

  v47[0] = 0LL;
  v48 = 0;
  v4 = a1;
  if ( !a2 )
  {
LABEL_2:
    ResidentInternal = DxgkMakeResidentInternal(a3, 0);
    goto LABEL_3;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v9 = Current;
  if ( !Current )
  {
    ResidentInternal = -1073741811;
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    *(_QWORD *)(v10 + 32) = PsGetCurrentProcess(v12, v11);
    WdLogEvent5_WdError(v10);
    goto LABEL_3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, v4, Current, &v42);
  v14 = v42;
  if ( v42 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43, v42);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v14, 0, v16, 0);
    v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
    v20 = v17;
    if ( v17 >= 0 )
    {
      v22 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
      if ( *(int *)(v22 + 2104) < 0x2000 )
        v23 = 1LL;
      else
        v23 = *(unsigned int *)(v22 + 248);
      PagedPoolArray<unsigned int,4>::AllocateElements(v47, v23);
      v25 = (const D3DKMT_HANDLE *)v47[0];
      if ( v47[0] )
      {
        v27 = *a3->AllocationList;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v9 + 26));
        v28 = (v27 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v28 < *((_DWORD *)v9 + 62)
          && (v29 = v9[29],
              v30 = *((_DWORD *)v29 + 4 * v28 + 2),
              ((v27 >> 25) & 0x60) == (*((_BYTE *)v29 + 16 * v28 + 8) & 0x60))
          && (v30 & 0x2000) == 0
          && (v30 & 0x1F) == 5 )
        {
          v31 = (struct DXGALLOCATION *)*((_QWORD *)v29 + 2 * (unsigned int)v28);
        }
        else
        {
          v31 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v41, v31);
        ExReleasePushLockSharedEx(v9 + 26, 0LL);
        KeLeaveCriticalRegion();
        ResidentInternal = -1073741811;
        if ( v41 )
        {
          v36 = *(_QWORD *)(v41 + 40);
          v37 = 0LL;
          if ( !v36 )
          {
LABEL_30:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v41);
            COREACCESS::~COREACCESS((COREACCESS *)v46);
            COREACCESS::~COREACCESS((COREACCESS *)v45);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
            if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
            goto LABEL_2;
          }
          for ( i = *(_QWORD *)(v36 + 24); ; i = *(_QWORD *)(i + 64) )
          {
            if ( !i )
            {
              a3->AllocationList = v25;
              a3->NumAllocations = v37;
              goto LABEL_30;
            }
            if ( (unsigned int)v37 >= v48 )
              break;
            v25[v37] = *(_DWORD *)(i + 16);
            v37 = (unsigned int)(v37 + 1);
          }
          v39 = WdLogNewEntry5_WdError(v33);
          *(_QWORD *)(v39 + 24) = 3468LL;
          WdLogEvent5_WdError(v39);
        }
        else
        {
          v35 = WdLogNewEntry5_WdWarning(v33, v32, v34);
          *(_QWORD *)(v35 + 24) = *a3->AllocationList;
          *(_QWORD *)(v35 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v35);
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v41);
        goto LABEL_35;
      }
      v26 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v26 + 24) = 3442LL;
      WdLogEvent5_WdError(v26);
      LODWORD(v20) = -1073741801;
    }
    else
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v18);
      v21[3] = v20;
      v21[4] = v14;
      v21[5] = v9;
      WdLogEvent5_WdEvent(v21);
    }
    ResidentInternal = v20;
LABEL_35:
    COREACCESS::~COREACCESS((COREACCESS *)v46);
    COREACCESS::~COREACCESS((COREACCESS *)v45);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
    goto LABEL_36;
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdError(v13);
  ResidentInternal = -1073741811;
  v15[3] = -1073741811LL;
  v15[4] = v4;
  v15[5] = v9;
  WdLogEvent5_WdError(v15);
LABEL_36:
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
LABEL_3:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>(v47);
  return ResidentInternal;
}
