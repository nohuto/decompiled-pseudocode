/*
 * XREFs of StorpGetRequestInfo @ 0x1C0032D64
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetRequestInfo(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bp
  _UNICODE_STRING *p_FileName; // r14
  __int16 v6; // cx
  __int16 v7; // si
  __int64 v9; // rdi
  IRP *MasterIrp; // rdi
  __int64 v11; // rax
  int v12; // eax
  unsigned int Flags; // ecx
  _FILE_OBJECT *OriginalFileObject; // rcx
  unsigned int v15; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Length; // eax
  int v18; // edx
  unsigned __int8 CurrentIrql; // al
  ULONG RequestorProcessId; // eax

  v4 = 0;
  p_FileName = 0LL;
  if ( !a2 || !a3 )
    return 3238002694LL;
  v6 = *(_WORD *)a3;
  v7 = 1;
  if ( (unsigned __int16)(*(_WORD *)a3 - 1) > 1u )
    return 3238002699LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v9 = *(_QWORD *)(a2 + 96);
    if ( v9 )
    {
      if ( *(_DWORD *)v9 == 523124044 )
      {
        MasterIrp = *(IRP **)(v9 + 768);
        if ( MasterIrp )
          goto LABEL_15;
      }
    }
    MasterIrp = *(IRP **)(a2 + 80);
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 48);
    if ( !v11 || *(_DWORD *)v11 != 523124044 )
      goto LABEL_49;
    MasterIrp = *(IRP **)(v11 + 768);
    if ( MasterIrp )
      goto LABEL_15;
    MasterIrp = *(IRP **)(v11 + 176);
  }
  if ( !MasterIrp )
  {
LABEL_49:
    v4 = 1;
    goto LABEL_50;
  }
LABEL_15:
  if ( (MasterIrp->Flags & 8) != 0 )
  {
    MasterIrp = MasterIrp->AssociatedIrp.MasterIrp;
    if ( !MasterIrp )
      goto LABEL_49;
  }
  *(_DWORD *)(a3 + 4) = IoGetIoPriorityHint(MasterIrp);
  v12 = 0;
  *(_DWORD *)(a3 + 8) = 0;
  Flags = MasterIrp->Flags;
  if ( (Flags & 1) != 0 )
  {
    *(_DWORD *)(a3 + 8) = 1;
    v12 = 1;
    Flags = MasterIrp->Flags;
  }
  if ( (Flags & 0x42) != 0 )
  {
    v12 |= 2u;
    *(_DWORD *)(a3 + 8) = v12;
  }
  OriginalFileObject = MasterIrp->Tail.Overlay.OriginalFileObject;
  if ( OriginalFileObject )
  {
    v15 = OriginalFileObject->Flags;
    if ( (v15 & 0x20) != 0 )
    {
      v12 |= 4u;
      *(_DWORD *)(a3 + 8) = v12;
      v15 = OriginalFileObject->Flags;
    }
    if ( (v15 & 0x18000) != 0 )
    {
      v12 |= 8u;
      *(_DWORD *)(a3 + 8) = v12;
      v15 = OriginalFileObject->Flags;
    }
    if ( (v15 & 0x10) != 0 )
      *(_DWORD *)(a3 + 8) = v12 | 0x10;
    p_FileName = &OriginalFileObject->FileName;
  }
  else
  {
    *(_DWORD *)(a3 + 8) = v12 | 0x40;
  }
  CurrentStackLocation = MasterIrp->Tail.Overlay.CurrentStackLocation;
  if ( !CurrentStackLocation )
  {
    *(_QWORD *)(a3 + 12) = 0LL;
    v18 = 0;
    *(_BYTE *)(a3 + 20) = 0;
    goto LABEL_39;
  }
  if ( CurrentStackLocation->MajorFunction == 3 )
  {
    *(_DWORD *)(a3 + 12) = CurrentStackLocation->Parameters.Create.Options;
    Length = CurrentStackLocation->Parameters.Read.Length;
LABEL_36:
    *(_BYTE *)(a3 + 20) = 0;
    goto LABEL_37;
  }
  if ( CurrentStackLocation->MajorFunction != 4 )
  {
    *(_DWORD *)(a3 + 12) = 0;
    Length = 0;
    goto LABEL_36;
  }
  *(_DWORD *)(a3 + 12) = CurrentStackLocation->Parameters.Create.Options;
  Length = CurrentStackLocation->Parameters.Read.Length;
  *(_BYTE *)(a3 + 20) = 1;
LABEL_37:
  *(_DWORD *)(a3 + 16) = Length;
  v18 = *(_DWORD *)(a3 + 12);
LABEL_39:
  if ( (v18 & 0xFFFF0000) == 0x56530000 )
  {
    *(_DWORD *)(a3 + 8) |= 0x80u;
  }
  else if ( CurrentStackLocation && CurrentStackLocation->MajorFunction == 4 && v18 )
  {
    *(_DWORD *)(a3 + 8) |= 0x100u;
  }
  v6 = *(_WORD *)a3;
  if ( *(_WORD *)a3 == 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    *(_QWORD *)(a3 + 24) = p_FileName;
    if ( CurrentIrql > 2u )
    {
      *(_DWORD *)(a3 + 32) = -1;
      v6 = 2;
    }
    else
    {
      RequestorProcessId = IoGetRequestorProcessId(MasterIrp);
      v6 = *(_WORD *)a3;
      *(_DWORD *)(a3 + 32) = RequestorProcessId;
    }
  }
LABEL_50:
  if ( v6 == 1 )
  {
LABEL_53:
    *(_WORD *)(a3 + 2) = 40;
    goto LABEL_54;
  }
  v7 = v6;
  if ( v6 == 2 )
  {
    v7 = 2;
    goto LABEL_53;
  }
LABEL_54:
  if ( v4 )
  {
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_BYTE *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 4) = 2;
    if ( v7 == 2 )
    {
      *(_QWORD *)(a3 + 24) = 0LL;
      *(_DWORD *)(a3 + 32) = 0;
    }
  }
  return 0LL;
}
