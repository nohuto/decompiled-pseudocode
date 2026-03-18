/*
 * XREFs of ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00B0054
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C009D70C (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C009DAA8 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00AFBEC (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C009DF84 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C00B0180 (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(struct _UNICODE_STRING *a1, const struct _STRING *a2)
{
  USHORT Length; // si
  unsigned __int64 v5; // r14
  SIZE_T v6; // rax
  wchar_t *v7; // rax
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r14
  wchar_t *Buffer; // rax
  int Md5Checksum; // eax
  __int64 v14; // rcx
  __int64 v15; // rsi
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _STRING SourceString; // [rsp+20h] [rbp-38h] BYREF

  Length = a2->Length;
  if ( a2->Length >= 0x80u )
    Length = 128;
  v5 = (unsigned __int16)(Length + 34);
  v6 = 2 * v5;
  if ( !is_mul_ok(v5, 2uLL) )
    v6 = -1LL;
  v7 = (wchar_t *)operator new[](v6, 0x63644356u, PagedPool);
  a1->Buffer = v7;
  if ( v7 )
  {
    memset(v7, 0, 2 * v5);
    a1->Length = 0;
    SourceString.Length = Length;
    a1->MaximumLength = 2 * (Length + 1);
    SourceString.Buffer = a2->Buffer;
    SourceString.MaximumLength = Length;
    v9 = RtlAnsiStringToUnicodeString(a1, &SourceString, 0);
    v11 = v9;
    if ( v9 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10);
      v18[3] = v11;
      v18[4] = a2;
      v18[5] = a2->Length;
      v18[6] = Length;
      v18[7] = a1->MaximumLength;
      WdLogEvent5_WdAssertion(v18);
      CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
      return (unsigned int)v11;
    }
    else
    {
      Buffer = a1->Buffer;
      a1->MaximumLength = 2 * (Length + 34);
      Buffer[Length] = 94;
      Md5Checksum = CcdCreateMd5Checksum((const unsigned __int8 *)a2->Buffer, a2->Length, &a1->Buffer[Length + 1]);
      v15 = Md5Checksum;
      if ( Md5Checksum < 0 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14);
        v19[3] = v15;
        v19[4] = a2;
        v19[5] = a2->Buffer;
        v19[6] = a2->Length;
        WdLogEvent5_WdAssertion(v19);
        CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
        return (unsigned int)v15;
      }
      else
      {
        a1->Length = a1->MaximumLength - 2;
        return 0LL;
      }
    }
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8);
    v17[3] = a2;
    v17[4] = a2->Length;
    v17[5] = v5;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
}
