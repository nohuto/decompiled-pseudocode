/*
 * XREFs of RtlStringCbCatW @ 0x14006E870
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1400EE8E0 (SeSetLearningModeObjectInformation.c)
 *     WmipInsertStaticNames @ 0x1404BE684 (WmipInsertStaticNames.c)
 *     PnpConcatPWSTR @ 0x1404BEFD4 (PnpConcatPWSTR.c)
 *     EtwStartAutoLogger @ 0x140555730 (EtwStartAutoLogger.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1405A62E0 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     EtwpEnableKeyProviders @ 0x1405AE660 (EtwpEnableKeyProviders.c)
 *     WmipIncludeStaticNames @ 0x140707FDC (WmipIncludeStaticNames.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // r10
  NTSTATUS v4; // r9d
  size_t v7; // rcx
  NTSTRSAFE_PWSTR v8; // rax
  size_t v9; // r8
  wchar_t *v10; // rcx
  size_t v11; // rdx
  __int64 v12; // r10
  char *v13; // r11
  wchar_t v14; // ax

  v3 = cbDest >> 1;
  v4 = 0;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
    goto LABEL_18;
  v7 = cbDest >> 1;
  v8 = pszDest;
  if ( v3 )
  {
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  v4 = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
    v9 = v3 - v7;
  else
LABEL_18:
    v9 = 0LL;
  if ( v4 >= 0 )
  {
    v10 = &pszDest[v9];
    v4 = 0;
    v11 = v3 - v9;
    if ( v3 == v9 )
      goto LABEL_19;
    v12 = 2147483646LL;
    v13 = (char *)((char *)pszSrc - (char *)v10);
    do
    {
      if ( !v12 )
        break;
      v14 = *(wchar_t *)((char *)v10 + (_QWORD)v13);
      if ( !v14 )
        break;
      *v10 = v14;
      --v12;
      ++v10;
      --v11;
    }
    while ( v11 );
    if ( !v11 )
    {
LABEL_19:
      --v10;
      v4 = -2147483643;
    }
    *v10 = 0;
  }
  return v4;
}
