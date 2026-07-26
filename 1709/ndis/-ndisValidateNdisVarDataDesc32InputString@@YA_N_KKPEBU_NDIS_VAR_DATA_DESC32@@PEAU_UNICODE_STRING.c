/*
 * XREFs of ?ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING@@@Z @ 0x1C00E32A0
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEAGKKEPEAU_UNICODE_STRING@@@Z @ 0x1C00C4994 (-ndisValidateAndConvertWcharStringToUnicodeString@@YA_NPEAGKKEPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z @ 0x1C00C49EC (-ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z.c)
 */

char __fastcall ndisValidateNdisVarDataDesc32InputString(
        unsigned __int64 a1,
        unsigned int a2,
        const struct _NDIS_VAR_DATA_DESC32 *a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned __int16 *v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( (unsigned __int64)a3 >= a1
    && (unsigned __int64)a3 + 8 <= a1 + a2
    && (v5 = *(unsigned __int16 *)a3,
        ndisValidateEmbeddedBufferBounds(a1, a2, (unsigned __int64)a3, 8u, *((_DWORD *)a3 + 1), v5, 2u, (void **)&v8)) )
  {
    return ndisValidateAndConvertWcharStringToUnicodeString(v8, v5, v6, 0, a4);
  }
  else
  {
    return 0;
  }
}
