/*
 * XREFs of MiInitializeDynamicPfnsTarget @ 0x140252D10
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiInitializeUnusablePfns @ 0x14016F97C (MiInitializeUnusablePfns.c)
 */

__int64 __fastcall MiInitializeDynamicPfnsTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned __int32 v7; // r14d
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  signed __int32 v10; // eax
  unsigned int v11; // esi
  BOOL v12; // esi
  signed __int32 v13; // eax
  unsigned int v14; // edi
  __int64 result; // rax
  int v16; // [rsp+58h] [rbp+10h] BYREF
  int i; // [rsp+68h] [rbp+20h] BYREF

  v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 36), 1u);
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)a2 + v8 * v7;
  v10 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v11 = ~v10 & 0x80000000;
  if ( (v10 & 0x7FFFFFFF) != 0 )
  {
    v16 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v11 )
      KeYieldProcessorEx(&v16);
    v12 = 0;
  }
  else
  {
    *(_DWORD *)a4 = v11 | *(_DWORD *)(a4 + 4);
    v12 = *(_QWORD *)(a2 + 24) != 0LL;
  }
  if ( v8 )
    MiInitializeUnusablePfns((_QWORD *)(48 * v9 - 0x58000000000LL), v8, *(_WORD *)(a2 + 32), *(_DWORD *)(a2 + 40));
  if ( v12 )
    MiInitializeUnusablePfns(
      (_QWORD *)(48LL * (*(_QWORD *)a2 + *(_QWORD *)(a2 + 8) - *(_QWORD *)(a2 + 24)) - 0x58000000000LL),
      *(_QWORD *)(a2 + 24),
      *(_WORD *)(a2 + 32),
      *(_DWORD *)(a2 + 40));
  v13 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v14 = ~v13 & 0x80000000;
  if ( (v13 & 0x7FFFFFFF) != 0 )
  {
    for ( i = 0; ; KeYieldProcessorEx(&i) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v14 )
        break;
    }
  }
  else
  {
    result = v14 | *(_DWORD *)(a4 + 4);
    *(_DWORD *)a4 = result;
  }
  _InterlockedDecrement(a3);
  return result;
}
