/*
 * XREFs of UsbhD3ColdSupportInterfaceGetIdleWakeInfo @ 0x1C00726A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhD3ColdSupportInterfaceGetIdleWakeInfo(__int64 a1, int a2, _DWORD *a3)
{
  __int64 (__fastcall *v3)(_QWORD); // rax
  __int64 result; // rax

  v3 = *(__int64 (__fastcall **)(_QWORD))(a1 + 2984);
  if ( !v3 || (result = v3(*(_QWORD *)(a1 + 2952)), (int)result < 0) )
  {
    if ( *(_DWORD *)(a1 + 1184) >= a2 && (*(_DWORD *)(a1 + 1412) & 0x104) != 0 )
      *a3 = 3;
    else
      *a3 = 0;
    return 0LL;
  }
  return result;
}
