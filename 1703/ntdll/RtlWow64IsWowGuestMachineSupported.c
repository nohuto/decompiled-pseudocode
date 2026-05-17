/*
 * XREFs of RtlWow64IsWowGuestMachineSupported @ 0x180084FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformationEx @ 0x1800A7D70 (ZwQuerySystemInformationEx.c)
 *     __chkstk @ 0x1800A9EF0 (__chkstk.c)
 */

__int64 __fastcall RtlWow64IsWowGuestMachineSupported(unsigned __int16 a1, char *a2)
{
  char v2; // bl
  int v5; // r8d
  int v6; // eax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  void *v10; // rsp
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ecx
  _DWORD v15[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v16; // [rsp+38h] [rbp+8h] BYREF

  v2 = 0;
  v5 = 0;
  if ( a1 == 0x8664 )
  {
LABEL_11:
    *a2 = v2;
    return (unsigned int)v5;
  }
  v16 = 0LL;
  v6 = ZwQuerySystemInformationEx(181LL, &v16, 8LL, 0LL, 0, v15);
  v5 = v6;
  if ( v6 == -1073741789 )
  {
    v7 = v15[0] + 15LL;
    if ( v7 <= v15[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    v9 = alloca(v8);
    v10 = alloca(v8);
    v5 = ZwQuerySystemInformationEx(181LL, &v16, 8LL, v15, v15[0], v15);
    if ( v5 >= 0 )
    {
      LODWORD(v11) = 0;
      if ( LOWORD(v15[0]) )
      {
        v12 = v15[0];
        v13 = LOWORD(v15[0]);
        while ( v13 != a1 || (v12 & 0x60000) != 0x20000 )
        {
          v11 = (unsigned int)(v11 + 1);
          v12 = v15[v11];
          v13 = (unsigned __int16)v12;
          if ( !(_WORD)v12 )
            goto LABEL_11;
        }
        v2 = 1;
      }
      goto LABEL_11;
    }
  }
  else if ( v6 >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v5;
}
