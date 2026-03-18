/*
 * XREFs of ??1DXGPROCESS@@AEAA@XZ @ 0x1C00D6914
 * Callers:
 *     ??_GDXGPROCESS@@AEAAPEAXI@Z @ 0x1C0006CDC (--_GDXGPROCESS@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C00025FC (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000BA4C (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGPROCESS::~DXGPROCESS(DXGFASTMUTEX **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // zf
  DXGFASTMUTEX *v10; // rdi
  void *v11; // rcx
  DXGFASTMUTEX *v12; // rdi
  DXGFASTMUTEX *v13; // rdi
  unsigned int i; // edi
  _DWORD *v15; // rsi
  DXGFASTMUTEX *v16; // rcx
  DXGFASTMUTEX *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[88]; // [rsp+20h] [rbp-58h] BYREF

  if ( this[37] )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 971LL;
    WdLogEvent5_WdAssertion(v18);
  }
  memset(v24, 0, 0x40uLL);
  EtwActivityIdControl(3u, (LPGUID)&v24[8]);
  v9 = *((_DWORD *)this + 8) == 0;
  *(_QWORD *)&v24[56] = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)&v24[24] = 25;
  if ( v9 )
    DXGPROCESS::Destroy((DXGPROCESS *)this, (struct _ERESOURCE *)v24);
  if ( *((_DWORD *)this + 8) != 2 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v19 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v10 = this[33];
  if ( v10 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(this[33], v5, v7, v8);
    operator delete(v10);
  }
  this[33] = 0LL;
  v11 = (void *)*((_QWORD *)this[8] + 10);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = this[8];
  if ( v12 )
  {
    DXGWORKQUEUE::FlushQueue((struct _LIST_ENTRY *)((char *)v12 + 88));
    operator delete(v12);
  }
  v13 = this[10];
  if ( v13 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX(this[10], v5, v7, v8);
    operator delete(v13);
  }
  this[10] = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v20 = WdLogNewEntry5_WdAssertion(v11, v5, v7, v8);
      *(_QWORD *)(v20 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v15 = DXGGLOBAL::m_pGlobal;
    if ( !*((_DWORD *)DXGGLOBAL::m_pGlobal + 204) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v11, v5, v7, v8);
      *(_QWORD *)(v21 + 24) = 1969LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( i >= v15[204] )
      break;
  }
  v16 = this[5];
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  if ( this[31] != (DXGFASTMUTEX *)(this + 31) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v16, v5, v7, v8);
    *(_QWORD *)(v22 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( this[28] != (DXGFASTMUTEX *)(this + 28) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v16, v5, v7, v8);
    *(_QWORD *)(v23 + 24) = 644LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v17 = this[24];
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  this[2] = 0LL;
}
