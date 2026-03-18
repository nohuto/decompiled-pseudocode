/*
 * XREFs of HvSwapLogFiles @ 0x1404E6ABC
 * Callers:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1404E5F64 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404E5FD4 (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvSwapLogFiles(__int64 a1)
{
  unsigned int v2; // eax
  char v3; // r10
  int v4; // r11d
  int v5; // edx
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 result; // rax
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+90h] [rbp-78h]
  int v23; // [rsp+94h] [rbp-74h]
  int *v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A4h] [rbp-64h]
  int *v27; // [rsp+A8h] [rbp-60h]
  int v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B4h] [rbp-54h]
  int *v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C4h] [rbp-44h]
  int *v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D4h] [rbp-34h]
  int *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E4h] [rbp-24h]
  __int64 *v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+104h] [rbp-4h]

  HvGetEffectiveLogSizeCapForHive((unsigned int *)a1);
  v2 = HvpLogTypeToLogArrayIndex(*(_DWORD *)(a1 + 148));
  v5 = *(_DWORD *)(a1 + 152) - *(_DWORD *)(a1 + 156);
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = *(_DWORD *)(a1 + 8LL * v2 + 2976);
  if ( stru_1403549F0.LevelPlus1 > 5 )
  {
    v8 = *(_DWORD *)(a1 + 1400);
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v13 = v8;
    v14 = *(_DWORD *)(a1 + 168);
    v16 = *(_DWORD *)(a1 + 160);
    v9 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 176);
    v44 = 0;
    v19 = v9;
    v21 = &v12;
    v24 = &v13;
    v27 = &v14;
    v30 = &v15;
    v33 = &v16;
    v36 = &v17;
    v39 = &v18;
    v42 = &v19;
    LOBYTE(v12) = v3;
    v15 = v4;
    v17 = v7;
    LODWORD(v18) = v5;
    v22 = 1;
    v25 = 4;
    v28 = 4;
    v31 = 4;
    v34 = 4;
    v37 = 4;
    v40 = 4;
    v43 = 8;
    TlgWrite(&stru_1403549F0, &unk_1402CEF7C, 0LL, 0LL, 0xAu, &pData);
  }
  v10 = *(_DWORD *)(a1 + 148) - 4;
  *(_QWORD *)(a1 + 176) = v6;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 148) = 5 - (v10 != 0);
  result = *(unsigned int *)(a1 + 152);
  *(_DWORD *)(a1 + 156) = result;
  return result;
}
