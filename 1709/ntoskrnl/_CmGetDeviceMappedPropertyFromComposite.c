/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x14054F964
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1405248F0 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x140783CA4 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x1400DEC00 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x1400FB3CC (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     wcscmp @ 0x140160450 (wcscmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _CmGetDeviceChildren @ 0x140449874 (_CmGetDeviceChildren.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140528154 (_NtPlugPlayGetDeviceStatus.c)
 *     _CmGetDeviceStatus @ 0x140529914 (_CmGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x140550808 (_NtPlugPlayGetDeviceProperty.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140550CA0 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140551654 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x140551A88 (_CmGetDeviceParent.c)
 *     _PnpMultiSzGetLen @ 0x1405713AC (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceRelationsList @ 0x14078267C (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceSiblings @ 0x1407840B4 (_CmGetDeviceSiblings.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromComposite(
        __int64 a1,
        const wchar_t *a2,
        size_t a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        int *a8,
        int a9)
{
  int DeviceStatus; // ebx
  wchar_t *v11; // r14
  int *v13; // rsi
  int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // r15d
  unsigned int v19; // ecx
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rdi
  const wchar_t *v23; // r11
  __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int ObjectProperty; // eax
  int v37; // eax
  __int64 v38; // rax
  NTSTATUS v39; // eax
  __int64 v40; // rax
  int DeviceParent; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  int DeviceProperty; // eax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // eax
  __int64 v56; // rax
  int v57; // eax
  int v58; // eax
  __int64 v59; // rax
  int v60; // eax
  int v61; // eax
  int v62; // edx
  __int64 v63; // rax
  int DeviceChildren; // eax
  bool v65; // zf
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rax
  int DeviceRelationsList; // eax
  unsigned int v73; // eax
  __int64 v74; // rax
  int DeviceSiblings; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  bool v78; // zf
  unsigned int v79; // [rsp+30h] [rbp-D0h]
  char v81[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v82; // [rsp+70h] [rbp-90h]
  int v83; // [rsp+78h] [rbp-88h] BYREF
  int v84; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v85; // [rsp+80h] [rbp-80h] BYREF
  int v86; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v87; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v88; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v89; // [rsp+90h] [rbp-70h]
  size_t pcchLength; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v92; // [rsp+B0h] [rbp-50h] BYREF
  char v93[4]; // [rsp+B4h] [rbp-4Ch] BYREF
  char v94[8]; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE Buf2[16]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE Buf1[24]; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t Str2[40]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR SourceString[40]; // [rsp+140h] [rbp+40h] BYREF

  DeviceStatus = 0;
  v87 = 0;
  v11 = a6;
  v13 = a8;
  v16 = a9;
  pcchLength = a3;
  v82 = a1;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *v13 = 0;
  v17 = v16 & 0xFFFF0000;
  v89 = v16 & 0xFFFF0000;
  if ( a6 )
  {
    v18 = a7;
    v11 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v18 = 0;
    a7 = 0;
  }
  v19 = *(_DWORD *)(a4 + 16);
  if ( v19 < 2 )
    return (unsigned int)-1073741264;
  if ( v19 == 10 )
  {
    v35 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
      v35 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
    if ( !v35 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         (__int64)a2,
                         1u,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_Device_FriendlyName,
                         (__int64)a5,
                         (__int64)v11,
                         v18,
                         (__int64)&v83,
                         v17);
      DeviceStatus = ObjectProperty;
      if ( ObjectProperty && ObjectProperty != -1073741789 )
      {
        v22 = v82;
        if ( ObjectProperty == -1073741275 )
        {
          v37 = PnpGetObjectProperty(
                  v82,
                  (__int64)a2,
                  1u,
                  pcchLength,
                  0LL,
                  (__int64)&DEVPKEY_Device_DeviceDesc,
                  (__int64)a5,
                  (__int64)v11,
                  a7,
                  (__int64)&v83,
                  v89);
          DeviceStatus = v37;
          if ( !v37 || v37 == -1073741789 )
          {
            *v13 = v83;
          }
          else if ( v37 == -1073741275 )
          {
            return (unsigned int)DeviceStatus;
          }
        }
        goto LABEL_32;
      }
      *v13 = v83;
      goto LABEL_51;
    }
  }
  if ( v19 == 256 )
  {
    v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
      v38 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
    if ( !v38 )
    {
      DeviceStatus = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( DeviceStatus < 0 )
        goto LABEL_52;
      *v13 = 2 * pcchLength + 2;
      *a5 = 18;
      if ( v18 >= *v13 )
      {
        v39 = RtlStringCbCopyExW(v11, (unsigned int)*v13, v23, 0LL, 0LL, 0x900u);
        v23 = a2;
        DeviceStatus = v39;
        v22 = v82;
        if ( v39 < 0 )
        {
          *v13 = 0;
          *a5 = 0;
        }
        goto LABEL_33;
      }
      return (unsigned int)-1073741789;
    }
  }
  if ( v19 == 2 )
  {
    v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
      v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
    if ( !v25 )
      goto LABEL_38;
  }
  if ( v19 == 3 )
  {
    v52 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
      v52 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
    if ( !v52 )
      goto LABEL_38;
  }
  if ( v19 == 12 )
  {
    v67 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
      v67 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
    if ( !v67 )
    {
LABEL_38:
      v84 = 0;
      v88 = 0;
      v87 = 0;
      DeviceStatus = CmGetDeviceStatus(a1, a2, pcchLength, &v84, &v88, &v87, v79);
      if ( DeviceStatus < 0 )
        goto LABEL_51;
      v26 = *(_DWORD *)(a4 + 16);
      v27 = v84;
      if ( v26 == 2 )
      {
        v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( !v28 )
          goto LABEL_43;
      }
      if ( v26 != 3 )
        goto LABEL_147;
      v53 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
        v53 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
      if ( !v53 )
      {
LABEL_43:
        *v13 = 4;
        *a5 = 7;
      }
      else
      {
LABEL_147:
        if ( (v84 & 0x400) == 0 )
          return (unsigned int)-1073741275;
        *v13 = 4;
        *a5 = 24;
      }
      if ( a7 < *v13 )
        return (unsigned int)-1073741789;
      if ( *(_DWORD *)(a4 + 16) == 12 )
      {
        v68 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
          v68 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
        if ( !v68 )
        {
          if ( (int)PnpGetObjectProperty(
                      v82,
                      (__int64)a2,
                      1u,
                      pcchLength,
                      0LL,
                      (__int64)&DEVPKEY_Device_ProblemStatusOverride,
                      (__int64)&v86,
                      (__int64)&v92,
                      4,
                      (__int64)&v83,
                      v89) >= 0
            && v86 == 24 )
          {
            v69 = v87;
            if ( v83 == 4 )
              v69 = v92;
            v87 = v69;
          }
          v27 = v84;
        }
      }
      v29 = *(_DWORD *)(a4 + 16);
      if ( v29 != 2 )
        goto LABEL_152;
      v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
        v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
      if ( v30 )
      {
LABEL_152:
        if ( v29 != 3 )
          goto LABEL_223;
        v54 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
          v54 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
        if ( v54 )
LABEL_223:
          v55 = v87;
        else
          v55 = (v27 & 0x400) != 0 ? v88 : 0;
        *(_DWORD *)v11 = v55;
      }
      else
      {
        *(_DWORD *)v11 = v27;
      }
      goto LABEL_51;
    }
  }
  v20 = 4;
  if ( v19 == 4 )
  {
    v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
      v34 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
    if ( !v34 )
    {
LABEL_232:
      DeviceRelationsList = CmGetDeviceRelationsList(a1, (_DWORD)a2, v20, 0, 0, (__int64)&v85);
      DeviceStatus = DeviceRelationsList;
      if ( DeviceRelationsList == -1073741772 || !DeviceRelationsList )
        return (unsigned int)-1073741275;
      if ( DeviceRelationsList == -1073741789 )
      {
        *v13 = 2 * v85;
        v73 = a7;
        *a5 = 8210;
        if ( v73 < *v13 )
          return (unsigned int)-1073741789;
        v22 = v82;
        DeviceStatus = CmGetDeviceRelationsList(v82, (_DWORD)a2, v20, (_DWORD)v11, v73 >> 1, (__int64)&v85);
        if ( !DeviceStatus )
        {
          *v13 = 2 * PnpMultiSzGetLen(v11);
          return (unsigned int)DeviceStatus;
        }
        *v13 = 0;
        *a5 = 0;
        goto LABEL_32;
      }
LABEL_51:
      v23 = a2;
LABEL_52:
      v22 = v82;
      goto LABEL_33;
    }
  }
  if ( v19 == 5 )
  {
    v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
      v33 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
    if ( !v33 )
    {
      v20 = 8;
      goto LABEL_232;
    }
  }
  if ( v19 == 6 )
  {
    v44 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
      v44 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
    if ( !v44 )
    {
      v20 = 16;
      goto LABEL_232;
    }
  }
  if ( v19 == 7 )
  {
    v70 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
      v70 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
    if ( !v70 )
    {
      v20 = 32;
      goto LABEL_232;
    }
  }
  if ( v19 == 11 )
  {
    v71 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
      v71 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
    if ( !v71 )
    {
      v20 = 64;
      goto LABEL_232;
    }
  }
  if ( v19 == 8 )
  {
    v40 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
      v40 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
    if ( !v40 )
    {
      v85 = v18 >> 1;
      DeviceParent = CmGetDeviceParent(a1, a2, v11, &v85);
      DeviceStatus = DeviceParent;
      if ( DeviceParent && DeviceParent != -1073741789 )
        goto LABEL_51;
      *v13 = 2 * v85;
      *a5 = 18;
      goto LABEL_89;
    }
  }
  if ( v19 == 9 )
  {
    v63 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
      v63 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
    if ( !v63 )
    {
      v85 = v18 >> 1;
      DeviceChildren = CmGetDeviceChildren(a1, a2, v11, &v85);
      DeviceStatus = DeviceChildren;
      if ( DeviceChildren )
      {
        v65 = DeviceChildren == -1073741789;
        goto LABEL_198;
      }
      goto LABEL_199;
    }
  }
  if ( v19 == 10 )
  {
    v74 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
      v74 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
    if ( !v74 )
    {
      v85 = v18 >> 1;
      DeviceSiblings = CmGetDeviceSiblings(a1, a2, v11, &v85);
      DeviceStatus = DeviceSiblings;
      if ( DeviceSiblings != -1073741789 )
      {
        v65 = DeviceSiblings == 0;
LABEL_198:
        if ( !v65 )
          goto LABEL_51;
      }
LABEL_199:
      *v13 = 2 * v85;
      *a5 = 8210;
LABEL_89:
      if ( a7 < *v13 )
        return (unsigned int)-1073741789;
      goto LABEL_51;
    }
  }
  if ( v19 == 2 )
  {
    v42 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
      v42 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
    if ( !v42 )
    {
      *v13 = 1;
      *a5 = 17;
      if ( v18 >= *v13 )
      {
        *(_BYTE *)v11 = -((unsigned __int8)CmIsDeviceSafeRemovalRequired(a1, a2, a3) != 0);
        return (unsigned int)DeviceStatus;
      }
      return (unsigned int)-1073741789;
    }
    v43 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
      v43 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
    if ( !v43 )
    {
      v83 = 78;
      DeviceStatus = CmGetDeviceRegProp(
                       a1,
                       (__int64)a2,
                       pcchLength,
                       37,
                       (__int64)v94,
                       (__int64)Str2,
                       (__int64)&v83,
                       v16);
      if ( DeviceStatus < 0 )
        goto LABEL_51;
      if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
      {
        *v13 = 16;
        *a5 = 13;
        if ( a7 < *v13 )
          return (unsigned int)-1073741789;
        v22 = v82;
        DeviceStatus = CmGetDeviceContainerIdFromBase(v82, a2, Str2, SourceString);
        if ( DeviceStatus >= 0 )
        {
          DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
          if ( DeviceStatus >= 0 )
            DeviceStatus = RtlGUIDFromString(&DestinationString, (GUID *)v11);
        }
        goto LABEL_32;
      }
      return (unsigned int)-1073741275;
    }
  }
  if ( v19 != 5 )
    goto LABEL_109;
  v31 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
    v31 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
  if ( v31 )
  {
LABEL_109:
    if ( v19 == 6 )
    {
      v45 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
        v45 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
      if ( !v45 )
      {
        *a5 = 17;
        *v13 = 1;
        if ( !v18 )
          return (unsigned int)-1073741789;
        v22 = v82;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_32;
        *(_BYTE *)v11 = 0;
        v46 = NtPlugPlayGetDeviceStatus(v22, (__int64)&DestinationString, (__int64)&v84, (__int64)&v88, (__int64)&v87);
        DeviceStatus = v46;
        if ( v46 == -1073741810 )
          return 0;
        if ( v46 < 0 )
          goto LABEL_32;
        if ( (v84 & 0x8000) == 0 )
        {
          if ( (v84 & 0x400) == 0 || v88 <= 0x1D && (v62 = 591396864, _bittest(&v62, v88)) )
          {
            if ( (v84 & 8) != 0 )
              goto LABEL_32;
            v47 = PnpGetObjectProperty(
                    v22,
                    (__int64)a2,
                    1u,
                    pcchLength,
                    0LL,
                    (__int64)&DEVPKEY_Device_Capabilities,
                    (__int64)&v86,
                    (__int64)v93,
                    4,
                    (__int64)&v83,
                    v89);
            DeviceStatus = v47;
            if ( v47 != -1073741275 )
            {
              if ( v47 < 0 )
                goto LABEL_32;
              v23 = a2;
              if ( (v93[0] & 0x40) == 0 )
                goto LABEL_33;
LABEL_60:
              *(_BYTE *)v11 = -1;
              goto LABEL_33;
            }
            return 0;
          }
        }
LABEL_166:
        *(_BYTE *)v11 = -1;
        goto LABEL_32;
      }
    }
    if ( v19 == 15 )
    {
      v56 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
        v56 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( !v56 )
      {
        *a5 = 17;
        *v13 = 1;
        if ( !v18 )
          return (unsigned int)-1073741789;
        v22 = v82;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_32;
        *(_BYTE *)v11 = 0;
        v57 = NtPlugPlayGetDeviceStatus(v22, (__int64)&DestinationString, (__int64)&v84, (__int64)&v88, (__int64)&v87);
        DeviceStatus = v57;
        if ( v57 == -1073741810 )
          return 0;
        if ( v57 < 0 || (v84 & 0x2000000) != 0 )
          goto LABEL_32;
        v58 = PnpGetObjectProperty(
                v22,
                (__int64)a2,
                1u,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                (__int64)&v86,
                (__int64)v81,
                1,
                (__int64)&v83,
                v89);
        DeviceStatus = v58;
        if ( v58 >= 0 )
        {
          if ( v86 == 17 && v81[0] == -1 )
            goto LABEL_32;
        }
        else
        {
          if ( v58 != -1073741275 && v58 != -1073741789 )
            goto LABEL_32;
          DeviceStatus = 0;
        }
        goto LABEL_166;
      }
    }
    if ( v19 == 16 )
    {
      v50 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
        v50 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
      if ( !v50 )
      {
        *a5 = 17;
        *v13 = 1;
        if ( !v18 )
          return (unsigned int)-1073741789;
        v22 = v82;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_32;
        *(_BYTE *)v11 = 0;
        v51 = NtPlugPlayGetDeviceStatus(v22, (__int64)&DestinationString, (__int64)&v84, (__int64)&v88, (__int64)&v87);
        DeviceStatus = v51;
        if ( v51 == -1073741810 )
          return 0;
        if ( v51 < 0 || (v84 & 0x100) == 0 && ((v84 & 0x400) == 0 || v88 != 14) )
          goto LABEL_32;
        goto LABEL_166;
      }
    }
    if ( v19 == 8 )
    {
      v48 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
        v48 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
      if ( !v48 )
      {
        *a5 = 7;
        *v13 = 4;
        v22 = v82;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_32;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           v82,
                           (unsigned int)&DestinationString,
                           13,
                           (_DWORD)v11,
                           v18,
                           (__int64)&a7);
LABEL_126:
        DeviceStatus = DeviceProperty;
        if ( DeviceProperty == -1073741772 )
          return (unsigned int)-1073741275;
        goto LABEL_32;
      }
    }
    if ( v19 == 4 )
    {
      v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
        v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
      if ( !v21 )
      {
        *a5 = 17;
        *v13 = 1;
        v22 = v82;
        DeviceStatus = PnpGetObjectProperty(
                         a1,
                         (__int64)a2,
                         1u,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_Device_ContainerId,
                         (__int64)&v86,
                         (__int64)Buf2,
                         16,
                         (__int64)&v83,
                         v17);
        if ( DeviceStatus >= 0 )
        {
          DeviceStatus = PnpGetObjectProperty(
                           v82,
                           (__int64)L"HTREE\\ROOT\\0",
                           1u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_Device_BaseContainerId,
                           (__int64)&v86,
                           (__int64)Buf1,
                           16,
                           (__int64)&v83,
                           v89);
          if ( DeviceStatus >= 0 )
          {
            if ( a7 < *v13 )
              return (unsigned int)-1073741789;
            *(_BYTE *)v11 = (memcmp(Buf1, Buf2, 0x10uLL) != 0) - 1;
          }
        }
        goto LABEL_32;
      }
    }
    if ( v19 == 14 )
    {
      v66 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
        v66 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
      if ( !v66 )
      {
        *a5 = 8210;
        v22 = v82;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_32;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           v82,
                           (unsigned int)&DestinationString,
                           14,
                           (_DWORD)v11,
                           v18,
                           (__int64)v13);
        goto LABEL_126;
      }
    }
    if ( v19 == 20 )
    {
      v76 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
        v76 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
      if ( !v76 )
      {
        *a5 = 8210;
        v22 = v82;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_32;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           v82,
                           (unsigned int)&DestinationString,
                           15,
                           (_DWORD)v11,
                           v18,
                           (__int64)v13);
        goto LABEL_126;
      }
    }
    if ( v19 == 21 )
    {
      v77 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
        v77 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
      if ( !v77 )
      {
        *a5 = 8210;
        v22 = v82;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_32;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           v82,
                           (unsigned int)&DestinationString,
                           16,
                           (_DWORD)v11,
                           v18,
                           (__int64)v13);
        goto LABEL_126;
      }
    }
    if ( v19 != 26 )
      return (unsigned int)DeviceStatus;
    v59 = *(_QWORD *)a4 - DEVPKEY_Device_OmitFromSystemSpec;
    if ( *(_QWORD *)a4 == DEVPKEY_Device_OmitFromSystemSpec )
      v59 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
    if ( v59 )
      return (unsigned int)DeviceStatus;
    *a5 = 17;
    *v13 = 1;
    if ( !v18 )
      return (unsigned int)-1073741789;
    *(_BYTE *)v11 = 0;
    v60 = PnpGetObjectProperty(
            a1,
            (__int64)a2,
            1u,
            a3,
            0LL,
            (__int64)&DEVPKEY_Device_UpdateWithUngroupedDrivers,
            (__int64)&v86,
            (__int64)v81,
            1,
            (__int64)&v83,
            v17);
    DeviceStatus = v60;
    if ( v60 >= 0 )
    {
      if ( v86 == 17 && v83 == 1 )
      {
        v22 = v82;
        v78 = v81[0] == 0;
        goto LABEL_262;
      }
    }
    else if ( v60 != -1073741275 && v60 != -1073741789 )
    {
      goto LABEL_51;
    }
    v22 = v82;
    v61 = PnpGetObjectProperty(
            v82,
            (__int64)a2,
            1u,
            pcchLength,
            0LL,
            (__int64)&DEVPKEY_Device_DriverInGroup,
            (__int64)&v86,
            (__int64)v81,
            1,
            (__int64)&v83,
            v89);
    DeviceStatus = v61;
    if ( v61 < 0 )
    {
      if ( v61 == -1073741275 || v61 == -1073741789 )
        DeviceStatus = 0;
      goto LABEL_32;
    }
    if ( v86 != 17 || v83 != 1 )
      goto LABEL_32;
    v78 = v81[0] == -1;
LABEL_262:
    v23 = a2;
    if ( !v78 )
      goto LABEL_33;
    goto LABEL_60;
  }
  *v13 = 1;
  *a5 = 17;
  if ( v18 < *v13 )
    return (unsigned int)-1073741789;
  v22 = v82;
  DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( DeviceStatus >= 0 )
  {
    *(_BYTE *)v11 = 0;
    v32 = NtPlugPlayGetDeviceStatus(v22, (__int64)&DestinationString, (__int64)&v84, (__int64)&v88, (__int64)&v87);
    DeviceStatus = v32;
    if ( v32 != -1073741810 )
    {
      v23 = a2;
      if ( v32 < 0 )
        goto LABEL_33;
      goto LABEL_60;
    }
    return 0;
  }
LABEL_32:
  v23 = a2;
LABEL_33:
  if ( DeviceStatus != -1073741810 )
    return (unsigned int)DeviceStatus;
  DeviceStatus = CmOpenDeviceRegKey(v22, (__int64)v23, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( !DeviceStatus )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( DeviceStatus != -1073741810 && DeviceStatus != -1073741632 )
    return (unsigned int)-1073741823;
  return (unsigned int)DeviceStatus;
}
