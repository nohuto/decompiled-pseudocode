/*
 * XREFs of ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C00C1B98
 * Callers:
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00136D0 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C00145BC (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C00C1C98 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationsAndTransferToList(
        struct _KTHREAD **this,
        struct DXGALLOCATION **a2,
        __int64 a3,
        struct DXGALLOCATION **a4)
{
  __int64 v5; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  struct DXGALLOCATION *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  char v19; // [rsp+28h] [rbp-30h]
  DXGPUSHLOCK *v20[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (unsigned int)a3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, this + 20, a3, (__int64)a4);
  v18 = 0LL;
  v19 = 0;
  if ( (_DWORD)v5 && *a2 && (v10 = *((_QWORD *)*a2 + 5)) != 0 )
  {
    LOBYTE(v8) = 1;
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v18, (struct DXGFASTMUTEX *const)(v10 + 80), v8, v9);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v18);
  }
  else
  {
    DXGAUTOPUSHLOCK::AcquireExclusive(v20);
  }
  if ( (_DWORD)v5 )
  {
    v15 = v5;
    do
    {
      v16 = *a2;
      if ( *a2 )
      {
        DXGDEVICE::RemoveAllocationFromList((DXGDEVICE *)this, *a2, 1);
        *((_QWORD *)v16 + 8) = *a4;
        *a4 = v16;
      }
      else
      {
        v17 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
        *(_QWORD *)(v17 + 24) = 7624LL;
        WdLogEvent5_WdAssertion(v17);
      }
      ++a2;
      --v15;
    }
    while ( v15 );
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v18);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
}
