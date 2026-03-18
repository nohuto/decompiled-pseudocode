/*
 * XREFs of VidSchiDeferredVisibilityThread @ 0x1C0015FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiDeferredVisibilityThread(__int64 a1)
{
  __int64 v2; // r8
  unsigned int v3; // esi
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 result; // rax
  _QWORD *v10; // rax
  int v11; // [rsp+20h] [rbp-28h]

  ((void (__fastcall *)(__int64, __int64))DxgCoreInterface[14])(a1, 3LL);
  if ( *(_DWORD *)(a1 + 176) == 1 )
  {
    v3 = 0;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 512LL);
    _InterlockedExchange((volatile __int32 *)(v4 + 2096), 0);
    if ( *(_DWORD *)(v4 + 40) )
    {
      do
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v4 + 8LL * v3 + 3008) + 56800LL), 0, 3) == 3 )
        {
          LOBYTE(v2) = 1;
          LOBYTE(v11) = 0;
          v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, int))DxgCoreInterface[24])(
                 *(_QWORD *)(a1 + 2304),
                 v3,
                 v2,
                 0x2000LL,
                 v11);
          v8 = v5;
          if ( v5 < 0 )
          {
            v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, v6);
            v10[3] = v3;
            v10[4] = a1;
            v10[5] = v8;
            WdLogEvent5_WdAssertion(v10);
          }
        }
        ++v3;
      }
      while ( v3 < *(_DWORD *)(v4 + 40) );
    }
  }
  ((void (__fastcall *)(__int64, __int64))DxgCoreInterface[15])(a1, 3LL);
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    return ((__int64 (__fastcall *)(_QWORD, __int64))DxgCoreInterface[4])(*(_QWORD *)(a1 + 16), a1);
  return result;
}
