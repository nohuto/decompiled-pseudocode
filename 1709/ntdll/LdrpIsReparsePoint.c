/*
 * XREFs of LdrpIsReparsePoint @ 0x180018D88
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002B4CC (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180018ED0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrpGetLoadAsEntry @ 0x180019068 (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x180019140 (LdrFindEntryForAddress.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A0860 (ZwQueryAttributesFile.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall LdrpIsReparsePoint(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v7; // [rsp+28h] [rbp-79h] BYREF
  __int128 v8; // [rsp+30h] [rbp-71h] BYREF
  __int128 v9; // [rsp+40h] [rbp-61h] BYREF
  __int64 v10; // [rsp+50h] [rbp-51h]
  int v11; // [rsp+60h] [rbp-41h] BYREF
  __int64 v12; // [rsp+68h] [rbp-39h]
  __int128 *v13; // [rsp+70h] [rbp-31h]
  int v14; // [rsp+78h] [rbp-29h]
  __int128 v15; // [rsp+80h] [rbp-21h]
  _QWORD v16[6]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v17[32]; // [rsp+C0h] [rbp+1Fh] BYREF
  int v18; // [rsp+E0h] [rbp+3Fh]

  v7 = 0LL;
  memset(&v16[1], 0, 0x28uLL);
  v2 = -1073741823;
  if ( (a1 & 3) != 0 )
  {
    if ( (int)LdrpGetLoadAsEntry(a1, v16) < 0 )
      return v2;
    v3 = v16[1];
  }
  else
  {
    if ( (int)LdrFindEntryForAddress(a1, &v7) < 0 )
      return v2;
    v3 = *(_QWORD *)(v7 + 80);
  }
  if ( (unsigned __int8)RtlDosPathNameToRelativeNtPathName_U(v3, &v8, 0LL, &v9) )
  {
    v4 = *((_QWORD *)&v8 + 1);
    if ( (_WORD)v9 )
    {
      v5 = v10;
      v8 = v9;
    }
    else
    {
      v5 = 0LL;
    }
    v11 = 48;
    v14 = 64;
    v13 = &v8;
    v12 = v5 & -(__int64)(v4 != 0);
    v15 = 0LL;
    if ( (int)ZwQueryAttributesFile(&v11, v17) >= 0 && (v18 & 0x400) != 0 )
      v2 = 0;
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v4);
  }
  return v2;
}
