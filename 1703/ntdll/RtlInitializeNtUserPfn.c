/*
 * XREFs of RtlInitializeNtUserPfn @ 0x180095B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 */

__int64 __fastcall RtlInitializeNtUserPfn(_OWORD *a1, __int64 a2, _OWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  ULONG_PTR v6; // rbp
  __int64 v9; // rsi
  __int128 v10; // xmm0
  _OWORD *v11; // rdi
  __int128 v12; // xmm1
  _OWORD *v13; // rbx

  v6 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[2];
  v9 = *(_QWORD *)_guard_check_icall_fptr;
  if ( byte_18016B1C8 || a2 != 184 || a4 != 184 || a6 != 88 )
    return 3221225485LL;
  sub_18001DEA8(0);
  *(_OWORD *)off_18016B000 = *a1;
  *(_OWORD *)&off_18016B000[2] = a1[1];
  *(_OWORD *)&off_18016B000[4] = a1[2];
  *(_OWORD *)&off_18016B000[6] = a1[3];
  *(_OWORD *)&off_18016B000[8] = a1[4];
  *(_OWORD *)&off_18016B000[10] = a1[5];
  *(_OWORD *)&off_18016B000[12] = a1[6];
  v10 = a1[7];
  v11 = a1 + 8;
  *(_OWORD *)&off_18016B000[14] = v10;
  *(_OWORD *)&off_18016B000[16] = *v11;
  *(_OWORD *)&off_18016B000[18] = v11[1];
  *(_OWORD *)&off_18016B000[20] = v11[2];
  off_18016B000[22] = (void (__fastcall __noreturn *)())*((_QWORD *)v11 + 6);
  *(_OWORD *)&off_18016B000[23] = *a3;
  *(_OWORD *)&off_18016B000[25] = a3[1];
  *(_OWORD *)&off_18016B000[27] = a3[2];
  *(_OWORD *)&off_18016B000[29] = a3[3];
  *(_OWORD *)&off_18016B000[31] = a3[4];
  *(_OWORD *)&off_18016B000[33] = a3[5];
  *(_OWORD *)&off_18016B000[35] = a3[6];
  v12 = a3[7];
  v13 = a3 + 8;
  *(_OWORD *)&off_18016B000[37] = v12;
  *(_OWORD *)&off_18016B000[39] = *v13;
  *(_OWORD *)&off_18016B000[41] = v13[1];
  *(_OWORD *)&off_18016B000[43] = v13[2];
  off_18016B000[45] = (void (__fastcall __noreturn *)())*((_QWORD *)v13 + 6);
  *(_OWORD *)off_18016B170 = *(_OWORD *)a5;
  *(_OWORD *)off_18016B180 = *(_OWORD *)(a5 + 16);
  *(_OWORD *)off_18016B190 = *(_OWORD *)(a5 + 32);
  *(_OWORD *)off_18016B1A0 = *(_OWORD *)(a5 + 48);
  *(_OWORD *)off_18016B1B0 = *(_OWORD *)(a5 + 64);
  off_18016B1C0 = *(void (__fastcall __noreturn **)())(a5 + 80);
  byte_18016B1C8 = 1;
  sub_18001DEA8(1);
  if ( v6 != LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] || v9 != *(_QWORD *)_guard_check_icall_fptr )
    __fastfail(0x13u);
  return 0LL;
}
