/*
 * XREFs of LdrResSearchResource @ 0x18001D400
 * Callers:
 *     LdrResFindResourceDirectory @ 0x18001D370 (LdrResFindResourceDirectory.c)
 *     RtlLoadString @ 0x180021B10 (RtlLoadString.c)
 *     LdrResFindResource @ 0x1800E2C10 (LdrResFindResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x18001D76C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetMappingSize @ 0x18001F540 (LdrpResGetMappingSize.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     RtlLcidToLocaleName @ 0x180051F50 (RtlLcidToLocaleName.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     LdrAddLoadAsDataTable @ 0x180079E20 (LdrAddLoadAsDataTable.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 *     LdrpResMapFile @ 0x1800E2DF4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E3210 (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFileHandle @ 0x1800E3938 (LdrpResValidateFileHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E398C (LdrpResValidateFilePath.c)
 */

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 Handle,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r14
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // r15
  unsigned int v16; // esi
  bool v17; // zf
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 result; // rax
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  HANDLE v25; // rdx
  int v26; // [rsp+50h] [rbp-118h]
  int v27; // [rsp+54h] [rbp-114h]
  unsigned __int64 v28; // [rsp+58h] [rbp-110h]
  __int64 v29; // [rsp+60h] [rbp-108h] BYREF
  int v30; // [rsp+68h] [rbp-100h] BYREF
  int v31; // [rsp+6Ch] [rbp-FCh]
  __int64 v32; // [rsp+70h] [rbp-F8h]
  __int64 v33; // [rsp+78h] [rbp-F0h]
  __int64 v34; // [rsp+80h] [rbp-E8h]
  __int64 v35; // [rsp+88h] [rbp-E0h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-D8h] BYREF
  void *Src; // [rsp+A0h] [rbp-C8h]
  int v38; // [rsp+A8h] [rbp-C0h] BYREF
  const wchar_t *v39; // [rsp+B0h] [rbp-B8h]
  int v40; // [rsp+B8h] [rbp-B0h] BYREF
  const wchar_t *v41; // [rsp+C0h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-A0h] BYREF
  char v43[48]; // [rsp+D8h] [rbp-90h] BYREF
  _BYTE v44[16]; // [rsp+108h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+118h] [rbp-50h]

  v9 = a3;
  v27 = a3;
  Src = a2;
  v35 = a5;
  v34 = a6;
  v33 = a7;
  v32 = a8;
  LODWORD(v28) = 0;
  v38 = 3538996;
  v39 = L"LdrResSearchResource Enter";
  v40 = 3407922;
  v41 = L"LdrResSearchResource Exit";
  v13 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(Handle, a2) )
    v14 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v14 = 2147353477LL;
  if ( (*(_BYTE *)v14 & 1) != 0 )
  {
    v15 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v12) )
      v23 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v23 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v38, *(unsigned __int8 *)v23);
  }
  else
  {
    v15 = 2147353476LL;
  }
  if ( !Handle || !a2 || v33 && !v32 )
  {
LABEL_103:
    v18 = -1073741811;
    goto LABEL_24;
  }
  v12 = 256LL;
  v14 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v14 = a4;
  v16 = v14 | 0x1000;
  if ( (v14 & 0x2000) != 0 )
    v16 = v14;
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
      return 3221225713LL;
  }
  else if ( (_DWORD)v9 != 4 )
  {
    goto LABEL_18;
  }
  if ( (v16 & 0x41) == 0 )
    return 3221225714LL;
LABEL_18:
  if ( (v16 & 0x100) != 0 )
  {
    v17 = (v16 & 0xE00) == 0;
    goto LABEL_20;
  }
  v14 = 3072LL;
  if ( (v16 & 0x200) != 0 )
  {
    v17 = (v16 & 0xC00) == 0;
LABEL_20:
    if ( v17 )
      goto LABEL_21;
LABEL_23:
    v18 = -1073741582;
LABEL_24:
    v26 = v18;
    goto LABEL_25;
  }
  if ( (v16 & 0xC00) == 0xC00 )
    goto LABEL_23;
