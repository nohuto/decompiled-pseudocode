/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x140584DD4
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x140508A90 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1407EE714 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14006DC90 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x14014AF24 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     wcscmp @ 0x14018A5F0 (wcscmp.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x140504BB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     _PnpMultiSzGetLen @ 0x140565834 (_PnpMultiSzGetLen.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x14057ABA0 (_NtPlugPlayGetDeviceProperty.c)
 *     _CmGetDeviceStatus @ 0x140585D34 (_CmGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140585FB4 (_NtPlugPlayGetDeviceStatus.c)
 *     _CmGetDeviceParent @ 0x1405865D0 (_CmGetDeviceParent.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1405D5544 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1405E2A54 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceRelationsList @ 0x1407EB71C (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceChildren @ 0x1407EE1B0 (_CmGetDeviceChildren.c)
 *     _CmGetDeviceSiblings @ 0x1407EEB24 (_CmGetDeviceSiblings.c)
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
  int *v11; // rsi
  wchar_t *v12; // r15
  __int64 v13; // r12
  int v14; // r8d
  unsigned int v15; // r14d
  unsigned int v16; // eax
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  size_t v27; // rdi
  int ObjectProperty; // eax
  __int64 v29; // r9
  int v30; // eax
  __int64 v31; // rcx
  int v32; // edx
  int v33; // ecx
  __int64 v34; // rax
  int v35; // edx
  int *v36; // r14
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  int DeviceParent; // eax
  _DWORD *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // ecx
  int v50; // eax
  int v51; // eax
  __int64 v52; // rax
  _DWORD *v53; // r11
  __int64 v54; // rax
  _DWORD *v55; // r14
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned int v58; // eax
  __int64 v59; // rax
  size_t v60; // rdi
  size_t v61; // r9
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // r9
  int v65; // eax
  __int64 v66; // rax
  int DeviceProperty; // eax
  __int64 v68; // rax
  int v69; // eax
  int v70; // eax
  int v71; // edx
  _DWORD *v72; // r14
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  int DeviceRelationsList; // eax
  unsigned int v79; // eax
  int v80; // r8d
  __int64 v81; // rax
  int DeviceSiblings; // eax
  _DWORD *v83; // r14
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  bool v88; // zf
  char v90[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v91; // [rsp+70h] [rbp-90h]
  int v92; // [rsp+78h] [rbp-88h] BYREF
  int v93; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v94; // [rsp+80h] [rbp-80h] BYREF
  int v95; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v96; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v97; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v98; // [rsp+90h] [rbp-70h]
  size_t pcchLength; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v100; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v102; // [rsp+B8h] [rbp-48h] BYREF
  char v103[4]; // [rsp+BCh] [rbp-44h] BYREF
  char v104[8]; // [rsp+C0h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE Buf2[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE Buf1[16]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t Str2[40]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR SourceString[40]; // [rsp+140h] [rbp+40h] BYREF

  DeviceStatus = 0;
  v96 = 0;
  v11 = a8;
  v12 = a6;
  v13 = a1;
  pcchLength = a3;
  v14 = a9;
  v91 = a1;
  v100 = a5;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *v11 = 0;
  v98 = v14 & 0xFFFF0000;
  if ( a6 )
  {
    v15 = a7;
    v12 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v15 = 0;
    a7 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  switch ( v16 )
  {
    case 0xAu:
      v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
        v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
      if ( !v26 )
      {
        v27 = pcchLength;
        ObjectProperty = PnpGetObjectProperty(
                           a1,
                           (__int64)a2,
                           1u,
                           pcchLength,
                           0LL,
                           (__int64)&DEVPKEY_Device_FriendlyName,
                           (__int64)a5,
                           (__int64)v12,
                           v15,
                           (__int64)&v92,
                           v14 & 0xFFFF0000);
        DeviceStatus = ObjectProperty;
        if ( !ObjectProperty || ObjectProperty == -1073741789 )
        {
          *v11 = v92;
        }
        else if ( ObjectProperty == -1073741275 )
        {
          v29 = v27;
          v23 = (__int64)a2;
          v30 = PnpGetObjectProperty(
                  v13,
                  (__int64)a2,
                  1u,
                  v29,
                  0LL,
                  (__int64)&DEVPKEY_Device_DeviceDesc,
                  (__int64)v100,
                  (__int64)v12,
                  a7,
                  (__int64)&v92,
                  v98);
          DeviceStatus = v30;
          if ( !v30 || v30 == -1073741789 )
          {
            *v11 = v92;
          }
          else if ( v30 == -1073741275 )
          {
            return (unsigned int)DeviceStatus;
          }
          goto LABEL_34;
        }
        goto LABEL_33;
      }
      v84 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
        v84 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
      if ( v84 )
        return (unsigned int)DeviceStatus;
      v94 = v15 >> 1;
      DeviceSiblings = CmGetDeviceSiblings(a1, a2, v12, &v94);
      goto LABEL_225;
    case 0x100u:
      v52 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
        v52 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
      if ( v52 )
        return (unsigned int)DeviceStatus;
      DeviceStatus = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( DeviceStatus < 0 )
        goto LABEL_33;
      *v11 = 2 * pcchLength + 2;
      *v53 = 18;
      if ( v15 < *v11 )
        return (unsigned int)-1073741789;
      v23 = (__int64)a2;
      DeviceStatus = RtlStringCbCopyExW(v12, (unsigned int)*v11, a2, 0LL, 0LL, 0x900u);
      if ( DeviceStatus >= 0 )
        goto LABEL_34;
      v72 = v100;
      goto LABEL_188;
    case 2u:
      v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
        v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
      if ( !v25 )
        goto LABEL_51;
      break;
  }
  if ( v16 == 3 )
  {
    v31 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
      v31 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
    if ( !v31 )
      goto LABEL_51;
  }
  if ( v16 == 12 )
  {
    v73 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
      v73 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
    if ( v73 )
      return (unsigned int)DeviceStatus;
LABEL_51:
    v93 = 0;
    v97 = 0;
    v96 = 0;
    DeviceStatus = CmGetDeviceStatus(v13, (_DWORD)a2, pcchLength, (unsigned int)&v93, (__int64)&v97, (__int64)&v96);
    if ( DeviceStatus >= 0 )
    {
      v32 = *(_DWORD *)(a4 + 16);
      v33 = v93;
      if ( v32 == 2 )
      {
        v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v34 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( !v34 )
          goto LABEL_56;
      }
      if ( v32 != 3 )
        goto LABEL_193;
      v56 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
        v56 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
      if ( !v56 )
      {
LABEL_56:
        v35 = 7;
      }
      else
      {
LABEL_193:
        if ( (v93 & 0x400) == 0 )
          return (unsigned int)-1073741275;
        v35 = 24;
      }
      v36 = v100;
      *v11 = 4;
      *v36 = v35;
      if ( a7 >= *v11 )
      {
        if ( *(_DWORD *)(a4 + 16) == 12 )
        {
          v74 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
            v74 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
          if ( !v74 )
          {
            if ( (int)PnpGetObjectProperty(
                        v91,
                        (__int64)a2,
                        1u,
                        pcchLength,
                        0LL,
                        (__int64)&DEVPKEY_Device_ProblemStatusOverride,
                        (__int64)&v95,
                        (__int64)&v102,
                        4,
                        (__int64)&v92,
                        v98) >= 0
              && v95 == 24 )
            {
              v75 = v96;
              if ( v92 == 4 )
                v75 = v102;
              v96 = v75;
            }
            v33 = v93;
          }
        }
        v37 = *(_DWORD *)(a4 + 16);
        if ( v37 == 2 )
        {
          v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
            v38 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
          if ( !v38 )
          {
            *(_DWORD *)v12 = v33;
LABEL_64:
            v23 = (__int64)a2;
LABEL_65:
            v13 = v91;
            goto LABEL_34;
          }
        }
        else if ( v37 == 3 )
        {
          v57 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
            v57 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
          if ( !v57 )
          {
            v58 = (v33 & 0x400) != 0 ? v97 : 0;
LABEL_145:
            *(_DWORD *)v12 = v58;
            goto LABEL_64;
          }
        }
        v58 = v96;
        goto LABEL_145;
      }
      return (unsigned int)-1073741789;
    }
    goto LABEL_33;
  }
  v17 = 4;
  switch ( v16 )
  {
    case 4u:
      v19 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
        v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
      if ( v19 )
      {
        v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
          v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
        if ( v20 )
          return (unsigned int)DeviceStatus;
        v13 = v91;
        v21 = pcchLength;
        v22 = v91;
        *a5 = 17;
        *v11 = 1;
        DeviceStatus = PnpGetObjectProperty(
                         v22,
                         (__int64)a2,
                         1u,
                         v21,
                         0LL,
                         (__int64)&DEVPKEY_Device_ContainerId,
                         (__int64)&v95,
                         (__int64)Buf2,
                         16,
                         (__int64)&v92,
                         v14 & 0xFFFF0000);
        if ( DeviceStatus >= 0 )
        {
          DeviceStatus = PnpGetObjectProperty(
                           v13,
                           (__int64)L"HTREE\\ROOT\\0",
                           1u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_Device_BaseContainerId,
                           (__int64)&v95,
                           (__int64)Buf1,
                           16,
                           (__int64)&v92,
                           v98);
          if ( DeviceStatus >= 0 )
          {
            if ( a7 < *v11 )
              return (unsigned int)-1073741789;
            *(_BYTE *)v12 = (memcmp(Buf1, Buf2, 0x10uLL) != 0) - 1;
          }
        }
        goto LABEL_33;
      }
      goto LABEL_215;
    case 5u:
      v42 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
        v42 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
      if ( v42 )
      {
        v43 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
          v43 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
        if ( v43 )
          return (unsigned int)DeviceStatus;
        *v11 = 1;
        *a5 = 17;
        if ( v15 < *v11 )
          return (unsigned int)-1073741789;
        v13 = v91;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_33;
        *(_BYTE *)v12 = 0;
        v44 = NtPlugPlayGetDeviceStatus(
                v13,
                (unsigned int)&DestinationString,
                (unsigned int)&v93,
                (unsigned int)&v97,
                (__int64)&v96);
        DeviceStatus = v44;
        if ( v44 == -1073741810 )
          return 0;
        v23 = (__int64)a2;
        if ( v44 < 0 )
          goto LABEL_34;
LABEL_83:
        *(_BYTE *)v12 = -1;
        goto LABEL_34;
      }
      v17 = 8;
      goto LABEL_215;
    case 6u:
      v47 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
        v47 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
      if ( v47 )
      {
        v48 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
          v48 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
        if ( v48 )
          return (unsigned int)DeviceStatus;
        *a5 = 17;
        *v11 = 1;
        if ( !v15 )
          return (unsigned int)-1073741789;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_64;
        v49 = v91;
        *(_BYTE *)v12 = 0;
        v50 = NtPlugPlayGetDeviceStatus(
                v49,
                (unsigned int)&DestinationString,
                (unsigned int)&v93,
                (unsigned int)&v97,
                (__int64)&v96);
        DeviceStatus = v50;
        if ( v50 != -1073741810 )
        {
          if ( v50 < 0 )
            goto LABEL_64;
          if ( (v93 & 0x8000) != 0 || (v93 & 0x400) != 0 && (v97 > 0x1D || (v71 = 591396864, !_bittest(&v71, v97))) )
          {
            *(_BYTE *)v12 = -1;
            goto LABEL_64;
          }
          v23 = (__int64)a2;
          if ( (v93 & 8) != 0 )
            goto LABEL_65;
          v13 = v91;
          v51 = PnpGetObjectProperty(
                  v91,
                  (__int64)a2,
                  1u,
                  pcchLength,
                  0LL,
                  (__int64)&DEVPKEY_Device_Capabilities,
                  (__int64)&v95,
                  (__int64)v103,
                  4,
                  (__int64)&v92,
                  v98);
          DeviceStatus = v51;
          if ( v51 != -1073741275 )
          {
            if ( v51 < 0 )
              goto LABEL_34;
            if ( (v103[0] & 0x40) != 0 )
              *(_BYTE *)v12 = -1;
            goto LABEL_65;
          }
        }
        return 0;
      }
      v17 = 16;
      goto LABEL_215;
    case 7u:
      v76 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
        v76 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
      if ( v76 )
        return (unsigned int)DeviceStatus;
      v17 = 32;
      goto LABEL_215;
    case 0xBu:
      v77 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
        v77 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
      if ( v77 )
        return (unsigned int)DeviceStatus;
      v17 = 64;
LABEL_215:
      DeviceRelationsList = CmGetDeviceRelationsList(v91, (_DWORD)a2, v17, 0, 0, (__int64)&v94);
      DeviceStatus = DeviceRelationsList;
      if ( DeviceRelationsList == -1073741772 || !DeviceRelationsList )
        return (unsigned int)-1073741275;
      if ( DeviceRelationsList != -1073741789 )
      {
        v13 = v91;
        goto LABEL_33;
      }
      v72 = v100;
      *v11 = 2 * v94;
      v79 = a7;
      *v72 = 8210;
      if ( v79 < *v11 )
        return (unsigned int)-1073741789;
      v23 = (__int64)a2;
      v80 = v17;
      v13 = v91;
      DeviceStatus = CmGetDeviceRelationsList(v91, (_DWORD)a2, v80, (_DWORD)v12, v79 >> 1, (__int64)&v94);
      if ( !DeviceStatus )
      {
        *v11 = 2 * PnpMultiSzGetLen(v12);
        return (unsigned int)DeviceStatus;
      }
LABEL_188:
      *v11 = 0;
      *v72 = 0;
      goto LABEL_34;
    case 8u:
      v39 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
        v39 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
      if ( v39 )
      {
        v66 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
          v66 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
        if ( v66 )
          return (unsigned int)DeviceStatus;
        *a5 = 7;
        *v11 = 4;
        v13 = v91;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_33;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           v91,
                           (__int64)&DestinationString,
                           0xDu,
                           (__int64)v12,
                           v15,
                           (__int64)&a7);
LABEL_164:
        DeviceStatus = DeviceProperty;
        if ( DeviceProperty == -1073741772 )
          return (unsigned int)-1073741275;
        goto LABEL_33;
      }
      v13 = v91;
      v94 = v15 >> 1;
      DeviceParent = CmGetDeviceParent(v91, a2, v12, &v94);
      DeviceStatus = DeviceParent;
      if ( DeviceParent && DeviceParent != -1073741789 )
        goto LABEL_33;
      v41 = v100;
      *v11 = 2 * v94;
      *v41 = 18;
LABEL_71:
      if ( a7 < *v11 )
        return (unsigned int)-1073741789;
      goto LABEL_33;
    case 9u:
      v81 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
        v81 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
      if ( v81 )
        return (unsigned int)DeviceStatus;
      v13 = v91;
      v94 = v15 >> 1;
      DeviceSiblings = CmGetDeviceChildren(v91, a2, v12, &v94);
LABEL_225:
      DeviceStatus = DeviceSiblings;
      if ( DeviceSiblings != -1073741789 && DeviceSiblings )
        goto LABEL_33;
      v83 = v100;
      *v11 = 2 * v94;
      *v83 = 8210;
      goto LABEL_71;
    case 2u:
      v18 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
        v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
      if ( !v18 )
      {
        *v11 = 1;
        *a5 = 17;
        if ( v15 >= *v11 )
        {
          *(_BYTE *)v12 = -((unsigned __int8)CmIsDeviceSafeRemovalRequired(v91, a2, pcchLength) != 0);
          return (unsigned int)DeviceStatus;
        }
        return (unsigned int)-1073741789;
      }
      v54 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
        v54 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
      if ( v54 )
        return (unsigned int)DeviceStatus;
      v13 = v91;
      v92 = 78;
      DeviceStatus = CmGetDeviceRegProp(
                       v91,
                       (__int64)a2,
                       pcchLength,
                       37,
                       (__int64)v104,
                       (__int64)Str2,
                       (__int64)&v92,
                       v14);
      if ( DeviceStatus >= 0 )
      {
        if ( !wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
          return (unsigned int)-1073741275;
        v55 = v100;
        *v11 = 16;
        *v55 = 13;
        if ( a7 >= *v11 )
        {
          v23 = (__int64)a2;
          DeviceStatus = CmGetDeviceContainerIdFromBase(v13, a2, Str2, SourceString);
          if ( DeviceStatus >= 0 )
          {
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
            if ( DeviceStatus >= 0 )
              DeviceStatus = RtlGUIDFromString(&DestinationString, (GUID *)v12);
          }
          goto LABEL_34;
        }
        return (unsigned int)-1073741789;
      }
      goto LABEL_33;
    case 0xFu:
      v68 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
      if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
        v68 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
      if ( v68 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v11 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      v13 = v91;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_33;
      *(_BYTE *)v12 = 0;
      v69 = NtPlugPlayGetDeviceStatus(
              v13,
              (unsigned int)&DestinationString,
              (unsigned int)&v93,
              (unsigned int)&v97,
              (__int64)&v96);
      DeviceStatus = v69;
      if ( v69 == -1073741810 )
        return 0;
      if ( v69 >= 0 )
      {
        v23 = (__int64)a2;
        if ( (v93 & 0x2000000) != 0 )
          goto LABEL_34;
        v70 = PnpGetObjectProperty(
                v13,
                (__int64)a2,
                1u,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                (__int64)&v95,
                (__int64)v90,
                1,
                (__int64)&v92,
                v98);
        DeviceStatus = v70;
        if ( v70 >= 0 )
        {
          if ( v95 == 17 && v90[0] == -1 )
            goto LABEL_34;
        }
        else
        {
          if ( v70 != -1073741275 && v70 != -1073741789 )
            goto LABEL_34;
          DeviceStatus = 0;
        }
        goto LABEL_83;
      }
      goto LABEL_33;
    case 0x10u:
      v45 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
        v45 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
      if ( v45 )
        return (unsigned int)DeviceStatus;
      *a5 = 17;
      *v11 = 1;
      if ( !v15 )
        return (unsigned int)-1073741789;
      v13 = v91;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_33;
      *(_BYTE *)v12 = 0;
      v46 = NtPlugPlayGetDeviceStatus(
              v13,
              (unsigned int)&DestinationString,
              (unsigned int)&v93,
              (unsigned int)&v97,
              (__int64)&v96);
      DeviceStatus = v46;
      if ( v46 != -1073741810 )
      {
        if ( v46 >= 0 && ((v93 & 0x100) != 0 || (v93 & 0x400) != 0 && v97 == 14) )
          *(_BYTE *)v12 = -1;
        goto LABEL_33;
      }
      return 0;
    case 0xEu:
      v85 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
        v85 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
      if ( v85 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      v13 = v91;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_33;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v91,
                         (__int64)&DestinationString,
                         0xEu,
                         (__int64)v12,
                         v15,
                         (__int64)v11);
      goto LABEL_164;
    case 0x14u:
      v86 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
        v86 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
      if ( v86 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      v13 = v91;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_33;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v91,
                         (__int64)&DestinationString,
                         0xFu,
                         (__int64)v12,
                         v15,
                         (__int64)v11);
      goto LABEL_164;
    case 0x15u:
      v87 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
        v87 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
      if ( v87 )
        return (unsigned int)DeviceStatus;
      *a5 = 8210;
      v13 = v91;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_33;
      DeviceProperty = NtPlugPlayGetDeviceProperty(
                         v91,
                         (__int64)&DestinationString,
                         0x10u,
                         (__int64)v12,
                         v15,
                         (__int64)v11);
      goto LABEL_164;
  }
  if ( v16 != 26 )
    return (unsigned int)DeviceStatus;
  v59 = *(_QWORD *)a4 - DEVPKEY_Device_OmitFromSystemSpec;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_OmitFromSystemSpec )
    v59 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
  if ( v59 )
    return (unsigned int)DeviceStatus;
  *a5 = 17;
  *v11 = 1;
  if ( !v15 )
    return (unsigned int)-1073741789;
  v60 = pcchLength;
  v13 = v91;
  v61 = pcchLength;
  v62 = v91;
  *(_BYTE *)v12 = 0;
  v63 = PnpGetObjectProperty(
          v62,
          (__int64)a2,
          1u,
          v61,
          0LL,
          (__int64)&DEVPKEY_Device_UpdateWithUngroupedDrivers,
          (__int64)&v95,
          (__int64)v90,
          1,
          (__int64)&v92,
          v14 & 0xFFFF0000);
  DeviceStatus = v63;
  if ( v63 < 0 )
  {
    if ( v63 == -1073741275 || v63 == -1073741789 )
      goto LABEL_156;
LABEL_33:
    v23 = (__int64)a2;
    goto LABEL_34;
  }
  if ( v95 == 17 && v92 == 1 )
  {
    v23 = (__int64)a2;
    v88 = v90[0] == 0;
    goto LABEL_256;
  }
LABEL_156:
  v64 = v60;
  v23 = (__int64)a2;
  v65 = PnpGetObjectProperty(
          v13,
          (__int64)a2,
          1u,
          v64,
          0LL,
          (__int64)&DEVPKEY_Device_DriverInGroup,
          (__int64)&v95,
          (__int64)v90,
          1,
          (__int64)&v92,
          v98);
  DeviceStatus = v65;
  if ( v65 < 0 )
  {
    if ( v65 == -1073741275 || v65 == -1073741789 )
      DeviceStatus = 0;
    goto LABEL_34;
  }
  if ( v95 == 17 && v92 == 1 )
  {
    v88 = v90[0] == -1;
LABEL_256:
    if ( !v88 )
      goto LABEL_34;
    goto LABEL_83;
  }
LABEL_34:
  if ( DeviceStatus != -1073741810 )
    return (unsigned int)DeviceStatus;
  DeviceStatus = CmOpenDeviceRegKey(v13, v23, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( !DeviceStatus )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( DeviceStatus != -1073741810 && DeviceStatus != -1073741632 )
    return (unsigned int)-1073741823;
  return (unsigned int)DeviceStatus;
}
