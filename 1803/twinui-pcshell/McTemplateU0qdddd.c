/*
 * XREFs of McTemplateU0qdddd @ 0x1802F7674
 * Callers:
 *     ?Show@CDropFeedbackItem@@UEAAXXZ @ 0x1802F6AD0 (-Show@CDropFeedbackItem@@UEAAXXZ.c)
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802F6D70 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x18001F258 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0qdddd(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, int a4, char a5, char a6, char a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+20h] [rbp-31h] BYREF
  int *v9; // [rsp+30h] [rbp-21h]
  __int64 v10; // [rsp+38h] [rbp-19h]
  int *v11; // [rsp+40h] [rbp-11h]
  __int64 v12; // [rsp+48h] [rbp-9h]
  char *v13; // [rsp+50h] [rbp-1h]
  __int64 v14; // [rsp+58h] [rbp+7h]
  char *v15; // [rsp+60h] [rbp+Fh]
  __int64 v16; // [rsp+68h] [rbp+17h]
  char *v17; // [rsp+70h] [rbp+1Fh]
  __int64 v18; // [rsp+78h] [rbp+27h]
  int v19; // [rsp+B0h] [rbp+5Fh] BYREF
  int v20; // [rsp+B8h] [rbp+67h] BYREF

  v20 = a4;
  v19 = a3;
  v10 = 4LL;
  v9 = &v19;
  v12 = 4LL;
  v11 = &v20;
  v14 = 4LL;
  v13 = &a5;
  v16 = 4LL;
  v15 = &a6;
  v17 = &a7;
  v18 = 4LL;
  return McGenEventWriteUM(MICROSOFT_TWINUI_PUBLISHER_Context, a2, 6u, &v8);
}
