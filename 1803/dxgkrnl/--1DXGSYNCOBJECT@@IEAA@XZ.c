/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C00F9BE0
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00F9720 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this)
{
  void *v2; // rcx
  bool v3; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( (unsigned int)(*((_DWORD *)this + 42) - 5) <= 1 )
  {
    v3 = (*((_DWORD *)this + 43) & 1) != 0;
    Global = DXGGLOBAL::GetGlobal(1LL);
    (*(void (__fastcall **)(char *, bool))(*(_QWORD *)(*((_QWORD *)Global + 14) + 8LL) + 920LL))((char *)this + 120, v3);
  }
  v2 = (void *)*((_QWORD *)this + 10);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( *((_DWORD *)this + 18) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v5 + 24) = 1452LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v6 + 24) = 1453LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v7 + 24) = 386LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 14) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v8 + 24) = 387LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *((_QWORD *)this + 2) = 0LL;
}
