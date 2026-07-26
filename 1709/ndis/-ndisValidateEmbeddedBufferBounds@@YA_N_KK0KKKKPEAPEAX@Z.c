/*
 * XREFs of ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z @ 0x1C00C49EC
 * Callers:
 *     ?ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z @ 0x1C00C4914 (-ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C00E31F8 (-ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PE.c)
 *     ?ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING@@@Z @ 0x1C00E32A0 (-ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING.c)
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateEmbeddedBufferBounds(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        void **a8)
{
  unsigned __int64 v8; // rax
  char *v9; // rdx
  char *v10; // r10
  unsigned __int64 v11; // r11

  v8 = a1 + a2;
  v9 = (char *)(a1 + a5);
  v10 = &v9[a6];
  v11 = a3 + a4;
  if ( v8 < a1
    || (unsigned __int64)v9 < a1
    || v10 < v9
    || (unsigned __int64)v10 > v8
    || a7 && a6 && ((a7 - 1) & (unsigned int)v9) != 0
    || (unsigned __int64)v9 <= a3 && (unsigned __int64)v10 > a3
    || (unsigned __int64)v9 <= v11 && (unsigned __int64)v10 > v11 )
  {
    return 0;
  }
  *a8 = v9;
  return 1;
}
