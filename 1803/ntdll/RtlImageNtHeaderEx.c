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

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  NTSTATUS result; // eax
  _IMAGE_NT_HEADERS64 *v6; // r10
  ULONG64 v7; // r8

  result = 0;
  v6 = 0LL;
  if ( !OutHeaders )
    return -1073741811;
  *OutHeaders = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || (char *)BaseOfImage - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  if ( (Flags & 1) == 0 && Size < 0x40 )
    return -1073741701;
  if ( *(_WORD *)BaseOfImage != 23117 )
  {
LABEL_15:
    result = -1073741701;
    goto LABEL_17;
  }
  v7 = *((unsigned int *)BaseOfImage + 15);
  if ( (Flags & 1) == 0 && (v7 >= Size || (unsigned int)v7 >= 0xFFFFFFE7 || v7 + 24 >= Size) )
  {
    result = -1073741701;
    v6 = 0LL;
    goto LABEL_17;
  }
  if ( (unsigned int)v7 < 0x10000000 )
  {
    v6 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v7);
    if ( (char *)BaseOfImage + v7 >= BaseOfImage && v6->Signature == 17744 )
      goto LABEL_17;
    goto LABEL_15;
  }
  result = -1073741701;
  v6 = 0LL;
LABEL_17:
  if ( result >= 0 )
    *OutHeaders = v6;
  return result;
}
