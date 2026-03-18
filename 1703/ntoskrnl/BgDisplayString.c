/*
 * XREFs of BgDisplayString @ 0x140759CA0
 * Callers:
 *     BgkDrawText @ 0x140759B5C (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x140140410 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x1401406CC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140140710 (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x14075AB90 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140341A30 & 1) == 0 || (dword_140341A30 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_140341AD0 && qword_140341AE8 )
  {
    v5 = BgpTxtDisplayString(qword_140341AE8, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
