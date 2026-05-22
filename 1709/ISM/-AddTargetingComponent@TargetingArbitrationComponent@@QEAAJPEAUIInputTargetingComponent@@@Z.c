/*
 * XREFs of ?AddTargetingComponent@TargetingArbitrationComponent@@QEAAJPEAUIInputTargetingComponent@@@Z @ 0x1800A498C
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TargetingArbitrationComponent::AddTargetingComponent(
        TargetingArbitrationComponent *this,
        struct IInputTargetingComponent *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  _QWORD *i; // rcx
  __int64 v7; // rbp
  __int64 v8; // rcx

  v2 = 0;
  if ( *((_DWORD *)this + 16) < 5u )
  {
    v5 = 0;
    for ( i = (_QWORD *)((char *)this + 24); *i; ++i )
    {
      if ( (unsigned int)++v5 >= 5 )
        return v2;
    }
    v7 = v5;
    if ( *((struct IInputTargetingComponent **)this + v5 + 3) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IInputTargetingComponent *))(*(_QWORD *)a2 + 8LL))(a2);
      v8 = *((_QWORD *)this + v7 + 3);
      *((_QWORD *)this + v7 + 3) = a2;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    ++*((_DWORD *)this + 16);
  }
  else
  {
    v2 = -2147467263;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 357, 1);
  }
  return v2;
}
