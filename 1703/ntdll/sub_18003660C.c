/*
 * XREFs of sub_18003660C @ 0x18003660C
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_180036588 @ 0x180036588 (sub_180036588.c)
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     sub_180038554 @ 0x180038554 (sub_180038554.c)
 *     sub_18005D2C8 @ 0x18005D2C8 (sub_18005D2C8.c)
 *     sub_180081D84 @ 0x180081D84 (sub_180081D84.c)
 *     LdrLoadAlternateResourceModule @ 0x180084380 (LdrLoadAlternateResourceModule.c)
 *     sub_180084574 @ 0x180084574 (sub_180084574.c)
 * Callees:
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_18002FF94 @ 0x18002FF94 (sub_18002FF94.c)
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_18005CB40 @ 0x18005CB40 (sub_18005CB40.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

_DWORD *__fastcall sub_18003660C(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  int v4; // esi
  _DWORD *result; // rax
  int v8; // eax
  _DWORD *v9; // rbx
  _DWORD *v10; // [rsp+50h] [rbp-58h] BYREF
  int v11; // [rsp+58h] [rbp-50h] BYREF
  ULONG *v12; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp-40h] BYREF

  v4 = -1;
  v10 = 0LL;
  if ( a4 )
  {
    result = sub_18002FF94((unsigned __int64)BaseOfImage, 0, 0LL, 8);
    v10 = result;
    if ( result == (_DWORD *)-1LL )
      return 0LL;
    if ( result )
      return result;
  }
  v13[1] = 1LL;
  v13[2] = 0LL;
  v13[0] = L"MUI";
  v8 = sub_180035838(BaseOfImage, (__int64)v13, 3u, 0x30u, (__int64)&v12);
  if ( v8 < 0 )
    goto LABEL_14;
  v8 = sub_18002FC7C(BaseOfImage, v12, &v10, &v11);
  if ( v8 < 0 )
    goto LABEL_14;
  v9 = v10;
  if ( *v10 != -20054323 )
  {
    v8 = -1073741701;
LABEL_14:
    v9 = 0LL;
  }
  if ( a3 )
  {
    if ( v9 )
      v4 = (int)v9;
    sub_18005CB40((_DWORD)BaseOfImage, 0, 0, v4, -1, 0, 2, v8, 0LL);
  }
  return v9;
}
