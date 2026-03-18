/*
 * XREFs of IsHungWindow @ 0x1C0088E80
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
 *     ShouldProcessHungWindow @ 0x1C00842F8 (ShouldProcessHungWindow.c)
 *     EditionHandleHungWindow @ 0x1C0084F70 (EditionHandleHungWindow.c)
 *     NtUserQueryWindow @ 0x1C0087260 (NtUserQueryWindow.c)
 *     xxxHungAppDemon @ 0x1C0088D20 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00A1684 (xxxSimpleDoSyncPaint.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 *     ProcessHungWindow @ 0x1C013431C (ProcessHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0134590 (xxxRegisterGhostWindow.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01CB090 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     NtUserSetWindowArrangement @ 0x1C01EC0C0 (NtUserSetWindowArrangement.c)
 * Callees:
 *     IsPumpingInputMsgs @ 0x1C0088F30 (IsPumpingInputMsgs.c)
 */

__int64 __fastcall IsHungWindow(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 16);
  v3 = 0;
  v4 = v1[53];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 12) <= gdwHungAppTimeout
    || (*(_WORD *)(v4 + 10) & 0x1C07) != 0
    || (unsigned int)PsGetThreadFreezeCount(*v1)
    || (*(_DWORD *)(v1[50] + 12LL) & 0x40) != 0 )
  {
    if ( !(unsigned int)IsPumpingInputMsgs(a1) )
      return 1;
    return v3;
  }
  else
  {
    return 1;
  }
}
