/*
 * XREFs of ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00C0968
 * Callers:
 *     DxgkDestroyDevice @ 0x1C00FBB20 (DxgkDestroyDevice.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D648 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1D74 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllPagingQueues(PERESOURCE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGPROCESS *Current; // r13
  volatile signed __int64 **v12; // r12
  volatile signed __int64 *i; // rdi
  __int64 *v14; // rax
  __int64 *v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // edx
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+28h] [rbp-69h] BYREF
  int v37; // [rsp+30h] [rbp-61h]
  _BYTE v38[8]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v39; // [rsp+40h] [rbp-51h]
  char v40; // [rsp+48h] [rbp-49h]
  _BYTE v41[8]; // [rsp+50h] [rbp-41h] BYREF
  char *v42; // [rsp+58h] [rbp-39h]
  int v43; // [rsp+60h] [rbp-31h]
  _BYTE v44[8]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v45[8]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v46; // [rsp+78h] [rbp-19h]
  __int64 v47; // [rsp+80h] [rbp-11h]
  char v48; // [rsp+88h] [rbp-9h]
  _BYTE v49[8]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v50; // [rsp+98h] [rbp+7h]
  __int64 v51; // [rsp+A0h] [rbp+Fh]
  char v52; // [rsp+A8h] [rbp+17h]
  __int64 v53; // [rsp+B0h] [rbp+1Fh]
  char v54; // [rsp+B8h] [rbp+27h]

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, v4, v5, v6);
    *(_QWORD *)(v32 + 24) = 2217LL;
    WdLogEvent5_WdAssertion(v32);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v12 = (volatile signed __int64 **)(this + 47);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v33 + 24) = 2229LL;
    WdLogEvent5_WdAssertion(v33);
  }
  for ( i = *v12; ; i = (volatile signed __int64 *)*i )
  {
    v14 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v12 )
      v14 = 0LL;
    if ( !v14 )
      break;
    v15 = (__int64 *)i;
    v42 = (char *)Current + 168;
    if ( i == (volatile signed __int64 *)v12 )
      v15 = 0LL;
    v16 = *((_DWORD *)v15 + 6);
    if ( Current != (struct DXGPROCESS *)-168LL && *((struct _KTHREAD **)Current + 22) == KeGetCurrentThread() )
    {
      v34 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v34 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v34);
    }
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 168));
    v43 = 2;
    v17 = (v16 >> 6) & 0xFFFFFF;
    if ( v17 < *((_DWORD *)Current + 52) )
    {
      v18 = *((_QWORD *)Current + 24);
      v19 = *(_DWORD *)(v18 + 16LL * v17 + 8);
      if ( ((v16 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x30)
        && (v19 & 0x1000) == 0
        && (v19 & 0xF) != 0
        && (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0xF) == 0xA
        && *(_QWORD *)(v18 + 16LL * v17) )
      {
        if ( i == (volatile signed __int64 *)v12 )
          i = 0LL;
        v20 = (v16 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v20 < *((_DWORD *)Current + 52) )
        {
          v21 = *(_DWORD *)(v18 + 16 * v20 + 8);
          if ( ((v16 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16 * v20 + 8) & 0x30)
            && (v21 & 0x1000) == 0
            && (v21 & 0xF) != 0 )
          {
            *(_DWORD *)(v18 + 16 * (((unsigned __int64)v16 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
          }
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
        if ( i )
        {
          if ( *((_DWORD *)a2 + 2) )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)a2 + 104LL));
            KeLeaveCriticalRegion();
            *((_DWORD *)a2 + 2) = 0;
          }
          v26 = _InterlockedDecrement64(i + 6);
          if ( v26 < 0 )
          {
            v35 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
            *(_QWORD *)(v35 + 24) = 67LL;
            WdLogEvent5_WdAssertion(v35);
          }
          if ( !v26 )
          {
            v27 = *((_QWORD *)i + 2);
            v36 = v27;
            v37 = 0;
            if ( v27 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v36);
            v28 = *(_QWORD *)(v27 + 16);
            v40 = 0;
            v39 = *(_QWORD *)(v28 + 16);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
            v29 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
            v47 = v29;
            v48 = 0;
            if ( v29 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v29 + 24));
              v46 = -1LL;
            }
            v30 = *(_QWORD *)(v27 + 1800);
            if ( !v30 )
              v30 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
            v51 = v30;
            v52 = 0;
            if ( v30 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v30 + 24));
              v50 = -1LL;
            }
            v53 = v27;
            v31 = *(_QWORD *)(v27 + 1800);
            if ( v31 == *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) || (v54 = 1, !v31) )
              v54 = 0;
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v44);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 176LL) != 4 )
              DXGDEVICE::DestroyPagingQueue(
                (DXGDEVICE *)v27,
                (struct DXGPAGINGQUEUE *)i,
                (struct COREDEVICEACCESS *)v44);
            COREACCESS::~COREACCESS((COREACCESS *)v49);
            COREACCESS::~COREACCESS((COREACCESS *)v45);
            if ( v40 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v38);
            if ( v36 && v37 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v36 + 104));
              KeLeaveCriticalRegion();
              v37 = 0;
            }
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v27 + 16), (struct DXGDEVICE *)v27);
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
          goto LABEL_5;
        }
        return;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
  }
}
