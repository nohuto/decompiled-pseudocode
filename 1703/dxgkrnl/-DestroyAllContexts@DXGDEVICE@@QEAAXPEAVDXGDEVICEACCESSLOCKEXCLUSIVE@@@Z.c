/*
 * XREFs of ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C00C0C88
 * Callers:
 *     DxgkDestroyDevice @ 0x1C00FBB20 (DxgkDestroyDevice.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D648 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1E20 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllContexts(PERESOURCE *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // r15
  volatile signed __int64 **v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  volatile signed __int64 *i; // rbx
  __int64 *v14; // rax
  __int64 *v15; // rax
  unsigned int v16; // edi
  unsigned int v17; // edx
  __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v27[8]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v28; // [rsp+40h] [rbp-61h]
  char v29; // [rsp+48h] [rbp-59h]
  _QWORD v30[2]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v31[24]; // [rsp+60h] [rbp-41h] BYREF
  _BYTE v32[8]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v33[32]; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v34[56]; // [rsp+A0h] [rbp-1h] BYREF

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, v4, v5, v6);
    *(_QWORD *)(v25 + 24) = 2150LL;
    WdLogEvent5_WdAssertion(v25);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  v10 = (volatile signed __int64 **)(this + 43);
LABEL_5:
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[13]) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v12, v11, v7, v8);
    *(_QWORD *)(v26 + 24) = 2162LL;
    WdLogEvent5_WdAssertion(v26);
  }
  for ( i = *v10; ; i = (volatile signed __int64 *)*i )
  {
    v14 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v10 )
      v14 = 0LL;
    if ( !v14 )
      break;
    v15 = (__int64 *)i;
    if ( i == (volatile signed __int64 *)v10 )
      v15 = 0LL;
    v16 = *((_DWORD *)v15 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v31, Current, v7, v8);
    v17 = (v16 >> 6) & 0xFFFFFF;
    if ( v17 < *((_DWORD *)Current + 52) )
    {
      v18 = *((_QWORD *)Current + 24);
      v19 = *(_DWORD *)(v18 + 16LL * v17 + 8);
      if ( ((v16 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x30)
        && (v19 & 0x1000) == 0
        && (v19 & 0xF) != 0
        && (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0xF) == 7
        && *(_QWORD *)(v18 + 16LL * v17) )
      {
        if ( i == (volatile signed __int64 *)v10 )
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
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
        if ( i )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          if ( _InterlockedExchangeAdd64(i + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          {
            v22 = *((_QWORD *)i + 2);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
              (DXGDEVICEACCESSLOCKEXCLUSIVE *)v30,
              (struct DXGDEVICE *)v22);
            v23 = *((_QWORD *)i + 2);
            v29 = 0;
            v28 = *(_QWORD *)(*(_QWORD *)(v23 + 16) + 16LL);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, v22, 2LL, v24, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v32);
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 16LL) + 176LL) != 4 )
              DXGDEVICE::DestroyContext((DXGDEVICE *)v22, (struct DXGCONTEXT *)i, (struct COREDEVICEACCESS *)v32);
            COREACCESS::~COREACCESS((COREACCESS *)v34);
            COREACCESS::~COREACCESS((COREACCESS *)v33);
            if ( v29 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
            if ( v30[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v22 + 16), (struct DXGDEVICE *)v22);
          }
          DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(a2);
          goto LABEL_5;
        }
        return;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
  }
}
