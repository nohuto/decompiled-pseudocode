/*
 * XREFs of LdrResSearchResource @ 0x180059D70
 * Callers:
 *     LdrResFindResourceDirectory @ 0x180059CE0 (LdrResFindResourceDirectory.c)
 *     RtlLoadString @ 0x1800753A0 (RtlLoadString.c)
 *     LdrResFindResource @ 0x1800E27B0 (LdrResFindResource.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlLcidToLocaleName @ 0x1800454D0 (RtlLcidToLocaleName.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 *     LdrpResGetMappingSize @ 0x18005BF00 (LdrpResGetMappingSize.c)
 *     LdrAddLoadAsDataTable @ 0x180078680 (LdrAddLoadAsDataTable.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 *     sub_1800E2994 @ 0x1800E2994 (sub_1800E2994.c)
 *     sub_1800E2DB0 @ 0x1800E2DB0 (sub_1800E2DB0.c)
 *     sub_1800E34E4 @ 0x1800E34E4 (sub_1800E34E4.c)
 *     sub_1800E3538 @ 0x1800E3538 (sub_1800E3538.c)
 */

NTSTATUS __fastcall LdrResSearchResource(
        WCHAR *DosFileName,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // ecx
  unsigned int v16; // esi
  bool v17; // zf
  int v18; // ebx
  NTSTATUS result; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  WCHAR *v23; // r9
  WCHAR *v24; // rdx
  int v25; // [rsp+50h] [rbp-118h]
  int v26; // [rsp+54h] [rbp-114h]
  PVOID Module; // [rsp+58h] [rbp-110h] BYREF
  SIZE_T Size; // [rsp+60h] [rbp-108h] BYREF
  DWORD Lcid; // [rsp+68h] [rbp-100h] BYREF
  int v30; // [rsp+6Ch] [rbp-FCh]
  __int64 v31; // [rsp+70h] [rbp-F8h]
  __int64 v32; // [rsp+78h] [rbp-F0h]
  __int64 v33; // [rsp+80h] [rbp-E8h]
  __int64 v34; // [rsp+88h] [rbp-E0h]
  _UNICODE_STRING LocaleName; // [rsp+90h] [rbp-D8h] BYREF
  void *Src; // [rsp+A0h] [rbp-C8h]
  int v37; // [rsp+A8h] [rbp-C0h] BYREF
  const wchar_t *v38; // [rsp+B0h] [rbp-B8h]
  int v39; // [rsp+B8h] [rbp-B0h] BYREF
  const wchar_t *v40; // [rsp+C0h] [rbp-A8h]
  _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-A0h] BYREF
  _BYTE MemoryInformation[48]; // [rsp+D8h] [rbp-90h] BYREF
  _BYTE v43[16]; // [rsp+108h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+118h] [rbp-50h]

  v9 = a3;
  v26 = a3;
  Src = a2;
  v34 = a5;
  v33 = a6;
  v32 = a7;
  v31 = a8;
  Module = 0LL;
  v37 = 3538996;
  v38 = L"LdrResSearchResource Enter";
  v39 = 3407922;
  v40 = L"LdrResSearchResource Exit";
  v12 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v21 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v21 = 2147353476LL;
    sub_1800E2008(&v37, *(unsigned __int8 *)v21);
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( !DosFileName || !a2 || v32 && !v31 )
  {
LABEL_101:
    v18 = -1073741811;
    goto LABEL_24;
  }
  v15 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v15 = a4;
  v16 = v15 | 0x1000;
  if ( (v15 & 0x2000) != 0 )
    v16 = v15;
  if ( (v16 & 0xFFF80000) != 0 )
    goto LABEL_23;
  if ( (unsigned int)v9 < 3 && (v16 & 2) == 0 || (unsigned int)v9 > 4 )
  {
    v18 = -1073741583;
    goto LABEL_24;
  }
  if ( (v16 & 0x41) != 0 )
  {
    if ( (_DWORD)v9 != 4 )
      return -1073741583;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_18;
  }
  if ( (v16 & 0x41) == 0 )
    return -1073741582;
