/*
 * XREFs of ?wil_SaveStagingConfig@@YAJPEAUwil_StagingConfig@@H@Z @ 0x18005EF14
 * Callers:
 *     ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060B90 (-SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedCon.c)
 *     ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060DE0 (-UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 * Callees:
 *     ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x1800073A8 (-wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1K.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

__int64 __fastcall wil_SaveStagingConfig(
        struct wil_StagingConfig *a1,
        __int64 a2,
        __int64 a3,
        const struct __WIL__WNF_TYPE_ID *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  unsigned int v7; // r8d
  const void *v8; // rdx
  unsigned int updated; // esi
  const struct __WIL__WNF_TYPE_ID *v10; // r9
  __int64 v11; // rax
  const void *v13; // [rsp+20h] [rbp-48h]
  const void *v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h] BYREF

  v4 = 0;
  if ( *((_DWORD *)a1 + 1) )
  {
    if ( *((_BYTE *)a1 + 12) <= 2u )
    {
      if ( *((_DWORD *)a1 + 4) )
      {
        *(_BYTE *)(*((_QWORD *)a1 + 3) + 1LL) = 2;
        v6 = 0x418A073AA3BC88F5LL;
        if ( !*(_DWORD *)a1 )
          v6 = 0x418A073AA3BC7C75LL;
        v7 = *((_DWORD *)a1 + 16);
        v8 = (const void *)*((_QWORD *)a1 + 7);
        v15 = v6;
        updated = wil_details_NtUpdateWnfStateData(
                    (const struct __WIL__WNF_STATE_NAME *)&v15,
                    v8,
                    v7,
                    a4,
                    v13,
                    *((_DWORD *)a1 + 2),
                    0);
        if ( !updated && !*((_DWORD *)a1 + 12) )
        {
          v11 = 0x418A073AA3BC90F5LL;
          if ( !*(_DWORD *)a1 )
            v11 = 0x418A073AA3BC8075LL;
          v16 = v11;
          wil_details_NtUpdateWnfStateData((const struct __WIL__WNF_STATE_NAME *)&v16, 0LL, 0, v10, v14, 0, 0);
        }
        return updated;
      }
    }
    else
    {
      return (unsigned int)-1073741735;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
