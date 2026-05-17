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

__int64 __fastcall LdrResSearchResource(
        wchar_t *String2,
        void *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 *a6,
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
  unsigned int v18; // ebx
  __int64 result; // rax
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  wchar_t *v23; // rdx
  int v24; // [rsp+50h] [rbp-118h]
  int v25; // [rsp+54h] [rbp-114h]
  wchar_t *v26; // [rsp+58h] [rbp-110h]
  __int64 v27; // [rsp+60h] [rbp-108h] BYREF
  int v28; // [rsp+68h] [rbp-100h] BYREF
  int v29; // [rsp+6Ch] [rbp-FCh]
  __int64 v30; // [rsp+70h] [rbp-F8h]
  __int64 v31; // [rsp+78h] [rbp-F0h]
  __int64 *v32; // [rsp+80h] [rbp-E8h]
  __int64 v33; // [rsp+88h] [rbp-E0h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-D8h] BYREF
  void *Src; // [rsp+A0h] [rbp-C8h]
  int v36; // [rsp+A8h] [rbp-C0h] BYREF
  const wchar_t *v37; // [rsp+B0h] [rbp-B8h]
  int v38; // [rsp+B8h] [rbp-B0h] BYREF
  const wchar_t *v39; // [rsp+C0h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-A0h] BYREF
  _BYTE v41[48]; // [rsp+D8h] [rbp-90h] BYREF
  _BYTE v42[16]; // [rsp+108h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+118h] [rbp-50h]

  v9 = a3;
  v25 = a3;
  Src = a2;
  v33 = a5;
  v32 = a6;
  v31 = a7;
  v30 = a8;
  LODWORD(v26) = 0;
  v36 = 3538996;
  v37 = L"LdrResSearchResource Enter";
  v38 = 3407922;
  v39 = L"LdrResSearchResource Exit";
  v12 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v21 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v21 = 2147353476LL;
    sub_1800E2008(&v36, *(unsigned __int8 *)v21);
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( !String2 || !a2 || v31 && !v30 )
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
      v24 = v18;
      goto LABEL_25;
    }
    v17 = (v16 & 0xC00) == 0;
  }
  if ( !v17 )
    goto LABEL_23;
LABEL_21:
  v29 = ~v16;
  if ( (~v16 & 0x810) != 0 && (v16 & 0x8000) != 0 || (v16 & 0x3000) == 0x3000 || (v16 & 0x18) == 0x18 )
    goto LABEL_23;
  v27 = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || !v32 || !*v32 )
    {
      v18 = -1073741811;
      v24 = -1073741811;
      goto LABEL_25;
    }
    v27 = *v32;
  }
  memmove(v42, Src, 8 * v9);
  if ( (_DWORD)v9 != 3 )
  {
    if ( (unsigned int)v9 <= 3 )
      goto LABEL_34;
    v25 = 3;
  }
  if ( (unsigned __int64)SourceString < 0x10000 )
  {
    if ( !SourceString )
      goto LABEL_34;
    if ( ((unsigned __int16)SourceString & 0x3FF) != 0 && SourceString != (PCWSTR)127 )
    {
      *(_QWORD *)&UnicodeString.Length = 0LL;
      UnicodeString.Buffer = 0LL;
      if ( (int)RtlLcidToLocaleName((unsigned int)SourceString, (__int64)&UnicodeString, 2, 1) >= 0 )
      {
        if ( UnicodeString.Buffer )
          RtlFreeUnicodeString(&UnicodeString);
        goto LABEL_34;
      }
    }
    goto LABEL_101;
  }
  if ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( !RtlCultureNameToLCID(&DestinationString.Length, &v28) )
      return 3221225485LL;
  }
  else
  {
    v28 = 0;
  }
  SourceString = (PCWSTR)(unsigned __int16)v28;
LABEL_34:
  if ( (v16 & 0x300) == 0 )
  {
    if ( (v16 & 0x400) == 0 && ((v16 & 0x800) == 0 || (v29 & 0x8000) == 0) )
      goto LABEL_37;
    if ( (v16 & 0x1400) == 0x1400 )
    {
      result = sub_1800E3538(String2);
    }
    else
    {
      if ( (v16 & 0x1000) == 0 )
        goto LABEL_91;
      result = sub_1800E34E4(String2);
    }
    if ( (int)result < 0 )
      return result;
LABEL_91:
    v22 = sub_1800E2994(String2);
    v18 = v22;
    v24 = v22;
    if ( v22 >= 0 )
    {
      if ( (v16 & 0x400) != 0 )
        v23 = String2;
      else
        v23 = 0LL;
      result = LdrAddLoadAsDataTable(0LL, v23, 0LL);
      if ( (int)result < 0 )
        return result;
      goto LABEL_37;
    }
    if ( v22 == -1073741302 )
    {
LABEL_37:
      if ( (v16 & 0x8000) != 0 )
      {
        result = sub_1800E34E4(String2);
        if ( (int)result < 0 )
          return result;
        v20 = sub_1800E2DB0((_DWORD)String2, v16, (unsigned int)v42, v25, v33, (__int64)v32, v31, v30);
      }
      else
      {
        v20 = sub_18005A0E4((_DWORD)v26, v27, v16, (unsigned int)v42, v25, v33, (__int64)v32, v31, v30);
      }
      v18 = v20;
      v24 = v20;
    }
LABEL_25:
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
      v18 = v24;
    }
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
        v18 = v24;
      }
      sub_1800E2008(&v38, *(unsigned __int8 *)v14);
    }
    return v18;
  }
  v26 = String2;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_80;
  if ( ((unsigned __int8)String2 & 1) == 0 )
    v26 = (wchar_t *)((unsigned __int64)String2 | 1);
  if ( (v16 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(-1LL, (unsigned __int64)String2 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, v41, 48LL, 0LL),
        (int)result >= 0) )
  {
LABEL_80:
    result = LdrpResGetMappingSize(v26, &v27, v16, 0LL);
    if ( (int)result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_37;
  }
  return result;
}
