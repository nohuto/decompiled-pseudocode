/*
 * XREFs of rimFindOrCreateActiveContact @ 0x1C01132D4
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C0113A78 (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0007B88 (WPP_RECORDER_SF_dd.c)
 *     rimHidP_GetUsageValue @ 0x1C000848C (rimHidP_GetUsageValue.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMGetMaxContactCountNoButton @ 0x1C01063C4 (RIMGetMaxContactCountNoButton.c)
 *     RIMCmActivateContact @ 0x1C0116964 (RIMCmActivateContact.c)
 *     RIMCmGetActiveContactsCountNoButton @ 0x1C0116BE8 (RIMCmGetActiveContactsCountNoButton.c)
 */

__int64 __fastcall rimFindOrCreateActiveContact(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        _DWORD *a6)
{
  int v7; // edx
  _QWORD **v8; // rcx
  _QWORD *i; // rdx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r8d
  int v14; // r9d
  int v15; // edx
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, a5, 0x51u, &v19, a2, a3, a4) < 0 )
  {
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      18,
      31,
      (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
  }
  v8 = (_QWORD **)(*(_QWORD *)(a1 + 1560) + 16LL * (v19 % *(_DWORD *)(a1 + 1568)));
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v10 = (__int64)(i - 2);
    if ( *((_DWORD *)i - 4) == v19 && (*(_DWORD *)(v10 + 32) & 4) == 0 )
      goto LABEL_9;
  }
  v10 = 0LL;
LABEL_9:
  *a6 = v10 == 0;
  if ( !v10 )
  {
    RIMCmGetActiveContactsCountNoButton(a1);
    v11 = RIMGetMaxContactCountNoButton(a1);
    if ( v14 == v11 )
    {
      LODWORD(v18) = v11;
      LODWORD(v17) = v14 + 1;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x11u,
        0x20u,
        (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids,
        v17,
        v18);
    }
    else
    {
      v10 = RIMCmActivateContact(v12, v13);
      if ( !v10 )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          17,
          33,
          (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
      }
    }
  }
  return v10;
}
