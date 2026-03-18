/*
 * XREFs of ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0048D04
 * Callers:
 *     xxxDesktopThread @ 0x1C0048580 (xxxDesktopThread.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C011B4F0 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011B920 (xxxCleanupMotherDesktopWindow.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxHandleDesktopMessages(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  int v5; // eax
  _QWORD v6[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v6, 0, 0x30uLL);
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)v6, 0, 0, 0, 1, 0) )
      return 1LL;
    if ( a2 == (struct tagTERMINAL *)&gTermNOIO )
    {
      v5 = v6[1];
      if ( LODWORD(v6[1]) != 18 )
        goto LABEL_6;
      xxxCleanupMotherDesktopWindow(a2);
    }
    v5 = v6[1];
    if ( LODWORD(v6[1]) == 18 && *((_DWORD *)a1 + 217) <= 1u )
      return 0LL;
LABEL_6:
    if ( v5 == 796 )
    {
      if ( v6[2] == 2LL )
        DestroyPendingDesktops(a1, a2);
    }
    else
    {
      xxxDispatchMessage(v6);
    }
  }
}
