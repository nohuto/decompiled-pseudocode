/*
 * XREFs of ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x18001B6D4
 * Callers:
 *     ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800262F4 (-NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z.c)
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x18002A8D4 (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

wchar_t *__fastcall CAudioStream::GetClientFriendlyName(CAudioStream *this)
{
  __int64 v2; // rcx
  wchar_t *v3; // rbx
  wchar_t *v4; // rax
  const wchar_t *v6; // rax
  wchar_t *v7; // rax

  v2 = *((_QWORD *)this + 9);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = (wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 72LL))(v2);
    v3 = v4;
    if ( !v4 || !*v4 )
    {
      v6 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 80LL))(*((_QWORD *)this + 9));
      if ( v6 )
      {
        if ( *v6 )
        {
          v7 = wcsrchr(v6, 0x5Cu);
          v3 = v7 + 1;
          if ( !v7 )
            return 0LL;
        }
      }
    }
  }
  return v3;
}
