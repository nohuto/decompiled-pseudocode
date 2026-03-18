/*
 * XREFs of Template_pdsddt @ 0x180145904
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x180005394 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_pdsddt(__int64 a1, __int64 a2, __int64 a3, int a4, const char *a5, char a6, char a7, char a8)
{
  const char *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-49h] BYREF
  int *v13; // [rsp+30h] [rbp-39h]
  __int64 v14; // [rsp+38h] [rbp-31h]
  const char *v15; // [rsp+40h] [rbp-29h]
  int v16; // [rsp+48h] [rbp-21h]
  int v17; // [rsp+4Ch] [rbp-1Dh]
  char *v18; // [rsp+50h] [rbp-19h]
  __int64 v19; // [rsp+58h] [rbp-11h]
  char *v20; // [rsp+60h] [rbp-9h]
  __int64 v21; // [rsp+68h] [rbp-1h]
  char *v22; // [rsp+70h] [rbp+7h]
  __int64 v23; // [rsp+78h] [rbp+Fh]
  __int64 v24; // [rsp+C0h] [rbp+57h] BYREF
  int v25; // [rsp+C8h] [rbp+5Fh] BYREF

  v25 = a4;
  v24 = a3;
  v8 = a5;
  UserData.Ptr = (ULONGLONG)&v24;
  *(_QWORD *)&UserData.Size = 8LL;
  v13 = &v25;
  v14 = 4LL;
  if ( a5 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a5[v9] );
    v10 = v9 + 1;
  }
  else
  {
    v10 = 5;
  }
  v16 = v10;
  v17 = 0;
  v19 = 4LL;
  if ( !a5 )
    v8 = "NULL";
  v18 = &a6;
  v15 = v8;
  v20 = &a7;
  v21 = 4LL;
  v22 = &a8;
  v23 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_EFFECT_COMPILE_Info, 6u, &UserData);
}
