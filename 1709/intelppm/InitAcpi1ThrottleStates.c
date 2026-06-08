/*
 * XREFs of InitAcpi1ThrottleStates @ 0x1C001F604
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C001F534 (InitAcpiThrottleStates.c)
 * Callees:
 *     memset @ 0x1C0005000 (memset.c)
 *     IsValidAcpiGenericAddress @ 0x1C001F694 (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall InitAcpi1ThrottleStates(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rbp
  unsigned int v8; // esi
  PVOID PoolWithTag; // rax
  unsigned int v10; // r11d
  __int64 v11; // r10
  __int64 v12; // r9
  unsigned int v13; // r8d
  int v14; // eax

  v4 = 0;
  if ( ((unsigned int)dword_1C00195D4 <= 1 || (*(_DWORD *)(a1 + 264) & 0x200000) != 0)
    && (*(_DWORD *)(a1 + 264) & 0x100000) != 0
    && (v6 = a1 + 184, (unsigned __int8)IsValidAcpiGenericAddress(a1 + 184, a2, a3, a4))
    && (unsigned __int8)(byte_1C0019DC6 - 1) <= 3u
    && (unsigned __int8)byte_1C0019DC6 + (unsigned int)(unsigned __int8)byte_1C0019DC7 <= 0x20 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1072), 4u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 4u);
    v8 = 1 << byte_1C0019DC6;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(20 * (1 << byte_1C0019DC6) + 4), 0x72637250u);
    *(_QWORD *)(a1 + 472) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 20 * v8 + 4);
      v10 = 1;
      **(_DWORD **)(a1 + 472) = v8;
      if ( v8 > 1 )
      {
        v11 = 20LL;
        do
        {
          v12 = *(_QWORD *)(a1 + 472);
          v11 += 20LL;
          v13 = v8 - v10++;
          *(_DWORD *)(v12 + v11 - 16) = 100 * v13 / v8;
          *(_DWORD *)(v12 + v11 - 4) = (v13 << byte_1C0019DC7) | 0x10;
        }
        while ( v10 < v8 );
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 4LL) = 100;
      *(_DWORD *)(*(_QWORD *)(a1 + 472) + 16LL) = *(_DWORD *)(*(_QWORD *)(a1 + 472) + 36LL) & 0xFFFFFFEF;
      v14 = *(_DWORD *)(v6 + 8);
      *(_QWORD *)(a1 + 448) = *(_QWORD *)v6;
      *(_DWORD *)(a1 + 456) = v14;
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
