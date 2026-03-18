/*
 * XREFs of ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0009060
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0008E60 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00E091C (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 * Callees:
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00DF324 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00DF880 (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C01DD55C (-IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::SetRotationSupport(
        DMMVIDPNPRESENTPATH *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  int v7; // eax
  _QWORD *v8; // rax
  unsigned __int8 v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( DMMVIDPNPRESENTPATH::IsPathSupportVirtualMode(this) )
  {
    *((_DWORD *)this + 31) = 31;
    return;
  }
  *((struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)this + 31) = *a2;
  if ( !DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(this) )
  {
    *((_DWORD *)this + 31) |= 0x10u;
    return;
  }
  if ( g_OSTestSigningEnabled && (int)DMMVIDPNPRESENTPATH::IsPrimaryClonePath(this, &v9) >= 0 )
  {
    v7 = *((_DWORD *)this + 31);
    if ( v9 )
    {
      if ( (v7 & 0x10) == 0 )
      {
        v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v8[3] = 275LL;
        v8[4] = 28LL;
        v8[5] = *a2;
        v8[6] = 1LL;
LABEL_16:
        v8[7] = 0LL;
        WdLogEvent5_WdCriticalError(v8);
        return;
      }
      if ( (v7 & 0xE0) != 0 )
      {
        v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v8[3] = 275LL;
        v8[4] = 28LL;
        v8[5] = *a2;
        v8[6] = 2LL;
        goto LABEL_16;
      }
    }
    else if ( (v7 & 0xF0) == 0 )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v8[3] = 275LL;
      v8[4] = 28LL;
      v8[5] = *a2;
      v8[6] = 0LL;
      goto LABEL_16;
    }
  }
}
