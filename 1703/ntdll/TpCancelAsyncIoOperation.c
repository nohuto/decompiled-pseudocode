/*
 * XREFs of TpCancelAsyncIoOperation @ 0x180013D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800176B8 @ 0x1800176B8 (sub_1800176B8.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TpCancelAsyncIoOperation(__int64 a1)
{
  __int64 result; // rax
  signed __int32 v3; // ecx
  bool v4; // zf
  signed __int32 v5; // eax

  result = sub_1800176B8(a1, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    _m_prefetchw((const void *)(a1 + 280));
    v3 = *(_DWORD *)(a1 + 280);
    while ( v3 > 0 )
    {
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 280), v3 - 1, v3);
      v4 = v3 == v5;
      v3 = v5;
      if ( v4 )
      {
        sub_18007358C(a1 + 56, 0xFFFFFFFFLL, 0LL);
        break;
      }
    }
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
