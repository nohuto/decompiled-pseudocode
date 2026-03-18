/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BDAAA@$0BDA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SA_NPEAPEAE@Z @ 0x1C00BEB74
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BDAAA@$0BDA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SA_NPEAPEAE@Z @ 0x1C00BEAF8 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 * Callees:
 *     ?Create@?$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00BE838 (-Create@-$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00BE8E8 (-Create@-$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00BE998 (-Create@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Create@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00BEA48 (-Create@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<77824,304>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Create(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  char v3; // bl
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax

  v2 = NSInstrumentation::CTypeIsolation<40960,160>::Create();
  v3 = 0;
  if ( v2 )
  {
    a1[1] = v2;
    v4 = NSInstrumentation::CTypeIsolation<77824,304>::Create();
    if ( v4 )
    {
      a1[2] = v4;
      v5 = NSInstrumentation::CTypeIsolation<81920,160>::Create();
      if ( v5 )
      {
        a1[3] = v5;
        v6 = NSInstrumentation::CTypeIsolation<24576,96>::Create();
        if ( v6 )
        {
          a1[4] = v6;
          v3 = 1;
        }
      }
    }
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
