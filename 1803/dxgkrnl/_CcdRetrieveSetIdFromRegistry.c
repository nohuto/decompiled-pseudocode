/*
 * XREFs of _CcdRetrieveSetIdFromRegistry @ 0x1C00AFE04
 * Callers:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00B0030 (_CcdLazyRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     _CcdRetrieveValueFromRegistry @ 0x1C00AFD50 (_CcdRetrieveValueFromRegistry.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00B23F8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B2714 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B2A84 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CcdRetrieveSetIdFromRegistry(HANDLE KeyHandle, const WCHAR *a2, CCD_SET_STRING_ID *a3)
{
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  unsigned int *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v16[64]; // [rsp+30h] [rbp-40h] BYREF
  void *v17; // [rsp+B8h] [rbp+48h] BYREF

  v17 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v7 = CcdRetrieveValueFromRegistry(KeyHandle, &DestinationString, &v17, v6);
  v9 = (unsigned int *)v17;
  v10 = v7;
  if ( v7 < 0 )
    goto LABEL_9;
  if ( !v17 || *((_DWORD *)v17 + 1) != 1 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v14[3] = v9[1];
    v14[4] = KeyHandle;
    v14[5] = a2;
    v14[6] = a3;
    WdLogEvent5_WdError(v14);
    LODWORD(v10) = -1073741788;
    goto LABEL_8;
  }
  v11 = *((_DWORD *)v17 + 2) & 0xFFFFFFFE;
  if ( (*((_DWORD *)v17 + 2) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      if ( *(_WORD *)((char *)v17 + v11 + 10) )
        break;
      v11 = (unsigned int)(v11 - 2);
    }
    while ( (_DWORD)v11 );
  }
  DestinationString.Length = v11;
  DestinationString.MaximumLength = v11;
  DestinationString.Buffer = (wchar_t *)((char *)v17 + 12);
  CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v16, &DestinationString);
  v10 = *(int *)CCD_SET_STRING_ID::operator=(a3);
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v16);
  if ( (int)v10 < 0 )
  {
LABEL_9:
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v13[3] = v10;
    v13[4] = KeyHandle;
    v13[5] = a2;
    v13[6] = a3;
    WdLogEvent5_WdError(v13);
  }
LABEL_8:
  operator delete[](v9);
  return (unsigned int)v10;
}
