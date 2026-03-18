/*
 * XREFs of MiReturnSystemPtes @ 0x1400821DC
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiAttemptCoalesce @ 0x1400849D0 (MiAttemptCoalesce.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall MiReturnSystemPtes(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r11
  int v7; // r10d
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-E8h] BYREF
  __int16 v14; // [rsp+24h] [rbp-E4h]
  __int64 v15; // [rsp+28h] [rbp-E0h]
  __int64 v16; // [rsp+30h] [rbp-D8h]
  __int64 v17; // [rsp+38h] [rbp-D0h]

  v5 = a3;
  v7 = ~(unsigned __int8)*(_DWORD *)(a1 + 24) & 2;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
  {
    a3 *= 16LL;
    a2 *= 16LL;
  }
  v8 = *(_QWORD *)(a1 + 16) + 8 * a2;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -v5);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), -v5);
  v15 = 20LL;
  v13 = v7;
  v9 = v8 << 25 >> 16;
  v10 = ((v8 << 25) + (a3 << 28)) >> 16;
  v14 = 0;
  v16 = 0LL;
  v17 = 0LL;
  MiInsertTbFlushEntry(&v13, v9, a3, 0LL);
  v11 = *(unsigned int *)(a1 + 28);
  if ( a4 == 1 )
    v11 = 15LL;
  return MiReturnSystemVa(v9, v10, v11, &v13);
}
