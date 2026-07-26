/*
 * XREFs of ndisMAllocateRequest @ 0x1C00455CC
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisMRestoreFilterSettings @ 0x1C00461E8 (ndisMRestoreFilterSettings.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

_QWORD *__fastcall ndisMAllocateRequest(void *a1, int a2, int a3, const void *a4, unsigned int Size)
{
  _QWORD *result; // rax
  _QWORD *v10; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, Size + 248LL, 0x7172444Eu);
  v10 = result;
  if ( result )
  {
    memset(result, 0, Size + 248LL);
    *((_DWORD *)v10 + 1) = a3;
    v10[5] = v10 + 31;
    *(_DWORD *)v10 = 16253334;
    *((_DWORD *)v10 + 8) = a2;
    *((_DWORD *)v10 + 12) = Size;
    if ( a4 )
      memmove(v10 + 31, a4, Size);
    if ( !a1 )
      a1 = &ndisIntReqGeneric;
    result = v10;
    v10[13] = a1;
  }
  return result;
}
