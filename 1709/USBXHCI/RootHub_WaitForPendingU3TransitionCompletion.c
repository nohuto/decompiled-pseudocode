/*
 * XREFs of RootHub_WaitForPendingU3TransitionCompletion @ 0x1C0002C30
 * Callers:
 *     RootHub_UcxEvtClearPortFeature @ 0x1C0002D70 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0003260 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_D0Exit @ 0x1C00045D0 (RootHub_D0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C0021D10 (WPP_RECORDER_SF_dDD.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 *     Register_ReadSecureMmio @ 0x1C005DB2C (Register_ReadSecureMmio.c)
 */

__int64 __fastcall RootHub_WaitForPendingU3TransitionCompletion(_QWORD *a1, int a2, char a3)
{
  unsigned int v3; // r15d
  unsigned int v5; // ebp
  __int64 v6; // rbx
  unsigned int *v7; // r14
  int v8; // edi
  __int64 v9; // r12
  unsigned int v10; // ebx
  char v11; // cl
  int v12; // r9d
  int v13; // edx
  unsigned int v14; // eax
  int Ulong; // eax
  unsigned int v17; // ebx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r8
  int v22; // ecx
  int v23; // [rsp+20h] [rbp-68h]
  char v24; // [rsp+28h] [rbp-60h]
  char v25; // [rsp+28h] [rbp-60h]
  unsigned int v26; // [rsp+90h] [rbp+8h] BYREF
  int v27; // [rsp+98h] [rbp+10h]
  char v28; // [rsp+A0h] [rbp+18h]
  __int64 v29; // [rsp+A8h] [rbp+20h]

  v28 = a3;
  v27 = a2;
  v3 = 0;
  v5 = -1073741823;
  v6 = *(_QWORD *)(a1[1] + 88LL);
  v7 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  v8 = -1;
  v29 = v6;
  v9 = (unsigned int)(a2 - 1);
  while ( 1 )
  {
    if ( a3 && v3 )
    {
      if ( v3 == 3 * (v3 / 3) )
      {
        DynamicLock_Acquire(*(_QWORD *)((v9 << 6) + a1[6] + 16));
        Ulong = XilRegister_ReadUlong(v6, v7);
        v17 = Ulong & 0xE00C200 | 0x10060;
        WPP_RECORDER_SF_dDD(*(_QWORD *)(a1[1] + 72LL), v18, v19, v20, v23, v27, Ulong, 96);
        v21 = v17;
        v6 = v29;
        XilRegister_WriteUlong(v29, v7, v21);
        DynamicLock_Release(*(_QWORD *)((v9 << 6) + a1[6] + 16));
      }
      a2 = v27;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 8) + 441LL) )
    {
      Register_ReadSecureMmio(v6, (int)v7, 2, 1, &v26);
      a2 = v27;
      v10 = v26;
    }
    else
    {
      v10 = *v7;
    }
    if ( v10 == v8 )
      goto LABEL_27;
    v8 = v10;
    v11 = *(_BYTE *)((v9 << 6) + a1[6] + 1);
    if ( v11 == 2 )
    {
      v12 = 231;
      goto LABEL_8;
    }
    if ( v11 != 3 )
      break;
    v12 = 232;
LABEL_8:
    v24 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1[1] + 72LL),
      a2,
      11,
      v12,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v24,
      v10);
    v14 = (v10 >> 5) & 0xF;
    if ( v14 == 3 )
      goto LABEL_10;
    if ( (v10 & 0x203) != 0x203 )
      goto LABEL_10;
    if ( (v10 & 0x20000) != 0 )
      goto LABEL_10;
    v22 = 36432;
    if ( _bittest(&v22, v14) || (v10 & 0x10) != 0 || *(_BYTE *)((v9 << 6) + a1[6] + 6) )
      goto LABEL_10;
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      v13,
      11,
      234,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v27,
      v3);
LABEL_27:
    KeStallExecutionProcessor(0xAu);
    if ( ++v3 >= 0x960 )
      goto LABEL_11;
    a2 = v27;
    a3 = v28;
    v6 = v29;
  }
  v25 = a2;
  LOBYTE(a2) = 2;
  WPP_RECORDER_SF_DD(
    *(_QWORD *)(a1[1] + 72LL),
    a2,
    11,
    233,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v25,
    v10);
LABEL_10:
  v5 = 0;
LABEL_11:
  if ( v3 == 2400 )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1[1] + 72LL),
      v13,
      11,
      235,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v27,
      v10);
  }
  else if ( v3 )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      v13,
      11,
      236,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v3,
      v27);
  }
  return v5;
}
