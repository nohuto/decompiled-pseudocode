/*
 * XREFs of imp_WdfMemoryCopyToBuffer @ 0x1C0077590
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?CopyToPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z @ 0x1C007DD0C (-CopyToPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfMemoryCopyToBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *SourceMemory,
        unsigned __int64 SourceOffset,
        void *Buffer,
        unsigned __int64 NumBytesToCopyTo)
{
  _FX_DRIVER_GLOBALS *v7; // rax
  _WDFMEMORY_OFFSET dstOffsets; // [rsp+30h] [rbp-20h] BYREF
  _WDFMEMORY_OFFSET srcOffsets; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]
  IFxMemory *pSource; // [rsp+60h] [rbp+10h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)SourceMemory,
    0x100Au,
    (void **)&pSource);
  v7 = pSource->GetDriverGlobals(pSource);
  if ( !Buffer )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( NumBytesToCopyTo )
  {
    srcOffsets.BufferLength = NumBytesToCopyTo;
    dstOffsets.BufferOffset = 0LL;
    srcOffsets.BufferOffset = SourceOffset;
    dstOffsets.BufferLength = NumBytesToCopyTo;
    return IFxMemory::CopyToPtr(pSource, &srcOffsets, Buffer, NumBytesToCopyTo, &dstOffsets);
  }
  else
  {
    WPP_IFR_SF_d(v7, 2u, 0x12u, 0xBu, WPP_FxMemoryBufferApi_cpp_Traceguids, -1073741811);
    return -1073741811;
  }
}
