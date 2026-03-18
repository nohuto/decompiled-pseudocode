/*
 * XREFs of WmipQueryWmiDataBlock @ 0x14055C6B0
 * Callers:
 *     IoWMISystemControl @ 0x14055C374 (IoWMISystemControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14006E848 (WmipUnreferenceRegEntry.c)
 *     IoGetDeviceInstanceName @ 0x1401477FC (IoGetDeviceInstanceName.c)
 *     WmipFindRegEntryByDevice @ 0x14015420C (WmipFindRegEntryByDevice.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 *     IoWMICompleteRequest @ 0x14055C7A4 (IoWMICompleteRequest.c)
 *     WmipGetSMBiosTableData @ 0x14055CA4C (WmipGetSMBiosTableData.c)
 *     WmipGetSMBiosEventlog @ 0x1407072A0 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140707490 (WmipGetSysIds.c)
 */

__int64 __fastcall WmipQueryWmiDataBlock(
        void *a1,
        const void *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned __int64 a8)
{
  int *v8; // r12
  unsigned __int64 v9; // r14
  unsigned int v11; // esi
  _DWORD *v12; // r15
  char *v13; // rcx
  unsigned int SysIds; // edi
  int SMBiosEventlog; // eax
  int v17; // eax
  volatile signed __int32 *v18; // rax
  volatile signed __int32 *v19; // r13
  ULONG_PTR v20; // rcx
  unsigned __int16 v21; // cx
  wchar_t *v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rcx
  volatile signed __int32 *RegEntryByDevice; // rax
  volatile signed __int32 *v26; // rbx
  ULONG_PTR v27; // rcx
  int v28; // r13d
  unsigned __int16 Length; // bx
  __int64 v30; // rsi
  size_t v31; // rdi
  wchar_t *Buffer; // rdx
  unsigned __int16 *v33; // r14
  unsigned int v34; // [rsp+30h] [rbp-D0h] BYREF
  int DeviceInstanceName; // [rsp+34h] [rbp-CCh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING Src; // [rsp+48h] [rbp-B8h] BYREF
  const void *v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h]
  const WCHAR *v41; // [rsp+70h] [rbp-90h]
  UNICODE_STRING *p_UnicodeString; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  int v45; // [rsp+A0h] [rbp-60h]
  const WCHAR *v46; // [rsp+A8h] [rbp-58h]
  unsigned int *v47; // [rsp+B0h] [rbp-50h]
  int v48; // [rsp+B8h] [rbp-48h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  const WCHAR *v51; // [rsp+E0h] [rbp-20h]
  int *p_DeviceInstanceName; // [rsp+E8h] [rbp-18h]
  int v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+110h] [rbp+10h]

  v8 = (int *)a6;
  v9 = a8;
  v38 = a2;
  v11 = 0;
  v12 = 0LL;
  switch ( a3 )
  {
    case 0u:
      RegEntryByDevice = WmipFindRegEntryByDevice(a1);
      *(_QWORD *)&Src.Length = RegEntryByDevice;
      v26 = RegEntryByDevice;
      if ( !RegEntryByDevice )
        goto LABEL_51;
      v27 = *((_QWORD *)RegEntryByDevice + 3);
      if ( v27 )
      {
        DeviceInstanceName = IoGetDeviceInstanceName(v27, &UnicodeString);
        SysIds = DeviceInstanceName;
        if ( DeviceInstanceName < 0 )
        {
          SysIds = -1073741163;
        }
        else
        {
          v28 = UnicodeString.Length + 2;
          v11 = v28 + (a5 - 1) * ((UnicodeString.Length + 9) & 0xFFFFFFF8);
          v34 = v11;
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
              v30 = a5;
              v31 = UnicodeString.Length;
              do
              {
                Buffer = UnicodeString.Buffer;
                *v8 = v28;
                v33 = (unsigned __int16 *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                ++v8;
                *v33++ = Length;
                memmove(v33, Buffer, v31);
                v9 = (unsigned __int64)v33 + v31;
                --v30;
              }
              while ( v30 );
              SysIds = DeviceInstanceName;
              v11 = v34;
              v26 = *(volatile signed __int32 **)&Src.Length;
            }
          }
          RtlFreeUnicodeString(&UnicodeString);
        }
      }
      else
      {
        SysIds = -1073741823;
      }
      v24 = (__int64)v26;
      goto LABEL_50;
    case 1u:
      v18 = WmipFindRegEntryByDevice(a1);
      v19 = v18;
      if ( !v18 )
        goto LABEL_51;
      v20 = *((_QWORD *)v18 + 3);
      if ( v20 )
      {
        SysIds = IoGetDeviceInstanceName(v20, &Src);
        if ( (SysIds & 0x80000000) != 0 )
        {
          SysIds = -1073741163;
        }
        else
        {
          v21 = Src.Length;
          v11 = Src.Length + 10;
          if ( v11 > a7 )
          {
            SysIds = -1073741789;
          }
          else
          {
            v22 = Src.Buffer;
            *(_DWORD *)a8 = 1;
            v23 = v21;
            *a6 = v11;
            *(_WORD *)(a8 + 4) = v21 + 4;
            memmove((void *)(a8 + 6), v22, v21);
            *(_DWORD *)(a8 + 4 + v23 + 2) = 3145823;
          }
          RtlFreeUnicodeString(&Src);
        }
      }
      else
      {
        SysIds = -1073741823;
      }
      v24 = (__int64)v19;
