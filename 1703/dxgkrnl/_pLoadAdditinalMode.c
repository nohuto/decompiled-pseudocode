/*
 * XREFs of _pLoadAdditinalMode @ 0x1C01E6728
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C01E65A0 (_pGetAdditionalTiming.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C010A064 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     _pReadDetailTimingFromReg @ 0x1C01E6B1C (_pReadDetailTimingFromReg.c)
 *     _pRegNameFromConnectorType @ 0x1C01E6CC8 (_pRegNameFromConnectorType.c)
 */

__int64 __fastcall pLoadAdditinalMode(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  ULONG v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  const WCHAR *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  NTSTATUS appended; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  NTSTATUS v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  HANDLE v40; // rbx
  __int64 v41; // rax
  NTSTATUS v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // r15d
  __int64 v48; // rcx
  _DWORD *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rcx
  wchar_t *v52; // r13
  __int64 v53; // rax
  NTSTATUS v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rax
  unsigned __int16 v60; // ax
  NTSTATUS v61; // eax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-41h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-29h] BYREF
  _QWORD *v70; // [rsp+58h] [rbp-21h]
  _DWORD KeyInformation[12]; // [rsp+60h] [rbp-19h] BYREF

  v70 = a2;
  v5 = (int)a1;
  v6 = WdLogNewEntry5_WdDmmEvent(a1, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v5;
  WdLogEvent5_WdDmmEvent(v6);
  if ( (_DWORD)v5 == -2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = 0;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v13);
  }
  *(_DWORD *)&Destination.Length = 15859712;
  Destination.Buffer = (wchar_t *)&unk_1C0070DA0;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    WdLogEvent5_WdAssertion(v18);
  }
  v19 = (const WCHAR *)pRegNameFromConnectorType((unsigned int)v5);
  if ( !v19 )
  {
    v24 = WdLogNewEntry5_WdDmmEvent(v21, v20, v22, v23);
    *(_QWORD *)(v24 + 24) = v5;
    WdLogEvent5_WdDmmEvent(v24);
    return 3221226021LL;
  }
  appended = RtlAppendUnicodeToString(&Destination, v19);
  v31 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
      WdLogEvent5_WdAssertion(v32);
    }
    v33 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v33 + 24) = v5;
    *(_QWORD *)(v33 + 32) = v31;
    WdLogEvent5_WdError(v33);
    return (unsigned int)v31;
  }
  KeyHandle = 0LL;
  v34 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, 0LL, &Destination);
  v31 = v34;
  if ( v34 < 0 )
  {
    v39 = WdLogNewEntry5_WdDmmEvent(v36, v35, v37, v38);
    *(_QWORD *)(v39 + 24) = v5;
    *(_QWORD *)(v39 + 32) = v31;
    WdLogEvent5_WdDmmEvent(v39);
    return (unsigned int)v31;
  }
  v40 = KeyHandle;
  if ( !KeyHandle )
  {
    v41 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
    WdLogEvent5_WdAssertion(v41);
    v40 = KeyHandle;
  }
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v42 = ZwQueryKey(v40, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  v31 = v42;
  if ( v42 < 0 )
  {
    v65 = WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
    *(_QWORD *)(v65 + 24) = v5;
    *(_QWORD *)(v65 + 32) = v31;
    WdLogEvent5_WdWarning(v65);
    goto LABEL_44;
  }
  if ( !KeyInformation[5] )
  {
    v64 = WdLogNewEntry5_WdDmmEvent(0LL, v43, v45, v46);
    *(_QWORD *)(v64 + 24) = v5;
    WdLogEvent5_WdDmmEvent(v64);
    LODWORD(v31) = -1073741275;
    goto LABEL_44;
  }
  v47 = 0;
  v49 = operator new((unsigned int)(28 * (KeyInformation[5] - 1) + 48), 0x4D677844u, PagedPool);
  if ( !v49 )
  {
    v50 = WdLogNewEntry5_WdLowResource(v48);
    WdLogEvent5_WdLowResource(v50);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v52 = (wchar_t *)operator new(0x96uLL, 0x4D677844u, PagedPool);
  if ( !v52 )
  {
    v53 = WdLogNewEntry5_WdLowResource(v51);
    WdLogEvent5_WdLowResource(v53);
    ExFreePoolWithTag(v49, 0);
    LODWORD(v31) = -1073741801;
    goto LABEL_44;
  }
  if ( !KeyInformation[5] )
    goto LABEL_40;
  while ( 1 )
  {
    v54 = ZwEnumerateKey(KeyHandle, v12, KeyBasicInformation, v52, 0x96u, &ResultLength);
    v31 = v54;
    if ( v54 == -2147483643 || v54 == -1073741789 )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57, v58);
      goto LABEL_34;
    }
    if ( v54 == -2147483622 )
      break;
    if ( v54 >= 0 )
    {
      v60 = v52[6];
      Handle = 0LL;
      Destination.MaximumLength = v60;
      Destination.Length = v60;
      Destination.Buffer = v52 + 8;
      v61 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, KeyHandle, &Destination);
      v31 = v61;
      if ( v61 >= 0 )
      {
        LODWORD(v31) = pReadDetailTimingFromReg(Handle);
        if ( (int)v31 >= 0 )
          ++v47;
        ZwClose(Handle);
        goto LABEL_35;
      }
    }
    v59 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57, v58);
    v59[5] = v31;
LABEL_34:
    v59[4] = v12;
    v59[3] = v5;
    WdLogEvent5_WdWarning(v59);
LABEL_35:
    if ( ++v12 >= KeyInformation[5] )
      goto LABEL_38;
  }
  v62 = WdLogNewEntry5_WdWarning(v56, v55, v57, v58);
  *(_QWORD *)(v62 + 24) = v5;
  WdLogEvent5_WdWarning(v62);
LABEL_38:
  if ( v47 )
  {
    LODWORD(v31) = 0;
    *(_QWORD *)v49 = qword_1C0070F18;
    v63 = v70;
    v49[2] = v5;
    v49[3] = v47;
    qword_1C0070F18 = v49;
    *v63 = v49;
    goto LABEL_41;
  }
LABEL_40:
  ExFreePoolWithTag(v49, 0);
LABEL_41:
  ExFreePoolWithTag(v52, 0);
LABEL_44:
  ZwClose(KeyHandle);
  return (unsigned int)v31;
}
