/*
 * XREFs of KiSatisfyThreadWait @ 0x14024A2D8
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1400FF3A0 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiExitThreadWait @ 0x140089090 (KiExitThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KiSatisfyThreadWait(struct _KPRCB *a1, __int64 a2, char a3, __int64 *a4, int a5)
{
  __int64 v9; // r12
  __int64 *v10; // rdi
  volatile signed __int32 *v11; // rsi
  __int64 *v12; // rax
  __int64 **v13; // rcx

  *(_BYTE *)(a2 + 388) = 2;
  KiReleaseThreadLockSafe(a2);
  v9 = *(_QWORD *)(a2 + 200);
  if ( a5 )
  {
    v10 = &a4[6 * (unsigned __int8)a5];
    do
    {
      if ( *((_BYTE *)a4 + 17) < 5u )
      {
        v11 = (volatile signed __int32 *)a4[4];
        KiAcquireKobjectLockSafe(v11);
        if ( *((_BYTE *)a4 + 17) == 4 )
        {
          v12 = (__int64 *)*a4;
          if ( *(__int64 **)(*a4 + 8) != a4 || (v13 = (__int64 **)a4[1], *v13 != a4) )
            __fastfail(3u);
          *v13 = v12;
          v12[1] = (__int64)v13;
        }
        _InterlockedAnd(v11, 0xFFFFFF7F);
      }
      a4 += 6;
    }
    while ( a4 != v10 );
  }
  KiExitThreadWait(a1, a2, a3);
  return v9;
}
