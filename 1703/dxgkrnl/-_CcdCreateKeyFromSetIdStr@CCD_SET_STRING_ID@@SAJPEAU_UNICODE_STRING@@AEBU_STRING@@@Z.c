/*
 * XREFs of ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00EE7AC
 * Callers:
 *     ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C00ADB2C (-SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00AED38 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00AF934 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00AEE9C (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z @ 0x1C00EE8D4 (-CcdCreateMd5Checksum@@YAJPEBEIPEAG@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(struct _UNICODE_STRING *a1, const struct _STRING *a2)
{
  USHORT Length; // si
  unsigned __int64 v5; // r14
  SIZE_T v6; // rax
  wchar_t *v7; // rax
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  wchar_t *Buffer; // rax
  int Md5Checksum; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  struct _STRING SourceString; // [rsp+20h] [rbp-38h] BYREF

  Length = a2->Length;
  if ( a2->Length >= 0x80u )
    Length = 128;
  v5 = (unsigned __int16)(Length + 34);
  v6 = 2 * v5;
  if ( !is_mul_ok(v5, 2uLL) )
    v6 = -1LL;
  v7 = (wchar_t *)operator new(v6, 0x63644356u, PagedPool);
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
    v14 = v9;
    if ( v9 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      v24[3] = v14;
      v24[4] = a2;
      v24[5] = a2->Length;
      v24[6] = Length;
      v24[7] = a1->MaximumLength;
      WdLogEvent5_WdAssertion(v24);
      CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
      return (unsigned int)v14;
    }
    else
    {
      Buffer = a1->Buffer;
      a1->MaximumLength = 2 * (Length + 34);
      Buffer[Length] = 94;
      Md5Checksum = CcdCreateMd5Checksum((const unsigned __int8 *)a2->Buffer, a2->Length, &a1->Buffer[Length + 1]);
      v21 = Md5Checksum;
      if ( Md5Checksum < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        v25[3] = v21;
        v25[4] = a2;
        v25[5] = a2->Buffer;
        v25[6] = a2->Length;
        WdLogEvent5_WdAssertion(v25);
        CCD_SET_STRING_ID::_CcdFreeUnicodeString(a1);
        return (unsigned int)v21;
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
    v23 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8);
    v23[3] = a2;
    v23[4] = a2->Length;
    v23[5] = v5;
    WdLogEvent5_WdLowResource(v23);
    return 3221225495LL;
  }
}
