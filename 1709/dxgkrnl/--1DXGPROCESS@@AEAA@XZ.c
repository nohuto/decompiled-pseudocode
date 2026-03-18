/*
 * XREFs of ??1DXGPROCESS@@AEAA@XZ @ 0x1C0088F9C
 * Callers:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0002A70 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??_GDXGPROCESS@@AEAAPEAXI@Z @ 0x1C001D7D8 (--_GDXGPROCESS@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007C94 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C000E8C4 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGFASTMUTEX **this)
{
  void *v2; // rcx
  bool v3; // zf
  DXGFASTMUTEX *v4; // rdi
  DXGFASTMUTEX *v5; // rax
  DXGFASTMUTEX *v6; // rdi
  DXGFASTMUTEX *v7; // rdi
  unsigned int i; // edi
  struct DXGGLOBAL *Global; // rsi
  DXGFASTMUTEX *v10; // rcx
  DXGFASTMUTEX *v11; // rcx
  DXGFASTMUTEX *v12; // rcx
  DXGFASTMUTEX *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v19[10]; // [rsp+20h] [rbp-68h] BYREF

  if ( this[42] )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v14 + 24) = 962LL;
    WdLogEvent5_WdAssertion(v14);
  }
  memset(v19, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v19[1]);
  v3 = *((_DWORD *)this + 8) == 0;
  v19[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v19[3]) = 25;
  LOBYTE(v19[6]) = -1;
  if ( v3 )
    DXGPROCESS::Destroy((DXGPROCESS *)this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v19);
  if ( *((_DWORD *)this + 8) != 2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v15 + 24) = 973LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v4 = this[37];
  if ( v4 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(this[37]);
    operator delete(v4);
  }
  this[37] = 0LL;
  v5 = this[8];
  if ( v5 )
  {
    v2 = (void *)*((_QWORD *)v5 + 10);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v6 = this[8];
    if ( v6 )
    {
      DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)((char *)v6 + 88));
      operator delete(v6);
    }
  }
  v7 = this[13];
  if ( v7 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(this[13]);
    operator delete(v7);
  }
  this[13] = 0LL;
  for ( i = 0; ; ++i )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v2);
    if ( !*((_DWORD *)Global + 204) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v2);
      *(_QWORD *)(v16 + 24) = 2105LL;
      WdLogEvent5_WdAssertion(v16);
    }
    if ( i >= *((_DWORD *)Global + 204) )
      break;
  }
  v10 = this[5];
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = this[9];
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = this[10];
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  if ( this[35] != (DXGFASTMUTEX *)(this + 35) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v17 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( this[32] != (DXGFASTMUTEX *)(this + 32) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v18 + 24) = 655LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v13 = this[28];
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  this[2] = 0LL;
}
