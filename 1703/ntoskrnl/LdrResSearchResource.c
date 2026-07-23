/*
 * XREFs of LdrResSearchResource @ 0x1404295F0
 * Callers:
 *     PspLocateInPEManifest @ 0x1404294F4 (PspLocateInPEManifest.c)
 *     LdrResFindResource @ 0x140582C10 (LdrResFindResource.c)
 *     LdrResFindResourceDirectory @ 0x140585580 (LdrResFindResourceDirectory.c)
 *     SeRegisterElamCertResources @ 0x14059BB90 (SeRegisterElamCertResources.c)
 *     RtlLoadString @ 0x1406E7BA0 (RtlLoadString.c)
 *     AslpFileGetVersionBlock @ 0x1407308C8 (AslpFileGetVersionBlock.c)
 *     KeHwPolicyLocateResource @ 0x140819D00 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x1400120D4 (LdrpResSearchResourceMappedFile.c)
 *     DownLevelLangIDToLanguageName @ 0x140136C20 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x140157950 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     LdrpResGetMappingSize @ 0x14042982C (LdrpResGetMappingSize.c)
 */

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 a1,
        const void *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5,
        __int64 *a6,
        void *a7,
        __int64 a8)
{
  unsigned int v8; // esi
  void *v10; // r14
  int v11; // ecx
  unsigned int v12; // ebx
  bool v13; // zf
  __int64 result; // rax
  unsigned __int16 v15; // ax
  ULONGLONG v16; // [rsp+58h] [rbp-80h] BYREF
  __int64 v17; // [rsp+60h] [rbp-78h]
  _QWORD *v18; // [rsp+68h] [rbp-70h]
  _BYTE v19[16]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp-58h]

  v8 = a3;
  v18 = a5;
  v17 = a8;
  v10 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return 3221225485LL;
  if ( (a4 & 0xC00) != 0 )
    return 3221225714LL;
  v11 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v11 = a4;
  v12 = v11 | 0x1000;
  if ( (v11 & 0x2000) != 0 )
    v12 = v11;
  if ( (v12 & 0xFFF80000) != 0 )
    return 3221225714LL;
  if ( a3 < 3 && (v12 & 2) == 0 || a3 > 4 )
    return 3221225713LL;
  if ( (v12 & 0x41) == 0 )
  {
    if ( a3 != 4 )
      goto LABEL_14;
    goto LABEL_44;
  }
  if ( a3 != 4 )
    return 3221225713LL;
LABEL_44:
  if ( (v12 & 0x41) == 0 )
    return 3221225714LL;
LABEL_14:
  if ( (v12 & 0x100) != 0 )
  {
    v13 = (v12 & 0xE00) == 0;
  }
  else
  {
    if ( (v12 & 0x200) == 0 )
    {
      if ( (v12 & 0xC00) != 0xC00 )
        goto LABEL_17;
      return 3221225714LL;
    }
    v13 = (v12 & 0xC00) == 0;
  }
  if ( !v13 )
    return 3221225714LL;
LABEL_17:
  if ( (~v12 & 0x810) != 0 && (v12 & 0x8000) != 0 || (v12 & 0x3000) == 0x3000 || (v12 & 0x18) == 0x18 )
    return 3221225714LL;
  v16 = 0LL;
  if ( (v12 & 0x20000) != 0 )
  {
    if ( (v12 & 0x400) == 0 || !a6 || !*a6 )
      return 3221225485LL;
    v16 = *a6;
  }
  memmove(v19, a2, 8LL * a3);
  if ( v8 > 3 )
  {
    v8 = 3;
LABEL_25:
    if ( v20 >= 0x10000 )
    {
      if ( *(_WORD *)v20 )
        v15 = DownLevelLanguageNameToLangID((const void *)v20, 2);
      else
        v15 = 0;
      v20 = v15;
    }
    else if ( v20 && ((v20 & 0x3FF) == 0 || v20 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v20, 0LL, 0, 2)) )
    {
      return 3221225485LL;
    }
    goto LABEL_27;
  }
  if ( v8 == 3 )
    goto LABEL_25;
LABEL_27:
  if ( (v12 & 0x300) == 0 )
    return LdrpResSearchResourceMappedFile(v10, v16, v12, (__int64)v19, v8, v18, a6, a7, v17);
  v10 = (void *)a1;
  if ( (v12 & 0x200) != 0 )
  {
    v10 = (void *)(a1 | 1);
    if ( (a1 & 1) != 0 )
      v10 = (void *)a1;
  }
  result = LdrpResGetMappingSize(v10, &v16, v12);
  if ( (int)result >= 0 || (v12 & 0x1000) == 0 )
    return LdrpResSearchResourceMappedFile(v10, v16, v12, (__int64)v19, v8, v18, a6, a7, v17);
  return result;
}
