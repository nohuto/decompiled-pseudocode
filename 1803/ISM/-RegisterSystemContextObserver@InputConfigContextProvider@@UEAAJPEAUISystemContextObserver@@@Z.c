/*
 * XREFs of ?RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180090690
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180090F90 (-RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputConfigContextProvider::RegisterSystemContextObserver(
        InputConfigContextProvider *this,
        struct ISystemContextObserver *a2)
{
  __int64 result; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  memset(v5, 0, 24);
  result = SystemContextProvider::RegisterSystemContextObserver(this, a2);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(InputConfigContextProvider *, _BYTE *))(*(_QWORD *)this + 40LL))(this, v5);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result == -2147023728 )
        return 0LL;
    }
    else
    {
      return (*(__int64 (__fastcall **)(struct ISystemContextObserver *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v5);
    }
  }
  return result;
}
