/*
 * XREFs of ?Translate@CApiPortClient@@CAJJ@Z @ 0x180004610
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004658 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004790 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000491C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApiPortClient::Translate(unsigned int a1)
{
  int v1; // edx
  __int64 v2; // rdx

  if ( a1 + 805306334 <= 0x1F )
  {
    v1 = -2145124351;
    if ( _bittest(&v1, a1 + 805306334) )
      return (unsigned int)-2144980991;
  }
  if ( a1 + 805305825 <= 0x34 )
  {
    v2 = 0x10000000000041LL;
    if ( _bittest64(&v2, (int)(a1 + 805305825)) )
      return (unsigned int)-2144980991;
  }
  return a1;
}
