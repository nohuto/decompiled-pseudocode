/*
 * XREFs of RtlWow64GetProcessMachines @ 0x180068580
 * Callers:
 *     sub_180067A7C @ 0x180067A7C (sub_180067A7C.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQuerySystemInformationEx @ 0x1800A7D70 (ZwQuerySystemInformationEx.c)
 *     __chkstk @ 0x1800A9EF0 (__chkstk.c)
 */

__int64 __fastcall RtlWow64GetProcessMachines(__int64 a1, _WORD *a2, _WORD *a3)
{
  int v5; // r9d
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  void *v9; // rsp
  __int16 v10; // r10
  __int16 v11; // r8
  __int64 v12; // r11
  int v13; // ecx
  _DWORD *v14; // rdx
  _DWORD v16[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v17; // [rsp+60h] [rbp+30h] BYREF

  v17 = a1;
  v5 = ZwQuerySystemInformationEx(181LL, &v17, 8LL, 0LL, 0, v16);
  if ( v5 == -1073741789 )
  {
    v6 = v16[0] + 15LL;
    if ( v6 <= v16[0] )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = alloca(v7);
    v9 = alloca(v7);
    v5 = ZwQuerySystemInformationEx(181LL, &v17, 8LL, v16, v16[0], v16);
    if ( v5 >= 0 )
    {
      v10 = 0;
      v11 = 0;
      LODWORD(v12) = 0;
      if ( LOWORD(v16[0]) )
      {
        v13 = v16[0];
        v14 = v16;
        do
        {
          if ( (v13 & 0xC0000) == 0x80000 )
            v10 = *(_WORD *)v14;
          if ( (v13 & 0x40000) != 0 )
            v11 = *(_WORD *)v14;
          v12 = (unsigned int)(v12 + 1);
          v14 = &v16[v12];
          v13 = *v14;
        }
        while ( (unsigned __int16)*v14 );
      }
      *a2 = v10;
      if ( a3 )
        *a3 = v11;
    }
  }
  return (unsigned int)v5;
}
