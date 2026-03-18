/*
 * XREFs of EtwTimLogProhibitChildProcessCreation @ 0x1407AD810
 * Callers:
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpTiFillProcessIdentity @ 0x1404D6C14 (EtwpTiFillProcessIdentity.c)
 *     EtwpQueryProcessCommandLine @ 0x1404F8794 (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwTimLogProhibitChildProcessCreation(int a1, __int64 a2, UNICODE_STRING *a3, UNICODE_STRING *a4)
{
  unsigned __int16 *v5; // r14
  char v8; // r12
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // r15
  int v11; // r9d
  __int64 v12; // r10
  const wchar_t *v13; // rax
  __int16 v14; // bx
  int v15; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v17; // r8
  unsigned int v18; // r9d
  unsigned __int16 v19; // dx
  __int64 v20; // rax
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned __int16 v26; // dx
  unsigned int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r15d
  const EVENT_DESCRIPTOR *v33; // rdx
  ULONG v34; // r9d
  wchar_t *v35; // rbx
  _WORD v36[2]; // [rsp+38h] [rbp-D0h] BYREF
  _WORD v37[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v38; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v39; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v40; // [rsp+48h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v44; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v45; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING v46; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  const wchar_t *v48; // [rsp+A8h] [rbp-60h]
  _QWORD v49[3]; // [rsp+B0h] [rbp-58h]
  const wchar_t *v50; // [rsp+C8h] [rbp-40h]
  __int64 v51; // [rsp+D0h] [rbp-38h]
  _BYTE v52[192]; // [rsp+D8h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v53; // [rsp+198h] [rbp+90h] BYREF
  __int64 *v54; // [rsp+1B8h] [rbp+B0h]
  __int64 v55; // [rsp+1C0h] [rbp+B8h]
  _DWORD *v56; // [rsp+1C8h] [rbp+C0h]
  __int64 v57; // [rsp+1D0h] [rbp+C8h]
  __int64 v58; // [rsp+1D8h] [rbp+D0h]
  _DWORD v59[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  _DWORD *v60; // [rsp+1E8h] [rbp+E0h]
  __int64 v61; // [rsp+1F0h] [rbp+E8h]
  wchar_t *v62; // [rsp+1F8h] [rbp+F0h]
  _DWORD v63[2]; // [rsp+200h] [rbp+F8h] BYREF
  unsigned __int64 *v64; // [rsp+208h] [rbp+100h]
  __int64 v65; // [rsp+210h] [rbp+108h]
  _DWORD *v66; // [rsp+218h] [rbp+110h]
  __int64 v67; // [rsp+220h] [rbp+118h]
  wchar_t *v68; // [rsp+228h] [rbp+120h]
  _DWORD v69[2]; // [rsp+230h] [rbp+128h] BYREF
  _DWORD *v70; // [rsp+238h] [rbp+130h]
  __int64 v71; // [rsp+240h] [rbp+138h]
  wchar_t *v72; // [rsp+248h] [rbp+140h]
  _DWORD v73[2]; // [rsp+250h] [rbp+148h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+258h] [rbp+150h] BYREF
  _DWORD *v75; // [rsp+278h] [rbp+170h]
  __int64 v76; // [rsp+280h] [rbp+178h]
  __int64 v77; // [rsp+288h] [rbp+180h]
  _DWORD v78[2]; // [rsp+290h] [rbp+188h] BYREF
  _DWORD *v79; // [rsp+298h] [rbp+190h]
  __int64 v80; // [rsp+2A0h] [rbp+198h]
  wchar_t *v81; // [rsp+2A8h] [rbp+1A0h]
  _DWORD v82[2]; // [rsp+2B0h] [rbp+1A8h] BYREF
  _DWORD *v83; // [rsp+2B8h] [rbp+1B0h]
  __int64 v84; // [rsp+2C0h] [rbp+1B8h]
  wchar_t *v85; // [rsp+2C8h] [rbp+1C0h]
  _DWORD v86[2]; // [rsp+2D0h] [rbp+1C8h] BYREF
  _DWORD *v87; // [rsp+2D8h] [rbp+1D0h]
  __int64 v88; // [rsp+2E0h] [rbp+1D8h]
  wchar_t *v89; // [rsp+2E8h] [rbp+1E0h]
  _DWORD v90[2]; // [rsp+2F0h] [rbp+1E8h] BYREF

  LODWORD(v40) = a1;
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
    RtlInitUnicodeString(&v45, L"Unknown");
    a3 = &v45;
  }
  if ( !a4 || !a4->Length )
  {
    RtlInitUnicodeString(&v46, L"Unknown");
    a4 = &v46;
  }
  Buffer = DestinationString.Buffer;
  if ( (_DWORD)v40 == 2 && stru_1403977E0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403977E0, 0x200000000001uLL) )
  {
    v76 = v12;
    v75 = v78;
    v77 = *((_QWORD *)v5 + 1);
    v78[0] = *v5;
    v79 = v82;
    v82[0] = Length;
    v83 = v86;
    v85 = a3->Buffer;
    v86[0] = a3->Length;
    v87 = v90;
    v89 = a4->Buffer;
    v90[0] = a4->Length;
    v78[1] = v11;
    v80 = v12;
    v81 = Buffer;
    v82[1] = v11;
    v84 = v12;
    v86[1] = v11;
    v88 = v12;
    v90[1] = v11;
    TlgWrite(&stru_1403977E0, &unk_14030EF98, 0LL, 0LL, 0xAu, &pData);
  }
  if ( v5 && *v5 )
  {
    v36[0] = *v5 >> 1;
    UserData.Ptr = (ULONGLONG)v36;
    *(_QWORD *)&UserData.Size = 2LL;
    v13 = (const wchar_t *)*((_QWORD *)v5 + 1);
    v49[0] = *v5;
    v48 = v13;
  }
  else
  {
    v36[0] = 6;
    UserData.Ptr = (ULONGLONG)v36;
    *(_QWORD *)&UserData.Size = 2LL;
    v48 = L"(null)";
    v49[0] = 12LL;
  }
  v49[2] = 2LL;
  v49[1] = &v39;
  if ( Length )
  {
    v51 = Length;
    v50 = Buffer;
    v14 = Length >> 1;
  }
  else
  {
    v50 = L"(null)";
    v14 = 6;
    v51 = 12LL;
  }
  v39 = v14;
  v15 = EtwpTiFillProcessIdentity((__int64)v52, a2, &v43);
  CurrentThread = KeGetCurrentThread();
  v17 = 2LL * (unsigned int)(v15 + 4);
  v18 = v15 + 6;
  *(&UserData.Ptr + v17) = (ULONGLONG)CurrentThread + 1600;
  *((_QWORD *)&UserData.Size + v17) = 4LL;
  v49[v17 - 1] = CurrentThread + 1;
  v49[v17] = 8LL;
  if ( a3 && (v19 = a3->Length) != 0 )
  {
    v37[0] = v19 >> 1;
    v20 = 2LL * v18;
    v21 = v18 + 1;
    *(&UserData.Ptr + v20) = (ULONGLONG)v37;
    *((_QWORD *)&UserData.Size + v20) = 2LL;
    v22 = 2LL * v21;
    *(&UserData.Ptr + v22) = (ULONGLONG)a3->Buffer;
    *(&UserData.Size + 2 * v22) = v19;
    *(&UserData.Reserved + 2 * v22) = 0;
  }
  else
  {
    v23 = 2LL * v18;
    v21 = v18 + 1;
    v37[0] = 6;
    *(&UserData.Ptr + v23) = (ULONGLONG)v37;
    *((_QWORD *)&UserData.Size + v23) = 2LL;
    v24 = 2LL * v21;
    *(&UserData.Ptr + v24) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v24) = 12LL;
  }
  v25 = v21 + 1;
  if ( a4 && (v26 = a4->Length) != 0 )
  {
    v27 = v21 + 2;
    LOWORD(v38) = v26 >> 1;
    v28 = 2LL * v25;
    v29 = 2LL * (v25 + 1);
    *(&UserData.Ptr + v28) = (ULONGLONG)&v38;
    *((_QWORD *)&UserData.Size + v28) = 2LL;
    *(&UserData.Ptr + v29) = (ULONGLONG)a4->Buffer;
    *(&UserData.Size + 2 * v29) = v26;
    *(&UserData.Reserved + 2 * v29) = 0;
  }
  else
  {
    v30 = 2LL * v25;
    LOWORD(v38) = 6;
    v27 = v21 + 2;
    *(&UserData.Ptr + v30) = (ULONGLONG)&v38;
    *((_QWORD *)&UserData.Size + v30) = 2LL;
    v31 = 2LL * (v25 + 1);
    *(&UserData.Ptr + v31) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v31) = 12LL;
  }
  v32 = v40;
  v33 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_CHILD_PROCESS_CREATION;
  v34 = v27 + 1;
  if ( (_DWORD)v40 != 1 )
    v33 = &MITIGATION_ENFORCE_PROHIBIT_CHILD_PROCESS_CREATION;
  EtwWrite(EtwSecurityMitigationsRegHandle, v33, 0LL, v34, &UserData);
  v35 = DestinationString.Buffer;
  if ( stru_1403977A0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403977A0, 0x400000000000uLL) )
  {
    v44 = v43;
    v54 = &v42;
    v56 = v59;
    v58 = *((_QWORD *)v5 + 1);
    v59[0] = *v5;
    v60 = v63;
    v63[0] = DestinationString.Length;
    v64 = &v44;
    v66 = v69;
    v68 = a3->Buffer;
    v69[0] = a3->Length;
    v70 = v73;
    v72 = a4->Buffer;
    v73[0] = a4->Length;
    LODWORD(v42) = v32;
    v55 = 4LL;
    v57 = 2LL;
    v59[1] = 0;
    v61 = 2LL;
    v62 = v35;
    v63[1] = 0;
    v65 = 8LL;
    v67 = 2LL;
    v69[1] = 0;
    v71 = 2LL;
    v73[1] = 0;
    TlgWrite(&stru_1403977A0, &unk_14030EE68, 0LL, 0LL, 0xCu, &v53);
  }
  if ( v8 )
    ExFreePoolWithTag(v35, 0);
}
