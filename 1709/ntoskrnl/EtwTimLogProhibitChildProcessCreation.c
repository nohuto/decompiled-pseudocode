/*
 * XREFs of EtwTimLogProhibitChildProcessCreation @ 0x14074B8B0
 * Callers:
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x1404DC09C (EtwpQueryProcessCommandLine.c)
 *     EtwpTiFillProcessIdentity @ 0x14058819C (EtwpTiFillProcessIdentity.c)
 */

void __fastcall EtwTimLogProhibitChildProcessCreation(int a1, __int64 a2, UNICODE_STRING *a3, UNICODE_STRING *a4)
{
  unsigned __int16 *v5; // r14
  char v8; // r12
  unsigned __int16 Length; // si
  wchar_t *Buffer; // r15
  int v11; // r9d
  __int64 v12; // r10
  const wchar_t *v13; // rax
  int v14; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v16; // r8
  unsigned int v17; // r9d
  unsigned __int16 v18; // dx
  __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned __int16 v25; // dx
  unsigned int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r15d
  const EVENT_DESCRIPTOR *v32; // rdx
  ULONG v33; // r9d
  wchar_t *v34; // rsi
  _WORD v35[2]; // [rsp+38h] [rbp-D0h] BYREF
  _WORD v36[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v37; // [rsp+40h] [rbp-C8h] BYREF
  _WORD v38[2]; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v39; // [rsp+48h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v44; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING v45; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  const wchar_t *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  _WORD *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  const wchar_t *v51; // [rsp+C8h] [rbp-40h]
  __int64 v52; // [rsp+D0h] [rbp-38h]
  _BYTE v53[192]; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v54; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v55; // [rsp+1B8h] [rbp+B0h]
  __int64 v56; // [rsp+1C0h] [rbp+B8h]
  _DWORD *v57; // [rsp+1C8h] [rbp+C0h]
  __int64 v58; // [rsp+1D0h] [rbp+C8h]
  __int64 v59; // [rsp+1D8h] [rbp+D0h]
  _DWORD v60[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  _DWORD *v61; // [rsp+1E8h] [rbp+E0h]
  __int64 v62; // [rsp+1F0h] [rbp+E8h]
  wchar_t *v63; // [rsp+1F8h] [rbp+F0h]
  _DWORD v64[2]; // [rsp+200h] [rbp+F8h] BYREF
  unsigned __int64 *v65; // [rsp+208h] [rbp+100h]
  __int64 v66; // [rsp+210h] [rbp+108h]
  _DWORD *v67; // [rsp+218h] [rbp+110h]
  __int64 v68; // [rsp+220h] [rbp+118h]
  wchar_t *v69; // [rsp+228h] [rbp+120h]
  _DWORD v70[2]; // [rsp+230h] [rbp+128h] BYREF
  _DWORD *v71; // [rsp+238h] [rbp+130h]
  __int64 v72; // [rsp+240h] [rbp+138h]
  wchar_t *v73; // [rsp+248h] [rbp+140h]
  _DWORD v74[2]; // [rsp+250h] [rbp+148h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+258h] [rbp+150h] BYREF
  _DWORD *v76; // [rsp+278h] [rbp+170h]
  __int64 v77; // [rsp+280h] [rbp+178h]
  __int64 v78; // [rsp+288h] [rbp+180h]
  _DWORD v79[2]; // [rsp+290h] [rbp+188h] BYREF
  _DWORD *v80; // [rsp+298h] [rbp+190h]
  __int64 v81; // [rsp+2A0h] [rbp+198h]
  wchar_t *v82; // [rsp+2A8h] [rbp+1A0h]
  _DWORD v83[2]; // [rsp+2B0h] [rbp+1A8h] BYREF
  _DWORD *v84; // [rsp+2B8h] [rbp+1B0h]
  __int64 v85; // [rsp+2C0h] [rbp+1B8h]
  wchar_t *v86; // [rsp+2C8h] [rbp+1C0h]
  _DWORD v87[2]; // [rsp+2D0h] [rbp+1C8h] BYREF
  _DWORD *v88; // [rsp+2D8h] [rbp+1D0h]
  __int64 v89; // [rsp+2E0h] [rbp+1D8h]
  wchar_t *v90; // [rsp+2E8h] [rbp+1E0h]
  _DWORD v91[2]; // [rsp+2F0h] [rbp+1E8h] BYREF

  LODWORD(v39) = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = (unsigned __int16 *)&EmptyUnicodeString;
  if ( *(_QWORD *)(a2 + 1128) )
    v5 = *(unsigned __int16 **)(a2 + 1128);
  v8 = 1;
  EtwpQueryProcessCommandLine(a2, (__int64)&DestinationString);
  Length = DestinationString.Length;
  if ( !DestinationString.Length )
  {
    RtlInitUnicodeString(&DestinationString, L"Unknown");
    Length = DestinationString.Length;
    v8 = 0;
  }
  if ( !a3 || !a3->Length )
  {
    RtlInitUnicodeString(&v44, L"Unknown");
    a3 = &v44;
  }
  if ( !a4 || !a4->Length )
  {
    RtlInitUnicodeString(&v45, L"Unknown");
    a4 = &v45;
  }
  Buffer = DestinationString.Buffer;
  if ( (_DWORD)v39 == 2 && stru_140354B50.LevelPlus1 > 5 && TlgKeywordOn(&stru_140354B50, 0x200000000001uLL) )
  {
    v77 = v12;
    v76 = v79;
    v78 = *((_QWORD *)v5 + 1);
    v79[0] = *v5;
    v80 = v83;
    v83[0] = Length;
    v84 = v87;
    v86 = a3->Buffer;
    v87[0] = a3->Length;
    v88 = v91;
    v90 = a4->Buffer;
    v91[0] = a4->Length;
    v79[1] = v11;
    v81 = v12;
    v82 = Buffer;
    v83[1] = v11;
    v85 = v12;
    v87[1] = v11;
    v89 = v12;
    v91[1] = v11;
    TlgWrite(&stru_140354B50, &unk_1402D4DE1, 0LL, 0LL, 0xAu, &pData);
  }
  if ( v5 && *v5 )
  {
    v35[0] = *v5 >> 1;
    UserData.Ptr = (ULONGLONG)v35;
    *(_QWORD *)&UserData.Size = 2LL;
    v13 = (const wchar_t *)*((_QWORD *)v5 + 1);
    v48 = *v5;
    v47 = v13;
  }
  else
  {
    v35[0] = 6;
    UserData.Ptr = (ULONGLONG)v35;
    *(_QWORD *)&UserData.Size = 2LL;
    v47 = L"(null)";
    v48 = 12LL;
  }
  v50 = 2LL;
  if ( Length )
  {
    v51 = Buffer;
    v36[0] = Length >> 1;
    v49 = v36;
    v52 = Length;
  }
  else
  {
    v36[0] = 6;
    v49 = v36;
    v51 = L"(null)";
    v52 = 12LL;
  }
  v14 = EtwpTiFillProcessIdentity((__int64)v53, a2, &v42);
  CurrentThread = KeGetCurrentThread();
  v16 = 2LL * (unsigned int)(v14 + 4);
  v17 = v14 + 6;
  *(&UserData.Ptr + v16) = (ULONGLONG)CurrentThread + 1600;
  *((_QWORD *)&UserData.Size + v16) = 4LL;
  (&v47)[v16] = (const wchar_t *)&CurrentThread[1];
  *(&v48 + v16) = 8LL;
  if ( a3 && (v18 = a3->Length) != 0 )
  {
    LOWORD(v37) = v18 >> 1;
    v19 = 2LL * v17;
    v20 = v17 + 1;
    *(&UserData.Ptr + v19) = (ULONGLONG)&v37;
    *((_QWORD *)&UserData.Size + v19) = 2LL;
    v21 = 2LL * v20;
    *(&UserData.Ptr + v21) = (ULONGLONG)a3->Buffer;
    *(&UserData.Size + 2 * v21) = v18;
    *(&UserData.Reserved + 2 * v21) = 0;
  }
  else
  {
    v22 = 2LL * v17;
    v20 = v17 + 1;
    LOWORD(v37) = 6;
    *(&UserData.Ptr + v22) = (ULONGLONG)&v37;
    *((_QWORD *)&UserData.Size + v22) = 2LL;
    v23 = 2LL * v20;
    *(&UserData.Ptr + v23) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v23) = 12LL;
  }
  v24 = v20 + 1;
  if ( a4 && (v25 = a4->Length) != 0 )
  {
    v26 = v20 + 2;
    v38[0] = v25 >> 1;
    v27 = 2LL * v24;
    v28 = 2LL * (v24 + 1);
    *(&UserData.Ptr + v27) = (ULONGLONG)v38;
    *((_QWORD *)&UserData.Size + v27) = 2LL;
    *(&UserData.Ptr + v28) = (ULONGLONG)a4->Buffer;
    *(&UserData.Size + 2 * v28) = v25;
    *(&UserData.Reserved + 2 * v28) = 0;
  }
  else
  {
    v29 = 2LL * v24;
    v38[0] = 6;
    v26 = v20 + 2;
    *(&UserData.Ptr + v29) = (ULONGLONG)v38;
    *((_QWORD *)&UserData.Size + v29) = 2LL;
    v30 = 2LL * (v24 + 1);
    *(&UserData.Ptr + v30) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v30) = 12LL;
  }
  v31 = v39;
  v32 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_CHILD_PROCESS_CREATION;
  v33 = v26 + 1;
  if ( (_DWORD)v39 != 1 )
    v32 = &MITIGATION_ENFORCE_PROHIBIT_CHILD_PROCESS_CREATION;
  EtwWrite(EtwSecurityMitigationsRegHandle, v32, 0LL, v33, &UserData);
  v34 = DestinationString.Buffer;
  if ( stru_140354B90.LevelPlus1 > 5 && TlgKeywordOn(&stru_140354B90, 0x400000000000uLL) )
  {
    v43 = v42;
    v55 = &v41;
    v57 = v60;
    v59 = *((_QWORD *)v5 + 1);
    v60[0] = *v5;
    v61 = v64;
    v64[0] = DestinationString.Length;
    v65 = &v43;
    v67 = v70;
    v69 = a3->Buffer;
    v70[0] = a3->Length;
    v71 = v74;
    v73 = a4->Buffer;
    v74[0] = a4->Length;
    LODWORD(v41) = v31;
    v56 = 4LL;
    v58 = 2LL;
    v60[1] = 0;
    v62 = 2LL;
    v63 = v34;
    v64[1] = 0;
    v66 = 8LL;
    v68 = 2LL;
    v70[1] = 0;
    v72 = 2LL;
    v74[1] = 0;
    TlgWrite(&stru_140354B90, &unk_1402D4C6E, 0LL, 0LL, 0xCu, &v54);
  }
  if ( v8 )
    ExFreePoolWithTag(v34, 0);
}
