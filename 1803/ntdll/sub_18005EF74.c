/*
 * XREFs of sub_18005EF74 @ 0x18005EF74
 * Callers:
 *     sub_18005EC0C @ 0x18005EC0C (sub_18005EC0C.c)
 * Callees:
 *     sub_18001182C @ 0x18001182C (sub_18001182C.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 */

__int64 __fastcall sub_18005EF74(int *a1, _QWORD *a2, _DWORD *a3)
{
  int v3; // ebx
  __int128 v5; // xmm0
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v9; // eax
  __int64 result; // rax
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1;
  v5 = *((_OWORD *)a1 + 6);
  v6 = *((_QWORD *)a1 + 14);
  v7 = (unsigned int)-v3;
  v12 = v7;
  v11 = v5;
  v9 = sub_180011A6C(v6, (*(_DWORD *)(v6 + 20) & 0x40000000) != 0 ? 64 : 4);
  result = sub_18001182C(&v13, &v12, v7, 0x2000, v9, &v11, 0LL);
  if ( (int)result >= 0 )
  {
    *a3 = v12;
    *a2 = v13;
  }
  return result;
}
