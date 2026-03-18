/*
 * XREFs of MiControlAreaUsingExtents @ 0x1400093B8
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MmExtendSection @ 0x1404BDFD0 (MmExtendSection.c)
 *     MiExtendSection @ 0x1404BE298 (MiExtendSection.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiControlAreaUsingExtents(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) >> 30) & 1;
}
