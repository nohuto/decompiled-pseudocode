/*
 * XREFs of sub_1800F9414 @ 0x1800F9414
 * Callers:
 *     sub_1800E91E0 @ 0x1800E91E0 (sub_1800E91E0.c)
 * Callees:
 *     sub_180001E28 @ 0x180001E28 (sub_180001E28.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800F9748 @ 0x1800F9748 (sub_1800F9748.c)
 */

__int64 __fastcall sub_1800F9414(__int64 a1, __int16 a2, unsigned int *a3, _WORD *a4, unsigned int a5, _DWORD *a6)
{
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int16 *v9; // rdx
  __int64 v10; // rdx
  unsigned int v12; // ecx
  int v13; // [rsp+20h] [rbp-E8h] BYREF
  char *v14; // [rsp+28h] [rbp-E0h]
  char v15; // [rsp+30h] [rbp-D8h] BYREF

  if ( !a1 || !a3 || !a4 || !a5 || !a6 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
    return 3221226021LL;
  v8 = *(_QWORD *)(v7 + 16);
  if ( !v8 || a2 < 0 || a2 >= (int)*(unsigned __int16 *)(v7 + 6) )
    return 3221226021LL;
  v9 = (unsigned __int16 *)(v8 + 28LL * a2);
  *a3 = v9[2];
  *a6 = *v9;
  v10 = v9[3];
  if ( (__int16)v10 > 0 )
    return sub_1800F9748(a1, v10, a4, a5);
  v12 = *a3;
  v14 = &v15;
  v13 = 11141120;
  if ( RtlLCIDToCultureName(v12, (__int64)&v13) )
    return sub_180001E28(a4, a5, (__int64)v14);
  else
    return 3221226021LL;
}
