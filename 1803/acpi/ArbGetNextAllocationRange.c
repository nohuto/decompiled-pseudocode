/*
 * XREFs of ArbGetNextAllocationRange @ 0x1C0094210
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C0090750 (IrqArbGetNextAllocationRange.c)
 * Callees:
 *     ArbpUpdatePriority @ 0x1C009570C (ArbpUpdatePriority.c)
 */

char __fastcall ArbGetNextAllocationRange(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned int v5; // ecx
  unsigned __int64 i; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdi
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // r11
  unsigned __int64 v20; // r10
  char result; // al

  v2 = *(_QWORD *)(a2 + 40);
  while ( 1 )
  {
    if ( v2 )
    {
      ArbpUpdatePriority(a1, v2);
      v2 = *(_QWORD *)(a2 + 56);
      v5 = *(_DWORD *)(a2 + 48);
    }
    else
    {
      v2 = *(_QWORD *)(a2 + 56);
      v5 = *(_DWORD *)(a2 + 48);
      for ( i = v2; i < v2 + ((unsigned __int64)v5 << 6); v2 = *(_QWORD *)(a2 + 56) )
      {
        *(_DWORD *)(i + 32) = 0;
        ArbpUpdatePriority(a1, i);
        v5 = *(_DWORD *)(a2 + 48);
        i += 64LL;
      }
    }
    v7 = v2 + 64;
    v8 = v2 + ((v5 - 1 + 1LL) << 6);
    while ( v7 < v8 )
    {
      v9 = v7;
      if ( *(_DWORD *)(v7 + 32) >= *(_DWORD *)(v2 + 32) )
        v9 = v2;
      v7 += 64LL;
      v2 = v9;
    }
    v10 = *(_DWORD *)(v2 + 32);
    if ( v10 == 0x7FFFFFFF )
      return 0;
    if ( (unsigned int)(v10 - 2147483645) <= 1 )
    {
      v12 = *(_QWORD *)v2;
      v13 = *(_QWORD *)(v2 + 8);
      v18 = *(_QWORD *)v2;
      v14 = v13;
    }
    else
    {
      if ( v10 <= 0 )
        v11 = ~v10;
      else
        v11 = v10 - 1;
      v12 = *(_QWORD *)v2;
      v13 = *(_QWORD *)(v2 + 8);
      v14 = v13;
      v15 = (unsigned __int64 *)(*(_QWORD *)(a1 + 64) + 16LL * v11);
      v16 = v15[1];
      v17 = *v15;
      v18 = *(_QWORD *)v2;
      if ( *(_QWORD *)v2 <= v17 )
        v18 = v17;
      if ( v13 >= v16 )
        v14 = v16;
    }
    v19 = *(_QWORD *)(v2 + 16);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v2 + 24);
      v12 = v20 + v18 - 1 - (v20 + v18 - 1) % v20;
      if ( v19 - 1 <= v14 - v12 )
      {
        v13 = v14 - (1 - v19 + v14) % v20;
        goto LABEL_26;
      }
      *(_QWORD *)(a2 + 40) = v2;
    }
    else
    {
LABEL_26:
      if ( v12 != *(_QWORD *)(a2 + 16) || v13 != *(_QWORD *)(a2 + 24) || *(_QWORD *)(a2 + 40) != v2 )
      {
        *(_QWORD *)(a2 + 16) = v12;
        result = 1;
        *(_QWORD *)(a2 + 24) = v13;
        *(_QWORD *)(a2 + 40) = v2;
        return result;
      }
      v2 = *(_QWORD *)(a2 + 40);
    }
  }
}
