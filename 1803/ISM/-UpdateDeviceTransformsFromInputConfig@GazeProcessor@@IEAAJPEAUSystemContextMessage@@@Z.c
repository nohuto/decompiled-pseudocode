/*
 * XREFs of ?UpdateDeviceTransformsFromInputConfig@GazeProcessor@@IEAAJPEAUSystemContextMessage@@@Z @ 0x1800384FC
 * Callers:
 *     ?OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800382B0 (-OnDeviceUpdate@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnSystemContextNotification@GazeProcessor@@UEAAJPEAUSystemContextMessage@@@Z @ 0x180038310 (-OnSystemContextNotification@GazeProcessor@@UEAAJPEAUSystemContextMessage@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTransfromToOutputSpace@InputConfiguration@@YA?AUfloat3x2@Numerics@Foundation@Windows@@UINPUT_REGION_CONFIG@@UtagRECT@@@Z @ 0x18009ABBC (-GetTransfromToOutputSpace@InputConfiguration@@YA-AUfloat3x2@Numerics@Foundation@Windows@@UINPUT.c)
 */

__int64 __fastcall GazeProcessor::UpdateDeviceTransformsFromInputConfig(
        GazeProcessor *this,
        struct SystemContextMessage *a2)
{
  __int64 v2; // r13
  __int128 *v3; // r8
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int128 v12; // xmm2
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  __int64 v16; // xmm6_8
  __int128 *v17; // rdx
  __int64 v18; // r11
  _QWORD *v19; // r8
  __int64 v20; // rbx
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int64 result; // rax
  __int128 v24; // [rsp+28h] [rbp-59h] BYREF
  _BYTE v25[32]; // [rsp+38h] [rbp-49h] BYREF
  _OWORD v26[4]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v27; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 7);
  v3 = 0LL;
  *((_BYTE *)this + 72) = 0;
  v6 = *(_QWORD *)(v2 + 1008);
  if ( *((_DWORD *)a2 + 2) )
  {
    v7 = *((unsigned int *)a2 + 2);
    v8 = *((_QWORD *)a2 + 2) + 16LL;
    do
    {
      v9 = 0LL;
      if ( *(_DWORD *)(v8 - 4) )
      {
        v10 = *(_QWORD *)v8;
        while ( 1 )
        {
          v11 = v10 + 72 * v9;
          if ( *(_DWORD *)(v11 + 32) == *(_DWORD *)(v2 + 1016) && *(_QWORD *)(v11 + 24) == v6 )
            break;
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *(_DWORD *)(v8 - 4) )
            goto LABEL_10;
        }
        v3 = (__int128 *)(v10 + 72 * v9);
      }
LABEL_10:
      v8 += 24LL;
      --v7;
    }
    while ( v7 );
    if ( v3 )
    {
      v12 = *v3;
      v13 = v3[1];
      v14 = v3[2];
      v15 = v3[3];
      v16 = *((_QWORD *)v3 + 8);
LABEL_26:
      *(_OWORD *)((char *)this + 100) = v12;
      *((_BYTE *)this + 72) = 1;
      *(_OWORD *)((char *)this + 116) = v13;
      *(_OWORD *)((char *)this + 132) = v14;
      *(_OWORD *)((char *)this + 148) = v15;
      *(_QWORD *)((char *)this + 164) = v16;
      v21 = *(_OWORD *)(v2 + 988);
      v26[0] = v12;
      v24 = v21;
      v26[1] = v13;
      v26[2] = v14;
      v26[3] = v15;
      v27 = v16;
      v22 = ((__int64 (__fastcall *)(_BYTE *, _OWORD *, __int128 *, __int64))InputConfiguration::GetTransfromToOutputSpace)(
              v25,
              v26,
              &v24,
              v8);
      *(_OWORD *)((char *)this + 76) = *(_OWORD *)v22;
      *(_QWORD *)&v21 = *(_QWORD *)(v22 + 16);
      result = 0LL;
      *(_QWORD *)((char *)this + 92) = v21;
      return result;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE3,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
    (const char *)0x8000FFFFLL);
  v17 = 0LL;
  if ( *((_DWORD *)a2 + 2) )
  {
    v18 = *((unsigned int *)a2 + 2);
    v19 = (_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    do
    {
      v8 = 0LL;
      if ( *((_DWORD *)v19 - 1) )
      {
        v20 = *v19;
        while ( (*(_DWORD *)(v19 - 1) & 1) == 0 || (*(_BYTE *)(v20 + 72 * v8 + 16) & 1) == 0 || v17 )
        {
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *((_DWORD *)v19 - 1) )
            goto LABEL_23;
        }
        v17 = (__int128 *)(v20 + 72 * v8);
      }
LABEL_23:
      v19 += 3;
      --v18;
    }
    while ( v18 );
    if ( v17 )
    {
      v12 = *v17;
      v13 = v17[1];
      v14 = v17[2];
      v15 = v17[3];
      v16 = *((_QWORD *)v17 + 8);
      goto LABEL_26;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFE,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputconfiguration\\inputconfigurationhelpers.cpp",
    (const char *)0x8000FFFFLL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x186,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
