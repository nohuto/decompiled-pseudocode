/*
 * XREFs of ProcessHidRawInput @ 0x1C01B6690
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxProcessHidInput @ 0x1C01B6F40 (xxxProcessHidInput.c)
 */

void __fastcall ProcessHidRawInput(struct DEVICEINFO *a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v2);
  xxxProcessHidInput(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v2);
}
