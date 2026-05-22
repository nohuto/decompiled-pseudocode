/*
 * XREFs of ?OnSystemContextNotification@ISMHeatFrameworkHost@@UEAAJPEAUSystemContextMessage@@@Z @ 0x180048690
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ISMHeatFrameworkHost::OnSystemContextNotification(
        ISMHeatFrameworkHost *this,
        struct SystemContextMessage *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v2 = 0;
  if ( *(_DWORD *)a2 == 1 )
  {
    v3 = *((_QWORD *)this + 4);
    if ( v3 )
    {
      v7 = 0LL;
      v8 = 0LL;
      LODWORD(v8) = *((_DWORD *)a2 + 2);
      v9 = *((_QWORD *)a2 + 2);
      LODWORD(v7) = 1;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, &v7);
      v2 = v4;
      if ( v4 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 224, v4);
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 231, 87);
  }
  return v2;
}
