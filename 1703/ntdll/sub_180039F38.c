/*
 * XREFs of sub_180039F38 @ 0x180039F38
 * Callers:
 *     sub_18003A7B0 @ 0x18003A7B0 (sub_18003A7B0.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_18007A01C @ 0x18007A01C (sub_18007A01C.c)
 *     sub_1800812A8 @ 0x1800812A8 (sub_1800812A8.c)
 *     sub_180089798 @ 0x180089798 (sub_180089798.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_180039F38(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  int v6; // r10d
  int v7; // eax
  int v8; // r9d
  int v9; // edi
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 (**v15)(void); // rsi
  unsigned __int64 v16; // rcx
  __int64 result; // rax
  __int64 (__fastcall **v18)(); // rdi
  unsigned __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+50h] BYREF
  int v25; // [rsp+A8h] [rbp+58h] BYREF

  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0LL;
  v6 = 32512;
  v7 = 32512;
  v8 = dword_180158674 & 4;
  if ( (dword_180158674 & 4) == 0 )
    v7 = 31488;
  v9 = (v7 | 0x8000) & *(unsigned __int16 *)(a3 + 78);
  *(_DWORD *)(a1 + 280) = v9;
  if ( !v8 )
    v6 = 31488;
  if ( (v9 & v6) != 0 && (unsigned __int8)sub_1800812A8(a1) )
  {
    if ( a1 == qword_18015AE50 )
      v20 = v9 | 0x200;
    else
      v20 = v9 | 0x100;
    *(_DWORD *)(a1 + 280) = v20;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
  {
    *(_DWORD *)(a1 + 104) |= 0x8000u;
    if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
    {
      v10 = sub_180032C0C(*(_QWORD *)(a1 + 48), 1, 0xDu, &v25, &v23);
      v11 = v23;
      if ( v10 < 0 )
        v11 = 0LL;
      if ( v11 )
      {
        v12 = (__int64)a2 + a2[10] + 24;
        v13 = 0;
        if ( a2[3] )
        {
          while ( (unsigned int)(*(_DWORD *)(v11 + 12) - *(_DWORD *)(v12 + 12)) >= *(_DWORD *)(v12 + 8) )
          {
            ++v13;
            v12 += 40LL;
            if ( v13 >= a2[3] )
              goto LABEL_18;
          }
          v22 = *(_QWORD *)(a1 + 48) + *(unsigned int *)(v12 + 12);
          v21 = *(unsigned int *)(v12 + 8);
          sub_18007A01C();
          ZwProtectVirtualMemory(-1LL, &v22, &v21, 2LL, &v24);
        }
      }
    }
  }
LABEL_18:
  v14 = qword_18016B370;
  if ( !qword_18016B370 )
    return 0LL;
  if ( (*(_DWORD *)(a3 + 144) & 0x100) == 0 || (a2[47] & 0x4000) == 0 )
  {
    sub_180089798(a1, a2);
    v14 = qword_18016B370;
  }
  if ( !v14 || (*(_DWORD *)(a3 + 144) & 0x100) == 0 || (a2[47] & 0x4000) == 0 )
    return 0LL;
  v15 = *(__int64 (***)(void))(a3 + 112);
  if ( v15
    && (v16 = *(_QWORD *)(a1 + 48), (unsigned __int64)v15 >= v16)
    && (unsigned __int64)v15 < *(unsigned int *)(a1 + 64) + v16 - 8
    && *v15 )
  {
    v22 = *(_QWORD *)(a3 + 112);
    v21 = 8LL;
    result = ZwProtectVirtualMemory(-1LL, &v22, &v21, 4LL, &v24);
    if ( (int)result < 0 )
      return result;
    *v15 = sub_180030138() && (*(_DWORD *)(a3 + 144) & 0x4000) != 0 ? sub_180096200 : sub_1800961B0;
    result = ZwProtectVirtualMemory(-1LL, &v22, &v21, v24, &v24);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v15 = 0LL;
  }
  v18 = *(__int64 (__fastcall ***)())(a3 + 120);
  if ( !v18
    || (v19 = *(_QWORD *)(a1 + 48), (unsigned __int64)v18 < v19)
    || (unsigned __int64)v18 >= *(unsigned int *)(a1 + 64) + v19 - 8
    || !*v18 )
  {
    v18 = 0LL;
    goto LABEL_39;
  }
  v22 = *(_QWORD *)(a3 + 120);
  v21 = 8LL;
  result = ZwProtectVirtualMemory(-1LL, &v22, &v21, 4LL, &v24);
  if ( (int)result >= 0 )
  {
    *v18 = sub_180030138() && (*(_DWORD *)(a3 + 144) & 0x4000) != 0 ? sub_1800962A0 : sub_180096250;
    result = ZwProtectVirtualMemory(-1LL, &v22, &v21, v24, &v24);
    if ( (int)result >= 0 )
    {
LABEL_39:
      if ( !v15
        || *v15 != sub_1800961B0 && *v15 != sub_180096200
        || v18 && *v18 != sub_180096250 && *v18 != sub_1800962A0 )
      {
        return 3221225534LL;
      }
      return 0LL;
    }
  }
  return result;
}
