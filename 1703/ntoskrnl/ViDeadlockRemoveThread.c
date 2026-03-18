/*
 * XREFs of ViDeadlockRemoveThread @ 0x14077B0AC
 * Callers:
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x140251758 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 *     ViDeadlockEmptyDatabase @ 0x14077A780 (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025113C (VfReportIssueWithOptions.c)
 *     VfUtilAddressRangeRemove @ 0x14076500C (VfUtilAddressRangeRemove.c)
 *     ViDeadlockPreprocessOptions @ 0x14077ACA0 (ViDeadlockPreprocessOptions.c)
 */

_QWORD *__fastcall ViDeadlockRemoveThread(__int64 a1, int a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  unsigned __int64 v6; // r9
  _QWORD *result; // rax

  if ( *((_DWORD *)ViDeadlockGlobals + 8196) || *((_DWORD *)ViDeadlockGlobals + 8282) > ViDeadlockChildrenCountMaximum )
    a2 = 1;
  if ( !a2 && *(_DWORD *)(a1 + 40) )
  {
    ViDeadlockPreprocessOptions(byte_140341428, "Terminated thread 0x%p owns lock.", 4106LL, *(_QWORD *)a1, a1, 0LL);
    VfReportIssueWithOptions(0xC4u, 4106, *(_QWORD *)a1, a1, 0LL, byte_140341428);
  }
  v3 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 2051);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD **)(a1 + 32);
  if ( *(_QWORD *)(v4 + 8) != a1 + 24 || *v5 != a1 + 24 )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = (*(_QWORD *)a1 >> 12) % 0x3FFuLL;
  if ( *(_QWORD *)(v3[2050] + 16 * v6) != v3[2050] + 16 * v6 )
    return (_QWORD *)VfUtilAddressRangeRemove(&v3[2 * v6 + 2052], *(_QWORD *)a1, 2064LL);
  result = &v3[2 * v6 + 2052];
  *result = 0LL;
  result[1] = 0LL;
  return result;
}
