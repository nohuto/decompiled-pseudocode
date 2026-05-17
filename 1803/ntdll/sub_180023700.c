/*
 * XREFs of sub_180023700 @ 0x180023700
 * Callers:
 *     sub_18002AFBC @ 0x18002AFBC (sub_18002AFBC.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_180075BEC @ 0x180075BEC (sub_180075BEC.c)
 *     sub_18007A318 @ 0x18007A318 (sub_18007A318.c)
 *     sub_18007C368 @ 0x18007C368 (sub_18007C368.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_180023700(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // edi
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r14
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  __int64 (__fastcall *v15)(_QWORD); // rax
  __int64 (__fastcall **v16)(); // rdi
  unsigned __int64 v17; // rcx
  __int64 (__fastcall *v18)(); // rax
  int v19; // edi
  __int64 v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+50h] BYREF
  int v24; // [rsp+A8h] [rbp+58h] BYREF

  v5 = a1;
  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0LL;
  v6 = (dword_1801596D4 & 4 | 0x7B) << 8;
  v7 = (v6 | 0x8000) & *(unsigned __int16 *)(a3 + 78);
  *(_DWORD *)(a1 + 280) = v7;
  if ( (v6 & v7) != 0 && (unsigned __int8)sub_18007C368() )
  {
    if ( v5 == qword_18015BF88 )
      v19 = v7 | 0x200;
    else
      v19 = v7 | 0x100;
    *(_DWORD *)(v5 + 280) = v19;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
  {
    *(_DWORD *)(v5 + 104) |= 0x8000u;
    if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
    {
      v8 = sub_18001014C(*(_QWORD *)(v5 + 48), 1, 0xDu, &v24, &v22);
      v9 = v22;
      if ( v8 < 0 )
        v9 = 0LL;
      if ( v9 )
      {
        v10 = (__int64)a2 + a2[10] + 24;
        a1 = 0LL;
        if ( a2[3] )
        {
          while ( (unsigned int)(*(_DWORD *)(v9 + 12) - *(_DWORD *)(v10 + 12)) >= *(_DWORD *)(v10 + 8) )
          {
            a1 = (unsigned int)(a1 + 1);
            v10 += 40LL;
            if ( (unsigned int)a1 >= a2[3] )
              goto LABEL_14;
          }
          v21 = *(_QWORD *)(v5 + 48) + *(unsigned int *)(v10 + 12);
          v20 = *(unsigned int *)(v10 + 8);
          sub_180075BEC();
          ZwProtectVirtualMemory(-1LL, &v21, &v20, 2LL, &v23);
        }
      }
    }
  }
LABEL_14:
  if ( (unsigned int)LdrControlFlowGuardEnforced(a1) )
  {
    LOBYTE(v11) = (a2[47] & 0x4000) != 0;
    if ( ((unsigned __int8)v11 & ((*(_DWORD *)(a3 + 144) & 0x100) != 0)) == 0 )
      sub_18007A318(v5, a2);
  }
  if ( !(unsigned int)LdrControlFlowGuardEnforced(v11) || (a2[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0 )
    return 0LL;
  v12 = *(_QWORD **)(a3 + 112);
  if ( v12
    && (v13 = *(_QWORD *)(v5 + 48), (unsigned __int64)v12 >= v13)
    && (unsigned __int64)v12 < *(unsigned int *)(v5 + 64) + v13 - 8
    && *v12 )
  {
    v21 = *(_QWORD *)(a3 + 112);
    v20 = 8LL;
    result = ZwProtectVirtualMemory(-1LL, &v21, &v20, 4LL, &v23);
    if ( (int)result < 0 )
      return result;
    if ( !(unsigned int)sub_18001F704() || (v15 = sub_18008B460, (*(_DWORD *)(a3 + 144) & 0x4000) == 0) )
      v15 = sub_18008B410;
    *v12 = v15;
    result = ZwProtectVirtualMemory(-1LL, &v21, &v20, v23, &v23);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v12 = 0LL;
  }
  v16 = *(__int64 (__fastcall ***)())(a3 + 120);
  if ( !v16
    || (v17 = *(_QWORD *)(v5 + 48), (unsigned __int64)v16 < v17)
    || (unsigned __int64)v16 >= *(unsigned int *)(v5 + 64) + v17 - 8
    || !*v16 )
  {
    v16 = 0LL;
    goto LABEL_35;
  }
  v21 = *(_QWORD *)(a3 + 120);
  v20 = 8LL;
  result = ZwProtectVirtualMemory(-1LL, &v21, &v20, 4LL, &v23);
  if ( (int)result >= 0 )
  {
    if ( !(unsigned int)sub_18001F704() || (v18 = sub_18008B500, (*(_DWORD *)(a3 + 144) & 0x4000) == 0) )
      v18 = sub_18008B4B0;
    *v16 = v18;
    result = ZwProtectVirtualMemory(-1LL, &v21, &v20, v23, &v23);
    if ( (int)result >= 0 )
    {
LABEL_35:
      if ( !v12
        || (__int64 (__fastcall *)(_QWORD))*v12 != sub_18008B410
        && (__int64 (__fastcall *)(_QWORD))*v12 != sub_18008B460
        || v16 && *v16 != sub_18008B4B0 && *v16 != sub_18008B500 )
      {
        return 3221225534LL;
      }
      return 0LL;
    }
  }
  return result;
}
