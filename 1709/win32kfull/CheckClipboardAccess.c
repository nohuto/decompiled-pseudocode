/*
 * XREFs of CheckClipboardAccess @ 0x1C00C6624
 * Callers:
 *     xxxDisownClipboard @ 0x1C00C4CC4 (xxxDisownClipboard.c)
 *     NtUserAddClipboardFormatListener @ 0x1C00C4EF0 (NtUserAddClipboardFormatListener.c)
 *     xxxChangeClipboardChain @ 0x1C00C52C0 (xxxChangeClipboardChain.c)
 *     xxxSetClipboardViewer @ 0x1C00C5520 (xxxSetClipboardViewer.c)
 *     xxxEmptyClipboard @ 0x1C00C55F4 (xxxEmptyClipboard.c)
 *     NtUserGetClipboardData @ 0x1C00C59C0 (NtUserGetClipboardData.c)
 *     NtUserGetClipboardOwner @ 0x1C00C5BC0 (NtUserGetClipboardOwner.c)
 *     _SetClipboardData @ 0x1C00C5CC8 (_SetClipboardData.c)
 *     xxxCloseClipboard @ 0x1C00C60A0 (xxxCloseClipboard.c)
 *     _OpenClipboard @ 0x1C00C6198 (_OpenClipboard.c)
 *     NtUserGetClipboardSequenceNumber @ 0x1C00C64F0 (NtUserGetClipboardSequenceNumber.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1C00C6530 (NtUserIsClipboardFormatAvailable.c)
 *     NtUserRemoveClipboardFormatListener @ 0x1C00D7B60 (NtUserRemoveClipboardFormatListener.c)
 *     NtUserCountClipboardFormats @ 0x1C0139D80 (NtUserCountClipboardFormats.c)
 *     _EnumClipboardFormats @ 0x1C013FB00 (_EnumClipboardFormats.c)
 *     NtUserGetOpenClipboardWindow @ 0x1C013FB90 (NtUserGetOpenClipboardWindow.c)
 *     NtUserGetClipboardViewer @ 0x1C01E4FF0 (NtUserGetClipboardViewer.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01E6F00 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C01F49A8 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ReferenceWindowStation @ 0x1C00C6680 (ReferenceWindowStation.c)
 */

__int64 __fastcall CheckClipboardAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v5; // eax
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v5 = ReferenceWindowStation(KeGetCurrentThread(), 0LL, 4LL, &v9, (*(_DWORD *)(ThreadWin32Thread + 464) >> 3) & 1);
  if ( v5 >= 0 )
    return v9;
  v7 = RtlNtStatusToDosError(v5);
  UserSetLastError(v7, v8);
  return 0LL;
}
