/*
 * XREFs of ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C001CBF4
 * Callers:
 *     HMAllocObject @ 0x1C0035000 (HMAllocObject.c)
 *     HMFreeObject @ 0x1C005F1D0 (HMFreeObject.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?HMTagToIsolatedType@@YA?AW4UserTypeIsolationCountedType@@E@Z @ 0x1C0035914 (-HMTagToIsolatedType@@YA-AW4UserTypeIsolationCountedType@@E@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C003FD60 (--$FreeIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00663BC (--$FreeIsolatedType@V-$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0066D00 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

void __fastcall HMFreeUserOrIsolatedType(__int64 a1, char a2, void *a3)
{
  int v4; // eax
  int v5; // eax

  if ( (a1 & 0x200) != 0 )
  {
    LOBYTE(a1) = a2;
    v4 = HMTagToIsolatedType(a1) - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,160>>(a3);
      }
      else
      {
        FreeIsolatedType<NSInstrumentation::CTypeIsolation<77824,304>>(a3);
      }
    }
    else
    {
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>(a3);
    }
  }
  else
  {
    Win32FreePool(a3);
  }
}
