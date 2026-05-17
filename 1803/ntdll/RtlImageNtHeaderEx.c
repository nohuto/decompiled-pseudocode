/*
 * XREFs of RtlImageNtHeaderEx @ 0x180010300
 * Callers:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_18000FA60 @ 0x18000FA60 (sub_18000FA60.c)
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_1800107D4 @ 0x1800107D4 (sub_1800107D4.c)
 *     sub_180010BE4 @ 0x180010BE4 (sub_180010BE4.c)
 *     sub_180010CB4 @ 0x180010CB4 (sub_180010CB4.c)
 *     sub_18002AFBC @ 0x18002AFBC (sub_18002AFBC.c)
 *     sub_18002B1A4 @ 0x18002B1A4 (sub_18002B1A4.c)
 *     sub_18002B318 @ 0x18002B318 (sub_18002B318.c)
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002B540 @ 0x18002B540 (sub_18002B540.c)
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_18002C388 @ 0x18002C388 (sub_18002C388.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     LdrGetDllHandleByMapping @ 0x18002E040 (LdrGetDllHandleByMapping.c)
 *     sub_18004773C @ 0x18004773C (sub_18004773C.c)
 *     sub_1800477EC @ 0x1800477EC (sub_1800477EC.c)
 *     sub_18004F9F4 @ 0x18004F9F4 (sub_18004F9F4.c)
 *     sub_18004FEB8 @ 0x18004FEB8 (sub_18004FEB8.c)
 *     LdrpResGetResourceDirectory @ 0x180051CC0 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x180053280 (LdrpResGetMappingSize.c)
 *     CsrClientConnectToServer @ 0x1800597A0 (CsrClientConnectToServer.c)
 *     sub_180075C44 @ 0x180075C44 (sub_180075C44.c)
 *     sub_18007AFDC @ 0x18007AFDC (sub_18007AFDC.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 *     sub_180082648 @ 0x180082648 (sub_180082648.c)
 *     sub_1800829B4 @ 0x1800829B4 (sub_1800829B4.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089CD0 (LdrVerifyImageMatchesChecksumEx.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D0CF4 @ 0x1800D0CF4 (sub_1800D0CF4.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 *     sub_1800EE06C @ 0x1800EE06C (sub_1800EE06C.c)
 * Callees:
 *     sub_1800F4468 @ 0x1800F4468 (sub_1800F4468.c)
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v6; // r10
  unsigned __int64 v7; // r8

  result = 0LL;
  v6 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225485LL;
  if ( (a1 & 1) == 0 && a3 < 0x40 )
    return 3221225595LL;
  if ( *(_WORD *)a2 != 23117 )
  {
LABEL_15:
    result = 3221225595LL;
    goto LABEL_17;
  }
  v7 = *(unsigned int *)(a2 + 60);
  if ( (a1 & 1) == 0 && (v7 >= a3 || (unsigned int)v7 >= 0xFFFFFFE7 || v7 + 24 >= a3) )
  {
    result = 3221225595LL;
    v6 = 0LL;
    goto LABEL_17;
  }
  if ( (unsigned int)v7 < 0x10000000 )
  {
    v6 = (_DWORD *)(a2 + v7);
    if ( a2 + v7 >= a2 && *v6 == 17744 )
      goto LABEL_17;
    goto LABEL_15;
  }
  result = 3221225595LL;
  v6 = 0LL;
LABEL_17:
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
