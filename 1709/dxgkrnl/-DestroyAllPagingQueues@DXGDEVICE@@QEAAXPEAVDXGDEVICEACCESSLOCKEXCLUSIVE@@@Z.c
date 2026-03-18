/*
 * XREFs of ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0093804
 * Callers:
 *     DxgkDestroyDevice @ 0x1C00F2970 (DxgkDestroyDevice.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AD4 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00954A0 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllPagingQueues(DXGDEVICE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  volatile signed __int64 **v6; // r12
  __int64 v7; // rcx
  volatile signed __int64 *i; // rdi
  __int64 *v9; // rax
  __int64 *v10; // rax
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned int v15; // r8d
  int v16; // r11d
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-89h] BYREF
  int v28; // [rsp+28h] [rbp-81h]
  _BYTE v29[8]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v30; // [rsp+38h] [rbp-71h]
  char v31; // [rsp+40h] [rbp-69h]
  _BYTE v32[8]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v33[8]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v34; // [rsp+60h] [rbp-49h]
  __int64 v35; // [rsp+68h] [rbp-41h]
  char v36; // [rsp+70h] [rbp-39h]
  _BYTE v37[8]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v38; // [rsp+80h] [rbp-29h]
  __int64 v39; // [rsp+88h] [rbp-21h]
  char v40; // [rsp+90h] [rbp-19h]
  __int64 v41; // [rsp+98h] [rbp-11h]
  char v42; // [rsp+A0h] [rbp-9h]
  _BYTE v43[80]; // [rsp+B0h] [rbp+7h] BYREF
  struct DXGPROCESS *v44; // [rsp+110h] [rbp+67h]

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v24 + 24) = 2220LL;
    WdLogEvent5_WdAssertion(v24);
  }
  Current = DXGPROCESS::GetCurrent();
  v44 = Current;
  v6 = (volatile signed __int64 **)((char *)this + 376);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v25 + 24) = 2232LL;
    WdLogEvent5_WdAssertion(v25);
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
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v43, Current);
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
        && (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x1F) == 0xA
        && *(_QWORD *)(v14 + 16LL * v13) )
      {
        if ( i == (volatile signed __int64 *)v6 )
          i = 0LL;
        if ( v13 < v12 && v11 >> 30 == v16 && (v15 & 0x2000) == 0 )
          *(_DWORD *)(v14 + 16LL * ((v11 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
        if ( i )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          v18 = _InterlockedDecrement64(i + 6);
          if ( v18 < 0 )
          {
            v26 = WdLogNewEntry5_WdAssertion(v17);
            *(_QWORD *)(v26 + 24) = 67LL;
            WdLogEvent5_WdAssertion(v26);
          }
          if ( !v18 )
          {
            v19 = *((_QWORD *)i + 2);
            v27 = v19;
            v28 = 0;
            if ( v19 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v27);
            v20 = *(_QWORD *)(v19 + 16);
            v31 = 0;
            v30 = *(_QWORD *)(v20 + 16);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
            v21 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
            v35 = v21;
            v36 = 0;
            if ( v21 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v21 + 24));
              v34 = -1LL;
            }
            v22 = *(_QWORD *)(v19 + 1672);
            if ( !v22 )
              v22 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL);
            v39 = v22;
            v40 = 0;
            if ( v22 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24));
              v38 = -1LL;
            }
            v41 = v19;
            v23 = *(_QWORD *)(v19 + 1672);
            if ( v23 == *(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) || (v42 = 1, !v23) )
              v42 = 0;
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v32);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 176LL) != 4 )
              DXGDEVICE::DestroyPagingQueue(
                (DXGDEVICE *)v19,
                (struct DXGPAGINGQUEUE *)i,
                (struct COREDEVICEACCESS *)v32);
            COREACCESS::~COREACCESS((COREACCESS *)v37);
            COREACCESS::~COREACCESS((COREACCESS *)v33);
            if ( v31 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
            if ( v27 )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v27);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v19 + 16), (struct DXGDEVICE *)v19);
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
          Current = v44;
          goto LABEL_5;
        }
        return;
      }
      Current = v44;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
  }
}
