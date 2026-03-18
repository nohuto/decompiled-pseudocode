/*
 * XREFs of GetPointerCursorIdInternal @ 0x1C01BAEAC
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C01DA000 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01E9DBC (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall GetPointerCursorIdInternal(__int64 a1, unsigned __int16 a2, unsigned int *a3)
{
  unsigned __int64 ThreadPointerData; // r9
  unsigned int PointerCursorIdFromMsgData; // ebx
  struct tagINPUTPOINTERNODE *NodeById; // rax

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, 0LL, 0LL, 0LL);
  if ( ThreadPointerData )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      PointerCursorIdFromMsgData = CTouchProcessor::GetPointerCursorIdFromMsgData(
                                     gpTouchProcessor,
                                     ThreadPointerData,
                                     a3);
    }
    else
    {
      NodeById = FindNodeById(*(_WORD *)(ThreadPointerData + 16), 0, 0);
      if ( NodeById )
      {
        *a3 = *((unsigned __int16 *)NodeById + 17);
        PointerCursorIdFromMsgData = 1;
      }
      else
      {
        PointerCursorIdFromMsgData = 0;
      }
    }
    if ( !PointerCursorIdFromMsgData )
      UserSetLastError(87LL);
    return PointerCursorIdFromMsgData;
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
}
