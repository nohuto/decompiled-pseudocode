/*
 * XREFs of LdrResSearchResource @ 0x1404DB330
 * Callers:
 *     PspLocateInPEManifest @ 0x1404DA970 (PspLocateInPEManifest.c)
 *     SeRegisterElamCertResources @ 0x1405D9BA0 (SeRegisterElamCertResources.c)
 *     LdrResFindResource @ 0x1405DEEB0 (LdrResFindResource.c)
 *     LdrResFindResourceDirectory @ 0x1405ED110 (LdrResFindResourceDirectory.c)
 *     RtlLoadString @ 0x14071F980 (RtlLoadString.c)
 *     AslpFileGetVersionBlock @ 0x1407749CC (AslpFileGetVersionBlock.c)
 *     KeHwPolicyLocateResource @ 0x14084A2E0 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x1400ADB40 (LdrpResSearchResourceMappedFile.c)
 *     DownLevelLangIDToLanguageName @ 0x1401326FC (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x140141F70 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     LdrpResGetMappingSize @ 0x1404DB574 (LdrpResGetMappingSize.c)
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
  unsigned int v8; // r14d
  void *v10; // rsi
  int v11; // ecx
  unsigned int v12; // ebx
  bool v13; // zf
  __int64 result; // rax
  unsigned __int16 v16; // ax
  ULONGLONG v17; // [rsp+58h] [rbp-80h] BYREF
  __int64 v18; // [rsp+60h] [rbp-78h]
  _QWORD *v19; // [rsp+68h] [rbp-70h]
  _BYTE v20[16]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp-58h]

  v8 = a3;
  v19 = a5;
  v18 = a8;
  v10 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return (unsigned int)-1073741811;
  if ( (a4 & 0xC00) != 0 )
    return (unsigned int)-1073741582;
  v11 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v11 = a4;
  v12 = v11 | 0x1000;
  if ( (v11 & 0x2000) != 0 )
    v12 = v11;
  if ( (v12 & 0xFFF80000) != 0 )
    return (unsigned int)-1073741582;
  if ( a3 < 3 && (v12 & 2) == 0 || a3 > 4 )
    return (unsigned int)-1073741583;
  if ( (v12 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_14;
  }
  if ( (v12 & 0x41) == 0 )
    return 3221225714LL;
LABEL_14:
  if ( (v12 & 0x100) != 0 )
  {
    v13 = (v12 & 0xE00) == 0;
    goto LABEL_16;
  }
  if ( (v12 & 0x200) != 0 )
  {
    v13 = (v12 & 0xC00) == 0;
LABEL_16:
    if ( v13 )
      goto LABEL_17;
    return (unsigned int)-1073741582;
  }
  if ( (v12 & 0xC00) == 0xC00 )
    return (unsigned int)-1073741582;
LABEL_17:
  if ( (v12 & 0x8000) != 0 && (~(_WORD)v12 & 0x810) != 0 || (v12 & 0x3000) == 0x3000 || (v12 & 0x18) == 0x18 )
    return (unsigned int)-1073741582;
  v17 = 0LL;
  if ( (v12 & 0x20000) != 0 )
  {
    if ( (v12 & 0x400) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v17 = *a6;
  }
  memmove(v20, a2, 8LL * a3);
  if ( v8 > 3 )
  {
    v8 = 3;
  }
  else if ( v8 != 3 )
  {
    goto LABEL_28;
  }
  if ( v21 >= 0x10000 )
  {
    if ( *(_WORD *)v21 )
      v16 = DownLevelLanguageNameToLangID((const void *)v21, 2);
    else
      v16 = 0;
    v21 = v16;
  }
  else if ( v21 && ((v21 & 0x3FF) == 0 || v21 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v21, 0LL, 0, 2)) )
  {
    return (unsigned int)-1073741811;
  }
LABEL_28:
  if ( (v12 & 0x300) == 0 )
    return (unsigned int)LdrpResSearchResourceMappedFile(v10, v17, v12, (__int64)v20, v8, v19, a6, a7, v18);
  v10 = (void *)a1;
  if ( (v12 & 0x200) != 0 )
  {
    v10 = (void *)(a1 | 1);
    if ( (a1 & 1) != 0 )
      v10 = (void *)a1;
    if ( (v12 & 0x1000) != 0 && !a1 )
      return 3221225485LL;
  }
  result = LdrpResGetMappingSize(v10, &v17, v12);
  if ( (int)result >= 0 || (v12 & 0x1000) == 0 )
    return (unsigned int)LdrpResSearchResourceMappedFile(v10, v17, v12, (__int64)v20, v8, v19, a6, a7, v18);
  return result;
}
