/*
 * XREFs of Template_qqddddddddq @ 0x1C0034FDC
 * Callers:
 *     ?LogCheckMutiplaneOverlaySupport@DXGDEVICE@@QEAAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C0188148 (-LogCheckMutiplaneOverlaySupport@DXGDEVICE@@QEAAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLAN.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqddddddddq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-C9h] BYREF
  char *v16; // [rsp+40h] [rbp-B9h]
  __int64 v17; // [rsp+48h] [rbp-B1h]
  char *v18; // [rsp+50h] [rbp-A9h]
  __int64 v19; // [rsp+58h] [rbp-A1h]
  char *v20; // [rsp+60h] [rbp-99h]
  __int64 v21; // [rsp+68h] [rbp-91h]
  char *v22; // [rsp+70h] [rbp-89h]
  __int64 v23; // [rsp+78h] [rbp-81h]
  char *v24; // [rsp+80h] [rbp-79h]
  __int64 v25; // [rsp+88h] [rbp-71h]
  char *v26; // [rsp+90h] [rbp-69h]
  __int64 v27; // [rsp+98h] [rbp-61h]
  char *v28; // [rsp+A0h] [rbp-59h]
  __int64 v29; // [rsp+A8h] [rbp-51h]
  char *v30; // [rsp+B0h] [rbp-49h]
  __int64 v31; // [rsp+B8h] [rbp-41h]
  char *v32; // [rsp+C0h] [rbp-39h]
  __int64 v33; // [rsp+C8h] [rbp-31h]
  char *v34; // [rsp+D0h] [rbp-29h]
  __int64 v35; // [rsp+D8h] [rbp-21h]
  int v36; // [rsp+128h] [rbp+2Fh] BYREF

  v36 = a4;
  UserData.Ptr = (ULONGLONG)&v36;
  *(_QWORD *)&UserData.Size = 4LL;
  v16 = &a5;
  v17 = 4LL;
  v18 = &a6;
  v19 = 4LL;
  v20 = &a7;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  v28 = &a11;
  v30 = &a12;
  v32 = &a13;
  v34 = &a14;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  return EtwWrite(
           Microsoft_Windows_DxgKrnlHandle,
           &EventCheckMultiPlaneOverlaySupportPostComposition,
           0LL,
           0xBu,
           &UserData);
}
