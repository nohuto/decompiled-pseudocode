/*
 * XREFs of rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C010480C
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C0104AB4 (RIMAbArbitratePointerDeviceFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ListTableIteratorNext @ 0x1C008C710 (ListTableIteratorNext.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C0103A80 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C0103B78 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointerSuppressedByOtherActiveDevicesContacts @ 0x1C0103CF8 (rimAbIsPointerSuppressedByOtherActiveDevicesContacts.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C01050A0 (WPP_RECORDER_SF_dDD.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C01157D8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01157F8 (RIMCmRemoveContactSuppressionReasons.c)
 */

bool __fastcall rimAbUpdateDeadzonesAndResurrectContacts(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 *v4; // rdx
  __int64 **v6; // rcx
  _QWORD *v7; // r15
  __int64 **v8; // rax
  unsigned int v9; // ecx
  __int64 *v10; // xmm1_8
  __int128 v11; // xmm0
  __int64 v12; // rax
  bool result; // al
  int v14; // ecx
  __int64 v15; // r8
  int v16; // edx
  int v17; // r8d
  int v18; // ecx
  __int64 v19; // [rsp+40h] [rbp-31h]
  __int128 v20; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-19h]
  __int64 v22; // [rsp+60h] [rbp-11h] BYREF
  int v23; // [rsp+68h] [rbp-9h]
  __int64 v24; // [rsp+70h] [rbp-1h]
  __int128 v25; // [rsp+78h] [rbp+7h] BYREF
  char v26; // [rsp+88h] [rbp+17h] BYREF
  char v27; // [rsp+A0h] [rbp+2Fh] BYREF

  v2 = *(_QWORD *)(a2 + 472);
  v23 = 0;
  v4 = &v22;
  v6 = (__int64 **)&v26;
  v7 = (_QWORD *)(v2 + 896);
  v24 = *(_QWORD *)(v2 + 896);
  v22 = v2 + 896;
  while ( 1 )
  {
    v8 = ListTableIteratorNext(v6, (__int64)v4);
    v9 = *(_DWORD *)(v2 + 904);
    v10 = v8[2];
    v11 = *(_OWORD *)v8;
    v21 = v10;
    v12 = *v7 + 16LL * v9;
    v20 = v11;
    result = (_QWORD *)v11 != v7 || DWORD2(v20) != v9 || v10 != (__int64 *)v12;
    if ( !result )
      return result;
    if ( (v10[288] & 1) == 0 )
      goto LABEL_29;
    v14 = *(_DWORD *)(v2 + 24);
    if ( (unsigned int)(v14 - 5) > 1 )
    {
      if ( (unsigned int)(v14 - 1) <= 3 )
      {
        v15 = v10[7];
        v25 = *(_OWORD *)(*(_QWORD *)(a2 + 472) + 176LL);
        if ( (unsigned int)rimAbIsPointInGlobalPenDeadzone(a1, &v25, v15) )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x16u,
            (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
          *(_DWORD *)(a1 + 632) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                                + 250;
        }
      }
    }
    else if ( (*((_DWORD *)v10 + 597) & 2) != 0 )
    {
      if ( *(_DWORD *)(a1 + 620) )
      {
        *(_DWORD *)(a1 + 620) = 0;
        *(_DWORD *)(a1 + 632) = 0;
        *(_QWORD *)(a1 + 624) = 0LL;
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0x15u,
          (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
      }
    }
    else
    {
      rimAbCreateGlobalPenDeadzone(a1, (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids, v10[7]);
    }
    if ( (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v10 - 2) )
    {
      v18 = *((_DWORD *)v10 + 597);
      if ( (v18 & 2) != 0 && (unsigned int)(*(_DWORD *)(v2 + 24) - 5) <= 1 )
      {
        if ( (v18 & 4) != 0 )
          goto LABEL_23;
        if ( !(unsigned int)rimAbIsPointerSuppressedByOtherActiveDevicesContacts(a1, v2, (__int64)(v10 + 297)) )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x14u,
            0x17u,
            (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
LABEL_23:
          RIMCmRemoveContactSuppressionReasons(v2, v10 - 2, 1LL);
          goto LABEL_29;
        }
      }
      LODWORD(v19) = *((_DWORD *)v10 + 651);
      WPP_RECORDER_SF_dDD(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        v17,
        24,
        (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
        *((_DWORD *)v10 - 4),
        *((_DWORD *)v10 - 2),
        v19,
        (_QWORD)v20);
LABEL_28:
      *((_DWORD *)v10 + 576) &= ~1u;
      goto LABEL_29;
    }
    if ( *((_DWORD *)v10 - 2) && (*((_DWORD *)v10 + 651) & 2) == 0 && (*((_DWORD *)v10 + 597) & 0x2000000) == 0 )
      goto LABEL_28;
LABEL_29:
    v4 = (__int64 *)&v20;
    v6 = (__int64 **)&v27;
  }
}
