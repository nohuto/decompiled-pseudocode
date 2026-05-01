/*
 * XREFs of ?HampUtilCreateUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z @ 0x1800082A4
 * Callers:
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z @ 0x180008208 (-HampUtilCreateVolatileUserRegKey@@YAJPEAT_RM_SID@@KPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z @ 0x1800083D0 (-HampSystemCreateKey@@YAJPEAUHKEY__@@PEBGKKPEAPEAU1@@Z.c)
 *     RtlStringCopyWorkerW @ 0x180008410 (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HampUtilCreateUserRegKey(PSID Sid, __int64 a2, HKEY *a3)
{
  unsigned __int16 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ebx
  HKEY v9; // rcx
  HKEY v11; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v13[256]; // [rsp+50h] [rbp-B0h] BYREF

  v11 = 0LL;
  memset_0(v13, 0, 0x1FCuLL);
  *(_DWORD *)&UnicodeString.Length = 33292288;
  UnicodeString.Buffer = v13;
  RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
  v5 = v13;
  v6 = 254LL;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( v6 )
    v7 = 254 - v6;
  else
    v7 = 0LL;
  if ( v6 )
    RtlStringCopyWorkerW(&v13[v7], 254 - v7);
  v8 = HampSystemCreateKey(HKEY_USERS, v13, 0, 4u, &v11);
  if ( v8 < 0 )
  {
    v9 = v11;
  }
  else
  {
    v9 = 0LL;
    *a3 = v11;
    v8 = 0;
    v11 = 0LL;
  }
  if ( v9 )
    RegCloseKey(v9);
  return (unsigned int)v8;
}
