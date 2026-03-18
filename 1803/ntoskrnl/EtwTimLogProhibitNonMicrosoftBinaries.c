/*
 * XREFs of EtwTimLogProhibitNonMicrosoftBinaries @ 0x1407AE1B8
 * Callers:
 *     MiValidateSectionSigningPolicy @ 0x1404F1598 (MiValidateSectionSigningPolicy.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpTiFillProcessIdentity @ 0x1404D6C14 (EtwpTiFillProcessIdentity.c)
 *     EtwpQueryProcessCommandLine @ 0x1404F8794 (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwTimLogProhibitNonMicrosoftBinaries(int a1, __int64 a2, char a3, char a4, unsigned __int16 *a5)
{
  unsigned __int16 *v5; // rdi
  unsigned __int16 v8; // ax
  unsigned int v9; // ecx
  __int16 v10; // cx
  int v11; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int16 *v13; // r14
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r9d
  unsigned __int16 v19; // dx
  __int64 v20; // rax
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  ULONG v25; // r9d
  const EVENT_DESCRIPTOR *v26; // rdx
  PVOID v27; // rsi
  char v28; // [rsp+30h] [rbp-D0h] BYREF
  char v29; // [rsp+31h] [rbp-CFh] BYREF
  _WORD v30[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v31[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v32; // [rsp+3Ch] [rbp-C4h] BYREF
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  const wchar_t *v39; // [rsp+80h] [rbp-80h]
  _QWORD v40[3]; // [rsp+88h] [rbp-78h]
  const wchar_t *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  _BYTE v43[192]; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  int *v45; // [rsp+190h] [rbp+90h]
  __int64 v46; // [rsp+198h] [rbp+98h]
  _DWORD *v47; // [rsp+1A0h] [rbp+A0h]
  __int64 v48; // [rsp+1A8h] [rbp+A8h]
  __int64 v49; // [rsp+1B0h] [rbp+B0h]
  _DWORD v50[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  _DWORD *v51; // [rsp+1C0h] [rbp+C0h]
  __int64 v52; // [rsp+1C8h] [rbp+C8h]
  PVOID v53; // [rsp+1D0h] [rbp+D0h]
  _DWORD v54[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int64 *v55; // [rsp+1E0h] [rbp+E0h]
  __int64 v56; // [rsp+1E8h] [rbp+E8h]
  _DWORD *v57; // [rsp+1F0h] [rbp+F0h]
  __int64 v58; // [rsp+1F8h] [rbp+F8h]
  __int64 v59; // [rsp+200h] [rbp+100h]
  _DWORD v60[2]; // [rsp+208h] [rbp+108h] BYREF
  char *v61; // [rsp+210h] [rbp+110h]
  __int64 v62; // [rsp+218h] [rbp+118h]
  char *v63; // [rsp+220h] [rbp+120h]
  __int64 v64; // [rsp+228h] [rbp+128h]
  char v65; // [rsp+290h] [rbp+190h] BYREF
  char v66; // [rsp+298h] [rbp+198h] BYREF

  v66 = a4;
  v65 = a3;
  v5 = (unsigned __int16 *)&EmptyUnicodeString;
  v34 = 0LL;
  P = 0LL;
  if ( *(_QWORD *)(a2 + 1128) )
    v5 = *(unsigned __int16 **)(a2 + 1128);
  v8 = *v5;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v8 )
  {
    v30[0] = v8 >> 1;
    UserData.Ptr = (ULONGLONG)v30;
    v9 = *v5;
    v39 = (const wchar_t *)*((_QWORD *)v5 + 1);
    v40[0] = v9;
  }
  else
  {
    v30[0] = 6;
    UserData.Ptr = (ULONGLONG)v30;
    v39 = L"(null)";
    v40[0] = 12LL;
  }
  EtwpQueryProcessCommandLine(a2, (__int64)&v34);
  v40[2] = 2LL;
  v40[1] = &v32;
  if ( (_WORD)v34 )
  {
    v41 = (const wchar_t *)P;
    v42 = (unsigned __int16)v34;
    v10 = (unsigned __int16)v34 >> 1;
  }
  else
  {
    v42 = 12LL;
    v41 = L"(null)";
    v10 = 6;
  }
  v32 = v10;
  v11 = EtwpTiFillProcessIdentity((__int64)v43, a2, &v36);
  CurrentThread = KeGetCurrentThread();
  v13 = a5;
  v14 = 2LL * (unsigned int)(v11 + 4);
  v15 = v11 + 6;
  v16 = 2LL * (unsigned int)(v11 + 6);
  *(&UserData.Ptr + v14) = (ULONGLONG)CurrentThread + 1600;
  *((_QWORD *)&UserData.Size + v14) = 4LL;
  v40[v14 - 1] = CurrentThread + 1;
  v40[v14] = 8LL;
  *(&UserData.Ptr + v16) = (ULONGLONG)&v65;
  *((_QWORD *)&UserData.Size + v16) = 1LL;
  v17 = (unsigned int)(v15 + 1);
  v18 = v15 + 2;
  v17 *= 2LL;
  *(&UserData.Ptr + v17) = (ULONGLONG)&v66;
  *((_QWORD *)&UserData.Size + v17) = 1LL;
  if ( v13 && (v19 = *v13) != 0 )
  {
    v31[0] = v19 >> 1;
    v20 = 2LL * v18;
    v21 = v18 + 1;
    *(&UserData.Ptr + v20) = (ULONGLONG)v31;
    *((_QWORD *)&UserData.Size + v20) = 2LL;
    v22 = 2LL * v21;
    *(&UserData.Ptr + v22) = *((_QWORD *)v13 + 1);
    *(&UserData.Size + 2 * v22) = v19;
    *(&UserData.Reserved + 2 * v22) = 0;
  }
  else
  {
    v31[0] = 6;
    v23 = 2LL * v18;
    v21 = v18 + 1;
    *(&UserData.Ptr + v23) = (ULONGLONG)v31;
    *((_QWORD *)&UserData.Size + v23) = 2LL;
    v24 = 2LL * v21;
    *(&UserData.Ptr + v24) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v24) = 12LL;
  }
  v25 = v21 + 1;
  v26 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_NON_MICROSOFT_BINARIES;
  if ( a1 != 1 )
    v26 = &MITIGATION_ENFORCE_PROHIBIT_NON_MICROSOFT_BINARIES;
  EtwWrite(EtwSecurityMitigationsRegHandle, v26, 0LL, v25, &UserData);
  v27 = P;
  if ( stru_1403977A0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403977A0, 0x400000000000uLL) )
  {
    v37 = v36;
    v28 = v65;
    v29 = v66;
    v45 = &v33;
    v47 = v50;
    v49 = *((_QWORD *)v5 + 1);
    v50[0] = *v5;
    v51 = v54;
    v54[0] = (unsigned __int16)v34;
    v55 = &v37;
    v57 = v60;
    v59 = *((_QWORD *)v13 + 1);
    v60[0] = *v13;
    v61 = &v28;
    v63 = &v29;
    v33 = a1;
    v46 = 4LL;
    v48 = 2LL;
    v50[1] = 0;
    v52 = 2LL;
    v53 = v27;
    v54[1] = 0;
    v56 = 8LL;
    v58 = 2LL;
    v60[1] = 0;
    v62 = 1LL;
    v64 = 1LL;
    TlgWrite(&stru_1403977A0, &unk_14030EF00, 0LL, 0LL, 0xCu, &pData);
  }
  if ( v27 )
    ExFreePoolWithTag(v27, 0);
}
