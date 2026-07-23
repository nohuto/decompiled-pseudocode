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

__int64 __fastcall sub_18002C670(PTP_CALLBACK_INSTANCE Instance, __int64 a2, __int64 a3)
{
  _RTL_SRWLOCK *v3; // rbp
  signed int v6; // esi
  char v7; // cl
  signed int v8; // edi

  v3 = (_RTL_SRWLOCK *)(a3 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 240));
  v6 = 0;
  if ( sub_18002888C(a3, (_RTL_SRWLOCK *)(*(_QWORD *)(a3 + 144) + 112LL), 1) )
    v6 = -1;
  v7 = *(_BYTE *)(a3 + 464);
  if ( (v7 & 4) == 0 )
  {
    sub_180055584(a3 + 56, 1LL);
    v7 = *(_BYTE *)(a3 + 464);
  }
  *(_QWORD *)(a3 + 360) = 0LL;
  if ( (v7 & 1) != 0 )
    v6 += sub_180076198(a3, *(_QWORD *)(a3 + 376), (a3 + 384) & -(__int64)((v7 & 2) != 0));
  *(_BYTE *)(a3 + 464) = 0;
  if ( v6 > 0 )
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v6);
  v8 = 0;
  if ( v6 <= 0 )
    v8 = v6;
  RtlReleaseSRWLockExclusive(v3);
  if ( v8 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v8) == -v8 )
    (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  return sub_18002C774(Instance);
}
