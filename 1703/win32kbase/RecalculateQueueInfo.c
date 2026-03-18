/*
 * XREFs of RecalculateQueueInfo @ 0x1C007B720
 * Callers:
 *     zzzDestroyQueue @ 0x1C004A190 (zzzDestroyQueue.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 */

__int64 RecalculateQueueInfo()
{
  _QWORD **v0; // rbx
  _QWORD *i; // rcx
  _QWORD *j; // rdx
  __int64 v3; // rcx
  unsigned int v4; // r8d
  __int64 v5; // rax
  int v6; // r9d
  int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rbp
  _QWORD *k; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // rax

  v0 = (_QWORD **)(*((_QWORD *)gptiCurrent + 51) + 168LL);
  for ( i = *v0; i != v0; i = (_QWORD *)*i )
  {
    *(_DWORD *)(*(i - 34) + 380LL) = 0;
    *(_DWORD *)(*(i - 34) + 384LL) = 0;
    *(_DWORD *)(*(i - 34) + 340LL) &= ~0x2000000u;
  }
  for ( j = *v0; j != v0; j = (_QWORD *)*j )
  {
    if ( (*(_DWORD *)(j - 27) & 1) == 0 )
    {
      v3 = *(j - 35);
      v4 = 0x2000;
      if ( *(PVOID *)v3 != gpepCSRSS )
        v4 = *(_DWORD *)(v3 + 824);
      v5 = *(j - 34);
      v6 = *(_DWORD *)(v3 + 828);
      if ( *(_DWORD *)(v5 + 380) >= v4 )
      {
        if ( *(_DWORD *)(v5 + 384) != v6 )
          *(_DWORD *)(v5 + 384) = 0;
      }
      else
      {
        *(_DWORD *)(v5 + 380) = v4;
        v7 = 0;
        v8 = *(j - 34);
        if ( !*(_DWORD *)(v8 + 384) )
          v7 = v6;
        *(_DWORD *)(v8 + 384) = v7;
      }
      if ( (j[55] & 0x40000) != 0 )
        *(_DWORD *)(*(j - 34) + 340LL) |= 0x2000000u;
    }
  }
  result = *(_QWORD *)(*((_QWORD *)gptiCurrent + 51) + 8LL);
  if ( *(_QWORD *)(result + 160) )
  {
    v10 = *(_QWORD *)(result + 168);
    for ( k = *v0; k != v0; k = (_QWORD *)*k )
    {
      v12 = k - 82;
      result = *(k - 35);
      if ( result == v10 )
      {
        if ( v12[142] )
        {
          result = *(unsigned int *)(result + 768);
          if ( (result & 4) == 0 )
          {
            result = IsIsShellThreadMiPEnabledSupported();
            if ( (int)result >= 0 )
            {
              result = IsShellThreadMiPEnabled(k - 82);
              if ( !(_DWORD)result )
              {
                *(_DWORD *)v12[142] &= ~1u;
                if ( *(_QWORD *)(v12[142] + 8LL) && (int)IsPostMousePointerLeaveAndCleanupSupported() >= 0 )
                {
                  v13 = HMValidateHandleNoSecure(*(_QWORD *)(v12[142] + 8LL), 1);
                  PostMousePointerLeaveAndCleanup(0LL, v13);
                }
                result = Win32FreePool(v12[142]);
                v12[142] = 0LL;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
