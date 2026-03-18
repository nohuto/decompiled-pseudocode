/*
 * XREFs of PopDiagTracePerfTrackData @ 0x140577E00
 * Callers:
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopQpcTimeInMs @ 0x14040A738 (PopQpcTimeInMs.c)
 *     PopComputeDerivedHiberStats @ 0x1405782E0 (PopComputeDerivedHiberStats.c)
 *     PopDiagReadRegKeyValue @ 0x1406CC2C4 (PopDiagReadRegKeyValue.c)
 */

char __fastcall PopDiagTracePerfTrackData(char a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int64 v3; // rdi
  int v4; // ecx
  unsigned __int64 v5; // rax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rcx
  __int64 v13; // r8
  int *v14; // rdx
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned int v16; // esi
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v24; // rcx
  __int64 v25; // r8
  int *v26; // rdx
  int v28; // [rsp+38h] [rbp-79h] BYREF
  int v29; // [rsp+3Ch] [rbp-75h] BYREF
  int v30; // [rsp+40h] [rbp-71h] BYREF
  int v31; // [rsp+44h] [rbp-6Dh] BYREF
  int v32; // [rsp+48h] [rbp-69h] BYREF
  int v33; // [rsp+4Ch] [rbp-65h] BYREF
  __int64 v34; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-55h]
  int v36; // [rsp+60h] [rbp-51h] BYREF
  int v37; // [rsp+64h] [rbp-4Dh] BYREF
  int v38; // [rsp+68h] [rbp-49h] BYREF
  int v39; // [rsp+70h] [rbp-41h] BYREF
  __int16 v40; // [rsp+74h] [rbp-3Dh]
  __int16 v41; // [rsp+76h] [rbp-3Bh]
  __int16 v42; // [rsp+78h] [rbp-39h]
  __int16 v43; // [rsp+7Ah] [rbp-37h]
  __int16 v44; // [rsp+7Ch] [rbp-35h]
  __int16 v45; // [rsp+7Eh] [rbp-33h]
  int v46; // [rsp+80h] [rbp-31h]
  __int16 v47; // [rsp+84h] [rbp-2Dh]
  __int16 v48; // [rsp+86h] [rbp-2Bh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-29h] BYREF
  int *v50; // [rsp+98h] [rbp-19h]
  __int64 v51; // [rsp+A0h] [rbp-11h]
  int *v52; // [rsp+A8h] [rbp-9h]
  __int64 v53; // [rsp+B0h] [rbp-1h]
  int *v54; // [rsp+B8h] [rbp+7h]
  __int64 v55; // [rsp+C0h] [rbp+Fh]
  int *v56; // [rsp+C8h] [rbp+17h]
  __int64 v57; // [rsp+D0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES);
    if ( (_BYTE)v1 )
    {
      v3 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
      v37 = PopQpcTimeInMs(&qword_14034B5C0, &qword_14034B5C8);
      v36 = PopQpcTimeInMs(&qword_14034B5B0, &qword_14034B5B8);
      if ( qword_14034B5A8 )
      {
        v34 = 0LL;
        v30 = PopQpcTimeInMs(&v34, &qword_14034B5A8);
        v28 = v30 + PopQpcTimeInMs(&qword_14034B588, &qword_14034B590);
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&qword_14034B768;
        v50 = &v28;
        v52 = &v30;
        v54 = &v36;
        v56 = &v37;
        v51 = 4LL;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_STANDBY, 0LL, 5u, &UserData);
      }
      else
      {
        LOBYTE(v1) = qword_14034B7B0;
        if ( (_DWORD)qword_14034B7B0 )
        {
          v4 = qword_14034B618;
          v32 = (4 * qword_14034B7B0) & 0x3FFFFF;
          v38 = qword_14034B618;
          v33 = qword_14034B5F0 / v3;
          LOBYTE(v1) = qword_14034B7C0;
          v28 = qword_14034B7C0;
          if ( (a1 & 8) != 0 )
          {
            if ( !PopShutdownButtonPressTime )
              return (char)v1;
            v29 = PopQpcTimeInMs(&PopShutdownButtonPressTime, &qword_14034B568) + v4;
            if ( (int)PopDiagReadRegKeyValue(
                        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
                        L"LastLogOffEndTimePerfCounter",
                        8uLL,
                        &v34) < 0 )
              v31 = 0;
            else
              v31 = PopQpcTimeInMs(&v34, &qword_14034B620);
            UserData.Ptr = (ULONGLONG)&v32;
            v50 = &v29;
            *(_QWORD *)&UserData.Size = 4LL;
            v52 = &v33;
            v51 = 4LL;
            v54 = &v31;
            v53 = 4LL;
            v55 = 4LL;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HYBRID_SHUTDOWN, 0LL, 4u, &UserData);
            PopComputeDerivedHiberStats(&qword_14034B5D8, v3, &v34);
            v5 = (unsigned __int64)qword_14034B798 >> 8;
            v39 = v28;
            if ( (unsigned __int64)qword_14034B798 >> 8 > 0x7FFF )
              LOWORD(v5) = 0x7FFF;
            v41 = -1;
            v40 = v5 & 0x7FFF;
            if ( (unsigned __int64)qword_14034B7A0 >> 8 <= 0xFFFF )
              v41 = (unsigned int)qword_14034B7A0 >> 8;
            v42 = -1;
            if ( qword_14034B638 / v3 <= 0xFFFF )
              v42 = qword_14034B638 / v3;
            v43 = -1;
            if ( qword_14034B728 / v3 <= 0xFFFF )
              v43 = qword_14034B728 / v3;
            v44 = -1;
            if ( (unsigned int)qword_14034B628 <= 0xFFFF )
              v44 = qword_14034B628;
            v45 = -1;
            if ( (unsigned int)qword_14034B768 <= 0xFFFF )
              v45 = qword_14034B768;
            v6 = HIDWORD(v34);
            v48 = -1;
            if ( HIDWORD(v34) > 0x3FF )
              v6 = 1023;
            v7 = (v46 ^ v6) & 0x3FF ^ v46;
            v8 = v35;
            if ( v35 > 0x1FF )
              v8 = 511;
            v9 = (v7 ^ (v8 << 10)) & 0x7FC00 ^ v7;
            v10 = (qword_14034B6B8 - qword_14034B6F0) / v3;
            if ( v10 > 0x1FFF )
              LODWORD(v10) = 0x1FFF;
            v46 = v9 & 0x7FFFF | ((_DWORD)v10 << 19);
            v11 = (unsigned __int64)qword_14034B778 >> 8;
            if ( (unsigned __int64)qword_14034B778 >> 8 > 0x7FFF )
              LOWORD(v11) = 0x7FFF;
            v47 = v11 & 0x7FFF;
            if ( (unsigned __int64)qword_14034B780 >> 8 <= 0xFFFF )
              v48 = (unsigned int)qword_14034B780 >> 8;
            p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
            v13 = 6LL;
            v14 = &v39;
            do
            {
              *(_QWORD *)&p_Reserved[-3].Reserved = v14++;
              *(_QWORD *)&p_Reserved[-1].Reserved = 4LL;
              p_Reserved += 4;
              --v13;
            }
            while ( v13 );
            v15 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_PERFTRACK_HYBRID_RESUME;
          }
          else
          {
            UserData.Ptr = (ULONGLONG)&v32;
            v50 = &v38;
            *(_QWORD *)&UserData.Size = 4LL;
            v52 = &v33;
            v51 = 4LL;
            v53 = 4LL;
            LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HIBERNATE, 0LL, 3u, &UserData);
            v16 = qword_14034B628;
            if ( !(_DWORD)qword_14034B628 )
              return (char)v1;
            PopComputeDerivedHiberStats(&qword_14034B5D8, v3, &v34);
            v17 = (unsigned __int64)qword_14034B798 >> 8;
            v39 = v28;
            if ( (unsigned __int64)qword_14034B798 >> 8 > 0x7FFF )
              LOWORD(v17) = 0x7FFF;
            v40 = ((v40 ^ v17) & 0x7FFF ^ v40) & 0x7FFF | (((a1 & 0x20) != 0) << 15);
            v41 = (unsigned int)qword_14034B7A0 >> 8;
            if ( (unsigned __int64)qword_14034B7A0 >> 8 >= 0xFFFF )
              v41 = -1;
            v42 = qword_14034B638 / v3;
            if ( qword_14034B638 / v3 >= 0xFFFF )
              v42 = -1;
            v43 = qword_14034B728 / v3;
            if ( qword_14034B728 / v3 >= 0xFFFF )
              v43 = -1;
            v44 = v16;
            if ( v16 >= 0xFFFF )
              v44 = -1;
            v45 = qword_14034B768;
            if ( (unsigned int)qword_14034B768 >= 0xFFFF )
              v45 = -1;
            v18 = HIDWORD(v34);
            if ( HIDWORD(v34) > 0x3FF )
              v18 = 1023;
            v19 = (v46 ^ v18) & 0x3FF ^ v46;
            v20 = v35;
            if ( v35 > 0x1FF )
              v20 = 511;
            v21 = (v19 ^ (v20 << 10)) & 0x7FC00 ^ v19;
            v22 = (qword_14034B6B8 - qword_14034B6F0) / v3;
            if ( v22 > 0x1FFF )
              LODWORD(v22) = 0x1FFF;
            v46 = v21 & 0x7FFFF | ((_DWORD)v22 << 19);
            v23 = (unsigned __int64)qword_14034B778 >> 8;
            if ( (unsigned __int64)qword_14034B778 >> 8 > 0x7FFF )
              LOWORD(v23) = 0x7FFF;
            v47 = ((v47 ^ v23) & 0x7FFF ^ v47) & 0x7FFF | ((PopEnableMinimalHiberFile != 0) << 15);
            v48 = (unsigned int)qword_14034B780 >> 8;
            if ( (unsigned __int64)qword_14034B780 >> 8 >= 0xFFFF )
              v48 = -1;
            v24 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
            v25 = 6LL;
            v26 = &v39;
            do
            {
              *(_QWORD *)&v24[-3].Reserved = v26++;
              *(_QWORD *)&v24[-1].Reserved = 4LL;
              v24 += 4;
              --v25;
            }
            while ( v25 );
            v15 = &POP_ETW_EVENT_PERFTRACK_RESUME_FROM_HIBERNATE;
          }
          LOBYTE(v1) = EtwWrite(PopDiagHandle, v15, 0LL, 6u, &UserData);
        }
      }
    }
  }
  return (char)v1;
}
