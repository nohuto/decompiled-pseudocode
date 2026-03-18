/*
 * XREFs of ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0093AC8
 * Callers:
 *     DxgkDestroyDevice @ 0x1C00F2970 (DxgkDestroyDevice.c)
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
 */

void __fastcall DXGDEVICE::DestroyAllContexts(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  volatile signed __int64 **v6; // r14
  __int64 v7; // rcx
  volatile signed __int64 *i; // rbx
  __int64 *v9; // rax
  __int64 *v10; // rax
  unsigned int v11; // edi
  unsigned int v12; // r12d
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // r8d
  int v16; // r11d
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v23; // [rsp+38h] [rbp-71h]
  char v24; // [rsp+40h] [rbp-69h]
  _QWORD v25[2]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v26[24]; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v27[8]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v28[32]; // [rsp+78h] [rbp-31h] BYREF
  _BYTE v29[104]; // [rsp+98h] [rbp-11h] BYREF
  struct DXGPROCESS *v30; // [rsp+110h] [rbp+67h]

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v20 + 24) = 2153LL;
    WdLogEvent5_WdAssertion(v20);
  }
  Current = DXGPROCESS::GetCurrent();
  v30 = Current;
  v6 = (volatile signed __int64 **)((char *)this + 344);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v21 + 24) = 2165LL;
    WdLogEvent5_WdAssertion(v21);
  }
  for ( i = *v6; ; i = (volatile signed __int64 *)*i )
  {
    v9 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v6 )
      v9 = 0LL;
    if ( !v9 )
      break;
    v10 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v6 )
      v10 = 0LL;
    v11 = *((_DWORD *)v10 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v26, Current);
    v12 = *((_DWORD *)Current + 60);
    v13 = (v11 >> 6) & 0xFFFFFF;
    if ( v13 < v12 )
    {
      v14 = *((_QWORD *)Current + 28);
      v15 = *(_DWORD *)(v14 + 16LL * v13 + 8);
      v16 = (v15 >> 5) & 3;
      if ( v11 >> 30 == v16
        && (v15 & 0x2000) == 0
        && (v15 & 0x1F) != 0
        && (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x1F) == 7
        && *(_QWORD *)(v14 + 16LL * v13) )
      {
        if ( i == (volatile signed __int64 *)v6 )
          i = 0LL;
        if ( v13 < v12 && v11 >> 30 == v16 && (v15 & 0x2000) == 0 )
          *(_DWORD *)(v14 + 16LL * ((v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
        if ( i )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          if ( _InterlockedExchangeAdd64(i + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          {
            v17 = *((_QWORD *)i + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v25,
              (struct DXGDEVICE *)v17);
            v18 = *((_QWORD *)i + 2);
            v24 = 0;
            v23 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 16LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v27, v17, 2, v19, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v27);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL) + 176LL) != 4 )
              DXGDEVICE::DestroyContext((DXGDEVICE *)v17, (struct DXGCONTEXT *)i, (struct COREDEVICEACCESS *)v27);
            COREACCESS::~COREACCESS((COREACCESS *)v29);
            COREACCESS::~COREACCESS((COREACCESS *)v28);
            if ( v24 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v22);
            if ( v25[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v17 + 16), (struct DXGDEVICE *)v17);
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
          Current = v30;
          goto LABEL_5;
        }
        return;
      }
      Current = v30;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  }
}
