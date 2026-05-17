/*
 * XREFs of RtlReleaseResource @ 0x180073A90
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x180073840 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180073B48 @ 0x180073B48 (sub_180073B48.c)
 *     ZwReleaseSemaphore @ 0x1800A5440 (ZwReleaseSemaphore.c)
 */

__int64 __fastcall RtlReleaseResource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  char v10; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 68);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1 )
      *(_QWORD *)(a1 + 72) = 0LL;
    if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 68)) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v8 = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
        if ( (_DWORD)v8 )
        {
          v9 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v8, &v10, a4);
          if ( v9 < 0 )
            RtlRaiseStatus(v9);
        }
      }
      result = sub_180073B48(a1 + 64);
      if ( (_DWORD)result )
      {
        result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v10, v7);
        if ( (int)result < 0 )
          RtlRaiseStatus(result);
      }
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = sub_180073B48(a1 + 64);
      if ( (_DWORD)result )
      {
        result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v10, v6);
        if ( (int)result < 0 )
          RtlRaiseStatus(result);
      }
    }
  }
  return result;
}
