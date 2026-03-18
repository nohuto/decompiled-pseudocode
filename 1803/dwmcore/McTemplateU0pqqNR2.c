/*
 * XREFs of McTemplateU0pqqNR2 @ 0x180192E10
 * Callers:
 *     ?TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@IPEBX@Z @ 0x180028378 (-TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42Inte.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0pqqNR2(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v9; // [rsp+30h] [rbp-50h]
  __int64 v10; // [rsp+38h] [rbp-48h]
  int *v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h]
  int *v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  __int64 v18; // [rsp+A0h] [rbp+20h] BYREF
  int v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a4;
  v18 = a3;
  v10 = 8LL;
  v17 = 0;
  v9 = &v18;
  v12 = 4LL;
  v11 = &v19;
  v14 = 4LL;
  v13 = &a5;
  v15 = a7;
  v16 = a6 * a5;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, a2, 5u, &v8);
}
