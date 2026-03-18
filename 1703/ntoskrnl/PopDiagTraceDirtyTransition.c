/*
 * XREFs of PopDiagTraceDirtyTransition @ 0x14083523C
 * Callers:
 *     PopCheckShutdownMarker @ 0x140824044 (PopCheckShutdownMarker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopDiagReadRegKeyValue @ 0x1406CC2C4 (PopDiagReadRegKeyValue.c)
 */

BOOLEAN __fastcall PopDiagTraceDirtyTransition(__int64 a1, int a2, int a3, char a4, char a5, char a6, int a7, char a8)
{
  BOOLEAN result; // al
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  char *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  int v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+58h] [rbp-B0h] BYREF
  BOOL v28; // [rsp+60h] [rbp-A8h] BYREF
  int v29; // [rsp+64h] [rbp-A4h] BYREF
  _QWORD v30[6]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v31[4]; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  char v33; // [rsp+D4h] [rbp-34h] BYREF
  int *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  char *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  int *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  int *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  BOOL *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]
  int *v44; // [rsp+158h] [rbp+50h]
  __int64 v45; // [rsp+160h] [rbp+58h]
  char *v46; // [rsp+168h] [rbp+60h]
  __int64 v47; // [rsp+170h] [rbp+68h]
  int *v48; // [rsp+178h] [rbp+70h]
  __int64 v49; // [rsp+180h] [rbp+78h]
  _OWORD SourceString[9]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v51; // [rsp+228h] [rbp+120h]
  int v52; // [rsp+230h] [rbp+128h]
  int v53; // [rsp+278h] [rbp+170h] BYREF

  v53 = a3;
  result = ExBootAppFailureStatus;
  v27 = ExBootAppFailureStatus;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION);
    if ( result )
    {
      v25 = 0;
      memset(v31, 0, sizeof(v31));
      v12 = *(_QWORD *)(a1 + 240);
      v28 = a4 != 0;
      LOBYTE(v24) = a8;
      if ( !v12
        || (v13 = *(_QWORD *)(v12 + 176)) == 0
        || (v25 = *(_DWORD *)(v13 + 56),
            v31[0] = *(_QWORD *)(v13 + 64),
            v31[1] = *(_QWORD *)(v13 + 72),
            v31[2] = *(_QWORD *)(v13 + 80),
            v31[3] = *(_QWORD *)(v13 + 88),
            !v25) )
      {
        memset(v30, 0, sizeof(v30));
        v14 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        SourceString[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        v15 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        SourceString[1] = v14;
        v16 = *(_OWORD *)L"\\CurrentControlSet\\Control\\CrashControl\\LastCrashdump";
        SourceString[2] = v15;
        v17 = *(_OWORD *)L"ControlSet\\Control\\CrashControl\\LastCrashdump";
        SourceString[3] = v16;
        v18 = *(_OWORD *)L"et\\Control\\CrashControl\\LastCrashdump";
        SourceString[4] = v17;
        v19 = *(_OWORD *)L"ol\\CrashControl\\LastCrashdump";
        SourceString[5] = v18;
        SourceString[6] = v19;
        SourceString[7] = *(_OWORD *)L"Control\\LastCrashdump";
        v20 = *(_QWORD *)L"hdump";
        SourceString[8] = *(_OWORD *)L"LastCrashdump";
        v51 = v20;
        v52 = *(_DWORD *)L"p";
        if ( (int)PopDiagReadRegKeyValue((PCWSTR)SourceString, L"Info", 0x30uLL, v30) >= 0 )
        {
          v25 = v30[1];
          v31[0] = v30[2];
          v29 = 1;
        }
      }
      v26 = a2;
      UserData.Ptr = (ULONGLONG)&v25;
      v21 = &v33;
      *(_QWORD *)&UserData.Size = 4LL;
      v22 = v31;
      v23 = 4LL;
      do
      {
        *(_QWORD *)(v21 - 12) = v22++;
        *(_QWORD *)(v21 - 4) = 8LL;
        v21 += 16;
        --v23;
      }
      while ( v23 );
      v34 = &v26;
      v35 = 4LL;
      v36 = &a6;
      v39 = 4LL;
      v38 = &v27;
      v40 = &v24;
      v42 = &v28;
      v44 = &v53;
      v46 = &a5;
      v48 = &v29;
      v43 = 4LL;
      v45 = 4LL;
      v49 = 4LL;
      v37 = 8LL;
      v41 = 1LL;
      v47 = 1LL;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DIRTY_TRANSITION, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
    }
  }
  return result;
}
