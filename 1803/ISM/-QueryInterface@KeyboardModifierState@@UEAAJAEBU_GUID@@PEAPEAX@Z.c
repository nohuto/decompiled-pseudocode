/*
 * XREFs of ?QueryInterface@KeyboardModifierState@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KeyboardModifierState::QueryInterface(
        KeyboardModifierState *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(KeyboardModifierState *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