LABEL_21:
  v31 = v16 & 0x8000;
  if ( (v16 & 0x8000) != 0 && (~(_WORD)v16 & 0x810) != 0 )
    goto LABEL_23;
  v14 = 12288LL;
  if ( (v16 & 0x3000) == 0x3000 || (v16 & 0x18) == 0x18 )
    goto LABEL_23;
  v29 = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || !v34 || !*(_QWORD *)v34 )
    {
      v18 = -1073741811;
      v26 = -1073741811;
      goto LABEL_25;
    }
    v29 = *(_QWORD *)v34;
  }
  memmove(v44, Src, 8 * v9);
  if ( (_DWORD)v9 != 3 )
  {
    if ( (unsigned int)v9 <= 3 )
      goto LABEL_34;
    v27 = 3;
  }
  if ( (unsigned __int64)SourceString < 0x10000 )
  {
    if ( !SourceString )
      goto LABEL_34;
    v14 = 1023LL;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      *(_QWORD *)&UnicodeString.Length = 0LL;
      UnicodeString.Buffer = 0LL;
      if ( (int)RtlLcidToLocaleName((unsigned int)SourceString, &UnicodeString, 2LL) >= 0 )
      {
        if ( UnicodeString.Buffer )
          RtlFreeAnsiString(&UnicodeString);
        goto LABEL_34;
      }
    }
    goto LABEL_103;
  }
  if ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !(unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v30) )
      return 3221225485LL;
  }
  else
  {
    v30 = 0;
  }
  SourceString = (PCWSTR)(unsigned __int16)v30;
LABEL_34:
  if ( (v16 & 0x300) == 0 )
  {
    if ( (v16 & 0x400) == 0 && ((v16 & 0x800) == 0 || (~v16 & 0x8000) == 0) )
      goto LABEL_37;
    if ( (v16 & 0x1400) == 0x1400 )
    {
      result = LdrpResValidateFilePath(Handle);
    }
    else
    {
      if ( (v16 & 0x1000) == 0 )
        goto LABEL_93;
      result = LdrpResValidateFileHandle(Handle);
    }
    if ( (int)result < 0 )
      return result;
LABEL_93:
    v24 = LdrpResMapFile((wchar_t *)Handle);
    v18 = v24;
    v26 = v24;
    if ( v24 >= 0 )
    {
      if ( (v16 & 0x400) != 0 )
        v25 = (HANDLE)Handle;
      else
        v25 = 0LL;
      result = LdrAddLoadAsDataTable(0LL, v25, 0LL);
      if ( (int)result < 0 )
        return result;
      goto LABEL_37;
    }
    if ( v24 == -1073741302 )
    {
LABEL_37:
      if ( v31 )
      {
        result = LdrpResValidateFileHandle(Handle);
        if ( (int)result < 0 )
          return result;
        v22 = LdrpResSearchResourceHandle((HANDLE)Handle, v35, v34, v33, v32);
      }
      else
      {
        v22 = LdrpResSearchResourceMappedFile(v28, v29, v16, (unsigned int)v44, v27, v35, v34, v33, v32);
      }
      v18 = v22;
      v26 = v22;
    }
LABEL_25:
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v12) )
    {
      v13 = (__int64)NtCurrentPeb()->SharedData + 555;
      v18 = v26;
    }
    if ( (*(_BYTE *)v13 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v19) )
      {
        v15 = (__int64)NtCurrentPeb()->SharedData + 554;
        v18 = v26;
      }
      LdrpTraceLoadMUIDll(&v40, *(unsigned __int8 *)v15);
    }
    return v18;
  }
  v28 = Handle;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_82;
  if ( (Handle & 1) == 0 )
    v28 = Handle | 1;
  if ( (v16 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(-1LL, Handle & 0xFFFFFFFFFFFFFFFCuLL, 0LL, v43, 48LL, 0LL), (int)result >= 0) )
  {
LABEL_82:
    result = LdrpResGetMappingSize(v28, &v29, v16, 0LL);
    if ( (int)result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_37;
  }
  return result;
}
