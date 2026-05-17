/*
 * XREFs of sub_1800DDDE4 @ 0x1800DDDE4
 * Callers:
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseRelativeName @ 0x18002E200 (RtlReleaseRelativeName.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18003FAA0 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     LdrRemoveLoadAsDataTable @ 0x180073DE0 (LdrRemoveLoadAsDataTable.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009AFC0 (ZwMapViewOfSection.c)
 *     ZwCreateSection @ 0x18009B400 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x18009B560 (ZwCreateFile.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 *     sub_1800DDC78 @ 0x1800DDC78 (sub_1800DDC78.c)
 */

__int64 __fastcall sub_1800DDDE4(wchar_t *String2, wchar_t **a2, _QWORD *a3, int a4)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  int File; // ebx
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // [rsp+88h] [rbp-80h] BYREF
  int v15; // [rsp+90h] [rbp-78h] BYREF
  const wchar_t *v16; // [rsp+98h] [rbp-70h]
  __int128 v17; // [rsp+A0h] [rbp-68h] BYREF
  int v18; // [rsp+B0h] [rbp-58h] BYREF
  const wchar_t *v19; // [rsp+B8h] [rbp-50h]
  __int128 v20; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-38h]
  int v22; // [rsp+E0h] [rbp-28h]
  __int64 v23; // [rsp+E8h] [rbp-20h]
  __int128 *v24; // [rsp+F0h] [rbp-18h]
  int v25; // [rsp+F8h] [rbp-10h]
  __int128 v26; // [rsp+100h] [rbp-8h]
  wchar_t *v27; // [rsp+158h] [rbp+50h]

  v15 = 2752552;
  v16 = L"LdrpResMapFile Enter";
  v18 = 2621478;
  v19 = L"LdrpResMapFile Exit";
  v8 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v9 = 2147353477LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    sub_1800DBCC0((unsigned __int16 *)&v15);
  }
  if ( !String2 || !a2 || !a3 )
    goto LABEL_31;
  *a2 = 0LL;
  if ( (int)LdrRemoveLoadAsDataTable(String2, a2, a3, a4 | 0x200000u) >= 0 )
  {
    File = -1073741302;
    goto LABEL_32;
  }
  if ( (a4 & 0x400) != 0 )
  {
    if ( !RtlDosPathNameToRelativeNtPathName_U((__int64)String2, (int)&v17, 0LL, (__int64)&v20) )
    {
      File = -1073020927;
      goto LABEL_32;
    }
    v11 = *((_QWORD *)&v17 + 1);
    if ( (_WORD)v20 )
    {
      v12 = v21;
      v17 = v20;
    }
    else
    {
      v12 = 0LL;
      v21 = 0LL;
    }
    v23 = v12 & -(__int64)(v11 != 0);
    v22 = 48;
    v25 = 64;
    v24 = &v17;
    v26 = 0LL;
    File = ZwCreateFile();
    if ( v11 )
    {
      RtlReleaseRelativeName((__int64)&v20);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
    }
    if ( File < 0 )
      goto LABEL_32;
    String2 = v27;
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
  result = sub_1800DDC78((__int64)String2, &v14);
  if ( (int)result < 0 )
    return result;
  if ( (unsigned __int64)(unsigned int)v14 > *a3 )
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
    sub_1800DBCC0((unsigned __int16 *)&v18);
  }
  return (unsigned int)File;
}
