/*
 * XREFs of EditionIsPointerInputRedirected @ 0x1C01C9E00
 * Callers:
 *     <none>
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0133004 (INPUTDEST_FROM_PWND.c)
 *     IsPointerInputRedirected @ 0x1C01CA068 (IsPointerInputRedirected.c)
 */

__int64 __fastcall EditionIsPointerInputRedirected(__int64 a1, unsigned int a2, _OWORD *a3)
{
  unsigned int v4; // ebx
  __int128 *v5; // rax
  __int128 v6; // xmm0
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-188h]
  __int128 v9; // [rsp+30h] [rbp-178h]
  __int128 v10; // [rsp+40h] [rbp-168h]
  __int128 v11; // [rsp+50h] [rbp-158h]
  __int128 v12; // [rsp+60h] [rbp-148h]
  __int128 v13; // [rsp+70h] [rbp-138h]
  __int128 v14; // [rsp+80h] [rbp-128h]
  __int128 v15; // [rsp+A0h] [rbp-108h]
  __int128 v16; // [rsp+B0h] [rbp-F8h]
  __int128 v17; // [rsp+C0h] [rbp-E8h]
  __int128 v18; // [rsp+D0h] [rbp-D8h]
  _DWORD v19[50]; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+1C0h] [rbp+18h] BYREF

  v20 = 0LL;
  v4 = IsPointerInputRedirected(a1, *(_QWORD *)(grpdeskRitInput + 8LL), a2, &v20);
  v5 = (__int128 *)INPUTDEST_FROM_PWND(v19, v20);
  v8 = *v5;
  v9 = v5[1];
  v10 = v5[2];
  v11 = v5[3];
  v12 = v5[4];
  v13 = v5[5];
  v14 = v5[6];
  v6 = v5[7];
  v5 += 8;
  v15 = *v5;
  v16 = v5[1];
  v17 = v5[2];
  v18 = v5[3];
  *a3 = v8;
  a3[1] = v9;
  a3[2] = v10;
  a3[3] = v11;
  a3[4] = v12;
  a3[5] = v13;
  a3[6] = v14;
  a3 += 8;
  *(a3 - 1) = v6;
  *a3 = v15;
  a3[1] = v16;
  result = v4;
  a3[2] = v17;
  a3[3] = v18;
  return result;
}
