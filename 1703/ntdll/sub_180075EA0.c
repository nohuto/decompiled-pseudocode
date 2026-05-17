/*
 * XREFs of sub_180075EA0 @ 0x180075EA0
 * Callers:
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003BA40 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     sub_180076144 @ 0x180076144 (sub_180076144.c)
 *     LdrFindEntryForAddress @ 0x180076210 (LdrFindEntryForAddress.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryAttributesFile @ 0x1800A5AA0 (ZwQueryAttributesFile.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180075EA0(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdi
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
  _DWORD v16[12]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v17[32]; // [rsp+C0h] [rbp+1Fh] BYREF
  int v18; // [rsp+E0h] [rbp+3Fh]

  v7 = 0LL;
  memset(&v16[2], 0, 0x28uLL);
  v2 = -1073741823;
  if ( (a1 & 3) != 0 )
  {
    if ( (int)sub_180076144(a1, v16) < 0 )
      return v2;
    LODWORD(v3) = v16[2];
  }
  else
  {
    if ( (int)LdrFindEntryForAddress(a1, &v7) < 0 )
      return v2;
    v3 = *(_QWORD *)(v7 + 80);
  }
  if ( RtlDosPathNameToRelativeNtPathName_U(v3, (int)&v8, 0LL, (__int64)&v9) )
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
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return v2;
}