LABEL_18:
  if ( (v16 & 0x100) != 0 )
  {
    v17 = (v16 & 0xE00) == 0;
  }
  else
  {
    if ( (v16 & 0x200) == 0 )
    {
      if ( (v16 & 0xC00) != 0xC00 )
        goto LABEL_21;
LABEL_23:
      v18 = -1073741582;
LABEL_24:
      v25 = v18;
      goto LABEL_25;
    }
    v17 = (v16 & 0xC00) == 0;
  }
  if ( !v17 )
    goto LABEL_23;
LABEL_21:
  v30 = ~v16;
  if ( (~v16 & 0x810) != 0 && (v16 & 0x8000) != 0 || (v16 & 0x3000) == 0x3000 || (v16 & 0x18) == 0x18 )
    goto LABEL_23;
  Size = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || !v33 || !*(_QWORD *)v33 )
    {
      v18 = -1073741811;
      v25 = -1073741811;
      goto LABEL_25;
    }
    Size = *(_QWORD *)v33;
  }
  memmove(v43, Src, 8 * v9);
  if ( (_DWORD)v9 != 3 )
  {
    if ( (unsigned int)v9 <= 3 )
      goto LABEL_34;
    v26 = 3;
  }
  if ( (unsigned __int64)SourceString < 0x10000 )
  {
    if ( !SourceString )
      goto LABEL_34;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      *(_QWORD *)&LocaleName.Length = 0LL;
      LocaleName.Buffer = 0LL;
      if ( RtlLcidToLocaleName((LCID)SourceString, &LocaleName, 2u, 1u) >= 0 )
      {
        if ( LocaleName.Buffer )
          RtlFreeUnicodeString(&LocaleName);
        goto LABEL_34;
      }
    }
    goto LABEL_101;
  }
  if ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return -1073741811;
  }
  else
  {
    Lcid = 0;
  }
  SourceString = (PCWSTR)(unsigned __int16)Lcid;
LABEL_34:
  if ( (v16 & 0x300) == 0 )
  {
    if ( (v16 & 0x400) == 0 && ((v16 & 0x800) == 0 || (v30 & 0x8000) == 0) )
      goto LABEL_37;
    if ( (v16 & 0x1400) == 0x1400 )
    {
      result = sub_1800E3538(DosFileName);
    }
    else
    {
      if ( (v16 & 0x1000) == 0 )
        goto LABEL_91;
      result = sub_1800E34E4(DosFileName);
    }
    if ( result < 0 )
      return result;
LABEL_91:
    v22 = sub_1800E2994(DosFileName, &Module, &Size);
    v18 = v22;
    v25 = v22;
    if ( v22 >= 0 )
    {
      if ( (v16 & 0x400) != 0 )
      {
        v23 = 0LL;
        v24 = DosFileName;
      }
      else
      {
        v23 = DosFileName;
        v24 = 0LL;
      }
      result = LdrAddLoadAsDataTable(Module, v24, Size, v23, 0LL);
      if ( result < 0 )
        return result;
      goto LABEL_37;
    }
    if ( v22 == -1073741302 )
    {
LABEL_37:
      if ( (v16 & 0x8000) != 0 )
      {
        result = sub_1800E34E4(DosFileName);
        if ( result < 0 )
          return result;
        v20 = sub_1800E2DB0(DosFileName, v34, v33, v32, v31);
      }
      else
      {
        v20 = sub_18005A0E4((_DWORD)Module, Size, v16, (unsigned int)v43, v26, v34, v33, v32, v31);
      }
      v18 = v20;
      v25 = v20;
    }
LABEL_25:
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
      v18 = v25;
    }
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
      {
        v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
        v18 = v25;
      }
      sub_1800E2008(&v39, *(unsigned __int8 *)v14);
    }
    return v18;
  }
  Module = DosFileName;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_80;
  if ( ((unsigned __int8)DosFileName & 1) == 0 )
    Module = (PVOID)((unsigned __int64)DosFileName | 1);
  if ( (v16 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID)((unsigned __int64)DosFileName & 0xFFFFFFFFFFFFFFFCuLL),
                   MemoryBasicInformation,
                   MemoryInformation,
                   0x30uLL,
                   0LL),
        result >= 0) )
  {
LABEL_80:
    result = LdrpResGetMappingSize(Module, &Size, v16, 0LL);
    if ( result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_37;
  }
  return result;
}
