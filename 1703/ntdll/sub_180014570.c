/*
 * XREFs of sub_180014570 @ 0x180014570
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     sub_1800177A0 @ 0x1800177A0 (sub_1800177A0.c)
 *     sub_180017914 @ 0x180017914 (sub_180017914.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180014570(PTP_CALLBACK_INSTANCE Instance, __int64 a2, __int64 a3)
{
  _RTL_SRWLOCK *v3; // rsi
  __int64 v6; // r8
  signed int v7; // edi
  char v8; // cl

  v3 = (_RTL_SRWLOCK *)(a3 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 240));
  LOBYTE(v6) = 1;
  v7 = 0;
  if ( (unsigned __int8)sub_1800177A0(a3, *(_QWORD *)(a3 + 144) + 112LL, v6) )
    v7 = -1;
  if ( (*(_BYTE *)(a3 + 464) & 4) == 0 )
    sub_18007358C(a3 + 56, 1LL, 0LL);
  *(_QWORD *)(a3 + 360) = 0LL;
  v8 = *(_BYTE *)(a3 + 464);
  if ( (v8 & 1) != 0 )
    v7 += sub_180017914(a3, *(_QWORD *)(a3 + 376), (a3 + 384) & -(__int64)((v8 & 2) != 0));
  *(_BYTE *)(a3 + 464) = 0;
  if ( v7 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v7);
    v7 = 0;
  }
  RtlReleaseSRWLockExclusive(v3);
  if ( v7 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v7) == -v7 )
    (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  return sub_180014660(Instance, (PTP_WAIT)a3, 0);
}
