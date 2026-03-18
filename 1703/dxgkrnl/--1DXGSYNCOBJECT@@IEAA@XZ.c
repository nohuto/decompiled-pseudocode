/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C00D8680
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00D8724 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  bool v6; // di
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( (unsigned int)(*((_DWORD *)this + 36) - 5) <= 1 )
  {
    v5 = DXGGLOBAL::m_pGlobal;
    v6 = (*((_DWORD *)this + 37) & 1) != 0;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v7 = WdLogNewEntry5_WdAssertion(1LL, a2, a3, a4);
      *(_QWORD *)(v7 + 24) = 1815LL;
      WdLogEvent5_WdAssertion(v7);
      v5 = DXGGLOBAL::m_pGlobal;
    }
    (*(void (__fastcall **)(char *, bool))(*(_QWORD *)(v5[14] + 8LL) + 920LL))((char *)this + 96, v6);
  }
  if ( *((_DWORD *)this + 18) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 1304LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 1305LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 331LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 14) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 332LL;
    WdLogEvent5_WdAssertion(v11);
  }
  *((_QWORD *)this + 2) = 0LL;
}
