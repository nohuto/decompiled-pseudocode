/*
 * XREFs of ?LkdForAtomAdditionFailure@@YAXJ@Z @ 0x1C00BC004
 * Callers:
 *     UserAddAtomToAtomTableEx @ 0x1C005FFD0 (UserAddAtomToAtomTableEx.c)
 *     UserAddAtomToAtomTable @ 0x1C00BC08C (UserAddAtomToAtomTable.c)
 * Callees:
 *     <none>
 */

void __fastcall LkdForAtomAdditionFailure(int a1)
{
  if ( !byte_1C01A62B0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 21LL, a1, 0LL, KeGetCurrentThread(), 0LL, 0LL, 0);
    byte_1C01A62B0 = 1;
  }
}
