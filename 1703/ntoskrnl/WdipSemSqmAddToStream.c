/*
 * XREFs of WdipSemSqmAddToStream @ 0x1407065B4
 * Callers:
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x140454B34 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemSqmLogTimeoutDataPoints @ 0x140706810 (WdipSemSqmLogTimeoutDataPoints.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140467B20 (WdipSemWriteEvent.c)
 */

NTSTATUS __fastcall WdipSemSqmAddToStream(wchar_t *a1, unsigned int a2, ULONGLONG a3)
{
  ULONGLONG v3; // r10
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v12[6]; // [rsp+44h] [rbp-BCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-B0h] BYREF
  int *v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+68h] [rbp-98h]
  int v16; // [rsp+6Ch] [rbp-94h]
  int *v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+7Ch] [rbp-84h]
  int *v20; // [rsp+80h] [rbp-80h]
  int i; // [rsp+88h] [rbp-78h]
  int v22; // [rsp+8Ch] [rbp-74h]
  int v23; // [rsp+260h] [rbp+160h] BYREF

  v23 = (int)a1;
  v3 = a3;
  wcscpy(v12, L"0");
  v10 = a2;
  v11 = 1;
  v9 = 11;
  if ( !a3 || a2 - 1 > 8 )
    return -1073741811;
  v13.Reserved = 0;
  v16 = 0;
  v19 = 0;
  v4 = 0;
  v22 = 0;
  v13.Ptr = (ULONGLONG)&WinSqmGlobalSession;
  v14 = &v23;
  v17 = &v9;
  v20 = (int *)&v10;
  v13.Size = 16;
  v15 = 4;
  v18 = 4;
  for ( i = 4; v4 < a2; *(&v13.Size + 2 * v6) = 4 )
  {
    v5 = 2LL * (3 * v4 + 4);
    *(&v13.Reserved + 2 * v5) = 0;
    *(&v13.Ptr + v5) = (ULONGLONG)&v11;
    *(&v13.Size + 2 * v5) = 4;
    v6 = 6LL * (v4 + 2);
    v7 = 2LL * (3 * v4++ + 5);
    *(&v13.Reserved + 2 * v7) = 0;
    *(&v13.Ptr + v7) = v3;
    v3 += 4LL;
    *(&v13.Size + 2 * v7) = 4;
    a1 = v12;
    *(&v13.Reserved + 2 * v6) = 0;
    *(&v13.Ptr + v6) = (ULONGLONG)v12;
  }
  return WdipSemWriteEvent((__int64)a1, &WDI_SEM_EVENT_SQM_ADD_TO_STREAM, 0LL, 3 * a2 + 4, &v13);
}
