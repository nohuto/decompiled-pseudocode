/*
 * XREFs of AslStringDuplicate @ 0x1404B523C
 * Callers:
 *     AslFileMappingCreate @ 0x1404B445C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x1405C6FC4 (AslFileMappingCreateFromImageView.c)
 *     AslUnicodeStringCreate @ 0x14072E7B8 (AslUnicodeStringCreate.c)
 *     AslpFileVerQueryBlock @ 0x1407318B0 (AslpFileVerQueryBlock.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14004C7E8 (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x1400815D0 (RtlStringCchCopyW.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  NTSTATUS v4; // ebx
  unsigned __int64 v5; // rbp
  wchar_t *v6; // rax
  wchar_t *v7; // rdi
  const char *v9; // r9
  int v10; // r8d
  size_t pcchLength; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( !a2 )
    return 0;
  v4 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &pcchLength);
  if ( v4 < 0 )
  {
    v9 = "RtlStringCchLengthW failed [%x]";
    v10 = 564;
LABEL_16:
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", v10, (_DWORD)v9);
    return (unsigned int)v4;
  }
  v5 = -1LL;
  if ( pcchLength + 1 >= pcchLength )
    v5 = pcchLength + 1;
  v4 = pcchLength + 1 < pcchLength ? 0xC0000095 : 0;
  if ( pcchLength + 1 < pcchLength )
  {
    v9 = "SIZE_T arithmetic failed [%x]";
    v10 = 575;
    goto LABEL_16;
  }
  if ( !is_mul_ok(v5, 2uLL) )
  {
    v4 = -1073741675;
    v10 = 581;
    v9 = "SIZE_T arithmetic failed [%x]";
    goto LABEL_16;
  }
  v6 = (wchar_t *)AslAlloc(pcchLength, 2 * v5);
  v7 = v6;
  if ( v6 )
  {
    v4 = RtlStringCchCopyW(v6, v5, a2);
    if ( v4 < 0 )
    {
      AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 598, (unsigned int)"RtlStringCchCopyW failed [%x]");
    }
    else
    {
      *a1 = v7;
      v7 = 0LL;
      v4 = 0;
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0x74705041u);
  }
  else
  {
    v4 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringDuplicate", 588, (unsigned int)"Out of memory");
  }
  return (unsigned int)v4;
}
