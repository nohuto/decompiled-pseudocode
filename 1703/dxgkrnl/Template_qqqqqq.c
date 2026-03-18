/*
 * XREFs of Template_qqqqqq @ 0x1C00352EC
 * Callers:
 *     ?LogCheckMutiplaneOverlaySupport@DXGDEVICE@@QEAAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0188148 (-LogCheckMutiplaneOverlaySupport@DXGDEVICE@@QEAAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLAN.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        int a6,
        char a7,
        char a8,
        char a9)
{
  int v10; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-51h] BYREF
  char *v12; // [rsp+50h] [rbp-41h]
  __int64 v13; // [rsp+58h] [rbp-39h]
  int *v14; // [rsp+60h] [rbp-31h]
  __int64 v15; // [rsp+68h] [rbp-29h]
  char *v16; // [rsp+70h] [rbp-21h]
  __int64 v17; // [rsp+78h] [rbp-19h]
  char *v18; // [rsp+80h] [rbp-11h]
  __int64 v19; // [rsp+88h] [rbp-9h]
  char *v20; // [rsp+90h] [rbp-1h]
  __int64 v21; // [rsp+98h] [rbp+7h]
  int v22; // [rsp+E8h] [rbp+57h] BYREF

  v22 = a4;
  UserData.Ptr = (ULONGLONG)&v22;
  v10 = 0;
  v12 = &a5;
  *(_QWORD *)&UserData.Size = 4LL;
  v14 = &v10;
  v13 = 4LL;
  v16 = &a7;
  v18 = &a8;
  v20 = &a9;
  v15 = 4LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 6u, &UserData);
}
