/*
 * XREFs of ndisSaveParameters @ 0x1C00C4770
 * Callers:
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 */

__int64 __fastcall ndisSaveParameters(__int64 a1, int a2, _DWORD *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  size_t v6; // rbp
  unsigned int v8; // ecx
  char *PoolWithTag; // rax
  _QWORD *v11; // rsi
  _DWORD *v12; // rcx

  v6 = a4;
  v8 = 32;
  if ( a4 + 32 < 0x20 )
    return 3221225485LL;
  if ( ((a2 - 1) & 0xFFFFFFF9) == 0 && a2 != 5 )
    v8 = a4 + 32;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x6E70444Eu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v12 = PoolWithTag + 8;
  *(_QWORD *)a6 = PoolWithTag + 8;
  switch ( a2 )
  {
    case 4:
      *v12 = 0;
      *(_DWORD *)(*(_QWORD *)a6 + 8LL) = *a3;
      break;
    case 1:
    case 7:
      *v12 = (a2 != 1) + 2;
      *(_QWORD *)(*(_QWORD *)a6 + 16LL) = PoolWithTag + 32;
      memmove(*(void **)(*(_QWORD *)a6 + 16LL), a3, v6);
      *(_WORD *)(*(_QWORD *)a6 + 8LL) = v6;
      *(_WORD *)(*(_QWORD *)a6 + 10LL) = v6;
      if ( a2 == 1 && !*((_BYTE *)a3 + (unsigned int)(v6 - 1)) && !*((_BYTE *)a3 + (unsigned int)(v6 - 2)) )
        *(_WORD *)(*(_QWORD *)a6 + 8LL) -= 2;
      break;
    case 3:
      *v12 = 4;
      *(_QWORD *)(*(_QWORD *)a6 + 16LL) = a3;
      *(_WORD *)(*(_QWORD *)a6 + 8LL) = v6;
      *(_QWORD *)(*(_QWORD *)a6 + 16LL) = PoolWithTag + 32;
      memmove(*(void **)(*(_QWORD *)a6 + 16LL), a3, v6);
      break;
    default:
      ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225524LL;
  }
  if ( a5 )
  {
    *v11 = *(_QWORD *)(a5 + 24);
    *(_QWORD *)(a5 + 24) = v11;
  }
  return 0LL;
}
