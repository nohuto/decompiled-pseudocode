/*
 * XREFs of sub_180067670 @ 0x180067670
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067A7C @ 0x180067A7C (sub_180067A7C.c)
 *     sub_180067F8C @ 0x180067F8C (sub_180067F8C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_180067670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // [rsp+20h] [rbp-61h] BYREF
  _WORD v13[4]; // [rsp+28h] [rbp-59h] BYREF
  __int64 v14; // [rsp+30h] [rbp-51h]
  _BYTE v15[24]; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v16; // [rsp+58h] [rbp-29h]
  int v17; // [rsp+60h] [rbp-21h]
  __int16 v18; // [rsp+64h] [rbp-1Dh]
  __int16 v19; // [rsp+66h] [rbp-1Bh]
  unsigned int v20; // [rsp+68h] [rbp-19h]
  int v21; // [rsp+74h] [rbp-Dh]
  __int16 v22; // [rsp+78h] [rbp-9h]

  result = sub_180067F8C(a1, a3, v15, 72LL);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a2 + 16) = v16;
    *(_DWORD *)(a2 + 24) = v17;
    *(_DWORD *)(a2 + 28) = v21;
    *(_WORD *)(a2 + 36) = v22;
    if ( (a5 & 2) != 0 )
    {
      v10 = 500;
      v11 = a4;
      do
      {
        if ( (int)sub_180067F8C(a1, v11, &v12, 4LL) < 0 )
          break;
        v11 = v12;
        if ( v12 == a4 )
          break;
        ++*(_WORD *)(a2 + 34);
        if ( a3 == v11 - 16 )
          break;
        --v10;
      }
      while ( v10 );
    }
    v14 = v20;
    v13[0] = v18;
    v13[1] = v19;
    return sub_180067A7C(a1, v13, a2, 1LL);
  }
  return result;
}
