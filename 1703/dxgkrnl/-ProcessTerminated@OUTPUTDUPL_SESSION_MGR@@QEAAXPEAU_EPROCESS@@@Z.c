/*
 * XREFs of ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C008BFBC
 * Callers:
 *     OutputDuplProcessTerminate @ 0x1C00A3D28 (OutputDuplProcessTerminate.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::ProcessTerminated(
        struct DXGFASTMUTEX *const *this,
        struct _EPROCESS *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdi
  unsigned int v10; // eax
  struct _EPROCESS **v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, this[1], a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v8 = *((unsigned int *)this + 1);
  v9 = **((_QWORD **)this + 2);
  v10 = 0;
  if ( (_DWORD)v8 )
  {
    v11 = (struct _EPROCESS **)(v9 + 8);
    while ( a2 != *v11 )
    {
      ++v10;
      v11 += 4;
      if ( v10 >= (unsigned int)v8 )
        goto LABEL_5;
    }
    v12 = 32LL * v10;
    if ( *(_DWORD *)(v12 + v9) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11, v6, v8, v7);
      *(_QWORD *)(v13 + 24) = 4029LL;
      WdLogEvent5_WdAssertion(v13);
    }
    *(_QWORD *)(v12 + v9 + 8) = 0LL;
  }
LABEL_5:
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14, v6, v8, v7);
}
