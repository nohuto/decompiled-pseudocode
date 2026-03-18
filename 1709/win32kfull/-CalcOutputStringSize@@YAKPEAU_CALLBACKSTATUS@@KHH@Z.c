/*
 * XREFs of ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00DDBC8
 * Callers:
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C005B580 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientExpandStringW @ 0x1C00DCBFC (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C00DD054 (xxxClientLoadStringW.c)
 *     SfnOUTSTRING @ 0x1C00DD2A0 (SfnOUTSTRING.c)
 *     ClientGetListboxString @ 0x1C00DDC8C (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C01FB680 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01FBBD0 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcOutputStringSize(struct _CALLBACKSTATUS *a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rbx
  unsigned int v6; // ecx
  __int64 result; // rax
  ULONG v10; // ecx
  ULONG v11; // r8d
  ULONG BytesInMultiByteString; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  v6 = *((_DWORD *)a1 + 2);
  if ( v6 )
    ProbeForRead(*((volatile void **)a1 + 2), v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( a3 )
  {
    if ( a4 )
    {
      result = *((unsigned int *)a1 + 2);
LABEL_6:
      if ( (unsigned int)v5 < (unsigned int)result )
        return (unsigned int)v5;
      return result;
    }
    v10 = 2 * v5;
    if ( 2 * v5 >= (unsigned __int64)*((unsigned int *)a1 + 2) )
      v10 = *((_DWORD *)a1 + 2);
    RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 2), v10);
    return BytesInMultiByteString;
  }
  else
  {
    if ( !a4 )
    {
      result = *((_DWORD *)a1 + 2) >> 1;
      goto LABEL_6;
    }
    v11 = *((_DWORD *)a1 + 2);
    if ( (unsigned int)v5 < v11 )
      v11 = v5;
    RtlMultiByteToUnicodeSize(&BytesInMultiByteString, *((const CHAR **)a1 + 2), v11);
    return BytesInMultiByteString >> 1;
  }
}
