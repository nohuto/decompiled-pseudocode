/*
 * XREFs of StorpGetRequestInfo @ 0x1C003595C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetRequestInfo(__int64 a1, __int64 a2, __int16 *a3)
{
  char v4; // si
  _UNICODE_STRING *p_FileName; // rbp
  __int64 v7; // rdi
  IRP *MasterIrp; // rdi
  __int64 v9; // rax
  _FILE_OBJECT *OriginalFileObject; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 CurrentIrql; // al
  __int16 v13; // ax

  v4 = 0;
  p_FileName = 0LL;
  if ( !a2 || !a3 )
    return 3238002694LL;
  if ( (unsigned __int16)(*a3 - 1) > 1u )
    return 3238002699LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(_QWORD *)(a2 + 96);
    if ( !v7 || *(_DWORD *)v7 != 523124044 || (MasterIrp = *(IRP **)(v7 + 768)) == 0LL )
    {
      MasterIrp = *(IRP **)(a2 + 80);
      goto LABEL_14;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 48);
    if ( !v9 || *(_DWORD *)v9 != 523124044 )
      goto LABEL_47;
    MasterIrp = *(IRP **)(v9 + 768);
    if ( !MasterIrp )
    {
      MasterIrp = *(IRP **)(v9 + 176);
LABEL_14:
      if ( !MasterIrp )
        goto LABEL_47;
    }
  }
  if ( (MasterIrp->Flags & 8) == 0 || (MasterIrp = MasterIrp->AssociatedIrp.MasterIrp) != 0LL )
  {
    *((_DWORD *)a3 + 1) = IoGetIoPriorityHint(MasterIrp);
    *((_DWORD *)a3 + 2) = 0;
    if ( (MasterIrp->Flags & 1) != 0 )
      *((_DWORD *)a3 + 2) = 1;
    if ( (MasterIrp->Flags & 0x42) != 0 )
      *((_DWORD *)a3 + 2) |= 2u;
    OriginalFileObject = MasterIrp->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      if ( (OriginalFileObject->Flags & 0x20) != 0 )
        *((_DWORD *)a3 + 2) |= 4u;
      if ( (OriginalFileObject->Flags & 0x18000) != 0 )
        *((_DWORD *)a3 + 2) |= 8u;
      if ( (OriginalFileObject->Flags & 0x10) != 0 )
        *((_DWORD *)a3 + 2) |= 0x10u;
      p_FileName = &OriginalFileObject->FileName;
    }
    else
    {
      *((_DWORD *)a3 + 2) |= 0x40u;
    }
    CurrentStackLocation = MasterIrp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation )
    {
      if ( CurrentStackLocation->MajorFunction == 3 )
      {
        *((_DWORD *)a3 + 3) = CurrentStackLocation->Parameters.Create.Options;
        *((_DWORD *)a3 + 4) = CurrentStackLocation->Parameters.Read.Length;
LABEL_36:
        *((_BYTE *)a3 + 20) = 0;
        goto LABEL_37;
      }
      if ( CurrentStackLocation->MajorFunction == 4 )
      {
        *((_DWORD *)a3 + 3) = CurrentStackLocation->Parameters.Create.Options;
        *((_DWORD *)a3 + 4) = CurrentStackLocation->Parameters.Read.Length;
        *((_BYTE *)a3 + 20) = 1;
LABEL_37:
        if ( (*((_DWORD *)a3 + 3) & 0xFFFF0000) == 0x56530000 )
        {
          *((_DWORD *)a3 + 2) |= 0x80u;
        }
        else if ( CurrentStackLocation && CurrentStackLocation->MajorFunction == 4 && *((_DWORD *)a3 + 3) )
        {
          *((_DWORD *)a3 + 2) |= 0x100u;
        }
        if ( *a3 == 2 )
        {
          CurrentIrql = KeGetCurrentIrql();
          *((_QWORD *)a3 + 3) = p_FileName;
          if ( CurrentIrql > 2u )
            *((_DWORD *)a3 + 8) = -1;
          else
            *((_DWORD *)a3 + 8) = IoGetRequestorProcessId(MasterIrp);
        }
        goto LABEL_48;
      }
    }
    *(_QWORD *)(a3 + 6) = 0LL;
    goto LABEL_36;
  }
LABEL_47:
  v4 = 1;
LABEL_48:
  v13 = *a3;
  if ( *a3 == 1 || v13 == 2 )
    a3[1] = 40;
  if ( v4 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    *((_BYTE *)a3 + 20) = 0;
    *((_DWORD *)a3 + 4) = 0;
    *((_DWORD *)a3 + 1) = 2;
    if ( v13 == 2 )
    {
      *((_QWORD *)a3 + 3) = 0LL;
      *((_DWORD *)a3 + 8) = 0;
    }
  }
  return 0LL;
}
