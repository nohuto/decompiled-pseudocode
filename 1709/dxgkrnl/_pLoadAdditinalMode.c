/*
 * XREFs of _pLoadAdditinalMode @ 0x1C0200EA0
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C0200D18 (_pGetAdditionalTiming.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _pReadDetailTimingFromReg @ 0x1C02012F4 (_pReadDetailTimingFromReg.c)
 *     _pRegNameFromConnectorType @ 0x1C0201538 (_pRegNameFromConnectorType.c)
 */

__int64 __fastcall pLoadAdditinalMode(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  ULONG v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  const WCHAR *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  NTSTATUS appended; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  void *v23; // rbx
  __int64 v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r12d
  __int64 v30; // rcx
  _DWORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  wchar_t *v34; // r13
  __int64 v35; // rax
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rax
  unsigned __int16 v41; // ax
  NTSTATUS v42; // eax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  void *KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+38h] [rbp-71h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-51h] BYREF
  _QWORD *v52; // [rsp+88h] [rbp-21h]
  _DWORD KeyInformation[12]; // [rsp+90h] [rbp-19h] BYREF

  v52 = a2;
  v3 = (int)a1;
  v4 = WdLogNewEntry5_WdDmmEvent(a1);
  *(_QWORD *)(v4 + 24) = v3;
  WdLogEvent5_WdDmmEvent(v4);
  if ( (_DWORD)v3 == -2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = 0;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v8);
  }
  *(_DWORD *)&Destination.Length = 15859712;
  Destination.Buffer = (wchar_t *)&unk_1C0061C50;
  if ( RtlAppendUnicodeToString(
         &Destination,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\AdditionalModeLists\\") < 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = (const WCHAR *)pRegNameFromConnectorType((unsigned int)v3);
  if ( !v11 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v12);
    *(_QWORD *)(v13 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v13);
    return 3221226021LL;
  }
  appended = RtlAppendUnicodeToString(&Destination, v11);
  v17 = appended;
  if ( appended < 0 )
  {
    if ( appended != -1073741789 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v19 + 24) = v3;
    *(_QWORD *)(v19 + 32) = v17;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v17;
  }
  KeyHandle = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v20 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v17 = v20;
  if ( v20 < 0 )
  {
    v22 = WdLogNewEntry5_WdDmmEvent(v21);
    *(_QWORD *)(v22 + 24) = v3;
    *(_QWORD *)(v22 + 32) = v17;
    WdLogEvent5_WdDmmEvent(v22);
    return (unsigned int)v17;
  }
  v23 = KeyHandle;
  if ( !KeyHandle )
  {
    v24 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v24);
    v23 = KeyHandle;
  }
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v25 = ZwQueryKey(v23, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  v17 = v25;
  if ( v25 < 0 )
  {
    v46 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v46 + 24) = v3;
    *(_QWORD *)(v46 + 32) = v17;
    WdLogEvent5_WdWarning(v46);
    goto LABEL_44;
  }
  if ( !KeyInformation[5] )
  {
    v45 = WdLogNewEntry5_WdDmmEvent(0LL);
    *(_QWORD *)(v45 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v45);
    LODWORD(v17) = -1073741275;
    goto LABEL_44;
  }
  v29 = 0;
  v31 = operator new((unsigned int)(28 * (KeyInformation[5] - 1) + 48), 0x4D677844u, PagedPool);
  if ( !v31 )
  {
    v32 = WdLogNewEntry5_WdLowResource(v30);
    WdLogEvent5_WdLowResource(v32);
    ZwClose(KeyHandle);
    return 3221225495LL;
  }
  v34 = (wchar_t *)operator new(0x96uLL, 0x4D677844u, PagedPool);
  if ( !v34 )
  {
    v35 = WdLogNewEntry5_WdLowResource(v33);
    WdLogEvent5_WdLowResource(v35);
    ExFreePoolWithTag(v31, 0);
    LODWORD(v17) = -1073741801;
    goto LABEL_44;
  }
  if ( !KeyInformation[5] )
    goto LABEL_40;
  while ( 1 )
  {
    v36 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, v34, 0x96u, &ResultLength);
    v17 = v36;
    if ( v36 == -2147483643 || v36 == -1073741789 )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
      goto LABEL_34;
    }
    if ( v36 == -2147483622 )
      break;
    if ( v36 >= 0 )
    {
      v41 = v34[6];
      Handle = 0LL;
      Destination.MaximumLength = v41;
      Destination.Length = v41;
      Destination.Buffer = v34 + 8;
      memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v42 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v17 = v42;
      if ( v42 >= 0 )
      {
        LODWORD(v17) = pReadDetailTimingFromReg(Handle);
        if ( (int)v17 >= 0 )
          ++v29;
        ZwClose(Handle);
        goto LABEL_35;
      }
    }
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
    v40[5] = v17;
LABEL_34:
    v40[4] = v7;
    v40[3] = v3;
    WdLogEvent5_WdWarning(v40);
LABEL_35:
    if ( ++v7 >= KeyInformation[5] )
      goto LABEL_38;
  }
  v43 = WdLogNewEntry5_WdWarning(v38, v37, v39);
  *(_QWORD *)(v43 + 24) = v3;
  WdLogEvent5_WdWarning(v43);
LABEL_38:
  if ( v29 )
  {
    LODWORD(v17) = 0;
    *(_QWORD *)v31 = qword_1C0061E18;
    v44 = v52;
    v31[2] = v3;
    v31[3] = v29;
    qword_1C0061E18 = v31;
    *v44 = v31;
    goto LABEL_41;
  }
LABEL_40:
  ExFreePoolWithTag(v31, 0);
LABEL_41:
  ExFreePoolWithTag(v34, 0);
LABEL_44:
  ZwClose(KeyHandle);
  return (unsigned int)v17;
}
