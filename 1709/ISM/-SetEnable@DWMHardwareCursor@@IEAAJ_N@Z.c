/*
 * XREFs of ?SetEnable@DWMHardwareCursor@@IEAAJ_N@Z @ 0x180028120
 * Callers:
 *     ?SetPosition@DWMHardwareCursor@@UEAAJJJ@Z @ 0x180028990 (-SetPosition@DWMHardwareCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMHardwareCursor::SetEnable(DWMHardwareCursor *this, char a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  _BYTE v10[64]; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 361) != a2 )
  {
    v5 = *((_QWORD *)this + 53);
    v10[24] = a2;
    v6 = *((_QWORD *)this + 59);
    v10[0] = 9;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *, int))(*(_QWORD *)v5 + 152LL))(
           v5,
           v6,
           4LL,
           v10,
           64);
    v2 = v7;
    if ( v7 >= 0 )
    {
      *((_BYTE *)this + 361) = a2;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 230, v7);
    }
  }
  return v2;
}
