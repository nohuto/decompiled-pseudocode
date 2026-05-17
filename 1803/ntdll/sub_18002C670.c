/*
 * XREFs of sub_18002C670 @ 0x18002C670
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180076198 @ 0x180076198 (sub_180076198.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002C670(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rbp
  signed int v7; // esi
  char v8; // cl
  signed int v9; // edi

  v4 = (volatile signed __int64 *)(a3 + 240);
  RtlAcquireSRWLockExclusive(a3 + 240, a2, (unsigned __int64 *)a3, a4);
  v7 = 0;
  if ( sub_18002888C(a3, (volatile signed __int64 *)(*(_QWORD *)(a3 + 144) + 112LL), 1) )
    v7 = -1;
  v8 = *(_BYTE *)(a3 + 464);
  if ( (v8 & 4) == 0 )
  {
    sub_180055584(a3 + 56, 1LL);
    v8 = *(_BYTE *)(a3 + 464);
  }
  *(_QWORD *)(a3 + 360) = 0LL;
  if ( (v8 & 1) != 0 )
    v7 += sub_180076198(a3, *(_QWORD *)(a3 + 376), (a3 + 384) & -(__int64)((v8 & 2) != 0));
  *(_BYTE *)(a3 + 464) = 0;
  if ( v7 > 0 )
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v7);
  v9 = 0;
  if ( v7 <= 0 )
    v9 = v7;
  RtlReleaseSRWLockExclusive(v4);
  if ( v9 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v9) == -v9 )
    (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  return sub_18002C774(a1, a3, 0LL);
}
