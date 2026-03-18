/*
 * XREFs of MiInitializeProcessBottomUpEntropy @ 0x14045EE48
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeProcessBottomUpEntropy(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rsi
  char v4; // bp
  __int64 v5; // rax
  int v6; // ebx
  unsigned int v7; // eax
  int *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+44h] [rbp+Ch]

  v1 = *(_QWORD *)(a1 + 1296);
  v2 = 0LL;
  v4 = 0;
  v13 = 1;
  if ( (*(_DWORD *)(a1 + 2088) & 0x40) != 0 )
    goto LABEL_16;
  v5 = ExGenRandom(1);
  v6 = (unsigned __int8)v5;
  if ( !(_DWORD)InitializationPhase )
    *(_DWORD *)(a1 + 2088) |= 0x20u;
  if ( *(_QWORD *)(a1 + 1152) > 0x100000000uLL && (*(_DWORD *)(a1 + 2088) & 0x20) != 0 )
  {
    v7 = v5 & 0xFFFFFF;
    v6 = 0x10000;
    v4 = 1;
    if ( v7 > 0x10000 )
      v6 = v7;
  }
  if ( !v6 )
    v6 = 1;
  v13 = v6;
  if ( !v4 )
  {
LABEL_16:
    _InterlockedAnd((volatile signed __int32 *)(a1 + 2088), 0xFFFFFFDF);
    v6 = v13;
  }
  if ( v4 == 1 )
    v12 = v6 + (ExGenRandom(1) & 0xFFFFFF) + 0x1000000;
  else
    v12 = v6;
  v8 = &v12;
  v9 = 2LL;
  do
  {
    v10 = (unsigned int)*v8++;
    *(_DWORD *)(v2 + v1 + 76) = v10;
    v2 += 40LL;
    result = v10 << 16;
    *(_QWORD *)(v2 + v1 + 40) = result;
    --v9;
  }
  while ( v9 );
  return result;
}
