/*
 * XREFs of ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C01AC65C
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C01AF450 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C011839C (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr(
        struct DXGFASTMUTEX *const *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct OUTPUTDUPL_MGR **v9; // rbx
  unsigned int OutputDuplManager; // ebx
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this[4], a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v9 = (struct OUTPUTDUPL_MGR **)(this + 5);
  if ( *v9 )
    OutputDuplManager = 0;
  else
    OutputDuplManager = CreateOutputDuplManager(a2, 0LL, 0LL, 0LL, v9);
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12, v6, v7, v8);
  return OutputDuplManager;
}
