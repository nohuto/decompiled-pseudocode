/*
 * XREFs of AslStringDuplicate @ 0x1405FC890
 * Callers:
 *     AslFileMappingCreate @ 0x1405FC418 (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x140644174 (AslFileMappingCreateFromImageView.c)
 *     AslRegWildcardFindFirst @ 0x1407DB388 (AslRegWildcardFindFirst.c)
 *     AslpFileVerQueryBlock @ 0x1407DE780 (AslpFileVerQueryBlock.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14006D220 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  size_t v6; // rbp
  wchar_t *v7; // rax
  wchar_t *v8; // rdi
  NTSTATUS v9; // eax
  size_t pcchLength; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( a2 )
  {
    v4 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength);
    v5 = v4;
    if ( v4 < 0 )
    {
      AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 565, (unsigned int)"RtlStringCchLengthW failed [%x]", v4);
    }
    else
    {
      v6 = -1LL;
      if ( pcchLength + 1 >= pcchLength )
        v6 = pcchLength + 1;
      v5 = pcchLength + 1 < pcchLength ? 0xC0000095 : 0;
      if ( pcchLength + 1 < pcchLength )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"AslStringDuplicate",
          576,
          (unsigned int)"SIZE_T arithmetic failed [%x]",
          pcchLength + 1 < pcchLength ? 0xC0000095 : 0);
      }
      else if ( is_mul_ok(v6, 2uLL) )
      {
        v7 = (wchar_t *)AslAlloc(pcchLength, 2 * v6);
        v8 = v7;
        if ( v7 )
        {
          v9 = RtlStringCchCopyW(v7, v6, a2);
          v5 = v9;
          if ( v9 < 0 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"AslStringDuplicate",
              599,
              (unsigned int)"RtlStringCchCopyW failed [%x]",
              v9);
          }
          else
          {
            *a1 = v8;
            v8 = 0LL;
            v5 = 0;
          }
          if ( v8 )
            ExFreePoolWithTag(v8, 0x74705041u);
        }
        else
        {
          v5 = -1073741801;
          AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 589, (unsigned int)"Out of memory");
        }
      }
      else
      {
        v5 = -1073741675;
        AslLogCallPrintf(
          1,
          (unsigned int)"AslStringDuplicate",
          582,
          (unsigned int)"SIZE_T arithmetic failed [%x]",
          -1073741675);
      }
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
