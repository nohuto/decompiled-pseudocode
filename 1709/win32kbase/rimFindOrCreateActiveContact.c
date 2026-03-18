/*
 * XREFs of rimFindOrCreateActiveContact @ 0x1C0111DBC
 * Callers:
 *     rimProcessPointerDeviceContact @ 0x1C011255C (rimProcessPointerDeviceContact.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0008C0C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     rimHidP_GetUsageValue @ 0x1C0094650 (rimHidP_GetUsageValue.c)
 *     RIMGetMaxContactCountNoButton @ 0x1C0107328 (RIMGetMaxContactCountNoButton.c)
 *     RIMCmActivateContact @ 0x1C01154D4 (RIMCmActivateContact.c)
 *     RIMCmGetActiveContactsCountNoButton @ 0x1C0115764 (RIMCmGetActiveContactsCountNoButton.c)
 */

__int64 __fastcall rimFindOrCreateActiveContact(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        unsigned __int16 a5,
        _DWORD *a6)
{
  _QWORD **v7; // rcx
  _QWORD *i; // rdx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  int v13; // r9d
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, a5, 0x51u, &v17, a2, a3, a4) < 0 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x20u,
      (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
  v7 = (_QWORD **)(*(_QWORD *)(a1 + 896) + 16LL * (v17 % *(_DWORD *)(a1 + 904)));
  for ( i = *v7; i != v7; i = (_QWORD *)*i )
  {
    v9 = (__int64)(i - 2);
    if ( *((_DWORD *)i - 4) == v17 && (*(_DWORD *)(v9 + 32) & 4) == 0 )
      goto LABEL_9;
  }
  v9 = 0LL;
LABEL_9:
  *a6 = v9 == 0;
  if ( !v9 )
  {
    RIMCmGetActiveContactsCountNoButton(a1);
    v10 = RIMGetMaxContactCountNoButton(a1);
    if ( v13 == v10 )
    {
      LODWORD(v16) = v10;
      LODWORD(v15) = v13 + 1;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x11u,
        0x21u,
        (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
        v15,
        v16);
    }
    else
    {
      v9 = RIMCmActivateContact(v11, v12);
      if ( !v9 )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x11u,
          0x22u,
          (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
    }
  }
  return v9;
}
