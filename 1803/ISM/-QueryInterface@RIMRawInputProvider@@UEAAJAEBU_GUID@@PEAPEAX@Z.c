/*
 * XREFs of ?QueryInterface@RIMRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006C8B0
 * Callers:
 *     ?QueryInterface@RIMRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006CBA0 (-QueryInterface@RIMRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMRawInputProvider::QueryInterface(RIMRawInputProvider *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_00000000_0000_0000_c000_000000000046 )
  {
    (*(void (__fastcall **)(RIMRawInputProvider *))(*(_QWORD *)this + 8LL))(this);
    *a3 = (char *)this + 8;
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
