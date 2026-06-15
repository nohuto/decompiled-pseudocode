/*
 * XREFs of McTemplateU0qqqqzr3 @ 0x18005AB54
 * Callers:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER @ 0x18005AAF8 (Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER @ 0x18010D054 (Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180017BB0 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0qqqqzr3(__int64 a1, __int128 *a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  int v8; // [rsp+20h] [rbp-41h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-31h] BYREF
  int *v10; // [rsp+40h] [rbp-21h]
  __int64 v11; // [rsp+48h] [rbp-19h]
  int *v12; // [rsp+50h] [rbp-11h]
  __int64 v13; // [rsp+58h] [rbp-9h]
  int *v14; // [rsp+60h] [rbp-1h]
  __int64 v15; // [rsp+68h] [rbp+7h]
  int *v16; // [rsp+70h] [rbp+Fh]
  __int64 v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+8Ch] [rbp+2Bh]
  int v21; // [rsp+C0h] [rbp+5Fh] BYREF
  int v22; // [rsp+C8h] [rbp+67h] BYREF

  v22 = a4;
  v21 = a3;
  v8 = 2;
  v20 = 0;
  v10 = &v21;
  v11 = 4LL;
  v12 = &v22;
  v13 = 4LL;
  v14 = &v8;
  v15 = 4LL;
  v16 = &a6;
  v18 = a7;
  v17 = 4LL;
  v19 = 2 * a6;
  return McGenEventWriteUM(PDC_EVENT_PROVIDER_Context, a2, 6LL, (__int64)v9);
}
