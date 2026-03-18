/*
 * XREFs of CheckClipboardAccess @ 0x1C00AF8CC
 * Callers:
 *     NtUserRemoveClipboardFormatListener @ 0x1C00080F0 (NtUserRemoveClipboardFormatListener.c)
 *     xxxDisownClipboard @ 0x1C00AE014 (xxxDisownClipboard.c)
 *     NtUserAddClipboardFormatListener @ 0x1C00AE240 (NtUserAddClipboardFormatListener.c)
 *     xxxChangeClipboardChain @ 0x1C00AE420 (xxxChangeClipboardChain.c)
 *     xxxSetClipboardViewer @ 0x1C00AE668 (xxxSetClipboardViewer.c)
 *     xxxEmptyClipboard @ 0x1C00AE73C (xxxEmptyClipboard.c)
 *     NtUserGetClipboardData @ 0x1C00AECF0 (NtUserGetClipboardData.c)
 *     NtUserGetClipboardOwner @ 0x1C00AEEE0 (NtUserGetClipboardOwner.c)
 *     _SetClipboardData @ 0x1C00AEFE8 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C00AF380 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00AF6D4 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C00AF7D0 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00AF810 (NtUserIsClipboardFormatAvailable.c)
 *     NtUserCountClipboardFormats @ 0x1C0135000 (NtUserCountClipboardFormats.c)
 *     _EnumClipboardFormats @ 0x1C0139380 (_EnumClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C0139410 (NtUserGetOpenClipboardWindow.c)
 *     NtUserGetClipboardViewer @ 0x1C01D86A0 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01DACB0 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C01E89A0 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ReferenceWindowStation @ 0x1C00AF920 (ReferenceWindowStation.c)
 */

__int64 CheckClipboardAccess()
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v1; // eax
  ULONG v3; // eax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v4, (*(_DWORD *)(ThreadWin32Thread + 440) >> 3) & 1);
  if ( v1 >= 0 )
    return v4;
  v3 = RtlNtStatusToDosError(v1);
  UserSetLastError(v3);
  return 0LL;
}
