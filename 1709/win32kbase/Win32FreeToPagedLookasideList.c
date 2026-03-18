/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C0054EB0
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0075460 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UserDeleteW32Thread @ 0x1C007DB50 (UserDeleteW32Thread.c)
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 *     UnlockQueue @ 0x1C00A9620 (UnlockQueue.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C00DE288 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1C00DE340 (NullifyLookasideRef.c)
 *     zzzDestroyQueue @ 0x1C00DE6A0 (zzzDestroyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32FreeToPagedLookasideList(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = IsWin32FreeToPagedLookasideListImplSupported();
  if ( (int)result >= 0 )
    return Win32FreeToPagedLookasideListImpl(a1, a2);
  return result;
}
