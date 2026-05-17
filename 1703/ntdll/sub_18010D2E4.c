/*
 * XREFs of sub_18010D2E4 @ 0x18010D2E4
 * Callers:
 *     sub_18010D6E8 @ 0x18010D6E8 (sub_18010D6E8.c)
 *     sub_18010D87C @ 0x18010D87C (sub_18010D87C.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlDosPathNameToNtPathName_U @ 0x18003BB30 (RtlDosPathNameToNtPathName_U.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryAttributesFile @ 0x1800A5AA0 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall sub_18010D2E4(int a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdi
  int AttributesFile; // ebx
  char v4; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-70h]
  int v6; // [rsp+30h] [rbp-68h]
  __int64 v7; // [rsp+38h] [rbp-60h]
  char *v8; // [rsp+40h] [rbp-58h]
  int v9; // [rsp+48h] [rbp-50h]
  __int128 v10; // [rsp+50h] [rbp-48h]
  unsigned int v11; // [rsp+80h] [rbp-18h]

  if ( RtlDosPathNameToNtPathName_U(a1, (int)&v4, 0LL, 0LL) )
  {
    v2 = v5;
    v7 = 0LL;
    v8 = &v4;
    v6 = 48;
    v10 = 0LL;
    v9 = 64;
    AttributesFile = ZwQueryAttributesFile();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
    result = 0xFFFFFFFFLL;
    if ( AttributesFile >= 0 )
      return v11;
  }
  else
  {
    RtlSetLastWin32Error(3u);
    return 0xFFFFFFFFLL;
  }
  return result;
}
