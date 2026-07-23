/*
 * XREFs of BiUpdateObjectReferenceInEfiEntry @ 0x14077D278
 * Callers:
 *     BiCreateEfiEntry @ 0x14077B3C8 (BiCreateEfiEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsupr @ 0x14015EE20 (_wcsupr.c)
 *     wcsstr @ 0x1401606A0 (wcsstr.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     BcdQueryObject @ 0x1405AE960 (BcdQueryObject.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x14077C3A8 (BiGetObjectReferenceFromEfiEntry.c)
 */

__int64 __fastcall BiUpdateObjectReferenceInEfiEntry(_DWORD *a1, void *a2)
{
  int ObjectReferenceFromEfiEntry; // ebx
  __int64 v5; // rax
  SIZE_T v6; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rsi
  wchar_t *v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  GUID Identifier; // [rsp+30h] [rbp-30h] BYREF
  GUID v13; // [rsp+40h] [rbp-20h] BYREF

  ObjectReferenceFromEfiEntry = BiGetObjectReferenceFromEfiEntry(a1, &v13);
  if ( ObjectReferenceFromEfiEntry >= 0 )
  {
    ObjectReferenceFromEfiEntry = BcdQueryObject(a2, 0, 0LL, &Identifier);
    if ( ObjectReferenceFromEfiEntry >= 0 )
    {
      v5 = *(_QWORD *)&v13.Data1 - *(_QWORD *)&Identifier.Data1;
      if ( *(_QWORD *)&v13.Data1 == *(_QWORD *)&Identifier.Data1 )
        v5 = *(_QWORD *)v13.Data4 - *(_QWORD *)Identifier.Data4;
      if ( v5 )
      {
        v6 = (unsigned int)(a1[10] - 20);
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x4B444342u);
        v8 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, a1 + 12, v6);
          wcsupr(v8);
          v9 = wcsstr(v8, L"BCDOBJECT=");
          if ( v9 )
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            ObjectReferenceFromEfiEntry = RtlStringFromGUIDEx(&Identifier, &DestinationString, 1u);
            if ( ObjectReferenceFromEfiEntry >= 0 )
            {
              memmove(
                (char *)a1 + 2 * ((unsigned __int64)(v9 - v8) >> 1) + 68,
                DestinationString.Buffer,
                DestinationString.Length);
              RtlFreeUnicodeString(&DestinationString);
            }
          }
          else
          {
            ObjectReferenceFromEfiEntry = -1073741275;
          }
          ExFreePoolWithTag(v8, 0x4B444342u);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)ObjectReferenceFromEfiEntry;
}
