/*
 * XREFs of InitAcpi1ThrottleStates @ 0x1C0029E04
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C0029CAC (InitAcpiThrottleStates.c)
 * Callees:
 *     memset @ 0x1C000CA40 (memset.c)
 *     IsValidAcpiGenericAddress @ 0x1C002AC34 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1ThrottleStates(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rbp
  unsigned int v7; // esi
  PVOID PoolWithTag; // rax
  unsigned int v9; // r11d
  __int64 v10; // r10
  __int64 v11; // r9
  unsigned int v12; // r8d
  int v13; // eax

  v4 = 0;
  if ( ((unsigned int)dword_1C00113E4 <= 1 || (*(_DWORD *)(a1 + 264) & 0x200000) != 0)
    && (*(_DWORD *)(a1 + 264) & 0x100000) != 0
    && (v6 = a1 + 184, (unsigned __int8)IsValidAcpiGenericAddress(a1 + 184, a2, a3, a4))
    && (unsigned __int8)(byte_1C0011BF6 - 1) <= 3u
    && (unsigned __int8)byte_1C0011BF6 + (unsigned int)(unsigned __int8)byte_1C0011BF7 <= 0x20 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1072), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 4u);
    v7 = 1 << byte_1C0011BF6;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(20 * (1 << byte_1C0011BF6) + 4), 0x72637250u);
    *(_QWORD *)(a1 + 472) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 20 * v7 + 4);
      v9 = 1;
      **(_DWORD **)(a1 + 472) = v7;
      if ( v7 > 1 )
      {
        v10 = 20LL;
        do
        {
          v11 = *(_QWORD *)(a1 + 472);
          v10 += 20LL;
          v12 = v7 - v9++;
          *(_DWORD *)(v11 + v10 - 16) = 100 * v12 / v7;
          *(_DWORD *)(v11 + v10 - 4) = (v12 << byte_1C0011BF7) | 0x10;
        }
        while ( v9 < v7 );
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 4LL) = 100;
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 16LL) = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 36LL) & 0xFFFFFFEF;
      v13 = *(_DWORD *)(v6 + 8);
      *(_QWORD *)(a1 + 448) = *(_QWORD *)v6;
      *(_DWORD *)(a1 + 456) = v13;
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
  return v4;
}
