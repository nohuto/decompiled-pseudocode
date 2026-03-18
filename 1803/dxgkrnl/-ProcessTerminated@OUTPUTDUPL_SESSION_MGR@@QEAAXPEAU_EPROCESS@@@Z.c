/*
 * XREFs of ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00AAA98
 * Callers:
 *     OutputDuplProcessTerminate @ 0x1C00AA958 (OutputDuplProcessTerminate.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::ProcessTerminated(struct DXGFASTMUTEX *const *this, struct _EPROCESS *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rdi
  unsigned int v6; // eax
  struct _EPROCESS **v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, this[1], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v4 = *((_DWORD *)this + 1);
  v5 = **((_QWORD **)this + 2);
  v6 = 0;
  if ( v4 )
  {
    v7 = (struct _EPROCESS **)(v5 + 8);
    while ( a2 != *v7 )
    {
      ++v6;
      v7 += 4;
      if ( v6 >= v4 )
        goto LABEL_5;
    }
    v8 = 32LL * v6;
    if ( *(_DWORD *)(v8 + v5) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v9 + 24) = 4114LL;
      WdLogEvent5_WdAssertion(v9);
    }
    *(_QWORD *)(v8 + v5 + 8) = 0LL;
  }
LABEL_5:
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
}
