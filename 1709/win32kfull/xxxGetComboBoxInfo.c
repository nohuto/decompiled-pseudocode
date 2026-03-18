/*
 * XREFs of xxxGetComboBoxInfo @ 0x1C013743C
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1C0137280 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C0137538 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 *v4; // r13
  __int64 v5; // rdx
  unsigned int v6; // r15d
  __int64 v7; // rcx
  __int64 *v8; // rsi
  PRKPROCESS *v10; // r14
  ULONG64 v11; // rcx
  int v12; // r14d
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ecx
  int v26; // edx
  _BYTE v27[64]; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp-68h]
  unsigned __int64 v29; // [rsp+98h] [rbp-60h]
  unsigned __int64 v30; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v31; // [rsp+A8h] [rbp-50h]
  PRKPROCESS *v32; // [rsp+118h] [rbp+20h]

  v4 = 0LL;
  *(_DWORD *)v27 = 64;
  memset(&v27[4], 0, 0x3CuLL);
  v6 = 0;
  if ( BugCheckParameter2 )
  {
    v7 = 674LL;
    if ( (*(_WORD *)(BugCheckParameter2 + 82) & 0x3FFF) == 0x2A2
      || (v5 = *(_QWORD *)(BugCheckParameter2 + 168), v7 = gpsi, *(_WORD *)(v5 + 8) == *(_WORD *)(gpsi + 862LL)) )
    {
      if ( *(_DWORD *)(BugCheckParameter2 + 252) )
        v8 = *(__int64 **)(BugCheckParameter2 + 392);
      else
        v8 = *(__int64 **)(BugCheckParameter2 + 384);
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
      goto LABEL_12;
  }
  else
  {
    v8 = 0LL;
  }
  v4 = (__int64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(BugCheckParameter2);
  if ( !v4 )
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout(
             (__int64 *)BugCheckParameter2,
             356LL,
             0LL,
             (struct _LARGE_STRING *)a2,
             0,
             0,
             0LL,
             1u,
             1);
  }
LABEL_12:
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87LL, v5);
    return 0LL;
  }
  v10 = *(PRKPROCESS **)(*(_QWORD *)(BugCheckParameter2 + 16) + 400LL);
  v32 = v10;
  if ( v10 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v7) )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    KeAttachProcess(*v32);
  }
  if ( v8 )
  {
    v13 = *v8;
LABEL_23:
    if ( v13 )
    {
      v15 = -PsGetCurrentProcessWow64Process(v11);
      v28 = (-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v15 != 0 ? 0 : 3) & (unsigned int)v13) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = *(__int64 **)v13;
      v17 = -PsGetCurrentProcessWow64Process(MmUserProbeAddress);
      v29 = (-(__int64)(v17 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v17 != 0 ? 0 : 3) & (unsigned int)v16) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = 0LL;
      if ( v16 )
        v18 = *v16;
      *(_QWORD *)&v27[40] = v18;
      v19 = *(__int64 **)(v13 + 64);
      v20 = -PsGetCurrentProcessWow64Process(MmUserProbeAddress);
      v30 = (-(__int64)(v20 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v20 != 0 ? 0 : 3) & (unsigned int)v19) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = 0LL;
      if ( v19 )
        v21 = *v19;
      if ( v21 == *(_QWORD *)BugCheckParameter2 )
        v21 = 0LL;
      *(_QWORD *)&v27[48] = v21;
      v22 = *(__int64 **)(v13 + 72);
      v23 = -PsGetCurrentProcessWow64Process(v21);
      v31 = (-(__int64)(v23 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v23 != 0 ? 0 : 3) & (unsigned int)v22) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = 0LL;
      if ( v22 )
        v24 = *v22;
      *(_QWORD *)&v27[56] = v24;
      *(_OWORD *)&v27[4] = *(_OWORD *)(v13 + 16);
      *(_OWORD *)&v27[20] = *(_OWORD *)(v13 + 32);
      *(_DWORD *)&v27[36] = 0;
      v25 = *(_DWORD *)(v13 + 80);
      v26 = 0;
      if ( (v25 & 3) == 1 )
        v26 = 0x8000;
      *(_DWORD *)&v27[36] = v26;
      if ( (v25 & 0x20) != 0 )
        *(_DWORD *)&v27[36] = v26 | 8;
      *(_OWORD *)a2 = *(_OWORD *)v27;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)&v27[16];
      *(_OWORD *)(a2 + 32) = *(_OWORD *)&v27[32];
      *(_OWORD *)(a2 + 48) = *(_OWORD *)&v27[48];
      v6 = 1;
    }
    goto LABEL_45;
  }
  v14 = *v4;
  if ( *v4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v11) != 0 ? 0 : 3) & (unsigned int)v14) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = MmUserProbeAddress;
    v13 = *(_QWORD *)(v14 + 144);
    goto LABEL_23;
  }
LABEL_45:
  if ( v12 )
    KeDetachProcess();
  return v6;
}
