/*
 * XREFs of ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@@Z @ 0x1C009DE60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00052C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??1?$PagedPoolArray@I$03@@QEAA@XZ @ 0x1C008D658 (--1-$PagedPoolArray@I$03@@QEAA@XZ.c)
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z @ 0x1C009DF70 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@H@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@I$03@@QEAAPEAII@Z @ 0x1C01826B0 (-AllocateElements@-$PagedPoolArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkCddEvict(unsigned int a1, char a2, struct _D3DKMT_EVICT *a3)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  struct _KTHREAD **Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rsi
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  const D3DKMT_HANDLE *v24; // rsi
  __int64 v25; // rax
  D3DKMT_HANDLE v26; // edi
  unsigned int v27; // ecx
  struct _KTHREAD *v28; // r8
  int v29; // edx
  struct DXGALLOCATION *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
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
  PVOID v47[3]; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v48; // [rsp+D8h] [rbp+1Fh]

  v47[0] = 0LL;
  v48 = 0;
  v4 = a1;
  if ( !a2 )
  {
LABEL_2:
    v5 = DxgkEvictInternal(a3, 0);
    goto LABEL_3;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v10 = Current;
  if ( !Current )
  {
    v5 = -1073741811;
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess();
    WdLogEvent5_WdError(v11);
    goto LABEL_3;
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v40, (unsigned int)v4, Current, &v42);
  v14 = v42;
  if ( v42 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43, v42);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v14, 0LL, v16, 0);
    v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v20 = *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL);
      if ( *(int *)(v20 + 1944) < 0x2000 )
        v21 = 1LL;
      else
        v21 = *(unsigned int *)(v20 + 248);
      PagedPoolArray<unsigned int,4>::AllocateElements(v47, v21);
      v24 = (const D3DKMT_HANDLE *)v47[0];
      if ( v47[0] )
      {
        v26 = *a3->AllocationList;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v10 + 21));
        v27 = (v26 >> 6) & 0xFFFFFF;
        if ( v27 < *((_DWORD *)v10 + 52)
          && (v28 = v10[24],
              v29 = *((_DWORD *)v28 + 4 * v27 + 2),
              ((v26 >> 26) & 0x30) == (*((_BYTE *)v28 + 16 * v27 + 8) & 0x30))
          && (v29 & 0x1000) == 0
          && (v29 & 0xF) != 0
          && (*((_BYTE *)v28 + 16 * v27 + 8) & 0xF) == 5 )
        {
          v30 = (struct DXGALLOCATION *)*((_QWORD *)v28 + 2 * v27);
        }
        else
        {
          v30 = 0LL;
        }
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v41, v30);
        ExReleasePushLockSharedEx(v10 + 21, 0LL);
        KeLeaveCriticalRegion();
        v5 = -1073741811;
        if ( v41 )
        {
          v36 = *(_QWORD *)(v41 + 40);
          v37 = 0LL;
          if ( !v36 )
          {
LABEL_31:
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
              a3->AllocationList = v24;
              a3->NumAllocations = v37;
              goto LABEL_31;
            }
            if ( (unsigned int)v37 >= v48 )
              break;
            v24[v37] = *(_DWORD *)(i + 16);
            v37 = (unsigned int)(v37 + 1);
          }
          v39 = WdLogNewEntry5_WdError(v32, v37);
          *(_QWORD *)(v39 + 24) = 3462LL;
          WdLogEvent5_WdError(v39);
        }
        else
        {
          v35 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
          *(_QWORD *)(v35 + 24) = *a3->AllocationList;
          *(_QWORD *)(v35 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v35);
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v41);
        goto LABEL_36;
      }
      v25 = WdLogNewEntry5_WdError(v23, v22);
      *(_QWORD *)(v25 + 24) = 3436LL;
      WdLogEvent5_WdError(v25);
      LODWORD(v18) = -1073741801;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v19[3] = v18;
      v19[4] = v14;
      v19[5] = v10;
      WdLogEvent5_WdEvent(v19);
    }
    v5 = v18;
LABEL_36:
    COREACCESS::~COREACCESS((COREACCESS *)v46);
    COREACCESS::~COREACCESS((COREACCESS *)v45);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v43);
    goto LABEL_37;
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
  v5 = -1073741811;
  v15[3] = -1073741811LL;
  v15[4] = v4;
  v15[5] = v10;
  WdLogEvent5_WdError(v15);
LABEL_37:
  if ( v40 && _InterlockedExchangeAdd64((volatile signed __int64 *)v40 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v40 + 2), v40);
LABEL_3:
  PagedPoolArray<unsigned int,4>::~PagedPoolArray<unsigned int,4>(v47);
  return v5;
}
