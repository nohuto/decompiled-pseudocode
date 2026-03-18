/*
 * XREFs of ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0006358
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0045590 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C00BBB0C (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 * Callees:
 *     ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C009CA90 (-IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z.c)
 *     ?IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00BEC74 (-IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00BF1FC (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::SetRotationSupport(
        DMMVIDPNPRESENTPATH *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v7; // rax
  unsigned __int8 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
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
  if ( g_OSTestSigningEnabled && (int)DMMVIDPNPRESENTPATH::IsPrimaryClonePath(this, &v8) >= 0 )
  {
    v5 = *((_DWORD *)this + 31);
    if ( v8 )
    {
      if ( (v5 & 0x10) != 0 )
      {
        if ( (v5 & 0xE0) == 0 )
          return;
        v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4);
        v6[3] = 275LL;
        v6[4] = 28LL;
        v6[5] = *a2;
        v6[6] = 2LL;
      }
      else
      {
        v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4);
        v6[3] = 275LL;
        v6[4] = 28LL;
        v6[5] = *a2;
        v6[6] = 1LL;
      }
      goto LABEL_12;
    }
    if ( (v5 & 0xF0) == 0 )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4);
      v6[3] = 275LL;
      v6[4] = 28LL;
      v6[5] = *a2;
      v6[6] = 0LL;
LABEL_12:
      v6[7] = 0LL;
      WdLogEvent5_WdCriticalError(v6);
    }
  }
}