LABEL_50:
      WmipUnreferenceRegEntry(v24);
      return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
    case 2u:
      *(_DWORD *)&UnicodeString.Length = 0;
      v43 = 0x4000000;
      v40 = 292;
      v41 = L"BootArchitecture";
      v45 = 292;
      p_UnicodeString = &UnicodeString;
      v48 = 0x4000000;
      v46 = L"PreferredProfile";
      v47 = &v34;
      v51 = L"Capabilities";
      v50 = 292;
      v53 = 0x4000000;
      p_DeviceInstanceName = &DeviceInstanceName;
      v34 = 0;
      DeviceInstanceName = 0;
      v39 = 0LL;
      v44 = 0LL;
      v49 = 0LL;
      v54 = 0LL;
      v55 = 0;
      if ( (int)RtlpQueryRegistryValues(0LL, L"\\Registry\\Machine\\Hardware\\Description\\System", (__int64)&v39, 0LL) < 0 )
        goto LABEL_51;
      v11 = 12;
      if ( a7 >= 0xC )
      {
        *(_DWORD *)a8 = *(_DWORD *)&UnicodeString.Length;
        *(_DWORD *)(a8 + 4) = v34;
        *(_DWORD *)(a8 + 8) = DeviceInstanceName;
        *a6 = 12;
        goto LABEL_22;
      }
LABEL_26:
      SysIds = -1073741789;
      return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
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
          return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
        goto LABEL_9;
      }
LABEL_51:
      SysIds = -1073741163;
      return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
    }
    SysIds = WmipGetSysIds(&Src, &v34, &UnicodeString, &DeviceInstanceName);
    if ( (SysIds & 0x80000000) != 0 )
      return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
    if ( a3 == 5 )
    {
      v17 = DeviceInstanceName;
      a2 = *(const void **)&UnicodeString.Length;
      v11 = 8 * DeviceInstanceName + 4;
    }
    else
    {
      v17 = v34;
      a2 = *(const void **)&Src.Length;
      v11 = 16 * v34 + 4;
    }
    if ( a7 >= v11 )
    {
      *a6 = v11;
      *(_DWORD *)a8 = v17;
      memmove((void *)(a8 + 4), a2, v11 - 4LL);
LABEL_22:
      SysIds = 0;
      return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
    }
    goto LABEL_26;
  }
  if ( a7 < 8 )
  {
    *(_DWORD *)&UnicodeString.Length = 0;
    v13 = 0LL;
  }
  else
  {
    v12 = (_DWORD *)(a8 + 4);
    *(_DWORD *)&UnicodeString.Length = a7 - 8;
    v13 = (char *)(a8 + 8);
  }
  SysIds = WmipGetSMBiosTableData(v13);
  v11 = *(_DWORD *)&UnicodeString.Length + 8;
  if ( (SysIds & 0x80000000) == 0 )
  {
    *v12 = *(_DWORD *)&UnicodeString.Length;
LABEL_9:
    *a6 = v11;
  }
  return IoWMICompleteRequest(a1, a2, v38, SysIds, v11);
}
