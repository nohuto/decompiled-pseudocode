/*
 * XREFs of EtwpTimLogMitigationForProcess @ 0x1405783A0
 * Callers:
 *     MiAllowImageMap @ 0x1404B5C48 (MiAllowImageMap.c)
 *     EtwTimLogProhibitDynamicCode @ 0x140578370 (EtwTimLogProhibitDynamicCode.c)
 *     EtwTimLogProhibitWin32kSystemCalls @ 0x1407AE5D4 (EtwTimLogProhibitWin32kSystemCalls.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpTiFillProcessIdentity @ 0x1404D6C14 (EtwpTiFillProcessIdentity.c)
 *     EtwpQueryProcessCommandLine @ 0x1404F8794 (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwpTimLogMitigationForProcess(int a1, int a2, const EVENT_DESCRIPTOR *a3, __int64 a4)
{
  unsigned __int16 *v4; // rdi
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  __int16 v11; // cx
  unsigned int v12; // eax
  struct _KTHREAD *CurrentThread; // r8
  __int64 v14; // r9
  REGHANDLE v15; // rcx
  PVOID v16; // rsi
  _WORD v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  _DWORD *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  __int64 v32; // [rsp+B0h] [rbp-50h]
  _DWORD v33[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  PVOID v36; // [rsp+D0h] [rbp-30h]
  _DWORD v37[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  const wchar_t *v41; // [rsp+100h] [rbp+0h]
  _QWORD v42[3]; // [rsp+108h] [rbp+8h]
  const wchar_t *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  _BYTE v45[128]; // [rsp+130h] [rbp+30h] BYREF

  v4 = (unsigned __int16 *)&EmptyUnicodeString;
  v21 = 0LL;
  P = 0LL;
  if ( *(_QWORD *)(a4 + 1128) )
    v4 = *(unsigned __int16 **)(a4 + 1128);
  v9 = *v4;
  *(_QWORD *)&UserData.Size = 2LL;
  if ( v9 )
  {
    v17[0] = v9 >> 1;
    UserData.Ptr = (ULONGLONG)v17;
    v10 = *v4;
    v41 = (const wchar_t *)*((_QWORD *)v4 + 1);
    v42[0] = v10;
  }
  else
  {
    v17[0] = 6;
    UserData.Ptr = (ULONGLONG)v17;
    v41 = L"(null)";
    v42[0] = 12LL;
  }
  EtwpQueryProcessCommandLine(a4, (__int64)&v21);
  v42[2] = 2LL;
  v42[1] = &v18;
  if ( (_WORD)v21 )
  {
    v43 = (const wchar_t *)P;
    v44 = (unsigned __int16)v21;
    v11 = (unsigned __int16)v21 >> 1;
  }
  else
  {
    v44 = 12LL;
    v43 = L"(null)";
    v11 = 6;
  }
  v18 = v11;
  v12 = EtwpTiFillProcessIdentity((__int64)v45, a4, &v23);
  CurrentThread = KeGetCurrentThread();
  v12 += 4;
  v14 = 2LL * v12;
  *(&UserData.Ptr + v14) = (ULONGLONG)CurrentThread + 1600;
  *((_QWORD *)&UserData.Size + v14) = 4LL;
  v42[v14 - 1] = CurrentThread + 1;
  v15 = EtwSecurityMitigationsRegHandle;
  v42[v14] = 8LL;
  EtwWrite(v15, a3, 0LL, v12 + 2, &UserData);
  v16 = P;
  if ( stru_1403977A0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1403977A0, 0x200000000000uLL) )
  {
    v24 = v23;
    v26 = &v19;
    v28 = &v20;
    v30 = v33;
    v32 = *((_QWORD *)v4 + 1);
    v33[0] = *v4;
    v34 = v37;
    v37[0] = (unsigned __int16)v21;
    v38 = &v24;
    v19 = a1;
    v20 = a2;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 2LL;
    v33[1] = 0;
    v35 = 2LL;
    v36 = v16;
    v37[1] = 0;
    v39 = 8LL;
    TlgWrite(&stru_1403977A0, &unk_14030F008, 0LL, 0LL, 9u, &pData);
  }
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
}
