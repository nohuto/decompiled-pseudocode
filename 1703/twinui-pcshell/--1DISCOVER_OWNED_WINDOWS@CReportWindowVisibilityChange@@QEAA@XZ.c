/*
 * XREFs of ??1DISCOVER_OWNED_WINDOWS@CReportWindowVisibilityChange@@QEAA@XZ @ 0x18002AB70
 * Callers:
 *     _CReportWindowVisibilityChange::_ReportOwnedWindowsVisibilityChange_::_1_::dtor$0 @ 0x18019901A (_CReportWindowVisibilityChange--_ReportOwnedWindowsVisibilityChange_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CReportWindowVisibilityChange::DISCOVER_OWNED_WINDOWS::~DISCOVER_OWNED_WINDOWS(
        CReportWindowVisibilityChange::DISCOVER_OWNED_WINDOWS *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
}
