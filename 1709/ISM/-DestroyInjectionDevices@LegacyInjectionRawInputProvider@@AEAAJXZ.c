/*
 * XREFs of ?DestroyInjectionDevices@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x18008739C
 * Callers:
 *     ??_GLegacyInjectionRawInputProvider@@MEAAPEAXI@Z @ 0x18008629C (--_GLegacyInjectionRawInputProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::DestroyInjectionDevices(LegacyInjectionRawInputProvider *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rcx

  if ( *((_QWORD *)this + 14) && (*((_QWORD *)this + 10) || (gdwMitConfig & 4) != 0) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5));
    v4 = v2;
    if ( v2 >= 0 )
    {
      operator delete(*((void **)this + 14));
      *((_QWORD *)this + 14) = 0LL;
      if ( (gdwMitConfig & 4) == 0 )
      {
        v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 56LL))(
               *((_QWORD *)this + 5),
               *((_QWORD *)this + 10));
        v4 = v5;
        if ( v5 >= 0 )
        {
          operator delete(*((void **)this + 10));
          *((_QWORD *)this + 10) = 0LL;
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 877, v5);
        }
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, 861, v2);
    }
  }
  else
  {
    v4 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 853, 255);
  }
  return v4;
}
