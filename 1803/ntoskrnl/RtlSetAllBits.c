/*
 * XREFs of RtlSetAllBits @ 0x14007D2B0
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14007CFB0 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14008372C (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiExtendPagingFileMaximum @ 0x14025F210 (MiExtendPagingFileMaximum.c)
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     MiCaptureImageExceptionValues @ 0x1405F9650 (MiCaptureImageExceptionValues.c)
 *     CmpMountPreloadedHives @ 0x1406309E0 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 *     MiCreatePagefile @ 0x14063C9BC (MiCreatePagefile.c)
 *     PnprMmAddRange @ 0x140734EEC (PnprMmAddRange.c)
 *     SmcStoreResize @ 0x14079FEA0 (SmcStoreResize.c)
 *     VfThunkInit @ 0x1408AD5A4 (VfThunkInit.c)
 *     MiInitializeDriverPtes @ 0x1408AE288 (MiInitializeDriverPtes.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlSetAllBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // r8
  unsigned __int64 v2; // rdx

  Buffer = BitMapHeader->Buffer;
  v2 = (unsigned __int64)(4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5))) >> 2;
  if ( v2 )
  {
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      *Buffer = -1;
      if ( !--v2 )
        return;
      ++Buffer;
    }
    memset(Buffer, 0xFFu, 8 * (v2 >> 1));
    if ( (v2 & 1) != 0 )
      Buffer[v2 - 1] = -1;
  }
}
