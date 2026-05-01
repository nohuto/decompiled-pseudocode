/*
 * XREFs of _lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_ @ 0x18010FCD8
 * Callers:
 *     ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18010FB94 (-HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Intern.c)
 *     ??_E?$CTaskWrapper@V_lambda_379fb6251cfae0942258739af0295e77_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180110390 (--_E-$CTaskWrapper@V_lambda_379fb6251cfae0942258739af0295e77_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_379fb6251cfae0942258739af0295e77_::__lambda_379fb6251cfae0942258739af0295e77_(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *(volatile signed __int32 **)(a1 + 16);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
