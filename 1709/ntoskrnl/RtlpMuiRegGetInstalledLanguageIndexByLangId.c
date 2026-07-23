/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1405BDFE4
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401418D0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405BD8FC (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x14078AD24 (RtlpMuiRegGetInstalledLanguageIndex.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x1401415DC (_MuiRegAllocArray.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlLCIDToCultureName @ 0x140723C40 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x14078AE74 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndexByLangId(__int64 a1, unsigned __int16 a2, char a3, _WORD *a4)
{
  __int64 result; // rax
  unsigned int InstalledLanguageIndexByName; // ebx
  char v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rdx
  __int16 v15; // r9
  wchar_t *v16; // rax
  wchar_t *v17; // rdi
  __int64 v18; // r8
  UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF

  result = 3221225524LL;
  InstalledLanguageIndexByName = -1073741772;
  v10 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a2 != 4096 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v12 = 0LL;
    if ( !*(_WORD *)(v11 + 6) )
    {
LABEL_15:
      v16 = (wchar_t *)MuiRegAllocArray(v12, 0x55u);
      v17 = v16;
      if ( v16 )
      {
        if ( a3 )
        {
          String.Buffer = v16;
          if ( RtlLCIDToCultureName(a2, &String) )
            InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(a1, String.Buffer, v18, a4);
        }
        ExFreePoolWithTag(v17, 0);
        if ( v10 && InstalledLanguageIndexByName == -1073741772 )
          return 3221225659LL;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
      return InstalledLanguageIndexByName;
    }
    v13 = *(_QWORD *)(v11 + 16);
    while ( 1 )
    {
      v14 = 28LL * (int)v12;
      if ( *(_WORD *)(v14 + v13 + 4) == a2 )
      {
        v15 = *(_WORD *)(v14 + v13);
        if ( (v15 & 0x1020) == 0x20 )
        {
          if ( a4 )
            *a4 = v12;
          return 0LL;
        }
        if ( (v15 & 0x1000) != 0 )
          v10 = 1;
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (int)v12 >= *(unsigned __int16 *)(v11 + 6) )
        goto LABEL_15;
    }
  }
  return result;
}
