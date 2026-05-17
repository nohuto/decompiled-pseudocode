/*
 * XREFs of sub_18000AF44 @ 0x18000AF44
 * Callers:
 *     sub_180009E4C @ 0x180009E4C (sub_180009E4C.c)
 *     RtlCheckRegistryKey @ 0x18000A060 (RtlCheckRegistryKey.c)
 *     sub_18000A310 @ 0x18000A310 (sub_18000A310.c)
 *     sub_18000A6BC @ 0x18000A6BC (sub_18000A6BC.c)
 *     RtlWriteRegistryValue @ 0x180089A30 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x18008ABF0 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1800E72B0 (RtlCreateRegistryKey.c)
 *     sub_1800E7530 @ 0x1800E7530 (sub_1800E7530.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180037F50 (RtlFormatCurrentUserKeyPath.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x18009AE60 (ZwCreateKey.c)
 */

__int64 __fastcall sub_18000AF44(int a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v7; // rbx
  int appended; // ebx
  int v9; // eax
  int v11; // [rsp+48h] [rbp-9h] BYREF
  __int64 v12; // [rsp+50h] [rbp-1h]
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
    else
    {
      v12 = sub_18003B5E0(524LL);
      if ( v12 )
      {
        v11 = 34340864;
        if ( !(_DWORD)v7 )
          goto LABEL_11;
        if ( (_DWORD)v7 == 5 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&v11, &UnicodeString);
          RtlFreeUnicodeString(&UnicodeString);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&v11, qword_180110C70[v7]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&v11, "\\");
          if ( appended >= 0 )
          {
LABEL_11:
            appended = RtlAppendUnicodeToString(&v11, a2);
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
        RtlDeleteBoundaryDescriptor(v12);
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}
