/*
 * XREFs of ?CreateInjectionDevices@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x180087234
 * Callers:
 *     ?EnableInputInjection@LegacyInjectionRawInputProvider@@UEAAJG_N@Z @ 0x180086810 (-EnableInputInjection@LegacyInjectionRawInputProvider@@UEAAJG_N@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::CreateInjectionDevices(LegacyInjectionRawInputProvider *this)
{
  void *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  void *v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  if ( *((_QWORD *)this + 14) || *((_QWORD *)this + 10) )
  {
    v6 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 804, 255);
  }
  else
  {
    v2 = operator new(0xA40uLL);
    memset(v2, 0, 0xA40uLL);
    v3 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 14) = v2;
    **((_DWORD **)this + 14) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
    *(_DWORD *)(*((_QWORD *)this + 14) + 4LL) = 128;
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           *((_QWORD *)this + 14),
           (char *)this + 16);
    v6 = v4;
    if ( v4 >= 0 )
    {
      if ( (gdwMitConfig & 4) == 0 )
      {
        v7 = operator new(0xA40uLL);
        memset(v7, 0, 0xA40uLL);
        v8 = *((_QWORD *)this + 5);
        *((_QWORD *)this + 10) = v7;
        **((_DWORD **)this + 10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
        *(_DWORD *)(*((_QWORD *)this + 10) + 4LL) = 8;
        v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 5) + 40LL))(
               *((_QWORD *)this + 5),
               *((_QWORD *)this + 10),
               (char *)this + 16);
        v6 = v9;
        if ( v9 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 839, v9);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 821, v4);
    }
  }
  return v6;
}
