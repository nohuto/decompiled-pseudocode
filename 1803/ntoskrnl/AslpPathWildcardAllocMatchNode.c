/*
 * XREFs of AslpPathWildcardAllocMatchNode @ 0x1407DB5F8
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1407DA8D8 (AslPathWildcardFindNext.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140008980 (RtlUnicodeStringCopy.c)
 *     RtlUShortAdd @ 0x1400B8CC0 (RtlUShortAdd.c)
 *     ZwOpenFile @ 0x1401A7B20 (ZwOpenFile.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlUnicodeStringCatString @ 0x1402224FC (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCbCatStringN @ 0x1402C2B4C (RtlUnicodeStringCbCatStringN.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1407DB8EC (AslpPathWildcardFreeMatchNode.c)
 */

__int64 __fastcall AslpPathWildcardAllocMatchNode(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        _WORD *a3,
        int a4,
        NTSTRSAFE_PCWSTR pszSrc,
        USHORT a6)
{
  unsigned int v10; // ebx
  USHORT v11; // si
  NTSTATUS v12; // eax
  const char *v13; // r9
  int v14; // r8d
  __int64 v15; // rcx
  SIZE_T v16; // rdx
  wchar_t *v17; // rax
  __int64 ShareAccess; // [rsp+20h] [rbp-50h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  USHORT pusResult; // [rsp+90h] [rbp+20h] BYREF

  memset(DestinationString, 0, 0x20uLL);
  while ( 1 )
  {
    *(_QWORD *)&DestinationString[1].Length = a3;
    if ( !*a3 )
      break;
    ++a3;
  }
  *(_QWORD *)&DestinationString[1].Length = a3 + 1;
  if ( !a3[1] )
  {
    v10 = a4 != 0 ? -1073741638 : -1073741197;
    goto LABEL_26;
  }
  if ( !a4 )
  {
    v10 = -1073741565;
LABEL_27:
    AslpPathWildcardFreeMatchNode(DestinationString);
    return v10;
  }
  v11 = a6;
  pusResult = SourceString->Length;
  v12 = RtlUShortAdd(pusResult, a6, &pusResult);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v12 = RtlUShortAdd(pusResult, 4u, &pusResult);
    v10 = v12;
    if ( v12 >= 0 )
    {
      v16 = pusResult;
      DestinationString->MaximumLength = pusResult;
      DestinationString->Length = 0;
      v17 = (wchar_t *)AslAlloc(v15, v16);
      DestinationString->Buffer = v17;
      if ( !v17 )
      {
        v10 = -1073741801;
        goto LABEL_27;
      }
      v12 = RtlUnicodeStringCopy(DestinationString, SourceString);
      v10 = v12;
      if ( v12 >= 0 )
      {
        if ( DestinationString->Buffer[((unsigned __int64)DestinationString->Length >> 1) - 1] == 92
          || (v12 = RtlUnicodeStringCatString(DestinationString, L"\\"), v10 = v12, v12 >= 0) )
        {
          if ( pszSrc && v11 && (v12 = RtlUnicodeStringCbCatStringN(DestinationString, pszSrc, v11), v10 = v12, v12 < 0) )
          {
            v13 = "RtlUnicodeStringCbCatStringN failed [%x]";
            v14 = 2899;
          }
          else
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            ObjectAttributes.ObjectName = DestinationString;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v12 = ZwOpenFile(
                    (PHANDLE)&DestinationString[1].Buffer,
                    0x100001u,
                    &ObjectAttributes,
                    &IoStatusBlock,
                    1u,
                    0x21u);
            v10 = v12;
            if ( v12 >= 0 )
              return v10;
            v13 = "Failed to open dir [%x]";
            v14 = 2913;
          }
        }
        else
        {
          v13 = "RtlUnicodeStringCatString failed [%x]";
          v14 = 2891;
        }
      }
      else
      {
        v13 = "RtlUnicodeStringCopy failed [%x]";
        v14 = 2875;
      }
    }
    else
    {
      v13 = "RtlUShortAdd failed [%x]";
      v14 = 2860;
    }
  }
  else
  {
    v13 = "RtlUShortAdd failed [%x]";
    v14 = 2854;
  }
  LODWORD(ShareAccess) = v12;
  AslLogCallPrintf(1LL, (unsigned int)"AslpPathWildcardAllocMatchNode", v14, (_DWORD)v13, ShareAccess);
LABEL_26:
  if ( (v10 & 0x80000000) != 0 )
    goto LABEL_27;
  return v10;
}
