/*
 * XREFs of ?AddIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAVOUTPUTDUPL_MGR_INDIRECT@@@Z @ 0x1C01A99DC
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0106688 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::AddIndirectOutputDuplMgr(DXGGLOBAL *this, struct OUTPUTDUPL_MGR_INDIRECT *a2)
{
  char *v4; // rbx
  char **v5; // rax
  bool v6; // zf
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGGLOBAL *)((char *)this + 992));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = (char *)this + 1032;
  v5 = (char **)*((_QWORD *)v4 + 1);
  if ( *v5 != v4 )
    __fastfail(3u);
  *(_QWORD *)a2 = v4;
  *((_QWORD *)a2 + 1) = v5;
  *v5 = (char *)a2;
  v6 = v8[8] == 0;
  *((_QWORD *)v4 + 1) = a2;
  if ( !v6 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return 0LL;
}
