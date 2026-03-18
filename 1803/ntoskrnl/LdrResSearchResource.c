/*
 * XREFs of LdrResSearchResource @ 0x1405BD3B0
 * Callers:
 *     PspLocateInPEManifest @ 0x1405BD2B8 (PspLocateInPEManifest.c)
 *     LdrResFindResource @ 0x140611630 (LdrResFindResource.c)
 *     LdrResFindResourceDirectory @ 0x140613820 (LdrResFindResourceDirectory.c)
 *     SeRegisterElamCertResources @ 0x1406339E0 (SeRegisterElamCertResources.c)
 *     RtlLoadString @ 0x140783060 (RtlLoadString.c)
 *     AslpFileGetVersionBlock @ 0x1407DD710 (AslpFileGetVersionBlock.c)
 *     KeHwPolicyLocateResource @ 0x1408BF970 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x14013FF08 (LdrpResSearchResourceMappedFile.c)
 *     DownLevelLangIDToLanguageName @ 0x14014D880 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14017A2B8 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     LdrpResGetMappingSize @ 0x1405BD604 (LdrpResGetMappingSize.c)
 */

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 a1,
        const void *a2,
        unsigned int a3,
        int a4,
        unsigned int **a5,
        ULONGLONG *a6,
        void *a7,
        __int64 a8)
{
  unsigned int v8; // r14d
  void *v10; // rsi
  int v11; // ecx
  unsigned int v12; // ebx
  bool v13; // zf
  __int64 result; // rax
  int v16; // eax
  unsigned __int16 v17; // ax
  ULONGLONG v18; // [rsp+58h] [rbp-80h] BYREF
  __int64 v19; // [rsp+60h] [rbp-78h]
  unsigned int **v20; // [rsp+68h] [rbp-70h]
  _BYTE v21[16]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp-58h]

  v8 = a3;
  v20 = a5;
  v19 = a8;
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
  v16 = v12 & 0xC00;
  if ( (v12 & 0x200) != 0 )
  {
    v13 = v16 == 0;
LABEL_16:
    if ( v13 )
      goto LABEL_17;
    return (unsigned int)-1073741582;
  }
  if ( v16 == 3072 )
    return (unsigned int)-1073741582;
LABEL_17:
  if ( (v12 & 0x8000) != 0 && (~(_WORD)v12 & 0x810) != 0 || (v12 & 0x3000) == 0x3000 || (v12 & 0x18) == 0x18 )
    return (unsigned int)-1073741582;
  v18 = 0LL;
  if ( (v12 & 0x20000) != 0 )
  {
    if ( (v12 & 0x400) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v18 = *a6;
  }
  memmove(v21, a2, 8LL * a3);
  if ( v8 > 3 )
  {
    v8 = 3;
  }
  else if ( v8 != 3 )
  {
    goto LABEL_28;
  }
  if ( v22 >= 0x10000 )
  {
    if ( *(_WORD *)v22 )
      v17 = DownLevelLanguageNameToLangID((const void *)v22, 2);
    else
      v17 = 0;
    v22 = v17;
  }
  else if ( v22 && ((v22 & 0x3FF) == 0 || v22 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v22, 0LL, 0, 2)) )
  {
    return (unsigned int)-1073741811;
  }
LABEL_28:
  if ( (v12 & 0x300) == 0 )
    return (unsigned int)LdrpResSearchResourceMappedFile(v10, v18, v12, (__int64)v21, v8, v20, a6, a7, v19);
  v10 = (void *)a1;
  if ( (v12 & 0x200) != 0 )
  {
    v10 = (void *)(a1 | 1);
    if ( (a1 & 1) != 0 )
      v10 = (void *)a1;
    if ( (v12 & 0x1000) != 0 && !a1 )
      return 3221225485LL;
  }
  result = LdrpResGetMappingSize(v10, &v18, v12);
  if ( (int)result >= 0 || (v12 & 0x1000) == 0 )
    return (unsigned int)LdrpResSearchResourceMappedFile(v10, v18, v12, (__int64)v21, v8, v20, a6, a7, v19);
  return result;
}
