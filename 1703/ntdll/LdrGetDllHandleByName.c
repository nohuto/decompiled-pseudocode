/*
 * XREFs of LdrGetDllHandleByName @ 0x18007B930
 * Callers:
 *     sub_18003C49C @ 0x18003C49C (sub_18003C49C.c)
 * Callees:
 *     sub_18001BDBC @ 0x18001BDBC (sub_18001BDBC.c)
 *     sub_180021AE0 @ 0x180021AE0 (sub_180021AE0.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_1800D7C98 @ 0x1800D7C98 (sub_1800D7C98.c)
 */

__int64 __fastcall LdrGetDllHandleByName(unsigned __int16 *a1, unsigned __int16 *a2, _QWORD *a3)
{
  int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // [rsp+38h] [rbp-10h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_180021AE0(a1, a2, 0, (__int64)&v7, &v8);
  if ( v4 >= 0 )
  {
    if ( v8 < 7 )
    {
      v4 = -1073741515;
      v5 = v7;
    }
    else
    {
      v5 = v7;
      v4 = sub_18001BDBC(v7);
      if ( v4 >= 0 )
        *a3 = *(_QWORD *)(v5 + 48);
    }
    sub_18003015C(v5);
  }
  return (unsigned int)v4;
}
