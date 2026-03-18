/*
 * XREFs of ??1DXGPROCESS@@MEAA@XZ @ 0x1C00F79B0
 * Callers:
 *     ??_GDXGPROCESS@@MEAAPEAXI@Z @ 0x1C0016490 (--_GDXGPROCESS@@MEAAPEAXI@Z.c)
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x1C0034314 (--1DXGPROCESSVM@@UEAA@XZ.c)
 *     ??1DXGPROCESSVMWP@@UEAA@XZ @ 0x1C0034350 (--1DXGPROCESSVMWP@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C000AB0C (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0014E70 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1C0034530 (-ReleaseDwmProcessReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGPROCESS *this)
{
  __int64 v2; // rcx
  bool v3; // zf
  int v4; // eax
  void *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdi
  void *v8; // rdi
  unsigned int i; // edi
  struct DXGGLOBAL *Global; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  DXGSESSIONMGR *v14; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct _ERESOURCE v22; // [rsp+20h] [rbp-68h] BYREF

  *(_QWORD *)this = &DXGPROCESS::`vftable';
  if ( *((_QWORD *)this + 44) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v12);
  }
  memset(&v22, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v22.SystemResourcesList.Blink);
  v3 = *((_BYTE *)this + 322) == 0;
  *(_QWORD *)&v22.ActiveEntries = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)&v22.ActiveCount = 25;
  LOBYTE(v22.OwnerEntry.OwnerThread) = -1;
  if ( !v3 )
  {
    v14 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v2) + 74);
    if ( v14 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v13);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    DXGSESSIONDATA::ReleaseDwmProcessReference(SessionDataForSpecifiedSession);
  }
  v4 = *((_DWORD *)this + 10);
  if ( !v4 )
  {
    DXGPROCESS::Destroy(this, &v22, 0);
    v4 = *((_DWORD *)this + 10);
  }
  if ( v4 != 2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v17 + 24) = 1067LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_QWORD *)this + 55) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v18 + 24) = 1072LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v5 = (void *)*((_QWORD *)this + 39);
  if ( v5 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 39));
    operator delete(v5);
  }
  *((_QWORD *)this + 39) = 0LL;
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    operator delete[](*(void **)(v6 + 80));
    v7 = *((_QWORD *)this + 9);
    if ( v7 )
    {
      DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)(v7 + 88));
      operator delete((void *)v7);
    }
  }
  v8 = (void *)*((_QWORD *)this + 14);
  if ( v8 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(*((DXGFASTMUTEX **)this + 14));
    operator delete(v8);
  }
  *((_QWORD *)this + 14) = 0LL;
  for ( i = 0; ; ++i )
  {
    Global = DXGGLOBAL::GetGlobal(v6);
    v6 = *((unsigned int *)Global + 224);
    if ( !(_DWORD)v6 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v19 + 24) = 2135LL;
      WdLogEvent5_WdAssertion(v19);
      v6 = *((unsigned int *)Global + 224);
    }
    if ( i >= (unsigned int)v6 )
      break;
  }
  operator delete[](*((void **)this + 6));
  operator delete[](*((void **)this + 10));
  operator delete[](*((void **)this + 11));
  if ( *((DXGPROCESS **)this + 37) != (DXGPROCESS *)((char *)this + 296) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v20 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *((DXGPROCESS **)this + 34) != (DXGPROCESS *)((char *)this + 272) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v21 + 24) = 699LL;
    WdLogEvent5_WdAssertion(v21);
  }
  operator delete[](*((void **)this + 29));
  *((_QWORD *)this + 3) = 0LL;
}
