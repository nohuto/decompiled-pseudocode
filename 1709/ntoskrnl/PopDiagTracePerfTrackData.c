/*
 * XREFs of PopDiagTracePerfTrackData @ 0x140704460
 * Callers:
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PopReadRegKeyValue @ 0x140159924 (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopQpcTimeInMs @ 0x140439734 (PopQpcTimeInMs.c)
 *     PopComputeDerivedHiberStats @ 0x14070141C (PopComputeDerivedHiberStats.c)
 */

char __fastcall PopDiagTracePerfTrackData(unsigned int a1)
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
  unsigned int v16; // r14d
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int16 v24; // cx
  __int16 v25; // ax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v26; // rcx
  __int64 v27; // r8
  int *v28; // rdx
  int v30; // [rsp+38h] [rbp-79h] BYREF
  int v31; // [rsp+3Ch] [rbp-75h] BYREF
  int v32; // [rsp+40h] [rbp-71h] BYREF
  int v33; // [rsp+44h] [rbp-6Dh] BYREF
  int v34; // [rsp+48h] [rbp-69h] BYREF
  int v35; // [rsp+4Ch] [rbp-65h] BYREF
  __int64 v36; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v37; // [rsp+5Ch] [rbp-55h]
  int v38; // [rsp+60h] [rbp-51h] BYREF
  int v39; // [rsp+64h] [rbp-4Dh] BYREF
  int v40; // [rsp+68h] [rbp-49h] BYREF
  int v41; // [rsp+70h] [rbp-41h] BYREF
  __int16 v42; // [rsp+74h] [rbp-3Dh]
  __int16 v43; // [rsp+76h] [rbp-3Bh]
  __int16 v44; // [rsp+78h] [rbp-39h]
  __int16 v45; // [rsp+7Ah] [rbp-37h]
  __int16 v46; // [rsp+7Ch] [rbp-35h]
  __int16 v47; // [rsp+7Eh] [rbp-33h]
  int v48; // [rsp+80h] [rbp-31h]
  __int16 v49; // [rsp+84h] [rbp-2Dh]
  __int16 v50; // [rsp+86h] [rbp-2Bh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-29h] BYREF
  int *v52; // [rsp+98h] [rbp-19h]
  __int64 v53; // [rsp+A0h] [rbp-11h]
  int *v54; // [rsp+A8h] [rbp-9h]
  __int64 v55; // [rsp+B0h] [rbp-1h]
  int *v56; // [rsp+B8h] [rbp+7h]
  __int64 v57; // [rsp+C0h] [rbp+Fh]
  int *v58; // [rsp+C8h] [rbp+17h]
  __int64 v59; // [rsp+D0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES);
    if ( (_BYTE)v1 )
    {
      v3 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
      v39 = PopQpcTimeInMs(&qword_140365C40, &qword_140365C48);
      v38 = PopQpcTimeInMs(&qword_140365C30, &qword_140365C38);
      if ( qword_140365C28 )
      {
        v36 = 0LL;
        v32 = PopQpcTimeInMs(&v36, &qword_140365C28);
        v30 = v32 + PopQpcTimeInMs(&qword_140365C08, &qword_140365C10);
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&qword_140365DE8;
        v52 = &v30;
        v54 = &v32;
        v56 = &v38;
        v58 = &v39;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        v59 = 4LL;
        LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_STANDBY, 0LL, 5u, &UserData);
      }
      else
      {
        LOBYTE(v1) = dword_140365E30;
        if ( dword_140365E30 )
        {
          v4 = qword_140365C98;
          v34 = (4 * dword_140365E30) & 0x3FFFFF;
          v40 = qword_140365C98;
          v35 = qword_140365C70 / v3;
          LOBYTE(v1) = qword_140365E40;
          v30 = qword_140365E40;
          if ( (a1 & 8) != 0 )
          {
            if ( !PopShutdownButtonPressTime )
              return (char)v1;
            v31 = PopQpcTimeInMs(&PopShutdownButtonPressTime, &qword_140365BE8) + v4;
            if ( (int)PopReadRegKeyValue(
                        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
                        L"LastLogOffEndTimePerfCounter",
                        8uLL,
                        0,
                        &v36) < 0 )
              v33 = 0;
            else
              v33 = PopQpcTimeInMs(&v36, &qword_140365CA0);
            UserData.Ptr = (ULONGLONG)&v34;
            v52 = &v31;
            *(_QWORD *)&UserData.Size = 4LL;
            v54 = &v35;
            v53 = 4LL;
            v56 = &v33;
            v55 = 4LL;
            v57 = 4LL;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HYBRID_SHUTDOWN, 0LL, 4u, &UserData);
            PopComputeDerivedHiberStats((unsigned __int64 *)&qword_140365C58, v3, (__int64)&v36);
            v5 = (unsigned __int64)qword_140365E18 >> 8;
            v41 = v30;
            if ( (unsigned __int64)qword_140365E18 >> 8 > 0x7FFF )
              LOWORD(v5) = 0x7FFF;
            v43 = -1;
            v42 = v5 & 0x7FFF;
            if ( (unsigned __int64)qword_140365E20 >> 8 <= 0xFFFF )
              v43 = (unsigned int)qword_140365E20 >> 8;
            v44 = -1;
            if ( qword_140365CB8 / v3 <= 0xFFFF )
              v44 = qword_140365CB8 / v3;
            v45 = -1;
            if ( qword_140365DA8 / v3 <= 0xFFFF )
              v45 = qword_140365DA8 / v3;
            v46 = -1;
            if ( (unsigned int)qword_140365CA8 <= 0xFFFF )
              v46 = qword_140365CA8;
            v47 = -1;
            if ( (unsigned int)qword_140365DE8 <= 0xFFFF )
              v47 = qword_140365DE8;
            v6 = HIDWORD(v36);
            v50 = -1;
            if ( HIDWORD(v36) > 0x3FF )
              v6 = 1023;
            v7 = (v48 ^ v6) & 0x3FF ^ v48;
            v8 = v37;
            if ( v37 > 0x1FF )
              v8 = 511;
            v9 = (v7 ^ (v8 << 10)) & 0x7FC00 ^ v7;
            v10 = (qword_140365D38 - qword_140365D70) / v3;
            if ( v10 > 0x1FFF )
              LODWORD(v10) = 0x1FFF;
            v48 = v9 & 0x7FFFF | ((_DWORD)v10 << 19);
            v11 = (unsigned __int64)qword_140365DF8 >> 8;
            if ( (unsigned __int64)qword_140365DF8 >> 8 > 0x7FFF )
              LOWORD(v11) = 0x7FFF;
            v49 = v11 & 0x7FFF;
            if ( (unsigned __int64)qword_140365E00 >> 8 <= 0xFFFF )
              v50 = (unsigned int)qword_140365E00 >> 8;
            p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
            v13 = 6LL;
            v14 = &v41;
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
            UserData.Ptr = (ULONGLONG)&v34;
            v52 = &v40;
            *(_QWORD *)&UserData.Size = 4LL;
            v54 = &v35;
            v53 = 4LL;
            v55 = 4LL;
            LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HIBERNATE, 0LL, 3u, &UserData);
            v16 = qword_140365CA8;
            if ( !(_DWORD)qword_140365CA8 )
              return (char)v1;
            PopComputeDerivedHiberStats((unsigned __int64 *)&qword_140365C58, v3, (__int64)&v36);
            v17 = (unsigned __int64)qword_140365E18 >> 8;
            v41 = v30;
            if ( (unsigned __int64)qword_140365E18 >> 8 > 0x7FFF )
              LOWORD(v17) = 0x7FFF;
            v42 = v17 & 0x7FFF ^ ((unsigned __int16)(a1 >> 5) << 15);
            v43 = (unsigned int)qword_140365E20 >> 8;
            if ( (unsigned __int64)qword_140365E20 >> 8 >= 0xFFFF )
              v43 = -1;
            v44 = qword_140365CB8 / v3;
            if ( qword_140365CB8 / v3 >= 0xFFFF )
              v44 = -1;
            v45 = qword_140365DA8 / v3;
            if ( qword_140365DA8 / v3 >= 0xFFFF )
              v45 = -1;
            v46 = v16;
            if ( v16 >= 0xFFFF )
              v46 = -1;
            v47 = qword_140365DE8;
            if ( (unsigned int)qword_140365DE8 >= 0xFFFF )
              v47 = -1;
            v18 = HIDWORD(v36);
            if ( HIDWORD(v36) > 0x3FF )
              v18 = 1023;
            v19 = (v48 ^ v18) & 0x3FF ^ v48;
            v20 = v37;
            if ( v37 > 0x1FF )
              v20 = 511;
            v21 = (v19 ^ (v20 << 10)) & 0x7FC00 ^ v19;
            v22 = (qword_140365D38 - qword_140365D70) / v3;
            if ( v22 > 0x1FFF )
              LODWORD(v22) = 0x1FFF;
            v48 = v21 & 0x7FFFF | ((_DWORD)v22 << 19);
            v23 = (unsigned __int64)qword_140365DF8 >> 8;
            if ( (unsigned __int64)qword_140365DF8 >> 8 > 0x7FFF )
              LOWORD(v23) = 0x7FFF;
            v24 = (v49 ^ v23) & 0x7FFF ^ v49;
            v25 = 0x8000;
            if ( !PopEnableMinimalHiberFile )
              v25 = 0;
            v49 = v25 | v24 & 0x7FFF;
            v50 = (unsigned int)qword_140365E00 >> 8;
            if ( (unsigned __int64)qword_140365E00 >> 8 >= 0xFFFF )
              v50 = -1;
            v26 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
            v27 = 6LL;
            v28 = &v41;
            do
            {
              *(_QWORD *)&v26[-3].Reserved = v28++;
              *(_QWORD *)&v26[-1].Reserved = 4LL;
              v26 += 4;
              --v27;
            }
            while ( v27 );
            v15 = &POP_ETW_EVENT_PERFTRACK_RESUME_FROM_HIBERNATE;
          }
          LOBYTE(v1) = EtwWrite(PopDiagHandle, v15, 0LL, 6u, &UserData);
        }
      }
    }
  }
  return (char)v1;
}
