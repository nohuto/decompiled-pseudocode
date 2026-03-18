/*
 * XREFs of EtwTimLogProhibitLowILImageMap @ 0x14074BEC8
 * Callers:
 *     MiAllowImageMap @ 0x1404D21DC (MiAllowImageMap.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400BA32C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x1404DC09C (EtwpQueryProcessCommandLine.c)
 *     EtwpTiFillProcessIdentity @ 0x14058819C (EtwpTiFillProcessIdentity.c)
 */

void __fastcall EtwTimLogProhibitLowILImageMap(int a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rsi
  unsigned __int16 v7; // ax
  unsigned int v8; // ecx
  int v9; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  unsigned __int16 v13; // dx
  __int64 v14; // rax
  unsigned int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  ULONG v19; // r9d
  const EVENT_DESCRIPTOR *v20; // rdx
  PVOID v21; // rdi
  _WORD v22[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v23[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v24[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  _WORD *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  const wchar_t *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  _BYTE v37[160]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  int *v39; // [rsp+160h] [rbp+60h]
  __int64 v40; // [rsp+168h] [rbp+68h]
  _DWORD *v41; // [rsp+170h] [rbp+70h]
  __int64 v42; // [rsp+178h] [rbp+78h]
  __int64 v43; // [rsp+180h] [rbp+80h]
  _DWORD v44[2]; // [rsp+188h] [rbp+88h] BYREF
  _DWORD *v45; // [rsp+190h] [rbp+90h]
  __int64 v46; // [rsp+198h] [rbp+98h]
  PVOID v47; // [rsp+1A0h] [rbp+A0h]
  _DWORD v48[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned __int64 *v49; // [rsp+1B0h] [rbp+B0h]
  __int64 v50; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v51; // [rsp+1C0h] [rbp+C0h]
  __int64 v52; // [rsp+1C8h] [rbp+C8h]
  __int64 v53; // [rsp+1D0h] [rbp+D0h]
  _DWORD v54[2]; // [rsp+1D8h] [rbp+D8h] BYREF

  v3 = (unsigned __int16 *)&EmptyUnicodeString;
  v26 = 0LL;
  P = 0LL;
  if ( *(_QWORD *)(a2 + 1128) )
    v3 = *(unsigned __int16 **)(a2 + 1128);
  v7 = *v3;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v7 )
  {
    v22[0] = v7 >> 1;
    UserData.Ptr = (ULONGLONG)v22;
    v8 = *v3;
    v31 = (const wchar_t *)*((_QWORD *)v3 + 1);
    v32 = v8;
  }
  else
  {
    v22[0] = 6;
    UserData.Ptr = (ULONGLONG)v22;
    v31 = L"(null)";
    v32 = 12LL;
  }
  EtwpQueryProcessCommandLine(a2, (__int64)&v26);
  v34 = 2LL;
  if ( (_WORD)v26 )
  {
    v23[0] = (unsigned __int16)v26 >> 1;
    v33 = v23;
    v35 = (const wchar_t *)P;
    v36 = (unsigned __int16)v26;
  }
  else
  {
    v36 = 12LL;
    v23[0] = 6;
    v33 = v23;
    v35 = L"(null)";
  }
  v9 = EtwpTiFillProcessIdentity((__int64)v37, a2, &v28);
  CurrentThread = KeGetCurrentThread();
  v11 = 2LL * (unsigned int)(v9 + 4);
  v12 = v9 + 6;
  *(&UserData.Ptr + v11) = (ULONGLONG)CurrentThread + 1600;
  *((_QWORD *)&UserData.Size + v11) = 4LL;
  (&v31)[v11] = (const wchar_t *)&CurrentThread[1];
  *(&v32 + v11) = 8LL;
  if ( a3 && (v13 = *a3) != 0 )
  {
    v24[0] = v13 >> 1;
    v14 = 2LL * v12;
    v15 = v12 + 1;
    *(&UserData.Ptr + v14) = (ULONGLONG)v24;
    *((_QWORD *)&UserData.Size + v14) = 2LL;
    v16 = 2LL * v15;
    *(&UserData.Ptr + v16) = *((_QWORD *)a3 + 1);
    *(&UserData.Size + 2 * v16) = v13;
    *(&UserData.Reserved + 2 * v16) = 0;
  }
  else
  {
    v24[0] = 6;
    v17 = 2LL * v12;
    v15 = v12 + 1;
    *(&UserData.Ptr + v17) = (ULONGLONG)v24;
    *((_QWORD *)&UserData.Size + v17) = 2LL;
    v18 = 2LL * v15;
    *(&UserData.Ptr + v18) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v18) = 12LL;
  }
  v19 = v15 + 1;
  v20 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_LOWIL_IMAGE_MAP;
  if ( a1 != 1 )
    v20 = &MITIGATION_ENFORCE_PROHIBIT_LOWIL_IMAGE_MAP;
  EtwWrite(EtwSecurityMitigationsRegHandle, v20, 0LL, v19, &UserData);
  v21 = P;
  if ( stru_140354B90.LevelPlus1 > 5 && TlgKeywordOn(&stru_140354B90, 0x400000000000uLL) )
  {
    v29 = v28;
    v39 = &v25;
    v41 = v44;
    v43 = *((_QWORD *)v3 + 1);
    v44[0] = *v3;
    v45 = v48;
    v48[0] = (unsigned __int16)v26;
    v49 = &v29;
    v51 = v54;
    v53 = *((_QWORD *)a3 + 1);
    v54[0] = *a3;
    v25 = a1;
    v40 = 4LL;
    v42 = 2LL;
    v44[1] = 0;
    v46 = 2LL;
    v47 = v21;
    v48[1] = 0;
    v50 = 8LL;
    v52 = 2LL;
    v54[1] = 0;
    TlgWrite(&stru_140354B90, &unk_1402D4D06, 0LL, 0LL, 0xAu, &pData);
  }
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
}
