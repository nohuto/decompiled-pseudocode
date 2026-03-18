/*
 * XREFs of HvSwapLogFiles @ 0x14045816C
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1404D3B9C (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1404D3C0C (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvSwapLogFiles(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  char v8; // r10
  int v9; // r11d
  int v10; // edx
  __int64 v11; // rbx
  int v12; // r8d
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 result; // rax
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  int v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  int v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v26; // [rsp+88h] [rbp-80h]
  int v27; // [rsp+90h] [rbp-78h]
  int v28; // [rsp+94h] [rbp-74h]
  int *v29; // [rsp+98h] [rbp-70h]
  int v30; // [rsp+A0h] [rbp-68h]
  int v31; // [rsp+A4h] [rbp-64h]
  int *v32; // [rsp+A8h] [rbp-60h]
  int v33; // [rsp+B0h] [rbp-58h]
  int v34; // [rsp+B4h] [rbp-54h]
  int *v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+C0h] [rbp-48h]
  int v37; // [rsp+C4h] [rbp-44h]
  int *v38; // [rsp+C8h] [rbp-40h]
  int v39; // [rsp+D0h] [rbp-38h]
  int v40; // [rsp+D4h] [rbp-34h]
  int *v41; // [rsp+D8h] [rbp-30h]
  int v42; // [rsp+E0h] [rbp-28h]
  int v43; // [rsp+E4h] [rbp-24h]
  __int64 *v44; // [rsp+E8h] [rbp-20h]
  int v45; // [rsp+F0h] [rbp-18h]
  int v46; // [rsp+F4h] [rbp-14h]
  __int64 *v47; // [rsp+F8h] [rbp-10h]
  int v48; // [rsp+100h] [rbp-8h]
  int v49; // [rsp+104h] [rbp-4h]

  HvGetEffectiveLogSizeCapForHive(a1, a2, a3);
  v7 = HvpLogTypeToLogArrayIndex(*(unsigned int *)(a1 + 148), v4, v5, v6);
  v10 = *(_DWORD *)(a1 + 152) - *(_DWORD *)(a1 + 156);
  v11 = MEMORY[0xFFFFF78000000014];
  v12 = *(_DWORD *)(a1 + 8LL * v7 + 2976);
  if ( stru_14033C3C0.LevelPlus1 > 5 )
  {
    v13 = *(_DWORD *)(a1 + 1400);
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v18 = v13;
    v19 = *(_DWORD *)(a1 + 168);
    v21 = *(_DWORD *)(a1 + 160);
    v14 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 176);
    v49 = 0;
    v24 = v14;
    v26 = &v17;
    v29 = &v18;
    v32 = &v19;
    v35 = &v20;
    v38 = &v21;
    v41 = &v22;
    v44 = &v23;
    v47 = &v24;
    LOBYTE(v17) = v8;
    v20 = v9;
    v22 = v12;
    LODWORD(v23) = v10;
    v27 = 1;
    v30 = 4;
    v33 = 4;
    v36 = 4;
    v39 = 4;
    v42 = 4;
    v45 = 4;
    v48 = 8;
    TlgWrite(&stru_14033C3C0, &unk_1402AB19D, 0LL, 0LL, 0xAu, &pData);
  }
  v15 = *(_DWORD *)(a1 + 148) - 4;
  *(_QWORD *)(a1 + 176) = v11;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 148) = 5 - (v15 != 0);
  result = *(unsigned int *)(a1 + 152);
  *(_DWORD *)(a1 + 156) = result;
  return result;
}
