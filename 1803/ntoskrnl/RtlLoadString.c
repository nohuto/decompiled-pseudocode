/*
 * XREFs of RtlLoadString @ 0x140783060
 * Callers:
 *     <none>
 * Callees:
 *     DownLevelLanguageNameToLangID @ 0x14017A2B8 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     LdrpAccessResourceData @ 0x1405BB814 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x1405BBB44 (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x1405BD3B0 (LdrResSearchResource.c)
 */

NTSTATUS __cdecl RtlLoadString(
        PVOID DllHandle,
        ULONG StringId,
        PCWSTR StringLanguage,
        ULONG Flags,
        PCWSTR *ReturnString,
        PUSHORT ReturnStringLen,
        PWSTR ReturnLanguageName,
        PULONG ReturnLanguageLen)
{
  unsigned __int16 v8; // r12
  unsigned int v10; // ecx
  bool v11; // di
  unsigned __int16 v13; // ax
  NTSTATUS v14; // edx
  unsigned __int16 v15; // cx
  int v16; // ebx
  USHORT v17; // r8
  ULONGLONG v18; // [rsp+40h] [rbp-78h] BYREF
  int v19; // [rsp+48h] [rbp-70h]
  unsigned int *v20; // [rsp+50h] [rbp-68h] BYREF
  unsigned int *v21; // [rsp+58h] [rbp-60h] BYREF
  PCWSTR *v22; // [rsp+60h] [rbp-58h]
  __int64 v23[4]; // [rsp+68h] [rbp-50h] BYREF

  v8 = StringId;
  v22 = ReturnString;
  v20 = 0LL;
  v10 = (unsigned int)StringLanguage;
  if ( (Flags & 1) != 0 )
    v10 = (unsigned int)StringLanguage;
  v11 = !(Flags & 1);
  if ( DllHandle && ReturnString && (Flags & 0xFFFFFFFE) == 0 )
  {
    if ( (Flags & 1) != 0 && (ReturnLanguageName || ReturnLanguageLen) )
      return -1073741637;
    if ( (unsigned int)StringLanguage > 0xFFFF )
    {
      if ( *StringLanguage )
      {
        v13 = DownLevelLanguageNameToLangID(StringLanguage, 2);
        v10 = v13;
        v19 = v13;
        if ( !v13 )
          return -1073741811;
      }
      else
      {
        v10 = 0;
        v19 = 0;
      }
    }
    v23[0] = 6LL;
    v23[1] = (v8 >> 4) + 1;
    v23[2] = v10;
    v23[3] = v8;
    v18 = 0LL;
    if ( v11 )
    {
      v14 = LdrResSearchResource(
              (unsigned __int64)DllHandle,
              v23,
              4u,
              1,
              &v20,
              &v18,
              ReturnLanguageName,
              (__int64)ReturnLanguageLen);
      if ( v14 >= 0 && v18 > 0xFFFF )
        v14 = -1073741701;
    }
    else
    {
      v14 = LdrpSearchResourceSection_U((char *)DllHandle, v23, 4u, 1, &v21);
      if ( v14 < 0 )
        return v14;
      v14 = LdrpAccessResourceData((unsigned __int64)DllHandle, (unsigned __int64)v21);
    }
    if ( v14 >= 0 && v20 )
    {
      v15 = 0;
      v16 = v8 & 0xF;
      v18 >>= 1;
      do
      {
        v17 = *((_WORD *)v20 + v15);
        v15 += v17 + 1;
        if ( v11 && v15 > v18 )
          return -1073741701;
        --v16;
      }
      while ( v16 >= 0 );
      if ( v15 && v17 )
        v15 -= v17;
      *v22 = (PCWSTR)v20 + v15;
      if ( ReturnStringLen )
        *ReturnStringLen = v17;
    }
    return v14;
  }
  return -1073741811;
}
