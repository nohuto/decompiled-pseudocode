/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1C0068720
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00689F0 (PortPassThroughExSendAsync.c)
 * Callees:
 *     memmove @ 0x1C0017E00 (memmove.c)
 *     memset @ 0x1C0018140 (memset.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(PIRP Irp, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID v4; // rbp
  int v7; // eax
  int v8; // r12d
  unsigned int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rbx
  unsigned __int8 v15; // al
  PVOID v16; // rax
  char v17; // al
  int v18; // eax
  char v19; // dl
  int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // r8d
  char *v23; // rcx
  void *v24; // rcx
  int v25; // eax
  char *v26; // rcx

  v4 = 0LL;
  if ( *(_BYTE *)(a2 + 18) == 3 && *(_DWORD *)(a2 + 32) && *(_DWORD *)(a2 + 36) )
  {
    v7 = 176;
    v8 = 136;
  }
  else
  {
    v7 = 144;
    v8 = 128;
  }
  v9 = *(_DWORD *)(a2 + 8);
  if ( v9 > 0x10 )
  {
    if ( v9 > 0x20 )
      v10 = ((v9 + 38) & 0xFFFFFFF8) + 8;
    else
      v10 = 56;
  }
  else
  {
    v10 = 40;
  }
  v11 = v7 + v10;
  v12 = v7 + v10;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7 + v10, 0x69506C50u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v12);
    v15 = *(_BYTE *)(a2 + 17);
    if ( v15 )
    {
      v16 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v15, 0x69506C50u);
      v4 = v16;
      if ( !v16 )
      {
        ExFreePoolWithTag(v14, 0x69506C50u);
        return 0LL;
      }
      memset(v16, 0, *(unsigned __int8 *)(a2 + 17));
    }
    v14[5] = 0;
    v14[4] = v11;
    *v14 = 2621448;
    v14[2] = 1397899864;
    v14[3] = 1;
    v17 = *(_BYTE *)(a2 + 18);
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        v14[6] = 64;
      }
      else if ( v17 == 3 )
      {
        v14[6] = 192;
      }
    }
    else
    {
      v14[6] = 128;
    }
    v18 = v14[6];
    if ( !v4 )
    {
      v18 |= 0x20u;
      v14[6] = v18;
    }
    v14[6] = v18 | 0x100;
    *((_WORD *)v14 + 18) = IoGetIoPriorityHint(Irp);
    v14[10] = *(_DWORD *)(a2 + 20);
    v14[13] = v8;
    v14[14] = (v8 != 128) + 1;
    v19 = *(_BYTE *)(a2 + 18);
    if ( v19 == 1 )
      v20 = *(_DWORD *)(a2 + 36);
    else
      v20 = *(_DWORD *)(a2 + 32);
    v21 = a4;
    if ( v19 != 1 )
      v21 = a3;
    v14[15] = v20;
    *((_QWORD *)v14 + 8) = v21;
    *((_QWORD *)v14 + 10) = Irp;
    v14[30] = v8 + 16;
    if ( v14[14] == 2 )
      v14[31] = v10 + v8 + 16;
    *(_OWORD *)((char *)v14 + (unsigned int)v14[13]) = *(_OWORD *)((char *)&Irp->AssociatedIrp.MasterIrp->Type
                                                                 + *(unsigned int *)(a2 + 24));
    v22 = *(_DWORD *)(a2 + 8);
    v23 = (char *)v14 + (unsigned int)v14[30];
    if ( v22 > 0x10 )
    {
      if ( v22 > 0x20 )
      {
        *(_DWORD *)v23 = 66;
        v25 = *(_DWORD *)(a2 + 8) + 24;
        v23[8] = 0;
        *((_DWORD *)v23 + 1) = v25;
        v23[9] = *(_BYTE *)(a2 + 17);
        *((_DWORD *)v23 + 3) = *(_DWORD *)(a2 + 8);
        *((_QWORD *)v23 + 3) = v4;
        v24 = v23 + 32;
LABEL_37:
        memmove(v24, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
        if ( v14[14] == 2 )
        {
          v26 = (char *)v14 + (unsigned int)v14[31];
          *(_DWORD *)v26 = 1;
          *((_DWORD *)v26 + 1) = 16;
          *((_DWORD *)v26 + 2) = *(_DWORD *)(a2 + 36);
          *((_QWORD *)v26 + 2) = a4;
        }
        return v14;
      }
      *(_DWORD *)v23 = 65;
      *((_DWORD *)v23 + 1) = 48;
    }
    else
    {
      *(_DWORD *)v23 = 64;
      *((_DWORD *)v23 + 1) = 32;
    }
    v23[8] = 0;
    v23[9] = *(_BYTE *)(a2 + 17);
    v23[10] = *(_BYTE *)(a2 + 8);
    *((_QWORD *)v23 + 2) = v4;
    v24 = v23 + 24;
    goto LABEL_37;
  }
  return v14;
}
