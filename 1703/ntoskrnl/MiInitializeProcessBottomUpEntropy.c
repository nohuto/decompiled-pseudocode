/*
 * XREFs of MiInitializeProcessBottomUpEntropy @ 0x14049E620
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeProcessBottomUpEntropy(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rsi
  bool v3; // zf
  char v5; // bp
  __int64 v6; // rax
  int v7; // ebx
  unsigned int v8; // eax
  int *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]

  v1 = *(_QWORD *)(a1 + 1296);
  v2 = 0LL;
  v3 = (*(_DWORD *)(a1 + 768) & 0x20000) == 0;
  v5 = 0;
  v14 = 1;
  if ( !v3 )
    goto LABEL_16;
  v6 = ExGenRandom(1);
  v7 = (unsigned __int8)v6;
  if ( !(_DWORD)InitializationPhase )
    *(_DWORD *)(a1 + 768) |= 0x2000000u;
  if ( *(_QWORD *)(a1 + 1152) > 0x100000000uLL && (*(_DWORD *)(a1 + 768) & 0x2000000) != 0 )
  {
    v8 = v6 & 0xFFFFFF;
    v7 = 0x10000;
    v5 = 1;
    if ( v8 > 0x10000 )
      v7 = v8;
  }
  if ( !v7 )
    v7 = 1;
  v14 = v7;
  if ( !v5 )
  {
LABEL_16:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 768), 0xFDFFFFFF);
    v7 = v14;
  }
  if ( v5 == 1 )
    v13 = v7 + (ExGenRandom(1) & 0xFFFFFF) + 0x1000000;
  else
    v13 = v7;
  v9 = &v13;
  v10 = 2LL;
  do
  {
    v11 = (unsigned int)*v9++;
    *(_DWORD *)(v2 + v1 + 76) = v11;
    v2 += 40LL;
    result = v11 << 16;
    *(_QWORD *)(v2 + v1 + 40) = result;
    --v10;
  }
  while ( v10 );
  return result;
}
