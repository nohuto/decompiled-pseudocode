/*
 * XREFs of BgDisplayString @ 0x14083F84C
 * Callers:
 *     BgkDrawText @ 0x14083F6EC (BgkDrawText.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14002E450 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140164E40 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140164F8C (BgpFwAcquireLock.c)
 *     BgpTxtDisplayString @ 0x140841398 (BgpTxtDisplayString.c)
 */

__int64 __fastcall BgDisplayString(int a1)
{
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_14039D7F0 & 1) == 0 || (dword_14039D7F0 & 0x100) != 0 )
  {
    v5 = -1073741823;
  }
  else if ( qword_14039D8A0 && qword_14039D8B8 )
  {
    v5 = BgpTxtDisplayString(qword_14039D8B8, a1, v3, v4);
  }
  else
  {
    v5 = -1073741670;
  }
  BgpFwReleaseLock();
  return v5;
}
