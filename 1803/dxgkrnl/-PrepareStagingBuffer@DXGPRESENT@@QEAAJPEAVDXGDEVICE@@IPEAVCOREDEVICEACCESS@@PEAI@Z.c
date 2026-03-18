/*
 * XREFs of ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01B2BCC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0189EF4 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C018A0B0 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGPRESENT::PrepareStagingBuffer(
        DXGPRESENT *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        PERESOURCE **a4,
        unsigned int *a5)
{
  __int64 v7; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  unsigned int v13; // r8d
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // edx
  struct _EX_RUNDOWN_REF *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  UINT Pitch; // eax
  __int64 v27; // rax
  _QWORD *v28; // rax
  struct _EX_RUNDOWN_REF *v30; // [rsp+30h] [rbp-68h] BYREF
  struct _D3DKMDT_STAGINGSURFACEDATA v31; // [rsp+38h] [rbp-60h] BYREF

  v7 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 10371LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a4 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a4[3]);
  v11 = *((_DWORD *)this + 1);
  v12 = 0;
  if ( (v11 & 0x40) != 0 )
  {
    v13 = *((_DWORD *)this + 105);
    *((_DWORD *)this + 1) = v11 & 0xFFFFFFBF;
    if ( v13 )
    {
      DXGDEVICE::DestroyStagingSurface(a2, 0, v13, a4);
      *((_QWORD *)this + 52) = 0LL;
    }
  }
  if ( !*((_DWORD *)this + 105) )
  {
    v14 = *((_QWORD *)a2 + 5);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 208));
    v15 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *(_DWORD *)(v14 + 248)
      && (v16 = *(_QWORD *)(v14 + 232),
          v17 = *(_DWORD *)(v16 + 16 * v15 + 8),
          (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60))
      && (v17 & 0x2000) == 0
      && (v17 & 0x1F) == 5 )
    {
      v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v15);
    }
    else
    {
      v18 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v30, v18);
    ExReleasePushLockSharedEx(v14 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v30 )
    {
      v22 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
      if ( *(_QWORD *)(*(_QWORD *)(v30[1].Count + 16) + 16LL) == v22 )
      {
        v31.Width = *((_DWORD *)this + 19);
        v31.Height = *((_DWORD *)this + 20);
        v31.Pitch = 0;
        v12 = DXGDEVICE::CreateStagingSurface2(a2, &v31, a4, (unsigned int *)this + 104, (unsigned int *)this + 105);
        if ( v12 >= 0 )
        {
          if ( !*((_DWORD *)this + 104) )
          {
            v25 = WdLogNewEntry5_WdAssertion(v24);
            *(_QWORD *)(v25 + 24) = 10418LL;
            WdLogEvent5_WdAssertion(v25);
          }
          Pitch = v31.Pitch;
          if ( !v31.Pitch )
          {
            v27 = WdLogNewEntry5_WdAssertion(v24);
            *(_QWORD *)(v27 + 24) = 10420LL;
            WdLogEvent5_WdAssertion(v27);
            Pitch = v31.Pitch;
          }
          *((_DWORD *)this + 106) = Pitch;
        }
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
        v12 = -1073741811;
        v23[3] = a2;
        v23[4] = v30;
        v23[5] = -1073741811LL;
        WdLogEvent5_WdError(v23);
      }
    }
    else
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
      v12 = -1073741811;
      v28[3] = -1073741811LL;
      v28[4] = this;
      v28[5] = v7;
      WdLogEvent5_WdWarning(v28);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
  }
  *a5 = *((_DWORD *)this + 104);
  return (unsigned int)v12;
}
