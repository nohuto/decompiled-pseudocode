/*
 * XREFs of _SetTimer @ 0x1C01C7294
 * Callers:
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0204FD4 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C0087850 (InternalSetTimer.c)
 */

__int64 __fastcall SetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v9; // rdx

  if ( !a1 || PsGetCurrentProcessWin32Process(a1) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  UserSetLastError(5LL, v9);
  return 0LL;
}
