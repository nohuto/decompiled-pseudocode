/*
 * XREFs of WbUpdateHeapExecutedCallArgumentList @ 0x14053C660
 * Callers:
 *     WbHeapExecuteCall @ 0x14053C4C0 (WbHeapExecuteCall.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall WbUpdateHeapExecutedCallArgumentList(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        char *a5,
        unsigned int Size)
{
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rax
  int v14; // [rsp+24h] [rbp-24h]

  if ( *(_QWORD *)(a1 + 280) )
    a4[3] = *(_QWORD *)(a2 + 32);
  v7 = 0;
  v14 = 0;
  while ( v7 < (*(_DWORD *)(a1 + 304) >> 10) + 1 )
  {
    v8 = *a3 - (v7 << 10);
    v9 = v8 + 7;
    if ( v8 >= v8 + 7 || v9 >= 0x7FFFFFFF0000LL )
    {
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
    }
    else
    {
      v10 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v8 = *(_BYTE *)v8;
        v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v8 != v10 );
    }
    v7 = ++v14;
  }
  *a3 -= 32LL;
  v11 = *a3;
  if ( (*a3 & 0xF) != 0 )
    v12 = (_QWORD *)(v11 - 16);
  else
    v12 = (_QWORD *)(v11 - 8);
  *a3 = (__int64)v12;
  *v12 = a5 + 16;
  memmove(a5, a4, Size);
  return 0LL;
}
