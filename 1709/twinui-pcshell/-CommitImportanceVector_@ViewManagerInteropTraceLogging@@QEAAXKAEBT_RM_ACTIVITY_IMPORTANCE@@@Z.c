/*
 * XREFs of ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18013CE6C
 * Callers:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1801419D0 (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CommitImportanceVector_(
        ViewManagerInteropTraceLogging *this,
        int a2,
        const union _RM_ACTIVITY_IMPORTANCE *a3)
{
  const struct _TlgProvider_t *v4; // r10
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // ax
  __int16 v7; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v8; // [rsp+32h] [rbp-CEh] BYREF
  __int16 v9; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v10; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v11; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v12; // [rsp+3Ah] [rbp-C6h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  const union _RM_ACTIVITY_IMPORTANCE *v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  char *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  __int16 *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  __int16 *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  __int16 *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  __int16 *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  __int16 *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  __int16 *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  char *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+128h] [rbp+28h] BYREF

  v34 = a2;
  v4 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v15 = 4LL;
    v16 = a3;
    v14 = &v34;
    v18 = (char *)a3 + 3;
    v5 = *(_WORD *)a3;
    v6 = *(_WORD *)a3;
    v17 = 4LL;
    v19 = 1LL;
    v7 = (v6 >> 1) & 7;
    v20 = &v7;
    v21 = 2LL;
    v8 = (v5 >> 4) & 3;
    v22 = &v8;
    v23 = 2LL;
    v9 = (v5 >> 6) & 1;
    v24 = &v9;
    v25 = 2LL;
    v10 = (v5 >> 7) & 1;
    v26 = &v10;
    v11 = v5 & 1;
    v27 = 2LL;
    v28 = &v11;
    v30 = &v12;
    v32 = (char *)a3 + 2;
    v29 = 2LL;
    v12 = HIBYTE(v5) & 1;
    v31 = 2LL;
    v33 = 1LL;
    TlgWrite(v4, &unk_18026404E, 0LL, 0LL, 0xCu, &pData);
  }
}
