/*
 * XREFs of RIMDoMobileKeyboardInvalidation @ 0x1C01010A0
 * Callers:
 *     RIMOnPowerNotification @ 0x1C009AAC0 (RIMOnPowerNotification.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C010D1F8 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
 *     rimSignalReadComplete @ 0x1C00999CC (rimSignalReadComplete.c)
 *     DbgPrintRIMAlways @ 0x1C00FF030 (DbgPrintRIMAlways.c)
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C01149CC (rimInvalidateHidKeyboardDeviceKeys.c)
 */

ULONG __fastcall RIMDoMobileKeyboardInvalidation(_BYTE *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  ULONG result; // eax

  if ( (*(_DWORD *)(a2 + 184) & 0x100) == 0 )
  {
    v4 = *(_QWORD *)(a2 + 480);
    if ( *(_DWORD *)(v4 + 292) )
    {
      if ( a1[712] )
      {
        v5 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 456) + 44LL);
        *(_DWORD *)(a2 + 256) = 0;
        *(_QWORD *)(a2 + 264) = v5;
        rimInvalidateHidKeyboardDeviceKeys(a1, a2, v4, 0LL);
        if ( a1[712] )
        {
          WPP_RECORDER_SF_qq(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x4Bu,
            (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
            a1,
            a2);
          return DbgPrintRIMAlways(
                   "pRimObj:%p, pRimDev:%p rimInvalidateHidKeyboardDeviceKeys failed!\n",
                   a1,
                   (const void *)a2);
        }
        else
        {
          return rimSignalReadComplete((__int64)a1, a2);
        }
      }
    }
  }
  return result;
}
