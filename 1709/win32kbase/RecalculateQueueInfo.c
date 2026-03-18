/*
 * XREFs of RecalculateQueueInfo @ 0x1C0073E00
 * Callers:
 *     zzzDestroyQueue @ 0x1C00DE6A0 (zzzDestroyQueue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 RecalculateQueueInfo()
{
  unsigned __int64 result; // rax
  _QWORD **v1; // r8
  _QWORD *i; // rcx
  _QWORD *j; // rdx
  __int64 v4; // rcx
  unsigned int v5; // r9d
  unsigned int v6; // r10d
  __int64 v7; // rcx

  result = (unsigned __int64)gptiCurrent;
  v1 = (_QWORD **)(*((_QWORD *)gptiCurrent + 54) + 168LL);
  for ( i = *v1; i != v1; i = (_QWORD *)*i )
  {
    *(_DWORD *)(*(i - 38) + 420LL) = 0;
    *(_DWORD *)(*(i - 38) + 424LL) = 0;
    result = *(i - 38);
    *(_DWORD *)(result + 380) &= ~0x2000000u;
  }
  for ( j = *v1; j != v1; j = (_QWORD *)*j )
  {
    result = *((unsigned int *)j - 62);
    if ( (result & 1) == 0 )
    {
      v4 = *(j - 39);
      v5 = 0x2000;
      if ( *(PVOID *)v4 != gpepCSRSS )
        v5 = *(_DWORD *)(v4 + 832);
      result = *(j - 38);
      v6 = *(_DWORD *)(v4 + 836);
      if ( *(_DWORD *)(result + 420) >= v5 )
      {
        if ( *(_DWORD *)(result + 424) != v6 )
          *(_DWORD *)(result + 424) = 0;
      }
      else
      {
        *(_DWORD *)(result + 420) = v5;
        result = 0LL;
        v7 = *(j - 38);
        if ( !*(_DWORD *)(v7 + 424) )
          result = v6;
        *(_DWORD *)(v7 + 424) = result;
      }
      if ( (j[59] & 0x40000) != 0 )
      {
        result = *(j - 38);
        *(_DWORD *)(result + 380) |= 0x2000000u;
      }
    }
  }
  return result;
}
