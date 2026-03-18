/*
 * XREFs of ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C006954C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 * Callees:
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00694DC (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C006985C (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall GetRemoteScaleOverrideTestHook(size_t *a1, __int64 a2, struct _DPI_INFORMATION *a3)
{
  __int64 v5; // rdx
  unsigned int *v6; // r8
  unsigned __int16 v7[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 v8[8]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v9; // [rsp+40h] [rbp-68h]
  _BYTE v10[62]; // [rsp+50h] [rbp-58h] BYREF

  if ( gbOSTestSigningEnabled )
  {
    *(_OWORD *)v8 = *(_OWORD *)L"REMOTE_MONITOR_";
    v9 = *(_OWORD *)L"ONITOR_";
    memset(v10, 0, sizeof(v10));
    if ( RtlStringCchCatW(v8, v5, a1) >= 0 )
    {
      DpiInternal::ScaleOverrideTestHookCore((DpiInternal *)v8, v7, v6);
      if ( *(_DWORD *)v7 )
      {
        *((_DWORD *)a3 + 2) = *(_DWORD *)v7;
        *((_DWORD *)a3 + 21) = 1234567;
      }
    }
  }
}
