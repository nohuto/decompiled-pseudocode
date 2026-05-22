/*
 * XREFs of McTemplateU0qqffq @ 0x18002BA94
 * Callers:
 *     ?OnSwipe@EdgeGestureTarget@@AEAA?AW4State@1@_NW4EdgeGestureEdges@@1H@Z @ 0x18002E110 (-OnSwipe@EdgeGestureTarget@@AEAA-AW4State@1@_NW4EdgeGestureEdges@@1H@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x180001B54 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qqffq(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, char a6, char a7)
{
  int v8; // [rsp+20h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-31h] BYREF
  int *v10; // [rsp+40h] [rbp-21h]
  __int64 v11; // [rsp+48h] [rbp-19h]
  int *v12; // [rsp+50h] [rbp-11h]
  __int64 v13; // [rsp+58h] [rbp-9h]
  char *v14; // [rsp+60h] [rbp-1h]
  __int64 v15; // [rsp+68h] [rbp+7h]
  char *v16; // [rsp+70h] [rbp+Fh]
  __int64 v17; // [rsp+78h] [rbp+17h]
  char *v18; // [rsp+80h] [rbp+1Fh]
  __int64 v19; // [rsp+88h] [rbp+27h]
  int v20; // [rsp+C8h] [rbp+67h] BYREF

  v20 = a4;
  v8 = 13;
  v10 = &v8;
  v11 = 4LL;
  v12 = &v20;
  v13 = 4LL;
  v14 = &a5;
  v15 = 4LL;
  v16 = &a6;
  v17 = 4LL;
  v18 = &a7;
  v19 = 4LL;
  return McGenEventWriteUM(MinInput_Context, &MinInput_CShellEdgy_CandidateSelected, 6u, &v9);
}
