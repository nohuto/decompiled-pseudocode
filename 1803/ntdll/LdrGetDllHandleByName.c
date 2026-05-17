/*
 * XREFs of LdrGetDllHandleByName @ 0x1800772B0
 * Callers:
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 * Callees:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_1800385D0 @ 0x1800385D0 (sub_1800385D0.c)
 *     sub_1800389D0 @ 0x1800389D0 (sub_1800389D0.c)
 *     sub_1800D0A98 @ 0x1800D0A98 (sub_1800D0A98.c)
 */

__int64 __fastcall LdrGetDllHandleByName(unsigned __int16 *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rdx
  int v5; // ebx
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // [rsp+38h] [rbp-10h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v5 = sub_1800385D0(a1, a2, 0LL, (unsigned __int16 *)&v10, &v11);
  if ( v5 >= 0 )
  {
    if ( v11 < 7 )
    {
      v5 = -1073741515;
      v8 = v10;
    }
    else
    {
      v8 = v10;
      v5 = sub_1800389D0(v10, v4, v6, v7);
      if ( v5 >= 0 )
        *a3 = *(_QWORD *)(v8 + 48);
    }
    sub_18001F5FC(v8);
  }
  return (unsigned int)v5;
}
