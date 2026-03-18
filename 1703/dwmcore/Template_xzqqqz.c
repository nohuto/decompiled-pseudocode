/*
 * XREFs of Template_xzqqqz @ 0x1800D265C
 * Callers:
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800BA7E8 (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xzqqqz(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        const wchar_t *a8)
{
  __int64 v8; // rax
  int v9; // edx
  int v10; // r8d
  const wchar_t *v11; // rcx
  bool v12; // zf
  __int64 v14; // rcx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-49h] BYREF
  const wchar_t *v16; // [rsp+30h] [rbp-39h]
  int v17; // [rsp+38h] [rbp-31h]
  int v18; // [rsp+3Ch] [rbp-2Dh]
  char *v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  char *v21; // [rsp+50h] [rbp-19h]
  __int64 v22; // [rsp+58h] [rbp-11h]
  char *v23; // [rsp+60h] [rbp-9h]
  __int64 v24; // [rsp+68h] [rbp-1h]
  const wchar_t *v25; // [rsp+70h] [rbp+7h]
  int v26; // [rsp+78h] [rbp+Fh]
  int v27; // [rsp+7Ch] [rbp+13h]
  __int64 v28; // [rsp+C0h] [rbp+57h] BYREF

  v28 = a3;
  *(_QWORD *)&UserData.Size = 8LL;
  UserData.Ptr = (ULONGLONG)&v28;
  v8 = -1LL;
  v9 = 10;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    v10 = 2 * v14 + 2;
  }
  else
  {
    v10 = 10;
  }
  v17 = v10;
  v19 = &a5;
  v18 = 0;
  v21 = &a6;
  v20 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v23 = &a7;
  v11 = a8;
  v16 = a4;
  v22 = 4LL;
  v24 = 4LL;
  v12 = a8 == 0LL;
  if ( a8 )
  {
    do
      ++v8;
    while ( a8[v8] );
    v9 = 2 * v8 + 2;
    v12 = a8 == 0LL;
  }
  if ( v12 )
    v11 = L"NULL";
  v26 = v9;
  v25 = v11;
  v27 = 0;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ANIMATION_FIRST_FRAME_EVENT, 6u, &UserData);
}
