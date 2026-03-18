/*
 * XREFs of IoWMICompleteRequest @ 0x140570B44
 * Callers:
 *     IoWMISystemControl @ 0x14057070C (IoWMISystemControl.c)
 *     WmipQueryWmiDataBlock @ 0x140570A50 (WmipQueryWmiDataBlock.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400713B0 (IofCompleteRequest.c)
 */

__int64 __fastcall IoWMICompleteRequest(__int64 a1, __int64 a2, IRP *a3, int a4, int a5)
{
  int v5; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // rdx
  unsigned int CompletionMode; // r10d
  unsigned int v11; // r8d
  __int64 MaximumInstances; // r11
  int v13; // esi
  unsigned int *p_OutboundQuota; // r9
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r10d

  v5 = a4;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( CurrentStackLocation->MinorFunction )
  {
    if ( CurrentStackLocation->MinorFunction == 1 )
    {
      v11 = Parameters[1].InboundQuota + a5;
      if ( v5 >= 0 )
      {
        Parameters->NamedPipeType = v11;
        *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
        goto LABEL_10;
      }
    }
    else
    {
      if ( CurrentStackLocation->MinorFunction != 9 )
        goto LABEL_13;
      v11 = a5 + Parameters[1].OutboundQuota;
      if ( v5 >= 0 )
      {
        Parameters->NamedPipeType = v11;
        *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
        Parameters[1].DefaultTimeout.LowPart = a5;
        goto LABEL_10;
      }
    }
LABEL_11:
    if ( v5 == -1073741789 )
    {
      Parameters[1].CompletionMode = v11;
      Parameters->NamedPipeType = 56;
      v11 = 56;
      Parameters[1].ReadMode = 32;
      v5 = 0;
      goto LABEL_10;
    }
LABEL_13:
    v11 = 0;
    goto LABEL_10;
  }
  CompletionMode = Parameters[1].CompletionMode;
  v11 = CompletionMode + a5;
  MaximumInstances = Parameters[1].MaximumInstances;
  if ( v5 < 0 )
    goto LABEL_11;
  v5 = -1073741789;
  if ( v11 <= CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
    v5 = a4;
  v13 = v5;
  if ( v5 < 0 )
    goto LABEL_11;
  p_OutboundQuota = &Parameters[1].OutboundQuota;
  *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
  Parameters->NamedPipeType = v11;
  v15 = MaximumInstances;
  if ( (_DWORD)MaximumInstances )
  {
    do
    {
      --v15;
      p_OutboundQuota[2 * v15 + 1] = p_OutboundQuota[v15];
    }
    while ( v15 );
    v16 = MaximumInstances;
    do
    {
      *p_OutboundQuota = CompletionMode;
      v5 = v13;
      v17 = p_OutboundQuota[1] + CompletionMode + 7;
      p_OutboundQuota += 2;
      CompletionMode = v17 & 0xFFFFFFF8;
      --v16;
    }
    while ( v16 );
  }
LABEL_10:
  a3->IoStatus.Information = v11;
  a3->IoStatus.Status = v5;
  IofCompleteRequest(a3, 0);
  return (unsigned int)v5;
}
