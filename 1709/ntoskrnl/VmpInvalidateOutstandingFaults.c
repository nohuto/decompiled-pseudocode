/*
 * XREFs of VmpInvalidateOutstandingFaults @ 0x140279214
 * Callers:
 *     VmpFlushTbVaRange @ 0x140278EF0 (VmpFlushTbVaRange.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall VmpInvalidateOutstandingFaults(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rsi
  unsigned __int64 v7; // r8
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // rax
  _QWORD *v12; // r8
  unsigned __int64 v13; // rdx
  bool v14; // cf
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD **v17; // rdx
  _QWORD *v18; // rax

  v4 = a2 + a3 - 1;
  v6 = 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v7 = *(_QWORD *)(a1 + 48);
  v8 = 0LL;
  while ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFLL;
    v10 = a2 < v9;
    if ( a2 > v9 )
    {
      v11 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v7;
      v8 = (_QWORD *)v7;
      if ( !v10 )
      {
        if ( (*(_BYTE *)(a1 + 56) & 1) != 0 && v11 )
          v11 ^= v7;
        v12 = 0LL;
        if ( v11 )
        {
          do
          {
            v13 = *(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFLL;
            v14 = a2 < v13;
            if ( a2 > v13 )
            {
              v15 = *(_QWORD *)(v11 + 8);
            }
            else
            {
              v15 = *(_QWORD *)v11;
              if ( !v14 )
                v12 = (_QWORD *)v11;
            }
            if ( (*(_BYTE *)(a1 + 56) & 1) != 0 && v15 )
              v11 ^= v15;
            else
              v11 = v15;
          }
          while ( v11 );
          if ( v12 )
            v8 = v12;
        }
        break;
      }
    }
    if ( (*(_BYTE *)(a1 + 56) & 1) != 0 && v11 )
      v7 ^= v11;
    else
      v7 = v11;
  }
  while ( v8 && (v8[3] & 0xFFFFFFFFFFFFFuLL) <= v4 )
  {
    ++v6;
    v16 = v8;
    v8[3] |= 0x10000000000000uLL;
    v17 = (_QWORD **)v8[1];
    if ( v17 )
    {
      v18 = *v17;
      v8 = (_QWORD *)v8[1];
      while ( v18 )
      {
        v8 = v18;
        v18 = (_QWORD *)*v18;
      }
    }
    else
    {
      while ( 1 )
      {
        v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v8 || (_QWORD *)*v8 == v16 )
          break;
        v16 = v8;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  return v6;
}
