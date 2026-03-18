/*
 * XREFs of WmipQueryWmiDataBlock @ 0x140589E50
 * Callers:
 *     IoWMISystemControl @ 0x140589B0C (IoWMISystemControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400739AC (WmipUnreferenceRegEntry.c)
 *     IoGetDeviceInstanceName @ 0x14015F4A0 (IoGetDeviceInstanceName.c)
 *     WmipFindRegEntryByDevice @ 0x140161EC8 (WmipFindRegEntryByDevice.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 *     IoWMICompleteRequest @ 0x140589F48 (IoWMICompleteRequest.c)
 *     WmipGetSMBiosTableData @ 0x14058A404 (WmipGetSMBiosTableData.c)
 *     WmipGetSMBiosEventlog @ 0x1407A2F4C (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1407A313C (WmipGetSysIds.c)
 */

__int64 __fastcall WmipQueryWmiDataBlock(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // rsi
  int *v10; // r12
  unsigned int v11; // r14d
  unsigned int v12; // eax
  char *v13; // rcx
  _DWORD *v14; // rbx
  unsigned int SysIds; // edi
  int SMBiosEventlog; // eax
  int v18; // eax
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // r13
  ULONG_PTR v22; // rcx
  unsigned __int16 v23; // cx
  wchar_t *v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 RegEntryByDevice; // rax
  __int64 v28; // rbx
  ULONG_PTR v29; // rcx
  int v30; // r13d
  unsigned __int16 Length; // di
  __int64 v32; // r14
  size_t v33; // r15
  wchar_t *Buffer; // rdx
  unsigned __int16 *v35; // rsi
  unsigned int v36; // [rsp+30h] [rbp-D0h] BYREF
  int DeviceInstanceName; // [rsp+34h] [rbp-CCh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING Src; // [rsp+48h] [rbp-B8h] BYREF
  const void *v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+68h] [rbp-98h]
  const wchar_t *v43; // [rsp+70h] [rbp-90h]
  UNICODE_STRING *p_UnicodeString; // [rsp+78h] [rbp-88h]
  int v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+A0h] [rbp-60h]
  const wchar_t *v48; // [rsp+A8h] [rbp-58h]
  unsigned int *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+D8h] [rbp-28h]
  const wchar_t *v53; // [rsp+E0h] [rbp-20h]
  int *p_DeviceInstanceName; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+110h] [rbp+10h]

  v8 = a8;
  v10 = (int *)a6;
  v11 = 0;
  v40 = a2;
  switch ( a3 )
  {
    case 0u:
      RegEntryByDevice = WmipFindRegEntryByDevice(a1);
      *(_QWORD *)&Src.Length = RegEntryByDevice;
      v28 = RegEntryByDevice;
      if ( !RegEntryByDevice )
        goto LABEL_52;
      v29 = *(_QWORD *)(RegEntryByDevice + 24);
      if ( v29 )
      {
        DeviceInstanceName = IoGetDeviceInstanceName(v29, &UnicodeString);
        SysIds = DeviceInstanceName;
        if ( DeviceInstanceName < 0 )
        {
          SysIds = -1073741163;
        }
        else
        {
          v30 = UnicodeString.Length + 2;
          v11 = v30 + (a5 - 1) * ((UnicodeString.Length + 9) & 0xFFFFFFF8);
          v36 = v11;
          if ( v11 > a7 )
          {
            SysIds = -1073741789;
          }
          else
          {
            memset((void *)a8, 0, v11);
            if ( a5 )
            {
              Length = UnicodeString.Length;
              v32 = a5;
              v33 = UnicodeString.Length;
              do
              {
                Buffer = UnicodeString.Buffer;
                *v10 = v30;
                v35 = (unsigned __int16 *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                ++v10;
                *v35++ = Length;
                memmove(v35, Buffer, v33);
                v8 = (unsigned __int64)v35 + v33;
                --v32;
              }
              while ( v32 );
              SysIds = DeviceInstanceName;
              v11 = v36;
              v28 = *(_QWORD *)&Src.Length;
            }
          }
          RtlFreeAnsiString(&UnicodeString);
        }
      }
      else
      {
        SysIds = -1073741823;
      }
      v26 = v28;
      goto LABEL_51;
    case 1u:
      v20 = WmipFindRegEntryByDevice(a1);
      v21 = v20;
      if ( !v20 )
        goto LABEL_52;
      v22 = *(_QWORD *)(v20 + 24);
      if ( v22 )
      {
        SysIds = IoGetDeviceInstanceName(v22, &Src);
        if ( (SysIds & 0x80000000) != 0 )
        {
          SysIds = -1073741163;
        }
        else
        {
          v23 = Src.Length;
          v11 = Src.Length + 10;
          if ( v11 > a7 )
          {
            SysIds = -1073741789;
          }
          else
          {
            v24 = Src.Buffer;
            *(_DWORD *)a8 = 1;
            *a6 = v11;
            v25 = v23;
            *(_WORD *)(a8 + 4) = v23 + 4;
            memmove((void *)(a8 + 6), v24, v23);
            *(_DWORD *)(a8 + 4 + v25 + 2) = 3145823;
          }
          RtlFreeAnsiString(&Src);
        }
      }
      else
      {
        SysIds = -1073741823;
      }
      v26 = v21;
LABEL_51:
      WmipUnreferenceRegEntry(v26);
      return IoWMICompleteRequest(a1, a2, v40, SysIds, v11);
    case 2u:
      *(_DWORD *)&UnicodeString.Length = 0;
      v45 = 0x4000000;
      v42 = 292;
      v43 = L"BootArchitecture";
      v47 = 292;
      p_UnicodeString = &UnicodeString;
      v50 = 0x4000000;
      v48 = L"PreferredProfile";
      v49 = &v36;
      v53 = L"Capabilities";
      v52 = 292;
      v55 = 0x4000000;
      p_DeviceInstanceName = &DeviceInstanceName;
      v36 = 0;
      DeviceInstanceName = 0;
      v41 = 0LL;
      v46 = 0LL;
      v51 = 0LL;
      v56 = 0LL;
      v57 = 0;
      if ( (int)RtlpQueryRegistryValues(0LL, L"\\Registry\\Machine\\Hardware\\Description\\System", (__int64)&v41, 0LL) < 0 )
        goto LABEL_52;
      v11 = 12;
      if ( a7 >= 0xC )
      {
        *(_DWORD *)a8 = *(_DWORD *)&UnicodeString.Length;
        *(_DWORD *)(a8 + 4) = v36;
        *(_DWORD *)(a8 + 8) = DeviceInstanceName;
        *a6 = 12;
        goto LABEL_23;
      }
LABEL_27:
      SysIds = -1073741789;
      return IoWMICompleteRequest(a1, a2, v40, SysIds, v11);
  }
  if ( a3 != 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 == 6 )
      {
        *(_DWORD *)&UnicodeString.Length = a7;
        SMBiosEventlog = WmipGetSMBiosEventlog(a8 & -(__int64)(a7 != 0), &UnicodeString);
        v11 = *(_DWORD *)&UnicodeString.Length;
        SysIds = SMBiosEventlog;
        if ( SMBiosEventlog < 0 )
          return IoWMICompleteRequest(a1, a2, v40, SysIds, v11);
        goto LABEL_11;
      }
LABEL_52:
      SysIds = -1073741163;
      return IoWMICompleteRequest(a1, a2, v40, SysIds, v11);
    }
    SysIds = WmipGetSysIds(&Src, &v36, &UnicodeString, &DeviceInstanceName);
    if ( (SysIds & 0x80000000) != 0 )
      return IoWMICompleteRequest(a1, a2, v40, SysIds, v11);
    if ( a3 == 5 )
    {
      v18 = DeviceInstanceName;
      a2 = *(const void **)&UnicodeString.Length;
      v19 = 8 * DeviceInstanceName;
    }
    else
    {
      v18 = v36;
      a2 = *(const void **)&Src.Length;
      v19 = 16 * v36;
    }
    v11 = v19 + 4;
    if ( a7 >= v11 )
    {
      *a6 = v11;
      *(_DWORD *)a8 = v18;
      memmove((void *)(a8 + 4), a2, v11 - 4LL);
LABEL_23:
      SysIds = 0;
      return IoWMICompleteRequest(a1, a2, v40, SysIds, v11);
    }
    goto LABEL_27;
  }
  v12 = a7 - 8;
  v13 = (char *)(a8 + 8);
  if ( a7 < 8 )
    v12 = 0;
  v14 = (_DWORD *)(a8 + 4);
  *(_DWORD *)&UnicodeString.Length = v12;
  if ( a7 < 8 )
  {
    v13 = 0LL;
    v14 = 0LL;
  }
  SysIds = WmipGetSMBiosTableData(v13);
  v11 = *(_DWORD *)&UnicodeString.Length + 8;
  if ( (SysIds & 0x80000000) == 0 )
  {
    *v14 = *(_DWORD *)&UnicodeString.Length;
LABEL_11:
    *a6 = v11;
  }
  return IoWMICompleteRequest(a1, a2, v40, SysIds, v11);
}
