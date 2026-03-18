/*
 * XREFs of ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00F32BC
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00A0808 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001A40 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E978C (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllPagingQueues(PERESOURCE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r13
  _QWORD **v6; // r15
  _QWORD *i; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  unsigned int v10; // r14d
  unsigned int v11; // r11d
  unsigned int v12; // r8d
  __int64 v13; // r10
  int v14; // edx
  volatile signed __int64 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+28h] [rbp-69h] BYREF
  int v29; // [rsp+30h] [rbp-61h]
  char v30[8]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v31; // [rsp+40h] [rbp-51h]
  char v32; // [rsp+48h] [rbp-49h]
  char v33[8]; // [rsp+50h] [rbp-41h] BYREF
  char *v34; // [rsp+58h] [rbp-39h]
  int v35; // [rsp+60h] [rbp-31h]
  PERESOURCE *v36; // [rsp+68h] [rbp-29h] BYREF
  char v37[8]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v38; // [rsp+78h] [rbp-19h]
  __int64 v39; // [rsp+80h] [rbp-11h]
  char v40; // [rsp+88h] [rbp-9h]
  char v41[8]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v42; // [rsp+98h] [rbp+7h]
  __int64 v43; // [rsp+A0h] [rbp+Fh]
  char v44; // [rsp+A8h] [rbp+17h]
  __int64 v45; // [rsp+B0h] [rbp+1Fh]
  char v46; // [rsp+B8h] [rbp+27h]

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v24 + 24) = 2332LL;
    WdLogEvent5_WdAssertion(v24);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  v6 = (_QWORD **)(this + 49);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v25 + 24) = 2344LL;
    WdLogEvent5_WdAssertion(v25);
  }
  for ( i = *v6; ; i = (_QWORD *)*i )
  {
    v8 = 0LL;
    if ( i != v6 )
      v8 = i;
    if ( !v8 )
      break;
    v9 = 0LL;
    v34 = (char *)Current + 208;
    if ( i != v6 )
      v9 = i;
    v10 = *((_DWORD *)v9 + 6);
    if ( Current != (struct DXGPROCESS *)-208LL && *((struct _KTHREAD **)Current + 27) == KeGetCurrentThread() )
    {
      v26 = WdLogNewEntry5_WdAssertion(v4);
      *(_QWORD *)(v26 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v26);
    }
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
    v11 = *((_DWORD *)Current + 62);
    v12 = (v10 >> 6) & 0xFFFFFF;
    v35 = 2;
    if ( v12 < v11 )
    {
      v13 = *((_QWORD *)Current + 29);
      v14 = *(_DWORD *)(v13 + 16LL * v12 + 8);
      if ( ((v10 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60)
        && (v14 & 0x2000) == 0
        && (v14 & 0x1F) == 0xA
        && *(_QWORD *)(v13 + 16LL * v12) )
      {
        v15 = 0LL;
        if ( i != v6 )
          v15 = i;
        if ( v12 < v11 && ((v10 >> 25) & 0x60) == (v14 & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
          *(_DWORD *)(v13 + 16LL * ((v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
        if ( v15 )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          v17 = _InterlockedDecrement64(v15 + 7);
          if ( v17 < 0 )
          {
            v27 = WdLogNewEntry5_WdAssertion(v16);
            *(_QWORD *)(v27 + 24) = 67LL;
            WdLogEvent5_WdAssertion(v27);
          }
          if ( !v17 )
          {
            v18 = *((_QWORD *)v15 + 2);
            v28 = v18;
            v29 = 0;
            if ( v18 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v28);
            v19 = *(_QWORD *)(v18 + 16);
            v32 = 0;
            v31 = *(_QWORD *)(v19 + 16);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
            v20 = *(_QWORD *)(v18 + 16);
            v21 = *(_QWORD *)(v20 + 16);
            v39 = v21;
            v40 = 0;
            if ( v21 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v21 + 24));
              v38 = -1LL;
              v20 = *(_QWORD *)(v18 + 16);
            }
            v22 = *(_QWORD *)(v18 + 1688);
            v23 = v22;
            if ( !v22 )
              v23 = *(_QWORD *)(v20 + 16);
            v43 = v23;
            v44 = 0;
            if ( v23 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
              v42 = -1LL;
              v20 = *(_QWORD *)(v18 + 16);
              v22 = *(_QWORD *)(v18 + 1688);
            }
            v45 = v18;
            if ( v22 == *(_QWORD *)(v20 + 16) || (v46 = 1, !v22) )
              v46 = 0;
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)&v36);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 176LL) != 4 )
              DXGDEVICE::DestroyPagingQueue((PERESOURCE *)v18, (struct DXGPAGINGQUEUE *)v15, &v36);
            COREACCESS::~COREACCESS((COREACCESS *)v41);
            COREACCESS::~COREACCESS((COREACCESS *)v37);
            if ( v32 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
            if ( v28 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v28);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v18 + 16), (struct DXGDEVICE *)v18);
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
          goto LABEL_5;
        }
        return;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  }
}
