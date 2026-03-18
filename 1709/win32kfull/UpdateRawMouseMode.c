/*
 * XREFs of UpdateRawMouseMode @ 0x1C00A0E54
 * Callers:
 *     LockCaptureWindow @ 0x1C0046C44 (LockCaptureWindow.c)
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 *     EditionUpdateRawMouseMode @ 0x1C00A0E40 (EditionUpdateRawMouseMode.c)
 *     DestroyThreadHidObjects @ 0x1C00C6FF0 (DestroyThreadHidObjects.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00C7790 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     zzzAttachToQueue @ 0x1C00CAED8 (zzzAttachToQueue.c)
 *     SetNewForegroundQueue @ 0x1C00CC1C0 (SetNewForegroundQueue.c)
 *     TransferWakeBit @ 0x1C00CF9D8 (TransferWakeBit.c)
 *     UnlockCaptureWindow @ 0x1C01048B0 (UnlockCaptureWindow.c)
 * Callees:
 *     HasHidTable @ 0x1C00A0EE0 (HasHidTable.c)
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
    v3 = *(_QWORD *)(a1 + 104);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 16);
    else
      v4 = *(_QWORD *)(a1 + 88);
    result = HasHidTable(v4);
    gForegroundQRawMouseRequested = (_DWORD)result
                                 && (v3 ? (v5 = *(_QWORD *)(v3 + 16)) : (v5 = *(_QWORD *)(a1 + 88)),
                                     result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v5 + 400) + 784LL) + 100LL),
                                     (result & 1) != 0);
  }
  return result;
}
