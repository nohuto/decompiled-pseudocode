/*
 * XREFs of RtlSetAllBits @ 0x14012DAF0
 * Callers:
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140004BEC (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14012D7F0 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     MiExtendPagingFileMaximum @ 0x140219B30 (MiExtendPagingFileMaximum.c)
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     MiCaptureImageExceptionValues @ 0x1404B6E10 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x1405BA1B8 (MiCreatePagefile.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     PnprMmAddRange @ 0x1406A2CAC (PnprMmAddRange.c)
 *     SmcStoreResize @ 0x140704BA4 (SmcStoreResize.c)
 *     VfThunkInit @ 0x14081566C (VfThunkInit.c)
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
