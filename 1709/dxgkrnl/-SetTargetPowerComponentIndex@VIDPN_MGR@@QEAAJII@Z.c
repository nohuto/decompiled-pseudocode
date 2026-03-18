/*
 * XREFs of ?SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z @ 0x1C01EFB68
 * Callers:
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C017563C (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetPowerComponentIndex(VIDPN_MGR *this, unsigned int a2, int a3)
{
  __int64 v4; // rbp
  volatile signed __int32 *v6; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // edi
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  int v14; // ebx
  __int64 v15; // rax

  v4 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 72LL));
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 10);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v6, a2);
  if ( TargetById )
  {
    *((_DWORD *)TargetById + 98) = a3;
    v12 = 0;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v4;
    if ( !*((_QWORD *)this + 1) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v11);
    }
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v10);
    v12 = -1071774971;
  }
  if ( v6 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(v6 + 16);
    v14 = _InterlockedDecrement(v6 + 18);
    if ( v14 )
    {
      if ( v14 < 0 )
      {
        v15 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v15 + 24) = v14;
        WdLogEvent5_WdError(v15);
      }
    }
    else if ( v13 )
    {
      (**v13)(v13, 1LL);
    }
  }
  return v12;
}
