/*
 * XREFs of PortpRegQueryRoutine @ 0x1C0062000
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C001EE40 (memmove.c)
 */

__int64 __fastcall PortpRegQueryRoutine(__int64 a1, int a2, const void *a3, unsigned int a4, int a5, __int64 a6)
{
  size_t v7; // rsi
  unsigned int v8; // ebx
  PVOID PoolWithTag; // rbp
  unsigned int v10; // eax

  v7 = a4;
  if ( a2 == a5 )
  {
    v8 = 0;
    PoolWithTag = *(PVOID *)a6;
    v10 = *(_DWORD *)(a6 + 8);
    if ( (*(_QWORD *)a6 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4, 0x67526C50u), v10 = v7, PoolWithTag))
      && (unsigned int)v7 <= v10 )
    {
      memmove(PoolWithTag, a3, v7);
    }
    else
    {
      v8 = -1073741670;
    }
    *(_QWORD *)a6 = PoolWithTag;
    *(_DWORD *)(a6 + 8) = v7;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
