/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C008AA50
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C008B2C0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this)
{
  bool v2; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( (unsigned int)(*((_DWORD *)this + 40) - 5) <= 1 )
  {
    v2 = (*((_DWORD *)this + 41) & 1) != 0;
    Global = DXGGLOBAL::GetGlobal(1LL);
    (*(void (__fastcall **)(char *, bool))(*(_QWORD *)(*((_QWORD *)Global + 14) + 8LL) + 920LL))((char *)this + 112, v2);
  }
  if ( *((_DWORD *)this + 18) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 1326LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 1327LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 342LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)this + 14) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 343LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_QWORD *)this + 2) = 0LL;
}
