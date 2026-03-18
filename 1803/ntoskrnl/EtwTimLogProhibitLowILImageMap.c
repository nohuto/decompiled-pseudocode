/*
 * XREFs of EtwTimLogProhibitLowILImageMap @ 0x1407ADE1C
 * Callers:
 *     MiAllowImageMap @ 0x1404B5C48 (MiAllowImageMap.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpTiFillProcessIdentity @ 0x1404D6C14 (EtwpTiFillProcessIdentity.c)
 *     EtwpQueryProcessCommandLine @ 0x1404F8794 (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwTimLogProhibitLowILImageMap(int a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rsi
  unsigned __int16 v7; // ax
  unsigned int v8; // ecx
  __int16 v9; // cx
  int v10; // eax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned __int16 v14; // dx
  __int64 v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  ULONG v20; // r9d
  const EVENT_DESCRIPTOR *v21; // rdx
  PVOID v22; // rdi
  _WORD v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  _WORD v24[2]; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  const wchar_t *v32; // [rsp+70h] [rbp-90h]
  _QWORD v33[3]; // [rsp+78h] [rbp-88h]
  const wchar_t *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  _BYTE v36[160]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF
  int *v38; // [rsp+160h] [rbp+60h]
  __int64 v39; // [rsp+168h] [rbp+68h]
  _DWORD *v40; // [rsp+170h] [rbp+70h]
  __int64 v41; // [rsp+178h] [rbp+78h]
  __int64 v42; // [rsp+180h] [rbp+80h]
  _DWORD v43[2]; // [rsp+188h] [rbp+88h] BYREF
  _DWORD *v44; // [rsp+190h] [rbp+90h]
  __int64 v45; // [rsp+198h] [rbp+98h]
  PVOID v46; // [rsp+1A0h] [rbp+A0h]
  _DWORD v47[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned __int64 *v48; // [rsp+1B0h] [rbp+B0h]
  __int64 v49; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v50; // [rsp+1C0h] [rbp+C0h]
  __int64 v51; // [rsp+1C8h] [rbp+C8h]
  __int64 v52; // [rsp+1D0h] [rbp+D0h]
  _DWORD v53[2]; // [rsp+1D8h] [rbp+D8h] BYREF

  v3 = (unsigned __int16 *)&EmptyUnicodeString;
  v27 = 0LL;
  P = 0LL;
  if ( *(_QWORD *)(a2 + 1128) )
    v3 = *(unsigned __int16 **)(a2 + 1128);
  v7 = *v3;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v7 )
  {
    v23[0] = v7 >> 1;
    UserData.Ptr = (ULONGLONG)v23;
    v8 = *v3;
    v32 = (const wchar_t *)*((_QWORD *)v3 + 1);
    v33[0] = v8;
  }
  else
  {
    v23[0] = 6;
    UserData.Ptr = (ULONGLONG)v23;
    v32 = L"(null)";
    v33[0] = 12LL;
  }
  EtwpQueryProcessCommandLine(a2, (__int64)&v27);
  v33[2] = 2LL;
  v33[1] = &v25;
  if ( (_WORD)v27 )
  {
    v34 = (const wchar_t *)P;
    v35 = (unsigned __int16)v27;
    v9 = (unsigned __int16)v27 >> 1;
  }
  else
  {
    v35 = 12LL;
    v34 = L"(null)";
    v9 = 6;
  }
  v25 = v9;
  v10 = EtwpTiFillProcessIdentity((__int64)v36, a2, &v29);
  CurrentThread = KeGetCurrentThread();
  v12 = 2LL * (unsigned int)(v10 + 4);
  v13 = v10 + 6;
  *(&UserData.Ptr + v12) = (ULONGLONG)CurrentThread + 1600;
  *((_QWORD *)&UserData.Size + v12) = 4LL;
  v33[v12 - 1] = CurrentThread + 1;
  v33[v12] = 8LL;
  if ( a3 && (v14 = *a3) != 0 )
  {
    v24[0] = v14 >> 1;
    v15 = 2LL * v13;
    v16 = v13 + 1;
    *(&UserData.Ptr + v15) = (ULONGLONG)v24;
    *((_QWORD *)&UserData.Size + v15) = 2LL;
    v17 = 2LL * v16;
    *(&UserData.Ptr + v17) = *((_QWORD *)a3 + 1);
    *(&UserData.Size + 2 * v17) = v14;
    *(&UserData.Reserved + 2 * v17) = 0;
  }
  else
  {
    v24[0] = 6;
    v18 = 2LL * v13;
    v16 = v13 + 1;
    *(&UserData.Ptr + v18) = (ULONGLONG)v24;
    *((_QWORD *)&UserData.Size + v18) = 2LL;
    v19 = 2LL * v16;
    *(&UserData.Ptr + v19) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v19) = 12LL;
  }
  v20 = v16 + 1;
  v21 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_PROHIBIT_LOWIL_IMAGE_MAP;
  if ( a1 != 1 )
    v21 = &MITIGATION_ENFORCE_PROHIBIT_LOWIL_IMAGE_MAP;
  EtwWrite(EtwSecurityMitigationsRegHandle, v21, 0LL, v20, &UserData);
  v22 = P;
  if ( stru_1403977A0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403977A0, 0x400000000000uLL) )
  {
    v30 = v29;
    v38 = &v26;
    v40 = v43;
    v42 = *((_QWORD *)v3 + 1);
    v43[0] = *v3;
    v44 = v47;
    v47[0] = (unsigned __int16)v27;
    v48 = &v30;
    v50 = v53;
    v52 = *((_QWORD *)a3 + 1);
    v53[0] = *a3;
    v26 = a1;
    v39 = 4LL;
    v41 = 2LL;
    v43[1] = 0;
    v45 = 2LL;
    v46 = v22;
    v47[1] = 0;
    v49 = 8LL;
    v51 = 2LL;
    v53[1] = 0;
    TlgWrite(&stru_1403977A0, &unk_14030EDFF, 0LL, 0LL, 0xAu, &pData);
  }
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
}
