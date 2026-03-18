/*
 * XREFs of IopFileUtilWalkDirectoryTreeBottomUp @ 0x1405E7D70
 * Callers:
 *     NtEnableLastKnownGood @ 0x1405E7AE0 (NtEnableLastKnownGood.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1405E7F0C (IopFileUtilWalkDirectoryTreeHelper.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeBottomUp(PCUNICODE_STRING SourceString)
{
  int v2; // edi
  SIZE_T v3; // r14
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  PVOID v9; // rbx
  PVOID *v10; // rax
  int v11; // [rsp+30h] [rbp-D8h]
  PVOID P; // [rsp+48h] [rbp-C0h] BYREF
  PVOID p_P; // [rsp+50h] [rbp-B8h]
  __int64 v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE FileInformation[1024]; // [rsp+68h] [rbp-A0h] BYREF

  p_P = &P;
  P = &P;
  v2 = 0;
  v14[1] = (__int64)v14;
  v14[0] = (__int64)v14;
  v3 = (unsigned int)SourceString->Length + 38;
  PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v3, 0x75466F49u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v3);
    v5[1].Length = 0;
    v5[1].MaximumLength = SourceString->Length;
    v5[1].Buffer = &v5[2].Length;
    RtlCopyUnicodeString(v5 + 1, SourceString);
    v6 = P;
    if ( *((PVOID **)P + 1) != &P )
      __fastfail(3u);
    *(_QWORD *)&v5->Length = P;
    v5->Buffer = (wchar_t *)&P;
    v6[1] = v5;
    P = v5;
    if ( v5 == (UNICODE_STRING *)&P )
      goto LABEL_16;
    while ( 1 )
    {
      v2 = IopFileUtilWalkDirectoryTreeHelper((int)v5 + 16, 8, 0, 0, FileInformation, v11, (__int64)&P);
      if ( v2 < 0 )
        break;
      v5 = *(UNICODE_STRING **)&v5->Length;
      if ( v5 == (UNICODE_STRING *)&P )
      {
        while ( 1 )
        {
          v5 = (UNICODE_STRING *)P;
LABEL_16:
          if ( v5 == (UNICODE_STRING *)&P )
            break;
          v9 = p_P;
          if ( *(PVOID **)p_P != &P || (v10 = (PVOID *)*((_QWORD *)p_P + 1), *v10 != p_P) )
            __fastfail(3u);
          p_P = (PVOID)*((_QWORD *)p_P + 1);
          *v10 = &P;
          v2 = IopFileUtilWalkDirectoryTreeHelper(
                 (int)v9 + 16,
                 7,
                 (int)PpLastGoodDeleteFilesCallback,
                 0,
                 FileInformation,
                 v11,
                 (__int64)v14);
          ExFreePoolWithTag(v9, 0x75466F49u);
        }
        if ( v2 < 0 )
          goto LABEL_6;
        return (unsigned int)v2;
      }
    }
  }
  else
  {
    v2 = -1073741670;
  }
  while ( 1 )
  {
    v5 = (UNICODE_STRING *)P;
LABEL_6:
    if ( v5 == (UNICODE_STRING *)&P )
      break;
    if ( (PVOID *)v5->Buffer != &P
      || (v7 = *(_QWORD *)&v5->Length, *(UNICODE_STRING **)(*(_QWORD *)&v5->Length + 8LL) != v5) )
    {
      __fastfail(3u);
    }
    P = *(PVOID *)&v5->Length;
    *(_QWORD *)(v7 + 8) = &P;
    ExFreePoolWithTag(v5, 0x75466F49u);
  }
  return (unsigned int)v2;
}
