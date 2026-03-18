/*
 * XREFs of RootHub_WaitForPendingU3TransitionCompletion @ 0x1C001EB10
 * Callers:
 *     RootHub_D0Exit @ 0x1C0019A30 (RootHub_D0Exit.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C001B250 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C001D970 (RootHub_UcxEvtSetPortFeature.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C001F5C0 (WPP_RECORDER_SF_dDD.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_WaitForPendingU3TransitionCompletion(_QWORD *a1, int a2, char a3)
{
  unsigned int v3; // ebp
  unsigned int v6; // r13d
  __int64 v7; // rbx
  unsigned int *v8; // r12
  __int64 v9; // rsi
  int v10; // edi
  __int64 v11; // rsi
  int Ulong; // eax
  int v13; // ebx
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int v17; // r8d
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // r10
  __int64 v21; // rsi
  char v22; // cl
  unsigned __int16 v23; // ax
  unsigned int v24; // ecx
  int v25; // eax
  int v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+80h] [rbp+8h]
  char v31; // [rsp+90h] [rbp+18h]
  __int64 v32; // [rsp+98h] [rbp+20h]

  v31 = a3;
  v3 = 0;
  v6 = -1073741823;
  v7 = *(_QWORD *)(a1[1] + 88LL);
  v8 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  v9 = (unsigned int)(a2 - 1);
  v10 = -1;
  v32 = v7;
  v30 = v9;
  while ( 1 )
  {
    if ( a3 && v3 && v3 == 3 * (v3 / 3) )
    {
      v11 = v9 << 6;
      DynamicLock_Acquire(*(_QWORD *)(v11 + a1[6] + 16));
      Ulong = XilRegister_ReadUlong(v7, v8);
      v13 = Ulong & 0xE00C200 | 0x10060;
      WPP_RECORDER_SF_dDD(*(_QWORD *)(a1[1] + 72LL), v14, v15, v16, v27, a2, Ulong, 96);
      v17 = v13;
      v7 = v32;
      XilRegister_WriteUlong(v32, v8, v17);
      DynamicLock_Release(*(_QWORD *)(v11 + a1[6] + 16));
      v9 = v30;
    }
    v18 = XilRegister_ReadUlong(v7, v8);
    v19 = v18;
    if ( v18 == v10 )
      goto LABEL_17;
    v20 = a1[1];
    v10 = v18;
    v21 = v9 << 6;
    v22 = *(_BYTE *)(v21 + a1[6] + 1);
    if ( v22 == 2 )
    {
      v23 = 231;
      goto LABEL_11;
    }
    if ( v22 != 3 )
      break;
    v23 = 232;
LABEL_11:
    LODWORD(v29) = v19;
    LODWORD(v28) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v20 + 72),
      4u,
      0xBu,
      v23,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v28,
      v29);
    v24 = (v19 >> 5) & 0xF;
    if ( v24 == 3
      || (v19 & 0x20203) != 0x203
      || (v25 = 36432, _bittest(&v25, v24))
      || (v19 & 0x10) != 0
      || *(_BYTE *)(v21 + a1[6] + 6) )
    {
      v6 = 0;
      goto LABEL_20;
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xEAu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids);
LABEL_17:
    KeStallExecutionProcessor(0xAu);
    if ( ++v3 >= 0x960 )
      goto LABEL_20;
    v9 = v30;
    v7 = v32;
    a3 = v31;
  }
  LODWORD(v29) = v18;
  LODWORD(v28) = a2;
  WPP_RECORDER_SF_dd(
    *(_QWORD *)(v20 + 72),
    2u,
    0xBu,
    0xE9u,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    v28,
    v29);
  v6 = 0;
LABEL_20:
  if ( v3 == 2400 )
  {
    LODWORD(v29) = v19;
    LODWORD(v28) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      2u,
      0xBu,
      0xEBu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v28,
      v29);
  }
  else if ( v3 )
  {
    LODWORD(v29) = a2;
    LODWORD(v28) = v3;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xECu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v28,
      v29);
  }
  return v6;
}
