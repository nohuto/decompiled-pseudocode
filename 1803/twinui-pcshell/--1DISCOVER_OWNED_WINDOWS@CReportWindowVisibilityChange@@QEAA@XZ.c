/*
 * XREFs of ??1DISCOVER_OWNED_WINDOWS@CReportWindowVisibilityChange@@QEAA@XZ @ 0x1800F8A94
 * Callers:
 *     _CReportWindowVisibilityChange::_ReportOwnedWindowsVisibilityChange_::_1_::dtor$0 @ 0x1800B0B00 (_CReportWindowVisibilityChange--_ReportOwnedWindowsVisibilityChange_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CReportWindowVisibilityChange::DISCOVER_OWNED_WINDOWS::~DISCOVER_OWNED_WINDOWS(
        CReportWindowVisibilityChange::DISCOVER_OWNED_WINDOWS *this)
{
  CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)this + 16);
}
