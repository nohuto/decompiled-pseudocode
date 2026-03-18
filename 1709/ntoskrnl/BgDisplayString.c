/*
 * XREFs of BgDisplayString @ 0x1407D2DDC
 * Callers:
 *     BgkDrawText @ 0x1407D2C7C (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1400E2700 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14013B974 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14013B9B8 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x1407D4284 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_14035A1B0 & 1) == 0 || (dword_14035A1B0 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_14035A250 && qword_14035A268 )
  {
    v5 = BgpTxtDisplayString(qword_14035A268, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
