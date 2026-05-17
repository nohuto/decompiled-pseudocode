/*
 * XREFs of sub_1800F56C8 @ 0x1800F56C8
 * Callers:
 *     sub_1800F5104 @ 0x1800F5104 (sub_1800F5104.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     sub_1800EC108 @ 0x1800EC108 (sub_1800EC108.c)
 *     sub_1800F5294 @ 0x1800F5294 (sub_1800F5294.c)
 */

__int64 __fastcall sub_1800F56C8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // r8
  WCHAR *v6; // rdx
  int v7; // r9d
  WCHAR v8; // ax
  __int64 v9; // rax
  WCHAR *v10; // rcx
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r9d
  WCHAR *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  char *v17; // rcx
  WCHAR v18; // r8
  int Section; // ebx
  __int64 v21; // [rsp+50h] [rbp-B0h]
  _QWORD v22[3]; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+98h] [rbp-68h]
  __int128 v28; // [rsp+A0h] [rbp-60h]
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = 256LL;
  v6 = SourceString;
  v7 = 0;
  while ( v5 != -2147483390 )
  {
    v8 = *(WCHAR *)((char *)v6 + (char *)L"\\SystemRoot\\Globalization\\" - (char *)SourceString);
    if ( !v8 )
      break;
    *v6++ = v8;
    if ( !--v5 )
    {
      --v6;
      v7 = -2147483643;
      break;
    }
  }
  *v6 = 0;
  if ( v7 < 0 || (int)sub_1800EC108(SourceString, 256LL, a1) < 0 )
    return 3221225473LL;
  v9 = 256LL;
  v10 = SourceString;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  v11 = -1073741811;
  if ( v9 )
  {
    v11 = 0;
    v12 = 256 - v9;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v11 < 0 )
    return 3221225473LL;
  v13 = 0;
  v14 = &SourceString[v12];
  v15 = 256 - v12;
  if ( 256 == v12 )
    goto LABEL_22;
  v16 = 2147483646LL;
  v17 = (char *)((char *)L".nlp" - (char *)v14);
  while ( v16 )
  {
    v18 = *(WCHAR *)((char *)v14 + (_QWORD)v17);
    if ( !v18 )
      break;
    *v14 = v18;
    --v16;
    ++v14;
    if ( !--v15 )
      goto LABEL_22;
  }
  if ( !v15 )
  {
LABEL_22:
    --v14;
    v13 = -2147483643;
  }
  *v14 = 0;
  if ( v13 < 0 )
    return 3221225473LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  p_DestinationString = &DestinationString;
  v24 = 48;
  v25 = 0LL;
  v27 = 64;
  v28 = 0LL;
  Section = ZwOpenFile();
  if ( Section >= 0 )
  {
    if ( (int)sub_1800F5294(v21, v22) < 0 || HIDWORD(v22[0]) )
    {
      Section = -1073741823;
    }
    else
    {
      *a3 = LODWORD(v22[0]);
      Section = ZwCreateSection();
      if ( Section >= 0 )
      {
        *a2 = 0LL;
        v22[2] = 0LL;
        Section = ZwMapViewOfSection();
        ZwClose();
      }
    }
    ZwClose();
  }
  return (unsigned int)Section;
}
