/*
 * XREFs of ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00F35B0
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00A0808 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001A40 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1EA8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllContexts(PERESOURCE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  struct DXGPROCESS *Current; // r13
  _QWORD **v5; // r15
  __int64 v6; // rcx
  _QWORD *i; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r11d
  unsigned int v14; // r8d
  __int64 v15; // r10
  int v16; // edx
  volatile signed __int64 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r9
  char v21[8]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v22; // [rsp+40h] [rbp-61h]
  char v23; // [rsp+48h] [rbp-59h]
  _QWORD v24[2]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v25[24]; // [rsp+60h] [rbp-41h] BYREF
  char v26[8]; // [rsp+78h] [rbp-29h] BYREF
  char v27[32]; // [rsp+80h] [rbp-21h] BYREF
  char v28[56]; // [rsp+A0h] [rbp-1h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 2265LL;
    WdLogEvent5_WdAssertion(v9);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  v5 = (_QWORD **)(this + 45);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v10 + 24) = 2277LL;
    WdLogEvent5_WdAssertion(v10);
  }
  for ( i = *v5; ; i = (_QWORD *)*i )
  {
    v8 = 0LL;
    if ( i != v5 )
      v8 = i;
    if ( !v8 )
      break;
    v11 = 0LL;
    if ( i != v5 )
      v11 = i;
    v12 = *((_DWORD *)v11 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v25,
      (struct _KTHREAD **)Current);
    v13 = *((_DWORD *)Current + 62);
    v14 = (v12 >> 6) & 0xFFFFFF;
    if ( v14 < v13 )
    {
      v15 = *((_QWORD *)Current + 29);
      v16 = *(_DWORD *)(v15 + 16LL * v14 + 8);
      if ( ((v12 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60)
        && (v16 & 0x2000) == 0
        && (v16 & 0x1F) == 7
        && *(_QWORD *)(v15 + 16LL * v14) )
      {
        v17 = 0LL;
        if ( i != v5 )
          v17 = i;
        if ( v14 < v13 && ((v12 >> 25) & 0x60) == (v16 & 0x60) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
          *(_DWORD *)(v15 + 16LL * ((v12 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
        if ( v17 )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          if ( _InterlockedExchangeAdd64(v17 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          {
            v18 = *((_QWORD *)v17 + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v24,
              (struct DXGDEVICE *)v18);
            v19 = *((_QWORD *)v17 + 2);
            v23 = 0;
            v22 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, v18, 2, v20, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v26);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL) + 176LL) != 4 )
              DXGDEVICE::DestroyContext((PERESOURCE *)v18, (struct DXGCONTEXT *)v17, (struct COREDEVICEACCESS *)v26);
            COREACCESS::~COREACCESS((COREACCESS *)v28);
            COREACCESS::~COREACCESS((COREACCESS *)v27);
            if ( v23 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
            if ( v24[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v24);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v18 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v18 + 16), (struct DXGDEVICE *)v18);
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
          goto LABEL_5;
        }
        return;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  }
}
