/*
 * XREFs of ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C0194CA8
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0117980 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::AddIndirectOutputDuplMgr(
        DXGGLOBAL *this,
        struct OUTPUTDUPL_MGR_INDIRECT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rbx
  char **v10; // rax
  bool v11; // zf
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGGLOBAL *)((char *)this + 992), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v9 = (char *)this + 1032;
  v10 = (char **)*((_QWORD *)v9 + 1);
  if ( *v10 != v9 )
    __fastfail(3u);
  *(_QWORD *)a2 = v9;
  *((_QWORD *)a2 + 1) = v10;
  *v10 = (char *)a2;
  v11 = v13[8] == 0;
  *((_QWORD *)v9 + 1) = a2;
  if ( !v11 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v6, v7, v8);
  return 0LL;
}
