/*
 * XREFs of Template_pffffss @ 0x180161250
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_pffffss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        char a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  const char *v13; // rcx
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-61h] BYREF
  float *v17; // [rsp+30h] [rbp-51h]
  __int64 v18; // [rsp+38h] [rbp-49h]
  char *v19; // [rsp+40h] [rbp-41h]
  __int64 v20; // [rsp+48h] [rbp-39h]
  char *v21; // [rsp+50h] [rbp-31h]
  __int64 v22; // [rsp+58h] [rbp-29h]
  char *v23; // [rsp+60h] [rbp-21h]
  __int64 v24; // [rsp+68h] [rbp-19h]
  const char *v25; // [rsp+70h] [rbp-11h]
  int v26; // [rsp+78h] [rbp-9h]
  int v27; // [rsp+7Ch] [rbp-5h]
  const char *v28; // [rsp+80h] [rbp-1h]
  int v29; // [rsp+88h] [rbp+7h]
  int v30; // [rsp+8Ch] [rbp+Bh]
  __int64 v31; // [rsp+D0h] [rbp+4Fh] BYREF
  float v32; // [rsp+D8h] [rbp+57h] BYREF

  v32 = a4;
  v31 = a3;
  v9 = a8;
  UserData.Ptr = (ULONGLONG)&v31;
  *(_QWORD *)&UserData.Size = 8LL;
  v17 = &v32;
  v19 = &a5;
  v21 = &a6;
  v18 = 4LL;
  v23 = &a7;
  v10 = -1LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  if ( a8 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a8[v11] );
    v12 = v11 + 1;
  }
  else
  {
    v12 = 5;
  }
  v26 = v12;
  v13 = a9;
  if ( !a8 )
    v9 = "NULL";
  v27 = 0;
  v25 = v9;
  if ( a9 )
  {
    do
      ++v10;
    while ( a9[v10] );
    v14 = v10 + 1;
  }
  else
  {
    v14 = 5;
  }
  v30 = 0;
  v29 = v14;
  if ( !a9 )
    v13 = "NULL";
  v28 = v13;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_VISUAL_RENDERCONTENT, 7u, &UserData);
}
