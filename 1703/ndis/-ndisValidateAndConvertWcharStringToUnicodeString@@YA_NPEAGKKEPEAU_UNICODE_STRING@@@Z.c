/*
 * XREFs of ?ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEAGKKEPEAU_UNICODE_STRING@@@Z @ 0x1C00BD9F4
 * Callers:
 *     ?ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z @ 0x1C00BD974 (-ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C00D8E98 (-ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNI.c)
 *     ?ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING@@@Z @ 0x1C00D8EDC (-ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateAndConvertWcharStringToUnicodeString(
        unsigned __int16 *a1,
        unsigned int a2,
        __int64 a3,
        char a4,
        struct _UNICODE_STRING *a5)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v8; // rax

  if ( (a2 & 1) != 0 )
    return 0;
  if ( a2 )
  {
    if ( a2 <= 0x1000 )
    {
      v5 = (a2 >> 1) - 1;
      if ( a4 == 1 )
        goto LABEL_10;
      v6 = (unsigned int)v5;
      if ( !a1[v5] )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( a1[v8] );
        if ( v8 == v6 )
        {
LABEL_10:
          a5->Buffer = a1;
          a5->MaximumLength = a2;
          if ( a4 == 1 )
            LOWORD(a2) = a2 - 2;
          a5->Length = a2;
          return 1;
        }
      }
    }
    return 0;
  }
  a5->Buffer = 0LL;
  *(_DWORD *)&a5->Length = 0;
  return 1;
}
