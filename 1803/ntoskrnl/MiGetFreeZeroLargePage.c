/*
 * XREFs of MiGetFreeZeroLargePage @ 0x140055FD0
 * Callers:
 *     MiGet64KPage @ 0x140055A00 (MiGet64KPage.c)
 *     MiGetLargePageDemoteAsNeeded @ 0x1400BBBB8 (MiGetLargePageDemoteAsNeeded.c)
 *     MiDemoteLargeFreeZeroPage @ 0x14014C928 (MiDemoteLargeFreeZeroPage.c)
 *     MiFindLargeNodePage @ 0x140254588 (MiFindLargeNodePage.c)
 * Callees:
 *     MiUnlinkNodeLargePage @ 0x1400E7040 (MiUnlinkNodeLargePage.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetFreeZeroLargePage(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5, int a6)
{
  int v6; // r8d
  _QWORD *v7; // rax
  _QWORD v9[2]; // [rsp+40h] [rbp-28h] BYREF

  v6 = a3 | 2;
  if ( a2 == 2 )
  {
    v9[0] = 0LL;
    v9[1] = a5;
    v7 = v9;
  }
  else
  {
    v7 = (_QWORD *)(1984LL * a4 + *(_QWORD *)(a1 + 16) + 1936LL);
  }
  return MiUnlinkNodeLargePage(a1, a2, a4, a6, (__int64)v7, v6, 0LL);
}
