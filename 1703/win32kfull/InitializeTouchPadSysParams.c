/*
 * XREFs of InitializeTouchPadSysParams @ 0x1C01055E0
 * Callers:
 *     <none>
 * Callees:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00C0B9C (GetLocalMachineRegistryDWORDValues.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitializeTouchPadSysParams()
{
  int *v0; // rcx
  __int64 v1; // rdi
  _DWORD *v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  __int128 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  const wchar_t *v10; // [rsp+20h] [rbp-39h] BYREF
  __int64 v11; // [rsp+28h] [rbp-31h]
  const wchar_t *v12; // [rsp+30h] [rbp-29h]
  __int64 v13; // [rsp+38h] [rbp-21h]
  const wchar_t *v14; // [rsp+40h] [rbp-19h]
  __int64 v15; // [rsp+48h] [rbp-11h]
  const wchar_t *v16; // [rsp+50h] [rbp-9h]
  __int64 v17; // [rsp+58h] [rbp-1h]
  const wchar_t *v18; // [rsp+60h] [rbp+7h]
  __int64 v19; // [rsp+68h] [rbp+Fh]
  const wchar_t *v20; // [rsp+70h] [rbp+17h]
  __int64 v21; // [rsp+78h] [rbp+1Fh]
  const wchar_t *v22; // [rsp+80h] [rbp+27h]
  int v23; // [rsp+88h] [rbp+2Fh]
  int v24; // [rsp+8Ch] [rbp+33h]
  const wchar_t *v25; // [rsp+90h] [rbp+37h]
  int v26; // [rsp+98h] [rbp+3Fh]
  int v27; // [rsp+9Ch] [rbp+43h]

  v0 = (int *)&gAapDefaults;
  v1 = 8LL;
  gTouchPadParameters[5] |= 8u;
  gTouchPadParameters[5] |= 1u;
  gTouchPadParameters[2] = 2;
  gTouchPadParameters[3] |= 0x200u;
  gTouchPadParameters[3] |= 0x400u;
  gTouchPadParameters[5] |= 4u;
  gTouchPadParameters[5] |= 2u;
  gTouchPadParameters[5] |= 0x40u;
  gTouchPadParameters[5] &= ~0x80u;
  gTouchPadParameters[4] = 10;
  v2 = (_DWORD *)gAapState;
  do
  {
    v3 = *v0;
    v0 += 4;
    *v2++ = v3;
  }
  while ( v0 != (int *)&gModeMonitor );
  v13 = 0xA0000000ALL;
  gTPThresholds[0] = 300;
  gTPThresholds[1] = 300;
  gTPThresholds[2] = 300;
  gTPThresholds[3] = 450;
  gTPThresholds[4] = 500;
  gTPThresholds[5] = 20;
  gTPThresholds[6] = 500;
  gTPThresholds[7] = 500;
  gTPThresholds[8] = 500;
  gTPThresholds[9] = 500;
  gTPThresholds[10] = 750;
  gTPThresholds[11] = 25;
  gTPThresholds[12] = 50;
  gTPThresholds[15] = 20;
  v4 = 270LL;
  gTPThresholds[20] = 215;
  gTPThresholds[21] = 1000;
  gTPThresholds[23] = 500;
  gTPThresholds[13] = 90000;
  gTPThresholds[14] = 90000;
  gTPThresholds[16] = 1000000;
  gTPThresholds[17] = 250;
  gTPThresholds[18] = 50;
  gTPThresholds[19] = 200;
  gTPThresholds[22] = 100;
  gTPThresholds[24] = 300;
  gTPThresholds[25] = 300;
  gTPThresholds[26] = 300;
  gTPThresholds[27] = 300;
  gTPThresholds[29] = 50;
  gTPThresholds[30] = 50;
  gTPThresholds[31] = 50;
  gTPThresholds[32] = 50;
  gTPThresholds[33] = 100;
  gTPThresholds[34] = 270;
  gTPThresholds[35] = 270;
  gTPThresholds[36] = 270;
  *(_QWORD *)&gTPThresholds[37] = 270LL;
  gTPThresholds[39] = 70;
  gTPThresholds[40] = 120;
  gTPThresholds[48] = 300;
  gTPThresholds[49] = 300;
  gTPThresholds[50] = 300;
  gTPThresholds[51] = 540;
  gTPThresholds[52] = 270;
  gTPThresholds[53] = 810;
  gTPThresholds[54] = 300;
  gTPThresholds[55] = 1000;
  gTPThresholds[56] = 1000;
  gTPThresholds[28] = 1022;
  gTPThresholds[59] = 1000;
  gTPThresholds[60] = 300;
  gTPThresholds[61] = 90000;
  gTPThresholds[62] = 40000;
  gTPThresholds[63] = 33;
  gTPThresholds[65] = 776;
  gTPThresholds[66] = 100;
  gTPThresholds[67] = 600;
  gTPThresholds[47] = 25000000;
  v10 = L"CurtainDismissTime";
  v12 = L"CurtainDismissDistance";
  v14 = L"GestureScrollMaxDistance";
  v15 = 0x2800000028LL;
  v11 = 0xFA000000FALL;
  v16 = L"RightClickZoneHeight";
  v18 = L"RightClickZoneWidth";
  v20 = L"SuperCurtainTop";
  v22 = L"SuperCurtainLeft";
  v21 = 0x6400000064LL;
  v23 = 100;
  v24 = 100;
  v26 = 100;
  v27 = 100;
  v5 = (__int128 *)&v10;
  v25 = L"SuperCurtainRight";
  v17 = 0LL;
  v19 = 0LL;
  do
  {
    GetLocalMachineRegistryDWORDValues(v4, L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", v5++);
    --v1;
  }
  while ( v1 );
  gTPThresholds[44] = HIDWORD(v11);
  gTPThresholds[45] = HIDWORD(v13);
  gTPThresholds[46] = HIDWORD(v15);
  gTPThresholds[57] = HIDWORD(v17);
  gTPThresholds[58] = HIDWORD(v19);
  gTPThresholds[41] = HIDWORD(v21);
  gTPThresholds[42] = v24;
  gTPThresholds[43] = v27;
  gTPThresholds[45] *= 10000 * gTPThresholds[45];
  gTPThresholds[46] *= 10000 * gTPThresholds[46];
  return CPTPProcessor::EnvironmentChanged(
           *(_QWORD *)gTPThresholds,
           v6,
           v7,
           v8,
           v10,
           v11,
           v12,
           v13,
           v14,
           v15,
           v16,
           v17,
           v18,
           v19,
           v20,
           v21);
}
