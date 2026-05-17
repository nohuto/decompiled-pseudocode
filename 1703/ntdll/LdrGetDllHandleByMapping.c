/*
 * XREFs of LdrGetDllHandleByMapping @ 0x18001A750
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001AB40 @ 0x18001AB40 (sub_18001AB40.c)
 *     sub_18001BDBC @ 0x18001BDBC (sub_18001BDBC.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_1800D7C98 @ 0x1800D7C98 (sub_1800D7C98.c)
 */

__int64 __fastcall LdrGetDllHandleByMapping(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = RtlImageNtHeaderEx(1LL, a1, 0LL, &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = sub_18001AB40(a1, v8, &v10, &v9, v4);
    if ( v5 >= 0 )
    {
      if ( v9 >= 7 )
      {
        v6 = v10;
        v5 = sub_18001BDBC(v10);
        if ( v5 >= 0 )
          *a2 = *(_QWORD *)(v6 + 48);
      }
      else
      {
        v5 = -1073741515;
        v6 = v10;
      }
      sub_18003015C(v6);
    }
  }
  return (unsigned int)v5;
}
