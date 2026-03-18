/*
 * XREFs of ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00C511C
 * Callers:
 *     xxxClientExpandStringW @ 0x1C00C3C98 (xxxClientExpandStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00C3FA0 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadStringW @ 0x1C00C4758 (xxxClientLoadStringW.c)
 *     SfnOUTSTRING @ 0x1C00C4980 (SfnOUTSTRING.c)
 *     ClientGetListboxString @ 0x1C00C51DC (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C01F9C30 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01FA170 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcOutputStringSize(volatile void **a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // rbx
  SIZE_T v6; // rdx
  __int64 result; // rax
  unsigned __int64 v10; // rcx
  ULONG v11; // r8d
  ULONG BytesInMultiByteString; // [rsp+40h] [rbp+18h] BYREF

  v4 = a2;
  v6 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)v6 )
    ProbeForRead(a1[2], v6, 2 - (a4 != 0));
  else
    *W32UserProbeAddress = 0;
  if ( a3 )
  {
    if ( a4 )
    {
      result = *((unsigned int *)a1 + 2);
LABEL_6:
      if ( (unsigned int)v4 < (unsigned int)result )
        return (unsigned int)v4;
      return result;
    }
    v10 = *((unsigned int *)a1 + 2);
    if ( 2 * v4 < v10 )
      LODWORD(v10) = 2 * v4;
    RtlUnicodeToMultiByteSize(&BytesInMultiByteString, (PCWCH)a1[2], v10);
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
    if ( (unsigned int)v4 < v11 )
      v11 = v4;
    RtlMultiByteToUnicodeSize(&BytesInMultiByteString, (const CHAR *)a1[2], v11);
    return BytesInMultiByteString >> 1;
  }
}
