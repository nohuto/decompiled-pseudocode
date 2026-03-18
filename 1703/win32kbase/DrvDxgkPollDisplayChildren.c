/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C00F9BB0
 * Callers:
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00D7870 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C018B950 )
    return qword_1C018B950(a1, 0LL);
  else
    return 3221225659LL;
}
