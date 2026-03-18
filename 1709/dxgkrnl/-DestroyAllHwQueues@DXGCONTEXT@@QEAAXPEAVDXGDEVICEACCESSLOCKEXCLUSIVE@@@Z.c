/*
 * XREFs of ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C01ACABC
 * Callers:
 *     DxgkDestroyContext @ 0x1C0090B10 (DxgkDestroyContext.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AD4 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D730 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01ACF5C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyAllHwQueues(DXGCONTEXT *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  struct DXGPROCESS *Current; // rbx
  volatile signed __int64 **v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  volatile signed __int64 *i; // rdi
  __int64 *v12; // rax
  __int64 *v13; // rax
  unsigned int v14; // esi
  unsigned int v15; // r15d
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // r8d
  int v19; // r11d
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rsi
  struct DXGDEVICE *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r9
  _BYTE v30[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h]
  char v32; // [rsp+40h] [rbp-C0h]
  _BYTE v33[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  char v35; // [rsp+58h] [rbp-A8h]
  _QWORD v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[32]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v39[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v40[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v41[56]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v42[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v43[32]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v44[104]; // [rsp+128h] [rbp+28h] BYREF
  struct DXGPROCESS *v45; // [rsp+1A0h] [rbp+A0h]

  v3 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v3 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 104)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = 264LL;
    WdLogEvent5_WdAssertion(v5);
  }
  Current = DXGPROCESS::GetCurrent(v3, (__int64)a2);
  v45 = Current;
  v7 = (volatile signed __int64 **)((char *)this + 368);
LABEL_5:
  v8 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v8 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 104)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 276LL;
    WdLogEvent5_WdAssertion(v10);
  }
  for ( i = *v7; ; i = (volatile signed __int64 *)*i )
  {
    v12 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v7 )
      v12 = 0LL;
    if ( !v12 )
      break;
    v13 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v7 )
      v13 = 0LL;
    v14 = *((_DWORD *)v13 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v38, Current);
    v15 = *((_DWORD *)Current + 60);
    v16 = (v14 >> 6) & 0xFFFFFF;
    if ( v16 < v15 )
    {
      v17 = *((_QWORD *)Current + 28);
      v18 = *(_DWORD *)(v17 + 16LL * v16 + 8);
      v19 = (v18 >> 5) & 3;
      if ( v14 >> 30 == v19
        && (v18 & 0x2000) == 0
        && (v18 & 0x1F) != 0
        && (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x1F) == 0xF
        && *(_QWORD *)(v17 + 16LL * v16) )
      {
        if ( i == (volatile signed __int64 *)v7 )
          i = 0LL;
        if ( v16 < v15 && v14 >> 30 == v19 && (v18 & 0x2000) == 0 )
          *(_DWORD *)(v17 + 16LL * ((v14 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
        if ( i )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          v21 = _InterlockedDecrement64(i + 6);
          if ( v21 < 0 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v20);
            *(_QWORD *)(v22 + 24) = 66LL;
            WdLogEvent5_WdAssertion(v22);
          }
          if ( !v21 )
          {
            v23 = *((_QWORD *)i + 2);
            v24 = *(struct DXGDEVICE **)(v23 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36, v24);
            v25 = *((_QWORD *)v24 + 2);
            v32 = 0;
            v31 = *(_QWORD *)(v25 + 16);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v24, 2, v26, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v39);
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 176LL) != 4 )
              DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v23, (struct DXGHWQUEUE *)i, (struct COREDEVICEACCESS *)v39);
            COREACCESS::~COREACCESS((COREACCESS *)v41);
            COREACCESS::~COREACCESS((COREACCESS *)v40);
            if ( v32 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
            if ( v36[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            {
              v27 = *(_QWORD *)(v23 + 16);
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                (DXGDEVICEACCESSLOCKEXCLUSIVE *)v37,
                (struct DXGDEVICE *)v27);
              v28 = *(_QWORD *)(v23 + 16);
              v35 = 0;
              v34 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, v27, 2, v29, 0);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v42);
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 176LL) != 4 )
                DXGDEVICE::DestroyContext((PERESOURCE *)v27, (struct DXGCONTEXT *)v23, (struct COREDEVICEACCESS *)v42);
              COREACCESS::~COREACCESS((COREACCESS *)v44);
              COREACCESS::~COREACCESS((COREACCESS *)v43);
              if ( v35 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
              if ( v37[0] )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v27 + 16), (struct DXGDEVICE *)v27);
            }
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
          Current = v45;
          goto LABEL_5;
        }
        return;
      }
      Current = v45;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  }
}
