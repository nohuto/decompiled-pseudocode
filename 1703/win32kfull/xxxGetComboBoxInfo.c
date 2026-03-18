/*
 * XREFs of xxxGetComboBoxInfo @ 0x1C0131E2C
 * Callers:
 *     NtUserGetComboBoxInfo @ 0x1C0131C80 (NtUserGetComboBoxInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C0131F28 (unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxGetComboBoxInfo(ULONG_PTR a1, __int64 a2)
{
  __int64 *v4; // r13
  __int64 v5; // rdx
  unsigned int v6; // r15d
  __int64 v7; // rcx
  __int64 *v8; // rsi
  PRKPROCESS *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r14d
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 *v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // ecx
  int v38; // edx
  _BYTE v39[64]; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v40; // [rsp+90h] [rbp-68h]
  unsigned __int64 v41; // [rsp+98h] [rbp-60h]
  unsigned __int64 v42; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v43; // [rsp+A8h] [rbp-50h]
  PRKPROCESS *v44; // [rsp+118h] [rbp+20h]

  v4 = 0LL;
  *(_DWORD *)v39 = 64;
  memset(&v39[4], 0, 0x3CuLL);
  v6 = 0;
  if ( a1 )
  {
    v7 = 674LL;
    if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x2A2
      || (v5 = *(_QWORD *)(a1 + 168), v7 = gpsi, *(_WORD *)(v5 + 8) == *(_WORD *)(gpsi + 862LL)) )
    {
      if ( *(_DWORD *)(a1 + 252) )
        v8 = *(__int64 **)(a1 + 392);
      else
        v8 = *(__int64 **)(a1 + 384);
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
  v4 = (__int64 *)unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(a1);
  if ( !v4 )
  {
    _InterlockedIncrement(&glSendMessage);
    return xxxSendTransformableMessageTimeout(a1, 0x164u, 0LL, (struct _LARGE_STRING *)a2, 0, 0, 0LL, 1, 1);
  }
LABEL_12:
  if ( *(_DWORD *)a2 != 64 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  v10 = *(PRKPROCESS **)(*(_QWORD *)(a1 + 16) + 376LL);
  v44 = v10;
  if ( v10 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v7, v5) )
  {
    v15 = 0;
  }
  else
  {
    v15 = 1;
    KeAttachProcess(*v44);
  }
  if ( v8 )
  {
    v16 = *v8;
LABEL_23:
    if ( v16 )
    {
      v18 = -PsGetCurrentProcessWow64Process(v12, v11, v13, v14);
      v40 = (-(__int64)(v18 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v18 != 0 ? 0 : 3) & (unsigned int)v16) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = *(__int64 **)v16;
      v23 = -PsGetCurrentProcessWow64Process(W32UserProbeAddress, v19, v20, v21);
      v41 = (-(__int64)(v23 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v23 != 0 ? 0 : 3) & (unsigned int)v22) != 0 )
        ExRaiseDatatypeMisalignment();
      v27 = 0LL;
      if ( v22 )
        v27 = *v22;
      *(_QWORD *)&v39[40] = v27;
      v28 = *(__int64 **)(v16 + 64);
      v29 = -PsGetCurrentProcessWow64Process(W32UserProbeAddress, v24, v25, v26);
      v42 = (-(__int64)(v29 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v29 != 0 ? 0 : 3) & (unsigned int)v28) != 0 )
        ExRaiseDatatypeMisalignment();
      v33 = 0LL;
      if ( v28 )
        v33 = *v28;
      if ( v33 == *(_QWORD *)a1 )
        v33 = 0LL;
      *(_QWORD *)&v39[48] = v33;
      v34 = *(__int64 **)(v16 + 72);
      v35 = -PsGetCurrentProcessWow64Process(v33, v30, v31, v32);
      v43 = (-(__int64)(v35 != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 4;
      if ( ((v35 != 0 ? 0 : 3) & (unsigned int)v34) != 0 )
        ExRaiseDatatypeMisalignment();
      v36 = 0LL;
      if ( v34 )
        v36 = *v34;
      *(_QWORD *)&v39[56] = v36;
      *(_OWORD *)&v39[4] = *(_OWORD *)(v16 + 16);
      *(_OWORD *)&v39[20] = *(_OWORD *)(v16 + 32);
      *(_DWORD *)&v39[36] = 0;
      v37 = *(_DWORD *)(v16 + 80);
      v38 = 0;
      if ( (v37 & 3) == 1 )
        v38 = 0x8000;
      *(_DWORD *)&v39[36] = v38;
      if ( (v37 & 0x20) != 0 )
        *(_DWORD *)&v39[36] = v38 | 8;
      *(_OWORD *)a2 = *(_OWORD *)v39;
      *(_OWORD *)(a2 + 16) = *(_OWORD *)&v39[16];
      *(_OWORD *)(a2 + 32) = *(_OWORD *)&v39[32];
      *(_OWORD *)(a2 + 48) = *(_OWORD *)&v39[48];
      v6 = 1;
    }
    goto LABEL_45;
  }
  v17 = *v4;
  if ( *v4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v12, v11, v13, v14) != 0 ? 0 : 3) & (unsigned int)v17) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = W32UserProbeAddress;
    v16 = *(_QWORD *)(v17 + 144);
    goto LABEL_23;
  }
LABEL_45:
  if ( v15 )
    KeDetachProcess();
  return v6;
}
