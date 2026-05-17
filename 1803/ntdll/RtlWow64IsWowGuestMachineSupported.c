/*
 * XREFs of RtlWow64IsWowGuestMachineSupported @ 0x18007E420
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformationEx @ 0x18009D5D0 (ZwQuerySystemInformationEx.c)
 *     __chkstk @ 0x18009F810 (__chkstk.c)
 */

__int64 __fastcall RtlWow64IsWowGuestMachineSupported(unsigned __int16 a1, char *a2)
{
  char v2; // bl
  int v5; // eax
  int v6; // ecx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  int v11; // eax
  __int64 v12; // r8
  int v13; // edx
  _DWORD v15[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v16; // [rsp+38h] [rbp+8h] BYREF

  v2 = 0;
  v16 = 0LL;
  v5 = ZwQuerySystemInformationEx(181LL, &v16, 8LL, 0LL, 0, v15);
  v6 = v5;
  if ( v5 == -1073741789 )
  {
    v7 = v15[0] + 15LL;
    if ( v7 <= v15[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = alloca(v8);
    v10 = alloca(v8);
    v6 = ZwQuerySystemInformationEx(181LL, &v16, 8LL, v15, v15[0], v15);
    if ( v6 >= 0 )
    {
      v11 = v15[0];
      LODWORD(v12) = 0;
      v13 = LOWORD(v15[0]);
      if ( LOWORD(v15[0]) )
      {
        while ( v13 != a1 || (v11 & 0x60000) != 0x20000 )
        {
          v12 = (unsigned int)(v12 + 1);
          v11 = v15[v12];
          v13 = (unsigned __int16)v11;
          if ( !(_WORD)v11 )
            goto LABEL_9;
        }
        v2 = 1;
      }
LABEL_9:
      *a2 = v2;
    }
  }
  else if ( v5 >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v6;
}
