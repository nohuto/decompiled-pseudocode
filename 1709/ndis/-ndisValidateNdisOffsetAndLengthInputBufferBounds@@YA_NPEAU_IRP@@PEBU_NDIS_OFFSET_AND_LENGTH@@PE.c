/*
 * XREFs of ?ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C00E31F8
 * Callers:
 *     ?ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C00E325C (-ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNI.c)
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z @ 0x1C00C49EC (-ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z.c)
 */

char __fastcall ndisValidateNdisOffsetAndLengthInputBufferBounds(
        struct _IRP *a1,
        const struct _NDIS_OFFSET_AND_LENGTH *a2,
        void **a3)
{
  unsigned __int64 MasterIrp; // r10
  __int64 Options; // rcx

  *a3 = 0LL;
  MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
  Options = a1->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( (unsigned __int64)a2 < MasterIrp || (unsigned __int64)a2 + 8 > MasterIrp + Options )
    return 0;
  else
    return ndisValidateEmbeddedBufferBounds(
             MasterIrp,
             Options,
             (unsigned __int64)a2,
             8u,
             *(_DWORD *)a2,
             *((_DWORD *)a2 + 1),
             0,
             a3);
}
