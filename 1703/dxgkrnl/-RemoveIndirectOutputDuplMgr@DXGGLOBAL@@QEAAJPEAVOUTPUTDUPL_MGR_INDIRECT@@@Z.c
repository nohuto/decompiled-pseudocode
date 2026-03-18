/*
 * XREFs of ?RemoveIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C01969A0
 * Callers:
 *     ??1ADAPTER_DISPLAY@@QEAA@XZ @ 0x1C016FAB0 (--1ADAPTER_DISPLAY@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::RemoveIndirectOutputDuplMgr(
        DXGGLOBAL *this,
        struct OUTPUTDUPL_MGR_INDIRECT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct OUTPUTDUPL_MGR_INDIRECT *v8; // rcx
  struct OUTPUTDUPL_MGR_INDIRECT **v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGGLOBAL *)((char *)this + 992), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v8 = *(struct OUTPUTDUPL_MGR_INDIRECT **)a2;
  v9 = (struct OUTPUTDUPL_MGR_INDIRECT **)*((_QWORD *)a2 + 1);
  if ( *(struct OUTPUTDUPL_MGR_INDIRECT **)(*(_QWORD *)a2 + 8LL) != a2 || *v9 != a2 )
    __fastfail(3u);
  *v9 = v8;
  *((_QWORD *)v8 + 1) = v9;
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v5, v6, v7);
  return 0LL;
}
