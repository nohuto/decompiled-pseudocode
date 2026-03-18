/*
 * XREFs of ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C00A5E78
 * Callers:
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C008D650 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C008F140 (-StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0094DC8 (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequestBuffer::AssignValues(
        FxRequestBuffer *this,
        _MDL **PPBuffer,
        _MDL **PPMdl,
        unsigned int *BufferLength)
{
  _MDL **p_pMdl; // rdi
  FxRequestBufferType DataType; // ecx
  _MDL **v8; // rdx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  _WDFMEMORY_OFFSET *v12; // rax
  unsigned int Length; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rbp
  _WDFMEMORY_OFFSET *Offsets; // rdx
  _MDL *pMdl; // [rsp+30h] [rbp+8h] BYREF

  p_pMdl = &pMdl;
  DataType = this->DataType;
  if ( PPBuffer )
    p_pMdl = PPBuffer;
  v8 = &pMdl;
  if ( PPMdl )
    v8 = PPMdl;
  v9 = DataType - 1;
  if ( !v9 )
  {
    v15 = ((__int64 (__fastcall *)(IFxMemory *, _MDL **))this->u.Memory.Memory->GetBuffer)(this->u.Memory.Memory, v8);
    LODWORD(v14) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
    Offsets = this->u.Memory.Offsets;
    if ( Offsets )
    {
      if ( Offsets->BufferLength )
        v14 = Offsets->BufferLength;
      if ( Offsets->BufferOffset )
        v15 += Offsets->BufferOffset;
    }
    *p_pMdl = (_MDL *)v15;
    goto LABEL_24;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *v8 = this->u.Mdl.Mdl;
    *p_pMdl = 0LL;
    goto LABEL_16;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *v8 = 0LL;
    *p_pMdl = this->u.Mdl.Mdl;
LABEL_16:
    Length = this->u.Mdl.Length;
    goto LABEL_17;
  }
  if ( v11 != 1 )
  {
    *v8 = 0LL;
    *p_pMdl = 0LL;
    *BufferLength = 0;
    return;
  }
  *v8 = this->u.RefMdl.Mdl;
  *p_pMdl = 0LL;
  v12 = this->u.Memory.Offsets;
  if ( v12 && v12->BufferLength )
  {
    Length = v12->BufferLength;
LABEL_17:
    *BufferLength = Length;
    return;
  }
  LODWORD(v14) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
LABEL_24:
  *BufferLength = v14;
}
