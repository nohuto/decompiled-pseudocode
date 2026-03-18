/*
 * XREFs of ProcessHidRawInput @ 0x1C01B3710
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxProcessHidInput @ 0x1C01B3FC0 (xxxProcessHidInput.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall ProcessHidRawInput(struct DEVICEINFO *a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v2);
  xxxProcessHidInput(a1);
  if ( !v2 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v2);
  }
}
