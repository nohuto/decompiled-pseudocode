/*
 * XREFs of EtwTimLogProhibitNonMicrosoftBinaries @ 0x14074C274
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x1405040C8 (MiValidateSectionSigningPolicy.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x1404DC09C (EtwpQueryProcessCommandLine.c)
 *     EtwpTiFillProcessIdentity @ 0x14058819C (EtwpTiFillProcessIdentity.c)
 */

void __fastcall EtwTimLogProhibitNonMicrosoftBinaries(int a1, __int64 a2, char a3, char a4, unsigned __int16 *a5)
{
  unsigned __int16 *v5; // rdi
  unsigned __int16 v8; // ax
  unsigned int v9; // ecx
  int v10; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int16 *v12; // r14
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r9d
  unsigned __int16 v18; // dx
  __int64 v19; // rax
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  ULONG v24; // r9d
  const EVENT_DESCRIPTOR *v25; // rdx
  PVOID v26; // rsi
  char v27; // [rsp+38h] [rbp-D0h] BYREF
  char v28; // [rsp+39h] [rbp-CFh] BYREF
  _WORD v29[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v30; // [rsp+40h] [rbp-C8h] BYREF
  _WORD v31[2]; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v35; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  const wchar_t *v38; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+90h] [rbp-78h]
  int *v40; // [rsp+98h] [rbp-70h]
  __int64 v41; // [rsp+A0h] [rbp-68h]
  const wchar_t *v42; // [rsp+A8h] [rbp-60h]
  __int64 v43; // [rsp+B0h] [rbp-58h]
  _BYTE v44[192]; // [rsp+B8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+178h] [rbp+70h] BYREF
  __int64 *v46; // [rsp+198h] [rbp+90h]
  __int64 v47; // [rsp+1A0h] [rbp+98h]
  _DWORD *v48; // [rsp+1A8h] [rbp+A0h]
  __int64 v49; // [rsp+1B0h] [rbp+A8h]
  __int64 v50; // [rsp+1B8h] [rbp+B0h]
  _DWORD v51[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  _DWORD *v52; // [rsp+1C8h] [rbp+C0h]
  __int64 v53; // [rsp+1D0h] [rbp+C8h]
  PVOID v54; // [rsp+1D8h] [rbp+D0h]
  _DWORD v55[2]; // [rsp+1E0h] [rbp+D8h] BYREF
  unsigned __int64 *v56; // [rsp+1E8h] [rbp+E0h]
  __int64 v57; // [rsp+1F0h] [rbp+E8h]
  _DWORD *v58; // [rsp+1F8h] [rbp+F0h]
  __int64 v59; // [rsp+200h] [rbp+F8h]
  __int64 v60; // [rsp+208h] [rbp+100h]
  _DWORD v61[2]; // [rsp+210h] [rbp+108h] BYREF
  char *v62; // [rsp+218h] [rbp+110h]
  __int64 v63; // [rsp+220h] [rbp+118h]
  char *v64; // [rsp+228h] [rbp+120h]
  __int64 v65; // [rsp+230h] [rbp+128h]
  char v66; // [rsp+298h] [rbp+190h] BYREF
  char v67; // [rsp+2A0h] [rbp+198h] BYREF

  v67 = a4;
  v66 = a3;
  v5 = (unsigned __int16 *)&EmptyUnicodeString;
  v33 = 0LL;
  P = 0LL;
  if ( *(_QWORD *)(a2 + 1128) )
    v5 = *(unsigned __int16 **)(a2 + 1128);
  v8 = *v5;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v8 )
  {
    v29[0] = v8 >> 1;
    UserData.Ptr = (ULONGLONG)v29;
    v9 = *v5;
    v38 = (const wchar_t *)*((_QWORD *)v5 + 1);
    v39 = v9;
  }
  else
  {
    v29[0] = 6;
    UserData.Ptr = (ULONGLONG)v29;
    v38 = L"(null)";
    v39 = 12LL;
  }
  EtwpQueryProcessCommandLine(a2, (__int64)&v33);
  v41 = 2LL;
  if ( (_WORD)v33 )
  {
    LOWORD(v30) = (unsigned __int16)v33 >> 1;
    v40 = &v30;
    v42 = (const wchar_t *)P;
    v43 = (unsigned __int16)v33;
  }
  else
  {
    LOWORD(v30) = 6;
    v40 = &v30;
    v42 = L"(null)";
    v43 = 12LL;
  }
  v10 = EtwpTiFillProcessIdentity((__int64)v44, a2, &v35);
  CurrentThread = KeGetCurrentThread();
  v12 = a5;
  v13 = 2LL * (unsigned int)(v10 + 4);
  v14 = v10 + 6;
  v15 = 2LL * (unsigned int)(v10 + 6);
  *(&UserData.Ptr + v13) = (ULONGLONG)CurrentThread + 1600;
  *((_QWORD *)&UserData.Size + v13) = 4LL;
  (&v38)[v13] = (const wchar_t *)&CurrentThread[1];
  *(&v39 + v13) = 8LL;
  *(&UserData.Ptr + v15) = (ULONGLONG)&v66;
  *((_QWORD *)&UserData.Size + v15) = 1LL;
  v16 = (unsigned int)(v14 + 1);
  v17 = v14 + 2;
  v16 *= 2LL;
  *(&UserData.Ptr + v16) = (ULONGLONG)&v67;
  *((_QWORD *)&UserData.Size + v16) = 1LL;
  if ( v12 && (v18 = *v12) != 0 )
  {
    v31[0] = v18 >> 1;
    v19 = 2LL * v17;
    v20 = v17 + 1;
    *(&UserData.Ptr + v19) = (ULONGLONG)v31;
    *((_QWORD *)&UserData.Size + v19) = 2LL;
    v21 = 2LL * v20;
    *(&UserData.Ptr + v21) = *((_QWORD *)v12 + 1);
    *(&UserData.Size + 2 * v21) = v18;
    *(&UserData.Reserved + 2 * v21) = 0;
  }
  else
  {
    v22 = 2LL * v17;
    v31[0] = 6;
    v20 = v17 + 1;
    *(&UserData.Ptr + v22) = (ULONGLONG)v31;
    *((_QWORD *)&UserData.Size + v22) = 2LL;
    v23 = 2LL * v20;
    *(&UserData.Ptr + v23) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v23) = 12LL;
  }
  v24 = v20 + 1;
  v25 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_NON_MICROSOFT_BINARIES;
  if ( a1 != 1 )
    v25 = &MITIGATION_ENFORCE_PROHIBIT_NON_MICROSOFT_BINARIES;
  EtwWrite(EtwSecurityMitigationsRegHandle, v25, 0LL, v24, &UserData);
  v26 = P;
  if ( stru_140354B90.LevelPlus1 > 5 && TlgKeywordOn(&stru_140354B90, 0x400000000000uLL) )
  {
    v36 = v35;
    v27 = v66;
    v28 = v67;
    v46 = &v32;
    v48 = v51;
    v50 = *((_QWORD *)v5 + 1);
    v51[0] = *v5;
    v52 = v55;
    v55[0] = (unsigned __int16)v33;
    v56 = &v36;
    v58 = v61;
    v60 = *((_QWORD *)v12 + 1);
    v61[0] = *v12;
    v62 = &v27;
    v64 = &v28;
    LODWORD(v32) = a1;
    v47 = 4LL;
    v49 = 2LL;
    v51[1] = 0;
    v53 = 2LL;
    v54 = v26;
    v55[1] = 0;
    v57 = 8LL;
    v59 = 2LL;
    v61[1] = 0;
    v63 = 1LL;
    v65 = 1LL;
    TlgWrite(&stru_140354B90, &unk_1402D4BD6, 0LL, 0LL, 0xCu, &pData);
  }
  if ( v26 )
    ExFreePoolWithTag(v26, 0);
}
