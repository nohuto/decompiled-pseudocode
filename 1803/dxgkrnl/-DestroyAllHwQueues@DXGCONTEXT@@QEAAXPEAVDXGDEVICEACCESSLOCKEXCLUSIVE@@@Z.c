/*
 * XREFs of ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C01A2618
 * Callers:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00A0DF8 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
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
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2B0C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::DestroyAllHwQueues(DXGCONTEXT *this, struct DXGDEVICEACCESSLOCKEXCLUSIVE *a2)
{
  volatile signed __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 v6; // rax
  struct DXGPROCESS *Current; // r13
  _QWORD **v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *i; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // r11d
  unsigned int v17; // r8d
  __int64 v18; // r10
  int v19; // edx
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
  char v30[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+38h] [rbp-C8h]
  char v32; // [rsp+40h] [rbp-C0h]
  char v33[8]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  char v35; // [rsp+58h] [rbp-A8h]
  _QWORD v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[32]; // [rsp+80h] [rbp-80h] BYREF
  char v39[8]; // [rsp+A0h] [rbp-60h] BYREF
  char v40[32]; // [rsp+A8h] [rbp-58h] BYREF
  char v41[56]; // [rsp+C8h] [rbp-38h] BYREF
  char v42[8]; // [rsp+100h] [rbp+0h] BYREF
  char v43[32]; // [rsp+108h] [rbp+8h] BYREF
  char v44[56]; // [rsp+128h] [rbp+28h] BYREF

  v3 = 0LL;
  v4 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v4 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v4 + 104)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 334LL;
    WdLogEvent5_WdAssertion(v6);
  }
  Current = DXGPROCESS::GetCurrent(v4, (__int64)a2);
  v8 = (_QWORD **)((char *)this + 368);
LABEL_5:
  v9 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v9 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v9 + 104)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 346LL;
    WdLogEvent5_WdAssertion(v11);
  }
  for ( i = *v8; ; i = (_QWORD *)*i )
  {
    v13 = 0LL;
    if ( i != v8 )
      v13 = i;
    if ( !v13 )
      break;
    v14 = 0LL;
    if ( i != v8 )
      v14 = i;
    v15 = *((_DWORD *)v14 + 6);
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v38,
      (struct _KTHREAD **)Current);
    v16 = *((_DWORD *)Current + 62);
    v17 = (v15 >> 6) & 0xFFFFFF;
    if ( v17 < v16 )
    {
      v18 = *((_QWORD *)Current + 29);
      v19 = *(_DWORD *)(v18 + 16LL * v17 + 8);
      if ( ((v15 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x60)
        && (v19 & 0x2000) == 0
        && (v19 & 0x1F) == 0xF
        && *(_QWORD *)(v18 + 16LL * v17) )
      {
        if ( i != v8 )
          v3 = i;
        if ( v17 < v16 && ((v15 >> 25) & 0x60) == (v19 & 0x60) && (v19 & 0x2000) == 0 && (v19 & 0x1F) != 0 )
          *(_DWORD *)(v18 + 16LL * ((v15 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
        if ( v3 )
        {
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release(a2);
          v21 = _InterlockedDecrement64(v3 + 7);
          if ( v21 < 0 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v20);
            *(_QWORD *)(v22 + 24) = 91LL;
            WdLogEvent5_WdAssertion(v22);
          }
          if ( v21 )
          {
            v3 = 0LL;
          }
          else
          {
            v23 = *((_QWORD *)v3 + 2);
            v24 = *(struct DXGDEVICE **)(v23 + 16);
            DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v36, v24);
            v25 = *((_QWORD *)v24 + 2);
            v32 = 0;
            v31 = *(_QWORD *)(v25 + 16);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v39, (__int64)v24, 2, v26, 0);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v39);
            if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 16LL) + 176LL) != 4 )
              DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v23, (struct DXGHWQUEUE *)v3, (struct COREDEVICEACCESS *)v39);
            COREACCESS::~COREACCESS((COREACCESS *)v41);
            COREACCESS::~COREACCESS((COREACCESS *)v40);
            v3 = 0LL;
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
          goto LABEL_5;
        }
        return;
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  }
}
