/*
 * XREFs of PortPassThroughExMarshalResultsFromSrbEx @ 0x1C00470B8
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C0047820 (PortpCompleteRequestIrp.c)
 * Callees:
 *     memmove @ 0x1C001EE40 (memmove.c)
 *     PortPassThroughExApplyNormalizedRequest @ 0x1C0046F4C (PortPassThroughExApplyNormalizedRequest.c)
 *     PortPassThroughExNormalize @ 0x1C0047278 (PortPassThroughExNormalize.c)
 */

void __fastcall PortPassThroughExMarshalResultsFromSrbEx(PIRP Irp, __int64 a2, char a3, __int64 a4)
{
  _IRP *MasterIrp; // rax
  SIZE_T v9; // r12
  unsigned int *PoolWithTag; // rax
  unsigned __int8 *v11; // rbx
  int v12; // edi
  unsigned __int8 v13; // r14
  int v14; // r9d
  unsigned __int8 v15; // cl
  const void *v16; // rdx
  unsigned int Length; // r10d
  int *v18; // rax
  int v19; // r8d
  char *v20; // rax
  unsigned __int8 v21; // cl
  unsigned int v22; // eax
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // [rsp+50h] [rbp+8h]

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  *(_QWORD *)(a4 + 8) = 0LL;
  v9 = (unsigned int)(LODWORD(MasterIrp->MdlAddress) + 63);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x69506C50u);
  v11 = (unsigned __int8 *)PoolWithTag;
  if ( PoolWithTag )
  {
    v12 = PortPassThroughExNormalize(PoolWithTag, Irp);
    if ( v12 < 0 )
    {
LABEL_35:
      ExFreePoolWithTag(v11, 0x69506C50u);
      goto LABEL_36;
    }
    v13 = 0;
    v14 = *(_DWORD *)a4;
    v15 = 0;
    v16 = 0LL;
    Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    v18 = (int *)(a2 + *(unsigned int *)(a2 + 120));
    v26 = Length;
    v19 = *v18;
    if ( *v18 == 64 || v19 == 65 )
    {
      v16 = (const void *)*((_QWORD *)v18 + 2);
    }
    else
    {
      if ( v19 != 66 )
      {
LABEL_10:
        v11[16] = v13;
        if ( *(char *)(a2 + 3) >= 0 )
        {
          v11[17] = 0;
        }
        else
        {
          if ( v11[17] )
          {
            v20 = (char *)Irp->AssociatedIrp.MasterIrp + *((unsigned int *)v11 + 7);
            if ( v20 )
            {
              v11[17] = v15;
              memmove(v20, v16, v15);
              Length = v26;
            }
          }
          v14 = 0;
        }
        v12 = 0;
        v21 = v11[18];
        v22 = *(_DWORD *)(a2 + 60);
        if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 0x12 )
          v12 = v14;
        if ( v21 == 1 )
        {
          *((_DWORD *)v11 + 9) = v22;
        }
        else
        {
          *((_DWORD *)v11 + 8) = v22;
          if ( v21 == 3 && v22 && *((_DWORD *)v11 + 9) )
            *((_DWORD *)v11 + 9) = *(_DWORD *)(*(unsigned int *)(a2 + 124) + a2 + 8);
        }
        v23 = v11[17];
        if ( v23 )
        {
          *(_QWORD *)(a4 + 8) = *((_DWORD *)v11 + 7) + (unsigned int)v23;
        }
        else
        {
          *(_QWORD *)(a4 + 8) = v9;
          if ( v12 < 0 && v13 )
          {
            v12 = 0;
            *(_QWORD *)(a4 + 8) = 8LL;
          }
        }
        if ( !a3 )
        {
          v24 = *((_QWORD *)v11 + 6);
          if ( v24 )
            *(_QWORD *)(a4 + 8) = v24 + *((unsigned int *)v11 + 9);
        }
        v25 = Length;
        if ( *(_QWORD *)(a4 + 8) < (unsigned __int64)Length )
          v25 = *(_QWORD *)(a4 + 8);
        *(_QWORD *)(a4 + 8) = v25;
        PortPassThroughExApplyNormalizedRequest((__int128 *)v11, Irp);
        goto LABEL_35;
      }
      v16 = (const void *)*((_QWORD *)v18 + 3);
    }
    v13 = *((_BYTE *)v18 + 8);
    v15 = *((_BYTE *)v18 + 9);
    goto LABEL_10;
  }
  v12 = -1073741670;
LABEL_36:
  *(_DWORD *)a4 = v12;
}
