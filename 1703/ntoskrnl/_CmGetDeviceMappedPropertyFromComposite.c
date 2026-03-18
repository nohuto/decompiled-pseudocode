/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x1404E6E2C
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x1404865E0 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x14073FAD4 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14004BF9C (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbCopyExW @ 0x1400819F0 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     wcscmp @ 0x14016BB70 (wcscmp.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     _PnpMultiSzGetLen @ 0x140443434 (_PnpMultiSzGetLen.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1404DF81C (_CmGetDeviceContainerIdFromBase.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404E5E60 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x1404E62FC (_CmGetDeviceParent.c)
 *     _NtPlugPlayGetDeviceProperty @ 0x1404E6644 (_NtPlugPlayGetDeviceProperty.c)
 *     _CmGetDeviceStatus @ 0x1404E7B28 (_CmGetDeviceStatus.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1404E7ED4 (_NtPlugPlayGetDeviceStatus.c)
 *     _CmGetDeviceRelationsList @ 0x14073E1C8 (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceChildren @ 0x14073F574 (_CmGetDeviceChildren.c)
 *     _CmGetDeviceSiblings @ 0x14073FEE4 (_CmGetDeviceSiblings.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromComposite(
        _QWORD *a1,
        const wchar_t *a2,
        size_t a3,
        __int64 a4,
        _DWORD *a5,
        wchar_t *a6,
        unsigned int a7,
        int *a8,
        int a9)
{
  wchar_t *v10; // r15
  int *v12; // rsi
  int DeviceStatus; // ebx
  int v15; // edx
  unsigned int v16; // r14d
  unsigned int v17; // ecx
  int v18; // r12d
  __int64 v19; // rax
  size_t v20; // r9
  __int64 v21; // rdi
  const wchar_t *v22; // r11
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  int DeviceParent; // eax
  __int64 v30; // rax
  int v31; // edx
  int v32; // ecx
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rax
  __int64 v36; // rax
  NTSTATUS v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int DeviceProperty; // eax
  __int64 v42; // rax
  size_t v43; // rdi
  int ObjectProperty; // eax
  __int64 v45; // r9
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  int v57; // eax
  __int64 v58; // rax
  int v59; // eax
  int v60; // edx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  int DeviceRelationsList; // eax
  unsigned int v68; // eax
  __int64 v69; // rax
  int DeviceChildren; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  int v76; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v77; // [rsp+74h] [rbp-8Ch] BYREF
  int v78; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v79; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v80; // [rsp+80h] [rbp-80h] BYREF
  char v81[4]; // [rsp+84h] [rbp-7Ch] BYREF
  int v82; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v83; // [rsp+8Ch] [rbp-74h]
  size_t pcchLength; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v86; // [rsp+A8h] [rbp-58h] BYREF
  char v87[4]; // [rsp+ACh] [rbp-54h] BYREF
  char v88[8]; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE Buf2[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE Buf1[16]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Str2[40]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+130h] [rbp+30h] BYREF

  v10 = a6;
  v12 = a8;
  DeviceStatus = 0;
  v15 = a9;
  pcchLength = a3;
  v79 = 0;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *v12 = 0;
  v83 = v15 & 0xFFFF0000;
  if ( a6 )
  {
    v16 = a7;
    v10 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v16 = 0;
    a7 = 0;
  }
  v17 = *(_DWORD *)(a4 + 16);
  if ( v17 < 2 )
    return (unsigned int)-1073741264;
  if ( v17 == 10 )
  {
    v42 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
      v42 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
    if ( !v42 )
    {
      v43 = pcchLength;
      ObjectProperty = PnpGetObjectProperty(
                         (__int64)a1,
                         (__int64)a2,
                         1u,
                         pcchLength,
                         0LL,
                         (__int64)&DEVPKEY_Device_FriendlyName,
                         (__int64)a5,
                         (__int64)v10,
                         v16,
                         (__int64)&v78,
                         v15 & 0xFFFF0000);
      DeviceStatus = ObjectProperty;
      if ( !ObjectProperty || ObjectProperty == -1073741789 )
      {
        *v12 = v78;
      }
      else if ( ObjectProperty == -1073741275 )
      {
        v45 = v43;
        v21 = (__int64)a1;
        v46 = PnpGetObjectProperty(
                (__int64)a1,
                (__int64)a2,
                1u,
                v45,
                0LL,
                (__int64)&DEVPKEY_Device_DeviceDesc,
                (__int64)a5,
                (__int64)v10,
                a7,
                (__int64)&v78,
                v83);
        DeviceStatus = v46;
        if ( !v46 || v46 == -1073741789 )
        {
          *v12 = v78;
        }
        else if ( v46 == -1073741275 )
        {
          return (unsigned int)DeviceStatus;
        }
        goto LABEL_32;
      }
      goto LABEL_74;
    }
  }
  if ( v17 == 256 )
  {
    v36 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
      v36 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
    if ( !v36 )
    {
      DeviceStatus = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
      if ( DeviceStatus < 0 )
        goto LABEL_75;
      *v12 = 2 * pcchLength + 2;
      *a5 = 18;
      if ( v16 >= *v12 )
      {
        v37 = RtlStringCbCopyExW(v10, (unsigned int)*v12, v22, 0LL, 0LL, 0x900u);
        v22 = a2;
        DeviceStatus = v37;
        v21 = (__int64)a1;
        if ( v37 < 0 )
        {
          *v12 = 0;
          *a5 = 0;
        }
        goto LABEL_33;
      }
      return (unsigned int)-1073741789;
    }
  }
  if ( v17 == 2 )
  {
    v24 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
      v24 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
    if ( !v24 )
      goto LABEL_61;
  }
  if ( v17 == 3 )
  {
    v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
      v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
    if ( !v30 )
      goto LABEL_61;
  }
  if ( v17 == 12 )
  {
    v62 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
      v62 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
    if ( !v62 )
    {
LABEL_61:
      v76 = 0;
      v80 = 0;
      v79 = 0;
      DeviceStatus = CmGetDeviceStatus(
                       (_DWORD)a1,
                       (_DWORD)a2,
                       pcchLength,
                       (unsigned int)&v76,
                       (__int64)&v80,
                       (__int64)&v79);
      if ( DeviceStatus >= 0 )
      {
        v31 = *(_DWORD *)(a4 + 16);
        v32 = v76;
        if ( v31 == 2 )
        {
          v33 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
            v33 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
          if ( !v33 )
            goto LABEL_66;
        }
        if ( v31 != 3 )
          goto LABEL_194;
        v52 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
          v52 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
        if ( !v52 )
        {
LABEL_66:
          *v12 = 4;
          *a5 = 7;
        }
        else
        {
LABEL_194:
          if ( (v76 & 0x400) == 0 )
            return (unsigned int)-1073741275;
          *v12 = 4;
          *a5 = 24;
        }
        if ( a7 < *v12 )
          return (unsigned int)-1073741789;
        if ( *(_DWORD *)(a4 + 16) == 12 )
        {
          v63 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
            v63 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
          if ( !v63 )
          {
            if ( (int)PnpGetObjectProperty(
                        (__int64)a1,
                        (__int64)a2,
                        1u,
                        pcchLength,
                        0LL,
                        (__int64)&DEVPKEY_Device_ProblemStatusOverride,
                        (__int64)&v82,
                        (__int64)&v86,
                        4,
                        (__int64)&v78,
                        v83) >= 0
              && v82 == 24 )
            {
              v64 = v79;
              if ( v78 == 4 )
                v64 = v86;
              v79 = v64;
            }
            v32 = v76;
          }
        }
        v34 = *(_DWORD *)(a4 + 16);
        if ( v34 != 2 )
          goto LABEL_142;
        v35 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
          v35 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
        if ( v35 )
        {
LABEL_142:
          if ( v34 != 3 )
            goto LABEL_205;
          v53 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
            v53 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
          if ( v53 )
LABEL_205:
            v54 = v79;
          else
            v54 = (v32 & 0x400) != 0 ? v80 : 0;
          *(_DWORD *)v10 = v54;
        }
        else
        {
          *(_DWORD *)v10 = v32;
        }
      }
LABEL_74:
      v22 = a2;
LABEL_75:
      v21 = (__int64)a1;
      goto LABEL_33;
    }
  }
  v18 = 4;
  if ( v17 == 4 )
  {
    v39 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
      v39 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
    if ( !v39 )
    {
LABEL_214:
      DeviceRelationsList = CmGetDeviceRelationsList((_DWORD)a1, (_DWORD)a2, v18, 0, 0, (__int64)&v77);
      DeviceStatus = DeviceRelationsList;
      if ( DeviceRelationsList != -1073741772 && DeviceRelationsList )
      {
        if ( DeviceRelationsList != -1073741789 )
          goto LABEL_74;
        *v12 = 2 * v77;
        v68 = a7;
        *a5 = 8210;
        if ( v68 < *v12 )
          return (unsigned int)-1073741789;
        v21 = (__int64)a1;
        DeviceStatus = CmGetDeviceRelationsList((_DWORD)a1, (_DWORD)a2, v18, (_DWORD)v10, v68 >> 1, (__int64)&v77);
        if ( !DeviceStatus )
        {
          *v12 = 2 * PnpMultiSzGetLen(v10);
          return (unsigned int)DeviceStatus;
        }
        *v12 = 0;
        *a5 = 0;
        goto LABEL_32;
      }
      return (unsigned int)-1073741275;
    }
  }
  if ( v17 == 5 )
  {
    v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
      v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
    if ( !v27 )
    {
      v18 = 8;
      goto LABEL_214;
    }
  }
  if ( v17 == 6 )
  {
    v47 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
      v47 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
    if ( !v47 )
    {
      v18 = 16;
      goto LABEL_214;
    }
  }
  if ( v17 == 7 )
  {
    v65 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
      v65 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
    if ( !v65 )
    {
      v18 = 32;
      goto LABEL_214;
    }
  }
  if ( v17 == 11 )
  {
    v66 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
      v66 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
    if ( !v66 )
    {
      v18 = 64;
      goto LABEL_214;
    }
  }
  if ( v17 == 8 )
  {
    v28 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
      v28 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
    if ( !v28 )
    {
      v77 = v16 >> 1;
      DeviceParent = CmGetDeviceParent((__int64)a1, a2, v10, &v77);
      DeviceStatus = DeviceParent;
      if ( DeviceParent && DeviceParent != -1073741789 )
        goto LABEL_74;
      *v12 = 2 * v77;
      *a5 = 18;
LABEL_56:
      if ( a7 < *v12 )
        return (unsigned int)-1073741789;
      goto LABEL_74;
    }
  }
  if ( v17 == 9 )
  {
    v69 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
      v69 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
    if ( !v69 )
    {
      v77 = v16 >> 1;
      DeviceChildren = CmGetDeviceChildren(a1, a2, v10, &v77);
      goto LABEL_226;
    }
  }
  if ( v17 == 10 )
  {
    v71 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
      v71 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
    if ( !v71 )
    {
      v77 = v16 >> 1;
      DeviceChildren = CmGetDeviceSiblings(a1, a2, v10, &v77);
LABEL_226:
      DeviceStatus = DeviceChildren;
      if ( DeviceChildren != -1073741789 && DeviceChildren )
        goto LABEL_74;
      *v12 = 2 * v77;
      *a5 = 8210;
      goto LABEL_56;
    }
  }
  if ( v17 == 2 )
  {
    v38 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
      v38 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
    if ( !v38 )
    {
      *v12 = 1;
      *a5 = 17;
      if ( v16 >= *v12 )
      {
        *(_BYTE *)v10 = -CmIsDeviceSafeRemovalRequired((__int64)a1, (__int64)a2, pcchLength);
        return (unsigned int)DeviceStatus;
      }
      return (unsigned int)-1073741789;
    }
    v51 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
      v51 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
    if ( !v51 )
    {
      v78 = 78;
      DeviceStatus = CmGetDeviceRegProp(
                       (__int64)a1,
                       (__int64)a2,
                       pcchLength,
                       37,
                       (__int64)v88,
                       (__int64)Str2,
                       (__int64)&v78,
                       v15);
      if ( DeviceStatus < 0 )
        goto LABEL_74;
      if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
      {
        *v12 = 16;
        *a5 = 13;
        if ( a7 < *v12 )
          return (unsigned int)-1073741789;
        v21 = (__int64)a1;
        DeviceStatus = CmGetDeviceContainerIdFromBase(a1, (__int64)a2, Str2, SourceString);
        if ( DeviceStatus >= 0 )
        {
          DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
          if ( DeviceStatus >= 0 )
            DeviceStatus = RtlGUIDFromString(&DestinationString, (GUID *)v10);
        }
        goto LABEL_32;
      }
      return (unsigned int)-1073741275;
    }
  }
  if ( v17 == 5 )
  {
    v25 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
      v25 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
    if ( !v25 )
    {
      *v12 = 1;
      *a5 = 17;
      if ( v16 < *v12 )
        return (unsigned int)-1073741789;
      v21 = (__int64)a1;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_32;
      *(_BYTE *)v10 = 0;
      v26 = NtPlugPlayGetDeviceStatus(
              (_DWORD)a1,
              (unsigned int)&DestinationString,
              (unsigned int)&v76,
              (unsigned int)&v80,
              (__int64)&v79);
      DeviceStatus = v26;
      if ( v26 != -1073741810 )
      {
        v22 = a2;
        if ( v26 < 0 )
          goto LABEL_33;
        goto LABEL_46;
      }
      return 0;
    }
  }
  if ( v17 == 6 )
  {
    v48 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
      v48 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
    if ( !v48 )
    {
      *a5 = 17;
      *v12 = 1;
      if ( !v16 )
        return (unsigned int)-1073741789;
      v21 = (__int64)a1;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
      if ( DeviceStatus < 0 )
        goto LABEL_32;
      *(_BYTE *)v10 = 0;
      v49 = NtPlugPlayGetDeviceStatus(
              (_DWORD)a1,
              (unsigned int)&DestinationString,
              (unsigned int)&v76,
              (unsigned int)&v80,
              (__int64)&v79);
      DeviceStatus = v49;
      if ( v49 == -1073741810 )
        return 0;
      if ( v49 < 0 )
        goto LABEL_32;
      if ( (v76 & 0x8000) == 0 )
      {
        if ( (v76 & 0x400) == 0 || v80 <= 0x1D && (v60 = 591396864, _bittest(&v60, v80)) )
        {
          if ( (v76 & 8) != 0 )
            goto LABEL_32;
          v50 = PnpGetObjectProperty(
                  (__int64)a1,
                  (__int64)a2,
                  1u,
                  pcchLength,
                  0LL,
                  (__int64)&DEVPKEY_Device_Capabilities,
                  (__int64)&v82,
                  (__int64)v87,
                  4,
                  (__int64)&v78,
                  v83);
          DeviceStatus = v50;
          if ( v50 != -1073741275 )
          {
            if ( v50 < 0 )
              goto LABEL_32;
            v22 = a2;
            if ( (v87[0] & 0x40) == 0 )
              goto LABEL_33;
LABEL_46:
            *(_BYTE *)v10 = -1;
            goto LABEL_33;
          }
          return 0;
        }
      }
LABEL_172:
      *(_BYTE *)v10 = -1;
      goto LABEL_32;
    }
  }
  if ( v17 != 15 )
    goto LABEL_164;
  v55 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
  if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
    v55 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
  if ( v55 )
  {
LABEL_164:
    if ( v17 != 16 )
      goto LABEL_94;
    v58 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
      v58 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
    if ( v58 )
    {
LABEL_94:
      if ( v17 != 8 )
        goto LABEL_27;
      v40 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
        v40 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
      if ( v40 )
      {
LABEL_27:
        if ( v17 == 4 )
        {
          v19 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
            v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
          if ( !v19 )
          {
            v20 = pcchLength;
            *a5 = 17;
            *v12 = 1;
            v21 = (__int64)a1;
            DeviceStatus = PnpGetObjectProperty(
                             (__int64)a1,
                             (__int64)a2,
                             1u,
                             v20,
                             0LL,
                             (__int64)&DEVPKEY_Device_ContainerId,
                             (__int64)&v82,
                             (__int64)Buf2,
                             16,
                             (__int64)&v78,
                             v15 & 0xFFFF0000);
            if ( DeviceStatus >= 0 )
            {
              DeviceStatus = PnpGetObjectProperty(
                               (__int64)a1,
                               (__int64)L"HTREE\\ROOT\\0",
                               1u,
                               0LL,
                               0LL,
                               (__int64)&DEVPKEY_Device_BaseContainerId,
                               (__int64)&v82,
                               (__int64)Buf1,
                               16,
                               (__int64)&v78,
                               v83);
              if ( DeviceStatus >= 0 )
              {
                if ( a7 < *v12 )
                  return (unsigned int)-1073741789;
                *(_BYTE *)v10 = (memcmp(Buf1, Buf2, 0x10uLL) != 0) - 1;
              }
            }
            goto LABEL_32;
          }
        }
        if ( v17 != 14 )
          goto LABEL_241;
        v61 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
          v61 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
        if ( v61 )
        {
LABEL_241:
          if ( v17 != 20 )
            goto LABEL_247;
          v72 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
            v72 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
          if ( v72 )
          {
LABEL_247:
            if ( v17 != 21 )
              return (unsigned int)DeviceStatus;
            v73 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
              v73 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
            if ( v73 )
              return (unsigned int)DeviceStatus;
            *a5 = 8210;
            v21 = (__int64)a1;
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
            if ( DeviceStatus >= 0 )
            {
              DeviceStatus = NtPlugPlayGetDeviceProperty(
                               (__int64)a1,
                               (__int64)&DestinationString,
                               0x10u,
                               (__int64)v10,
                               v16,
                               (__int64)v12);
              if ( DeviceStatus == -1073741772 )
                DeviceStatus = -1073741275;
            }
            goto LABEL_32;
          }
          *a5 = 8210;
          v21 = (__int64)a1;
          DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
          if ( DeviceStatus < 0 )
            goto LABEL_32;
          DeviceProperty = NtPlugPlayGetDeviceProperty(
                             (__int64)a1,
                             (__int64)&DestinationString,
                             0xFu,
                             (__int64)v10,
                             v16,
                             (__int64)v12);
        }
        else
        {
          *a5 = 8210;
          v21 = (__int64)a1;
          DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
          if ( DeviceStatus < 0 )
            goto LABEL_32;
          DeviceProperty = NtPlugPlayGetDeviceProperty(
                             (__int64)a1,
                             (__int64)&DestinationString,
                             0xEu,
                             (__int64)v10,
                             v16,
                             (__int64)v12);
        }
      }
      else
      {
        *a5 = 7;
        *v12 = 4;
        v21 = (__int64)a1;
        DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
        if ( DeviceStatus < 0 )
          goto LABEL_32;
        DeviceProperty = NtPlugPlayGetDeviceProperty(
                           (__int64)a1,
                           (__int64)&DestinationString,
                           0xDu,
                           (__int64)v10,
                           v16,
                           (__int64)&a7);
      }
      DeviceStatus = DeviceProperty;
      if ( DeviceProperty != -1073741772 )
        goto LABEL_32;
      return (unsigned int)-1073741275;
    }
    *a5 = 17;
    *v12 = 1;
    if ( !v16 )
      return (unsigned int)-1073741789;
    v21 = (__int64)a1;
    DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( DeviceStatus < 0 )
      goto LABEL_32;
    *(_BYTE *)v10 = 0;
    v59 = NtPlugPlayGetDeviceStatus(
            (_DWORD)a1,
            (unsigned int)&DestinationString,
            (unsigned int)&v76,
            (unsigned int)&v80,
            (__int64)&v79);
    DeviceStatus = v59;
    if ( v59 == -1073741810 )
      return 0;
    if ( v59 < 0 || (v76 & 0x100) == 0 && ((v76 & 0x400) == 0 || v80 != 14) )
      goto LABEL_32;
    goto LABEL_172;
  }
  *a5 = 17;
  *v12 = 1;
  if ( !v16 )
    return (unsigned int)-1073741789;
  v21 = (__int64)a1;
  DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( DeviceStatus < 0 )
    goto LABEL_32;
  *(_BYTE *)v10 = 0;
  v56 = NtPlugPlayGetDeviceStatus(
          (_DWORD)a1,
          (unsigned int)&DestinationString,
          (unsigned int)&v76,
          (unsigned int)&v80,
          (__int64)&v79);
  DeviceStatus = v56;
  if ( v56 == -1073741810 )
    return 0;
  if ( v56 < 0 || (v76 & 0x2000000) != 0 )
    goto LABEL_32;
  v57 = PnpGetObjectProperty(
          (__int64)a1,
          (__int64)a2,
          1u,
          0LL,
          0LL,
          (__int64)&DEVPKEY_Device_PresenceNotForDevice,
          (__int64)&v82,
          (__int64)v81,
          1,
          (__int64)&v78,
          v83);
  DeviceStatus = v57;
  if ( v57 >= 0 )
  {
    if ( v82 == 17 && v81[0] == -1 )
      goto LABEL_32;
  }
  else
  {
    if ( v57 != -1073741275 && v57 != -1073741789 )
      goto LABEL_32;
    DeviceStatus = 0;
  }
  *(_BYTE *)v10 = -1;
LABEL_32:
  v22 = a2;
LABEL_33:
  if ( DeviceStatus != -1073741810 )
    return (unsigned int)DeviceStatus;
  DeviceStatus = CmOpenDeviceRegKey(v21, (__int64)v22, 0x10u, 0, 1, 0, (__int64)&Handle, 0LL);
  if ( !DeviceStatus )
  {
    ZwClose(Handle);
    return (unsigned int)-1073741275;
  }
  if ( DeviceStatus != -1073741810 && DeviceStatus != -1073741632 )
    return (unsigned int)-1073741823;
  return (unsigned int)DeviceStatus;
}
