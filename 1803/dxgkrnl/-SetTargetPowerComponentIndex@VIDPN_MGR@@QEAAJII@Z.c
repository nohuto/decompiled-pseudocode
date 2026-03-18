/*
 * XREFs of ?SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z @ 0x1C02176F4
 * Callers:
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0155978 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetPowerComponentIndex(VIDPN_MGR *this, unsigned int a2, int a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // edi

  v4 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 72LL));
  v6 = *((_QWORD *)this + 10);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v6, a2);
  if ( TargetById )
  {
    *((_DWORD *)TargetById + 98) = a3;
    v13 = 0;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v4;
    v11 = *((_QWORD *)this + 1);
    if ( !v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v12);
      v11 = *((_QWORD *)this + 1);
    }
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(v11 + 16);
    WdLogEvent5_WdError(v10);
    v13 = -1071774971;
  }
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  return v13;
}
