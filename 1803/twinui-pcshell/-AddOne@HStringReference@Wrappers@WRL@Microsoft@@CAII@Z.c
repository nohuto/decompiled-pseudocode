/*
 * XREFs of ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x180093A98
 * Callers:
 *     ??$?0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z @ 0x18001A118 (--$-0$0CC@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0CC@G@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x1800F5EF4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x180159B80 (--$-0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z.c)
 *     ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18016F700 (-Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x180264F68 (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HStringReference::AddOne(unsigned int a1)
{
  __int64 result; // rax

  LODWORD(result) = a1 + 1;
  if ( a1 + 1 < a1 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800B6D6DLL);
  }
  return (unsigned int)result;
}
