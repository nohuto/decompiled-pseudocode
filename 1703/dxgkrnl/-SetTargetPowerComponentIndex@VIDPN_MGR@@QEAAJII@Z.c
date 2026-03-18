/*
 * XREFs of ?SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z @ 0x1C01D4490
 * Callers:
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0171B48 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetPowerComponentIndex(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v5; // rbp
  __int64 v7; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned int v17; // edi

  v4 = a3;
  v5 = (unsigned int)a2;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 10) + 72LL));
  v7 = *((_QWORD *)this + 10);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v7, a2, a3, a4);
  if ( TargetById )
  {
    *((_DWORD *)TargetById + 98) = v4;
    v17 = 0;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v13 + 24) = v5;
    if ( !*((_QWORD *)this + 1) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12, v11, v14, v15);
      WdLogEvent5_WdAssertion(v16);
    }
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    WdLogEvent5_WdError(v13);
    v17 = -1071774971;
  }
  if ( v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 64), v9);
  return v17;
}
