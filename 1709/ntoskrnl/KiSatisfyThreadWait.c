/*
 * XREFs of KiSatisfyThreadWait @ 0x14020BCB4
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 *     KiExitThreadWait @ 0x14011B140 (KiExitThreadWait.c)
 */

__int64 __fastcall KiSatisfyThreadWait(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 *a4, int a5)
{
  __int64 *v5; // rbx
  char v6; // r14
  __int64 v8; // r12
  __int64 *v10; // rdi
  volatile signed __int32 *v11; // rsi
  __int64 *v12; // rax
  __int64 **v13; // rcx

  v5 = a4;
  *(_BYTE *)(a2 + 388) = 2;
  v6 = (char)a3;
  *(_QWORD *)(a2 + 64) = 0LL;
  v8 = *(_QWORD *)(a2 + 200);
  if ( a5 )
  {
    v10 = &a4[6 * (unsigned __int8)a5];
    do
    {
      if ( *((_BYTE *)v5 + 17) < 5u )
      {
        v11 = (volatile signed __int32 *)v5[4];
        KiAcquireKobjectLockSafe(v11);
        if ( *((_BYTE *)v5 + 17) == 4 )
        {
          v12 = (__int64 *)*v5;
          if ( *(__int64 **)(*v5 + 8) != v5 || (v13 = (__int64 **)v5[1], *v13 != v5) )
            __fastfail(3u);
          *v13 = v12;
          v12[1] = (__int64)v13;
        }
        _InterlockedAnd(v11, 0xFFFFFF7F);
      }
      v5 += 6;
    }
    while ( v5 != v10 );
  }
  LOBYTE(a3) = v6;
  KiExitThreadWait(a1, a2, a3);
  return v8;
}
