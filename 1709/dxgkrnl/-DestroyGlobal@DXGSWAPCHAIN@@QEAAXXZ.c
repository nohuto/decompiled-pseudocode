/*
 * XREFs of ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01D4FF0
 * Callers:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C01D4A20 (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C00030B4 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C000F4D8 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyGlobal(DXGSWAPCHAIN *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int i; // esi
  __int64 v8; // rbp
  AUTOEXPANDALLOCATION *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // rcx
  struct DXGSYNCOBJECT *ObjectA; // rbx
  PERESOURCE *v15; // rax
  void *v16; // rcx
  _QWORD *v17; // rbx
  void *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 18) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 1365LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 12) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 1366LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v8 = 56LL * i;
    v9 = *(AUTOEXPANDALLOCATION **)(*((_QWORD *)this + 7) + v8 + 8);
    if ( v9 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(v9);
      *(_QWORD *)(*((_QWORD *)this + 7) + v8 + 8) = 0LL;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 7) + v8 + 20) )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v23);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
      v10 = *((_QWORD *)this + 7);
      Global = DXGGLOBAL::GetGlobal(v11);
      ObjectA = (struct DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA((__int64)Global, *(_DWORD *)(v10 + v8 + 20), 8);
      if ( v23[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
      if ( ObjectA )
      {
        v15 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v13);
        DXGGLOBAL::DestroySyncObject(v15, ObjectA, 0);
      }
      *(_DWORD *)(*((_QWORD *)this + 7) + v8 + 20) = 0;
    }
  }
  v16 = (void *)*((_QWORD *)this + 7);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *((_QWORD *)this + 7) = 0LL;
  }
  v17 = (_QWORD *)*((_QWORD *)this + 26);
  if ( v17 )
  {
    v18 = (void *)v17[2];
    if ( v18 )
    {
      operator delete(v18);
      v17[2] = 0LL;
    }
    operator delete(v17);
    *((_QWORD *)this + 26) = 0LL;
  }
  v19 = (void *)*((_QWORD *)this + 27);
  if ( v19 )
  {
    operator delete(v19);
    *((_QWORD *)this + 27) = 0LL;
  }
  v20 = WdLogNewEntry5_WdEvent(v19, a2, a3, a4);
  *(_QWORD *)(v20 + 24) = this;
  *(_QWORD *)(v20 + 32) = DXGPROCESS::GetCurrent(v22, v21);
  WdLogEvent5_WdEvent(v20);
}
