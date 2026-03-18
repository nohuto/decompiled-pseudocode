/*
 * XREFs of _pLoadAdditinalMode @ 0x1C0234914
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C023475C (_pGetAdditionalTiming.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     _pPopulateProgressiveTimingList @ 0x1C0234D78 (_pPopulateProgressiveTimingList.c)
 *     _pReadDetailTimingFromReg @ 0x1C0234E68 (_pReadDetailTimingFromReg.c)
 *     _pRegNameFromConnectorType @ 0x1C0235014 (_pRegNameFromConnectorType.c)
 */

__int64 __fastcall pLoadAdditinalMode(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  ULONG v5; // r15d
  __int64 v6; // rcx
  __int64 v7; // rax
  const WCHAR *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  NTSTATUS appended; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  void *v20; // rbx
  __int64 v21; // rax
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r12d
  __int64 v27; // rcx
  _QWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  wchar_t *v31; // r13
  __int64 v32; // rax
  NTSTATUS v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rax
  unsigned __int16 v38; // ax
  NTSTATUS v39; // eax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  void *KeyHandle; // [rsp+38h] [rbp-59h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-31h] BYREF
  _DWORD KeyInformation[12]; // [rsp+90h] [rbp-1h] BYREF

  v1 = (int)a1;
  v2 = WdLogNewEntry5_WdDmmEvent(a1);
  *(_QWORD *)(v2 + 24) = v1;
  WdLogEvent5_WdDmmEvent(v2);
  if ( (_DWORD)v1 == -2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v4);
  }
  *(_DWORD *)&Destination.Length = 15859712;
  Destination.Buffer = (wchar_t *)&unk_1C007BB80;
  v5 = 0;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (const WCHAR *)pRegNameFromConnectorType((unsigned int)v1);
  if ( !v8 )
  {
    v10 = WdLogNewEntry5_WdDmmEvent(v9);
    *(_QWORD *)(v10 + 24) = v1;
    WdLogEvent5_WdDmmEvent(v10);
    return 3221226021LL;
  }
  appended = RtlAppendUnicodeToString(&Destination, v8);
  v14 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v16 + 24) = v1;
    *(_QWORD *)(v16 + 32) = v14;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v14;
  }
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v14 = v17;
  if ( v17 < 0 )
  {
    v19 = WdLogNewEntry5_WdDmmEvent(v18);
    *(_QWORD *)(v19 + 24) = v1;
    *(_QWORD *)(v19 + 32) = v14;
    WdLogEvent5_WdDmmEvent(v19);
    return (unsigned int)v14;
  }
  v20 = KeyHandle;
  if ( !KeyHandle )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v21);
    v20 = KeyHandle;
  }
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v22 = ZwQueryKey(v20, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  v14 = v22;
  if ( v22 < 0 )
  {
    v43 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v43 + 24) = v1;
    *(_QWORD *)(v43 + 32) = v14;
    WdLogEvent5_WdWarning(v43);
    goto LABEL_47;
  }
  if ( !KeyInformation[5] )
  {
    v42 = WdLogNewEntry5_WdDmmEvent(0LL);
    *(_QWORD *)(v42 + 24) = v1;
    WdLogEvent5_WdDmmEvent(v42);
    LODWORD(v14) = -1073741275;
    goto LABEL_47;
  }
  v26 = 0;
  v28 = operator new[]((unsigned int)(28 * (KeyInformation[5] - 1) + 48), 0x4D677844u, PagedPool);
  if ( !v28 )
  {
    v29 = WdLogNewEntry5_WdLowResource(v27);
    WdLogEvent5_WdLowResource(v29);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v31 = (wchar_t *)operator new[](0x96uLL, 0x4D677844u, PagedPool);
  if ( !v31 )
  {
    v32 = WdLogNewEntry5_WdLowResource(v30);
    WdLogEvent5_WdLowResource(v32);
    operator delete[](v28);
    LODWORD(v14) = -1073741801;
    goto LABEL_47;
  }
  if ( !KeyInformation[5] )
    goto LABEL_43;
  while ( 1 )
  {
    v33 = ZwEnumerateKey(KeyHandle, v5, KeyBasicInformation, v31, 0x96u, &ResultLength);
    v14 = v33;
    if ( v33 == -2147483643 || v33 == -1073741789 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
      goto LABEL_32;
    }
    if ( v33 == -2147483622 )
      break;
    if ( v33 >= 0 )
    {
      v38 = v31[6];
      Handle = 0LL;
      Destination.MaximumLength = v38;
      Destination.Length = v38;
      Destination.Buffer = v31 + 8;
      memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v39 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v14 = v39;
      if ( v39 >= 0 )
      {
        LODWORD(v14) = pReadDetailTimingFromReg(Handle);
        if ( (int)v14 >= 0 )
          ++v26;
        ZwClose(Handle);
        goto LABEL_33;
      }
    }
    v37 = (_QWORD *)WdLogNewEntry5_WdWarning(v35, v34, v36);
    v37[5] = v14;
LABEL_32:
    v37[4] = v5;
    v37[3] = v1;
    WdLogEvent5_WdWarning(v37);
LABEL_33:
    if ( ++v5 >= KeyInformation[5] )
      goto LABEL_36;
  }
  v40 = WdLogNewEntry5_WdWarning(v35, v34, v36);
  *(_QWORD *)(v40 + 24) = v1;
  WdLogEvent5_WdWarning(v40);
LABEL_36:
  if ( !v26 )
  {
LABEL_43:
    operator delete[](v28);
    goto LABEL_44;
  }
  *v28 = qword_1C007BE38;
  *((_DWORD *)v28 + 2) = v1;
  *((_DWORD *)v28 + 4) = v26;
  *((_BYTE *)v28 + 12) = 0;
  qword_1C007BE38 = v28;
  if ( (int)v1 < 0 || (int)v1 > 3 && (_DWORD)v1 != 14 )
  {
    v41 = (_QWORD *)pPopulateProgressiveTimingList(v28);
    if ( v41 )
    {
      *v41 = qword_1C007BE38;
      qword_1C007BE38 = v41;
    }
  }
  LODWORD(v14) = 0;
LABEL_44:
  operator delete[](v31);
LABEL_47:
  ZwClose(KeyHandle);
  return (unsigned int)v14;
}
