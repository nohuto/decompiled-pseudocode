/*
 * XREFs of TelemPTPConfigUpdate @ 0x1C01A7D90
 * Callers:
 *     <none>
 * Callees:
 *     _TelemPTPConfigUpdateEx @ 0x1C01A7DE8 (_TelemPTPConfigUpdateEx.c)
 */

__int64 TelemPTPConfigUpdate()
{
  __int128 v1; // [rsp+40h] [rbp-28h] BYREF
  __int128 v2; // [rsp+50h] [rbp-18h] BYREF

  *((_QWORD *)&v1 + 1) = 0LL;
  *((_QWORD *)&v2 + 1) = 0LL;
  return TelemPTPConfigUpdateEx(0, 1, 0, 0, (__int64)&v2, (__int64)&v1, 0LL);
}
