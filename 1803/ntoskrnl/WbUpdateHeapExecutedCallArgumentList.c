/*
 * XREFs of WbUpdateHeapExecutedCallArgumentList @ 0x14050FAE0
 * Callers:
 *     WbHeapExecuteCall @ 0x14050EC60 (WbHeapExecuteCall.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

__int64 __fastcall WbUpdateHeapExecutedCallArgumentList(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        char *a5,
        unsigned int Size)
{
  unsigned int i; // edi
  __int64 v10; // rax
  _QWORD *v11; // rdx

  if ( *(_QWORD *)(a1 + 280) )
    a4[3] = *(_QWORD *)(a2 + 32);
  for ( i = 0; i < (*(_DWORD *)(a1 + 304) >> 10) + 1; ++i )
    ProbeForWrite((volatile void *)(*a3 - (i << 10)), 8uLL, 1u);
  v10 = *a3 - 32;
  *a3 = v10;
  v11 = (_QWORD *)(v10 - 8);
  if ( (v10 & 0xF) != 0 )
    v11 = (_QWORD *)(v10 - 16);
  *a3 = (__int64)v11;
  *v11 = a5 + 16;
  memmove(a5, a4, Size);
  return 0LL;
}
