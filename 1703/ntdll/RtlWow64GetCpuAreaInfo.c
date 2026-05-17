/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x180068C70
 * Callers:
 *     RtlWow64GetCurrentCpuArea @ 0x180068BF0 (RtlWow64GetCurrentCpuArea.c)
 * Callees:
 *     sub_180068D04 @ 0x180068D04 (sub_180068D04.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, __int16 a2, __int64 a3)
{
  __int16 v3; // di
  unsigned int v5; // r10d
  int v6; // r10d
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+38h] [rbp+10h] BYREF

  LOWORD(v13) = a2;
  *(_QWORD *)(a3 + 24) = a1;
  v3 = *(_WORD *)(a1 + 2);
  if ( v3 == 332 )
  {
    v5 = 0x10000;
  }
  else if ( *(_WORD *)(a1 + 2) == 452 )
  {
    v5 = 0x200000;
  }
  else if ( *(unsigned __int16 *)(a1 + 2) == 34404 )
  {
    v5 = 0x100000;
  }
  else
  {
    if ( *(unsigned __int16 *)(a1 + 2) != 43620 )
      return 3221225485LL;
    v5 = 0x400000;
  }
  sub_180068D04(v5, &v12, &v13);
  v8 = ~(v13 - 1) & (a1 + v13 + 3LL);
  v9 = v8 + v12 + 7LL;
  *(_QWORD *)v7 = v8;
  v10 = 0LL;
  *(_QWORD *)(v7 + 8) = v9 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v6 & 0x10000) == 0 )
  {
    if ( (v6 & 0x100000) != 0 )
    {
      v8 += 48LL;
    }
    else if ( (v6 & 0x200000) == 0 )
    {
      if ( (v6 & 0x400000) != 0 )
        v10 = v8;
      v8 = v10;
    }
  }
  *(_QWORD *)(v7 + 16) = v8;
  result = 0LL;
  *(_DWORD *)(v7 + 32) = v6;
  *(_WORD *)(v7 + 36) = v3;
  return result;
}
