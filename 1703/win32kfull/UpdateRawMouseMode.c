/*
 * XREFs of UpdateRawMouseMode @ 0x1C004A46C
 * Callers:
 *     LockCaptureWindow @ 0x1C003C7A4 (LockCaptureWindow.c)
 *     EditionUpdateRawMouseMode @ 0x1C004A460 (EditionUpdateRawMouseMode.c)
 *     DestroyThreadHidObjects @ 0x1C00B0770 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00B0F38 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     zzzAttachToQueue @ 0x1C00B66AC (zzzAttachToQueue.c)
 *     SetNewForegroundQueue @ 0x1C00B6AD0 (SetNewForegroundQueue.c)
 *     TransferWakeBit @ 0x1C00CD08C (TransferWakeBit.c)
 *     UnlockCaptureWindow @ 0x1C00F8780 (UnlockCaptureWindow.c)
 *     zzzSetFMouseMovedWorker @ 0x1C01BD5C8 (zzzSetFMouseMovedWorker.c)
 * Callees:
 *     HasHidTable @ 0x1C004A4F0 (HasHidTable.c)
 */

__int64 __fastcall UpdateRawMouseMode(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax

  result = gpqForeground;
  if ( a1 == gpqForeground )
  {
    v3 = *(_QWORD *)(a1 + 72);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 16);
    else
      v4 = *(_QWORD *)(a1 + 56);
    result = HasHidTable(v4);
    gForegroundQRawMouseRequested = (_DWORD)result
                                 && (v3 ? (v5 = *(_QWORD *)(v3 + 16)) : (v5 = *(_QWORD *)(a1 + 56)),
                                     result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v5 + 376) + 776LL) + 100LL),
                                     (result & 1) != 0);
  }
  return result;
}
