/*
 * XREFs of sub_1800E2994 @ 0x1800E2994
 * Callers:
 *     LdrResSearchResource @ 0x180059D70 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003BA40 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlReleaseRelativeName @ 0x180055120 (RtlReleaseRelativeName.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800791B0 (LdrRemoveLoadAsDataTable.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x1800A5DA0 (ZwCreateFile.c)
 *     sub_1800E2008 @ 0x1800E2008 (sub_1800E2008.c)
 *     sub_1800E2828 @ 0x1800E2828 (sub_1800E2828.c)
 */

__int64 __fastcall sub_1800E2994(wchar_t *String2, wchar_t **a2, _QWORD *a3, unsigned int a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r9
  int File; // ebx
  unsigned __int64 v12; // r15
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // [rsp+88h] [rbp-80h] BYREF
  int v16; // [rsp+90h] [rbp-78h] BYREF
  const wchar_t *v17; // [rsp+98h] [rbp-70h]
  __int128 v18; // [rsp+A0h] [rbp-68h] BYREF
  int v19; // [rsp+B0h] [rbp-58h] BYREF
  const wchar_t *v20; // [rsp+B8h] [rbp-50h]
  __int128 v21; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-38h]
  int v23; // [rsp+E0h] [rbp-28h]
  __int64 v24; // [rsp+E8h] [rbp-20h]
  __int128 *v25; // [rsp+F0h] [rbp-18h]
  int v26; // [rsp+F8h] [rbp-10h]
  __int128 v27; // [rsp+100h] [rbp-8h]
  wchar_t *v28; // [rsp+158h] [rbp+50h]

  v16 = 2752552;
  v17 = L"LdrpResMapFile Enter";
  v19 = 2621478;
  v20 = L"LdrpResMapFile Exit";
  v8 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v9 = 2147353477LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    sub_1800E2008((unsigned __int16 *)&v16);
  }
  if ( !String2 || !a2 || !a3 )
    goto LABEL_31;
  v10 = a4;
  *a2 = 0LL;
  LODWORD(v10) = a4 | 0x200000;
  if ( (int)LdrRemoveLoadAsDataTable(String2, a2, a3, v10) >= 0 )
  {
    File = -1073741302;
    goto LABEL_32;
  }
  if ( (a4 & 0x400) != 0 )
  {
    if ( !RtlDosPathNameToRelativeNtPathName_U((int)String2, (int)&v18, 0LL, (__int64)&v21) )
    {
      File = -1073020927;
      goto LABEL_32;
    }
    v12 = *((_QWORD *)&v18 + 1);
    if ( (_WORD)v21 )
    {
      v13 = v22;
      v18 = v21;
    }
    else
    {
      v13 = 0LL;
      v22 = 0LL;
    }
    v24 = v13 & -(__int64)(v12 != 0);
    v23 = 48;
    v26 = 64;
    v25 = &v18;
    v27 = 0LL;
    File = ZwCreateFile();
    if ( v12 )
    {
      RtlReleaseRelativeName((__int64)&v21);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
    }
    if ( File < 0 )
      goto LABEL_32;
    String2 = v28;
    goto LABEL_22;
  }
  if ( (a4 & 0x800) == 0 )
  {
LABEL_31:
    File = -1073741811;
    goto LABEL_32;
  }
LABEL_22:
  if ( (a4 & 0x20000) == 0 )
    goto LABEL_26;
  result = sub_1800E2828((__int64)String2, &v15);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int64)(unsigned int)v15 > *a3 )
  {
    File = -1073741793;
  }
  else
  {
LABEL_26:
    File = ZwCreateSection();
    if ( (~(_WORD)a4 & 0x800) != 0 )
      ZwClose();
    if ( File >= 0 )
    {
      File = ZwMapViewOfSection();
      ZwClose();
      if ( File >= 0 )
      {
        *a2 = (wchar_t *)1;
        *a3 = 0LL;
      }
    }
  }
LABEL_32:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    sub_1800E2008((unsigned __int16 *)&v19);
  }
  return (unsigned int)File;
}
