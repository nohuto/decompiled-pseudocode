/*
 * XREFs of RtlInitializeNtUserPfn @ 0x18008AD90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
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
  if ( byte_18016F1D8 || a2 != 192 || a4 != 192 || a6 != 88 )
    return 3221225485LL;
  sub_1800259B4(0);
  *(_OWORD *)off_18016F000 = *a1;
  *(_OWORD *)&off_18016F000[2] = a1[1];
  *(_OWORD *)&off_18016F000[4] = a1[2];
  *(_OWORD *)&off_18016F000[6] = a1[3];
  *(_OWORD *)&off_18016F000[8] = a1[4];
  *(_OWORD *)&off_18016F000[10] = a1[5];
  *(_OWORD *)&off_18016F000[12] = a1[6];
  v10 = a1[7];
  v11 = a1 + 8;
  *(_OWORD *)&off_18016F000[14] = v10;
  *(_OWORD *)&off_18016F000[16] = *v11;
  *(_OWORD *)&off_18016F000[18] = v11[1];
  *(_OWORD *)&off_18016F000[20] = v11[2];
  *(_OWORD *)&off_18016F000[22] = v11[3];
  *(_OWORD *)&off_18016F000[24] = *a3;
  *(_OWORD *)&off_18016F000[26] = a3[1];
  *(_OWORD *)&off_18016F000[28] = a3[2];
  *(_OWORD *)&off_18016F000[30] = a3[3];
  *(_OWORD *)&off_18016F000[32] = a3[4];
  *(_OWORD *)&off_18016F000[34] = a3[5];
  *(_OWORD *)&off_18016F000[36] = a3[6];
  v12 = a3[7];
  v13 = a3 + 8;
  *(_OWORD *)&off_18016F000[38] = v12;
  *(_OWORD *)&off_18016F000[40] = *v13;
  *(_OWORD *)&off_18016F000[42] = v13[1];
  *(_OWORD *)&off_18016F000[44] = v13[2];
  *(_OWORD *)&off_18016F000[46] = v13[3];
  *(_OWORD *)off_18016F180 = *(_OWORD *)a5;
  *(_OWORD *)off_18016F190 = *(_OWORD *)(a5 + 16);
  *(_OWORD *)off_18016F1A0 = *(_OWORD *)(a5 + 32);
  *(_OWORD *)off_18016F1B0 = *(_OWORD *)(a5 + 48);
  *(_OWORD *)off_18016F1C0 = *(_OWORD *)(a5 + 64);
  off_18016F1D0 = *(void (__fastcall __noreturn **)())(a5 + 80);
  byte_18016F1D8 = 1;
  sub_1800259B4(1);
  if ( v6 != LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] || v9 != *(_QWORD *)_guard_check_icall_fptr )
    __fastfail(0x13u);
  return 0LL;
}
