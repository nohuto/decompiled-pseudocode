/*
 * XREFs of LdrAddRefDll @ 0x1800590F0
 * Callers:
 *     sub_1800254A0 @ 0x1800254A0 (sub_1800254A0.c)
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_18002C774 @ 0x18002C774 (sub_18002C774.c)
 *     sub_180054B20 @ 0x180054B20 (sub_180054B20.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 *     sub_1800389D0 @ 0x1800389D0 (sub_1800389D0.c)
 *     sub_180059158 @ 0x180059158 (sub_180059158.c)
 */

__int64 __fastcall LdrAddRefDll(int a1, unsigned __int64 a2)
{
  char v2; // di
  unsigned __int64 v3; // rdx
  int v4; // ebx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  bool v7; // zf
  unsigned __int64 v8; // rdi
  int v9; // eax
  int v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = sub_18001FA3C(a2, (__int64 *)&v12, &v11);
    if ( v4 >= 0 )
    {
      v7 = (v2 & 1) == 0;
      v8 = v12;
      if ( v7 )
        v9 = sub_1800389D0(v12, v3, v5, v6);
      else
        v9 = sub_180059158(v12);
      v4 = v9;
      sub_18001F5FC(v8);
    }
  }
  return (unsigned int)v4;
}
