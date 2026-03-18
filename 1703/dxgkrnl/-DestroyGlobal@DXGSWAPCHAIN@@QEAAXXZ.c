/*
 * XREFs of ?DestroyGlobal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01BC984
 * Callers:
 *     ??1DXGSWAPCHAIN@@QEAA@XZ @ 0x1C01BC3D4 (--1DXGSWAPCHAIN@@QEAA@XZ.c)
 * Callees:
 *     ??_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z @ 0x1C00035B4 (--_GAUTOEXPANDALLOCATION@@QEAAPEAXI@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C000706C (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyGlobal(DXGSWAPCHAIN *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int i; // esi
  __int64 v8; // rbp
  AUTOEXPANDALLOCATION *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGSYNCOBJECT *ObjectA; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  PERESOURCE *v22; // rax
  __int64 v23; // r9
  void *v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rcx
  _BYTE v27[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 18) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 1295LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 11) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1296LL;
    WdLogEvent5_WdAssertion(v6);
  }
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v8 = 56LL * i;
    v9 = *(AUTOEXPANDALLOCATION **)(*((_QWORD *)this + 6) + v8 + 8);
    if ( v9 )
    {
      AUTOEXPANDALLOCATION::`scalar deleting destructor'(v9);
      *(_QWORD *)(*((_QWORD *)this + 6) + v8 + 8) = 0LL;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 6) + v8 + 20) )
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v27);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
      v10 = *((_QWORD *)this + 6);
      Global = DXGGLOBAL::GetGlobal(v12, v11, v13, v14);
      ObjectA = (struct DXGSYNCOBJECT *)DXGGLOBAL::GetObjectA(
                                          (__int64)Global,
                                          *(unsigned int *)(v10 + v8 + 20),
                                          8LL,
                                          v16);
      if ( v27[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v17, v20, v21);
      if ( ObjectA )
      {
        v22 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v18, v17, v20, v21);
        DXGGLOBAL::DestroySyncObject(v22, ObjectA, 0LL, v23);
      }
      *(_DWORD *)(*((_QWORD *)this + 6) + v8 + 20) = 0;
    }
  }
  v24 = (void *)*((_QWORD *)this + 6);
  if ( v24 )
  {
    ExFreePoolWithTag(v24, 0);
    *((_QWORD *)this + 6) = 0LL;
  }
  v25 = WdLogNewEntry5_WdEvent(v24);
  *(_QWORD *)(v25 + 24) = this;
  *(_QWORD *)(v25 + 32) = DXGPROCESS::GetCurrent(v26);
  WdLogEvent5_WdEvent(v25);
}
