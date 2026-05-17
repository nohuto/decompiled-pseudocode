/*
 * XREFs of LdrResSearchResource @ 0x180051250
 * Callers:
 *     RtlLoadString @ 0x180031360 (RtlLoadString.c)
 *     LdrResFindResourceDirectory @ 0x1800511C0 (LdrResFindResourceDirectory.c)
 *     LdrResFindResource @ 0x1800DDC00 (LdrResFindResource.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlLcidToLocaleName @ 0x180036A00 (RtlLcidToLocaleName.c)
 *     sub_1800515C0 @ 0x1800515C0 (sub_1800515C0.c)
 *     LdrpResGetMappingSize @ 0x180053280 (LdrpResGetMappingSize.c)
 *     LdrAddLoadAsDataTable @ 0x180072E40 (LdrAddLoadAsDataTable.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 *     sub_1800DDDE4 @ 0x1800DDDE4 (sub_1800DDDE4.c)
 *     sub_1800DE200 @ 0x1800DE200 (sub_1800DE200.c)
 *     sub_1800DE93C @ 0x1800DE93C (sub_1800DE93C.c)
 *     sub_1800DE990 @ 0x1800DE990 (sub_1800DE990.c)
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
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  wchar_t *v24; // rdx
  int v25; // [rsp+50h] [rbp-118h]
  int v26; // [rsp+54h] [rbp-114h]
  wchar_t *v27; // [rsp+58h] [rbp-110h]
  __int64 v28; // [rsp+60h] [rbp-108h] BYREF
  int v29; // [rsp+68h] [rbp-100h] BYREF
  int v30; // [rsp+6Ch] [rbp-FCh]
  __int64 v31; // [rsp+70h] [rbp-F8h]
  __int64 v32; // [rsp+78h] [rbp-F0h]
  __int64 *v33; // [rsp+80h] [rbp-E8h]
  __int64 v34; // [rsp+88h] [rbp-E0h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-D8h] BYREF
  void *Src; // [rsp+A0h] [rbp-C8h]
  int v37; // [rsp+A8h] [rbp-C0h] BYREF
  const wchar_t *v38; // [rsp+B0h] [rbp-B8h]
  int v39; // [rsp+B8h] [rbp-B0h] BYREF
  const wchar_t *v40; // [rsp+C0h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-A0h] BYREF
  _BYTE v42[48]; // [rsp+D8h] [rbp-90h] BYREF
  _BYTE v43[16]; // [rsp+108h] [rbp-60h] BYREF
  PCWSTR SourceString; // [rsp+118h] [rbp-50h]

  v9 = a3;
  v26 = a3;
  Src = a2;
  v34 = a5;
  v33 = a6;
  v32 = a7;
  v31 = a8;
  LODWORD(v27) = 0;
  v37 = 3538996;
  v38 = L"LdrResSearchResource Enter";
  v39 = 3407922;
  v40 = L"LdrResSearchResource Exit";
  v12 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v13 = 2147353477LL;
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    v14 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v22 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v22 = 2147353476LL;
    sub_1800DBCC0(&v37, *(unsigned __int8 *)v22);
  }
  else
  {
    v14 = 2147353476LL;
  }
  if ( !String2 || !a2 || v32 && !v31 )
    goto LABEL_60;
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
    goto LABEL_20;
  }
  v21 = v16 & 0xC00;
  if ( (v16 & 0x200) != 0 )
  {
    v17 = v21 == 0;
LABEL_20:
    if ( v17 )
      goto LABEL_21;
LABEL_23:
    v18 = -1073741582;
LABEL_24:
    v25 = v18;
LABEL_25:
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
      v18 = v25;
    }
    if ( (*(_BYTE *)v12 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
        v18 = v25;
      }
      sub_1800DBCC0(&v39, *(unsigned __int8 *)v14);
    }
    return v18;
  }
  if ( v21 == 3072 )
    goto LABEL_23;
LABEL_21:
  v30 = v16 & 0x8000;
  if ( (v16 & 0x8000) != 0 && (~(_WORD)v16 & 0x810) != 0 || (v16 & 0x3000) == 0x3000 || (v16 & 0x18) == 0x18 )
    goto LABEL_23;
  v28 = 0LL;
  if ( (v16 & 0x20000) != 0 )
  {
    if ( (v16 & 0x400) == 0 || !v33 || !*v33 )
    {
      v18 = -1073741811;
      v25 = -1073741811;
      goto LABEL_25;
    }
    v28 = *v33;
  }
  memmove(v43, Src, 8 * v9);
  if ( (_DWORD)v9 != 3 )
  {
    if ( (unsigned int)v9 <= 3 )
      goto LABEL_34;
    v26 = 3;
  }
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v29) )
        return 3221225485LL;
    }
    else
    {
      v29 = 0;
    }
    SourceString = (PCWSTR)(unsigned __int16)v29;
  }
  else if ( SourceString )
  {
    if ( ((unsigned __int16)SourceString & 0x3FF) == 0
      || SourceString == (PCWSTR)127
      || (*(_QWORD *)&UnicodeString.Length = 0LL,
          UnicodeString.Buffer = 0LL,
          (int)RtlLcidToLocaleName((unsigned int)SourceString, (__int64)&UnicodeString, 2, 1) < 0) )
    {
LABEL_60:
      v18 = -1073741811;
      goto LABEL_24;
    }
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
  }
LABEL_34:
  if ( (v16 & 0x300) == 0 )
  {
    if ( (v16 & 0x400) == 0 && ((v16 & 0x800) == 0 || (~v16 & 0x8000) == 0) )
      goto LABEL_37;
    if ( (v16 & 0x1400) == 0x1400 )
    {
      result = sub_1800DE990(String2);
    }
    else
    {
      if ( (v16 & 0x1000) == 0 )
        goto LABEL_93;
      result = sub_1800DE93C(String2);
    }
    if ( (int)result < 0 )
      return result;
LABEL_93:
    v23 = sub_1800DDDE4(String2);
    v18 = v23;
    v25 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -1073741302 )
        goto LABEL_25;
    }
    else
    {
      if ( (v16 & 0x400) != 0 )
        v24 = String2;
      else
        v24 = 0LL;
      result = LdrAddLoadAsDataTable(0LL, v24, 0LL);
      if ( (int)result < 0 )
        return result;
    }
LABEL_37:
    if ( v30 )
    {
      result = sub_1800DE93C(String2);
      if ( (int)result < 0 )
        return result;
      v20 = sub_1800DE200((_DWORD)String2, v16, (unsigned int)v43, v26, v34, (__int64)v33, v32, v31);
    }
    else
    {
      v20 = sub_1800515C0((_DWORD)v27, v28, v16, (unsigned int)v43, v26, v34, (__int64)v33, v32, v31);
    }
    v18 = v20;
    v25 = v20;
    goto LABEL_25;
  }
  v27 = String2;
  if ( (v16 & 0x200) == 0 )
    goto LABEL_82;
  if ( ((unsigned __int8)String2 & 1) == 0 )
    v27 = (wchar_t *)((unsigned __int64)String2 | 1);
  if ( (v16 & 0x1000) == 0
    || (result = ZwQueryVirtualMemory(-1LL, (unsigned __int64)String2 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, v42, 48LL, 0LL),
        (int)result >= 0) )
  {
LABEL_82:
    result = LdrpResGetMappingSize(v27, &v28, v16, 0LL);
    if ( (int)result >= 0 || (v16 & 0x1000) == 0 )
      goto LABEL_37;
  }
  return result;
}
