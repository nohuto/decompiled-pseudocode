/*
 * XREFs of InitAcpi1ThrottleStates @ 0x1C001C394
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C001C2C4 (InitAcpiThrottleStates.c)
 * Callees:
 *     memset @ 0x1C0004EC0 (memset.c)
 *     IsValidAcpiGenericAddress @ 0x1C001C424 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1ThrottleStates(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rbp
  unsigned int v5; // esi
  PVOID PoolWithTag; // rax
  unsigned int v7; // r11d
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned int v10; // r8d
  int v11; // eax

  v1 = 0;
  if ( ((unsigned int)dword_1C0015D94 <= 1 || (*(_DWORD *)(a1 + 264) & 0x200000) != 0)
    && (*(_DWORD *)(a1 + 264) & 0x100000) != 0
    && (v3 = a1 + 184, (unsigned __int8)IsValidAcpiGenericAddress(a1 + 184))
    && (unsigned __int8)(byte_1C0016566 - 1) <= 3u
    && (unsigned __int8)byte_1C0016566 + (unsigned int)(unsigned __int8)byte_1C0016567 <= 0x20 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1072), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 4u);
    v5 = 1 << byte_1C0016566;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(20 * (1 << byte_1C0016566) + 4), 0x72637250u);
    *(_QWORD *)(a1 + 472) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 20 * v5 + 4);
      v7 = 1;
      **(_DWORD **)(a1 + 472) = v5;
      if ( v5 > 1 )
      {
        v8 = 20LL;
        do
        {
          v9 = *(_QWORD *)(a1 + 472);
          v8 += 20LL;
          v10 = v5 - v7++;
          *(_DWORD *)(v9 + v8 - 16) = 100 * v10 / v5;
          *(_DWORD *)(v9 + v8 - 4) = (v10 << byte_1C0016567) | 0x10;
        }
        while ( v7 < v5 );
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 4LL) = 100;
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 16LL) = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 36LL) & 0xFFFFFFEF;
      v11 = *(_DWORD *)(v3 + 8);
      *(_QWORD *)(a1 + 448) = *(_QWORD *)v3;
      *(_DWORD *)(a1 + 456) = v11;
      *(_QWORD *)(a1 + 460) = 0LL;
      *(_DWORD *)(a1 + 468) = 0;
      *(_DWORD *)(a1 + 480) = 0;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
