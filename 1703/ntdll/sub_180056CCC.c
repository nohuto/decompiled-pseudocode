/*
 * XREFs of sub_180056CCC @ 0x180056CCC
 * Callers:
 *     sub_18005421C @ 0x18005421C (sub_18005421C.c)
 *     sub_180054BB0 @ 0x180054BB0 (sub_180054BB0.c)
 *     RtlCheckRegistryKey @ 0x180056420 (RtlCheckRegistryKey.c)
 *     sub_180056454 @ 0x180056454 (sub_180056454.c)
 *     RtlDeleteRegistryValue @ 0x18008F5B0 (RtlDeleteRegistryValue.c)
 *     RtlWriteRegistryValue @ 0x18008F620 (RtlWriteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1800EB580 (RtlCreateRegistryKey.c)
 *     sub_1800EB6C0 @ 0x1800EB6C0 (sub_1800EB6C0.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800410E0 (RtlFormatCurrentUserKeyPath.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1800A56A0 (ZwCreateKey.c)
 */

__int64 __fastcall sub_180056CCC(int a1, _WORD *a2, char a3, _QWORD *a4)
{
  __int64 v7; // rbx
  int appended; // ebx
  int v9; // eax
  int v11; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp+7h] BYREF
  int v14; // [rsp+68h] [rbp+17h] BYREF
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  __int128 v18; // [rsp+88h] [rbp+37h]

  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = a2;
    return 0LL;
  }
  else
  {
    v7 = (unsigned int)a1;
    LODWORD(v7) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v7 = (unsigned int)a1;
    if ( (unsigned int)v7 >= 6 )
    {
      return 3221225485LL;
    }
    else if ( sub_180043FE0(524LL) )
    {
      v11 = 34340864;
      if ( !(_DWORD)v7 )
        goto LABEL_11;
      if ( (_DWORD)v7 == 5 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
      {
        appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v11, (__int16 *)&UnicodeString);
        RtlFreeUnicodeString(&UnicodeString);
      }
      else
      {
        appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, *((_WORD **)&unk_180110C20 + v7));
      }
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, L"\\");
        if ( appended >= 0 )
        {
LABEL_11:
          appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, a2);
          if ( appended >= 0 )
          {
            v14 = 48;
            v16 = &v11;
            v15 = 0LL;
            v17 = 576;
            v18 = 0LL;
            if ( a3 )
              v9 = ZwCreateKey(a4, 0x40000000LL, &v14, 0LL, 0LL, 0, 0LL);
            else
              v9 = ZwOpenKey(a4, 2181038080LL, &v14);
            appended = v9;
          }
        }
      }
      RtlDeleteBoundaryDescriptor();
      return (unsigned int)appended;
    }
    else
    {
      return 3221225495LL;
    }
  }
}
