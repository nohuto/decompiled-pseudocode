/*
 * XREFs of RtlSetAllBits @ 0x14012CF30
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140005504 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     MiExtendPagingFileMaximum @ 0x14022501C (MiExtendPagingFileMaximum.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140268CE8 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     MiCaptureImageExceptionValues @ 0x140471A50 (MiCaptureImageExceptionValues.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1405C2F10 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x1405D4B4C (MiCreatePagefile.c)
 *     PnprMmAddRange @ 0x1406CD550 (PnprMmAddRange.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 *     SmcStoreResize @ 0x14073CE94 (SmcStoreResize.c)
 *     VfThunkInit @ 0x1408357E4 (VfThunkInit.c)
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
