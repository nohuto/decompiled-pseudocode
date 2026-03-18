/*
 * XREFs of DrvDxgkPollDisplayChildren @ 0x1C00F9D90
 * Callers:
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00DD980 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvDxgkPollDisplayChildren(__int64 a1)
{
  if ( qword_1C01905B8 )
    return qword_1C01905B8(a1, 0LL);
  else
    return 3221225659LL;
}
