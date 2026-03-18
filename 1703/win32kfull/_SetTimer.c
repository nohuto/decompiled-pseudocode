/*
 * XREFs of _SetTimer @ 0x1C01C4F94
 * Callers:
 *     ?xxxMNDoScroll@@YAHV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0203588 (-xxxMNDoScroll@@YAHV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C00B26E0 (InternalSetTimer.c)
 */

__int64 __fastcall SetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  if ( !a1 || PsGetCurrentProcessWin32Process(a1, a2) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  UserSetLastError(5LL);
  return 0LL;
}
