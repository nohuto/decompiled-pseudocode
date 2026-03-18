/*
 * XREFs of ?_ExecuteMethod@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0072A80
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x1C007260C (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::_ExecuteMethod(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int *p_NamedPipeType; // rbx
  unsigned int v9; // esi
  unsigned int v10; // edi
  int v11; // eax
  char *v12; // rcx
  unsigned int size; // [rsp+68h] [rbp+10h] BYREF

  size = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  v9 = p_NamedPipeType[16];
  v10 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - p_NamedPipeType[15];
  if ( Instance->IsExecuteMethodSupported(Instance) )
  {
    if ( v9 || v10 )
      v12 = (char *)p_NamedPipeType + p_NamedPipeType[15];
    else
      v12 = 0LL;
    v11 = Instance->ExecuteMethod(Instance, p_NamedPipeType[14], v9, v10, v12, &size);
    if ( v11 == 259 )
    {
      size = 0;
      v11 = -1073741823;
    }
  }
  else
  {
    v11 = -1073741808;
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v11, size);
}
