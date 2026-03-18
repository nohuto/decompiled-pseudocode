/*
 * XREFs of BiGetObjectReferenceFromEfiEntry @ 0x1407E4DF4
 * Callers:
 *     BiBuildIdentifierList @ 0x1407E3440 (BiBuildIdentifierList.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1407E5D78 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     strncmp @ 0x140187D50 (strncmp.c)
 *     _wcsupr @ 0x140188B80 (_wcsupr.c)
 *     wcsnlen @ 0x14018A790 (wcsnlen.c)
 *     wcsstr @ 0x14018A850 (wcsstr.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 */

__int64 __fastcall BiGetObjectReferenceFromEfiEntry(_DWORD *a1, GUID *a2)
{
  const wchar_t *v3; // rdi
  unsigned int v4; // ebx
  const void *v5; // rsi
  SIZE_T v6; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rdi
  unsigned int v9; // ebx
  wchar_t *v10; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  WCHAR SourceString[8]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v14; // [rsp+40h] [rbp-19h]
  __int128 v15; // [rsp+50h] [rbp-9h]
  __int128 v16; // [rsp+60h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  __int16 v19; // [rsp+7Ch] [rbp+23h]

  if ( a1[1] >= 0x1Cu
    && a1[6] >= 0x14u
    && (v3 = (const wchar_t *)(a1 + 7), !strncmp((const char *)a1 + 28, "WINDOWS", 7uLL))
    && (v4 = *((_DWORD *)v3 + 3), v4 >= 0x14)
    && *((_DWORD *)v3 + 2)
    && (v5 = v3 + 10, (unsigned int)wcsnlen(v3 + 10, v4 - 20) != v4 - 20) )
  {
    v6 = (unsigned int)(*((_DWORD *)v3 + 3) - 20);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x4B444342u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v5, v6);
      wcsupr(v8);
      v10 = wcsstr(v8, L"BCDOBJECT=");
      if ( v10 && (unsigned __int64)v8 + v6 - (_QWORD)(v10 + 10) >= 0x4E )
      {
        *(_OWORD *)SourceString = *(_OWORD *)(v10 + 10);
        v14 = *(_OWORD *)(v10 + 18);
        v15 = *(_OWORD *)(v10 + 26);
        v16 = *(_OWORD *)(v10 + 34);
        v17 = *(_QWORD *)(v10 + 42);
        v18 = *((_DWORD *)v10 + 23);
        v19 = 0;
        RtlInitUnicodeString(&DestinationString, SourceString);
        v9 = RtlGUIDFromString(&DestinationString, a2);
      }
      else
      {
        v9 = -1073741275;
      }
      ExFreePoolWithTag(v8, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
