/*
 * XREFs of LdrAddRefDll @ 0x18001AD60
 * Callers:
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 *     sub_180014660 @ 0x180014660 (sub_180014660.c)
 *     sub_180016110 @ 0x180016110 (sub_180016110.c)
 *     sub_180016810 @ 0x180016810 (sub_180016810.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 *     sub_180080D00 @ 0x180080D00 (sub_180080D00.c)
 * Callees:
 *     sub_18001A084 @ 0x18001A084 (sub_18001A084.c)
 *     sub_18001BDBC @ 0x18001BDBC (sub_18001BDBC.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 */

__int64 __fastcall LdrAddRefDll(int a1, __int64 a2)
{
  char v2; // di
  int v3; // ebx
  bool v4; // zf
  __int64 v5; // rdi
  int v6; // eax
  char v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v3 = sub_180030264(a2, &v9, &v8);
    if ( v3 >= 0 )
    {
      v4 = (v2 & 1) == 0;
      v5 = v9;
      if ( v4 )
        v6 = sub_18001BDBC(v9);
      else
        v6 = sub_18001A084(v9);
      v3 = v6;
      sub_18003015C(v5);
    }
  }
  return (unsigned int)v3;
}
