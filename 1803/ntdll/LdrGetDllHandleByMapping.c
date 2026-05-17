/*
 * XREFs of LdrGetDllHandleByMapping @ 0x18002E040
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18002DC58 @ 0x18002DC58 (sub_18002DC58.c)
 *     sub_1800389D0 @ 0x1800389D0 (sub_1800389D0.c)
 *     sub_1800D0A98 @ 0x1800D0A98 (sub_1800D0A98.c)
 */

__int64 __fastcall LdrGetDllHandleByMapping(unsigned __int64 a1, _QWORD *a2)
{
  int v4; // ebx
  unsigned __int64 v5; // rdi
  _DWORD *v7; // [rsp+28h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = RtlImageNtHeaderEx(1, a1, 0LL, &v7);
  if ( v4 >= 0 )
  {
    v4 = sub_18002DC58(a1, v7, &v9, &v8);
    if ( v4 >= 0 )
    {
      if ( v8 >= 7 )
      {
        v5 = v9;
        v4 = sub_1800389D0(v9);
        if ( v4 >= 0 )
          *a2 = *(_QWORD *)(v5 + 48);
      }
      else
      {
        v4 = -1073741515;
        v5 = v9;
      }
      sub_18001F5FC(v5);
    }
  }
  return (unsigned int)v4;
}
