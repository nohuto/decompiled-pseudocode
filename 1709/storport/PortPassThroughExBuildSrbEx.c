/*
 * XREFs of PortPassThroughExBuildSrbEx @ 0x1C0069840
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0069B00 (PortPassThroughExSendAsync.c)
 * Callees:
 *     memmove @ 0x1C001F340 (memmove.c)
 *     memset @ 0x1C001F680 (memset.c)
 */

_DWORD *__fastcall PortPassThroughExBuildSrbEx(PIRP Irp, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID v4; // r14
  int v7; // ebp
  int v8; // r13d
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rbx
  unsigned __int8 v14; // al
  PVOID v15; // rax
  char v16; // al
  unsigned int v17; // eax
  char *v18; // rcx
  void *v19; // rcx
  int v20; // eax
  char *v21; // rcx

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
  v11 = v10 + v7;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x69506C50u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v11);
    v14 = *(_BYTE *)(a2 + 17);
    if ( v14 )
    {
      v15 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v14, 0x69506C50u);
      v4 = v15;
      if ( !v15 )
      {
        ExFreePoolWithTag(v13, 0x69506C50u);
        return 0LL;
      }
      memset(v15, 0, *(unsigned __int8 *)(a2 + 17));
    }
    *v13 = 2621448;
    v13[2] = 1397899864;
    v13[3] = 1;
    v13[4] = v11;
    v13[5] = 0;
    v16 = *(_BYTE *)(a2 + 18);
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v13[6] = 64;
      }
      else if ( v16 == 3 )
      {
        v13[6] = 192;
      }
    }
    else
    {
      v13[6] = 128;
    }
    if ( !v4 )
      v13[6] |= 0x20u;
    v13[6] |= 0x100u;
    *((_WORD *)v13 + 18) = IoGetIoPriorityHint(Irp);
    v13[10] = *(_DWORD *)(a2 + 20);
    v13[13] = v8;
    v13[14] = (v8 != 128) + 1;
    if ( *(_BYTE *)(a2 + 18) == 1 )
    {
      v13[15] = *(_DWORD *)(a2 + 36);
      *((_QWORD *)v13 + 8) = a4;
    }
    else
    {
      v13[15] = *(_DWORD *)(a2 + 32);
      *((_QWORD *)v13 + 8) = a3;
    }
    *((_QWORD *)v13 + 10) = Irp;
    v13[30] = v8 + 16;
    if ( v13[14] == 2 )
      v13[31] = v10 + v8 + 16;
    *(_OWORD *)((char *)v13 + (unsigned int)v13[13]) = *(_OWORD *)((char *)&Irp->AssociatedIrp.MasterIrp->Type
                                                                 + *(unsigned int *)(a2 + 24));
    v17 = *(_DWORD *)(a2 + 8);
    v18 = (char *)v13 + (unsigned int)v13[30];
    if ( v17 > 0x10 )
    {
      if ( v17 > 0x20 )
      {
        *(_DWORD *)v18 = 66;
        v20 = *(_DWORD *)(a2 + 8) + 24;
        v18[8] = 0;
        *((_DWORD *)v18 + 1) = v20;
        v18[9] = *(_BYTE *)(a2 + 17);
        *((_DWORD *)v18 + 3) = *(_DWORD *)(a2 + 8);
        *((_QWORD *)v18 + 3) = v4;
        v19 = v18 + 32;
LABEL_35:
        memmove(v19, (const void *)(a2 + 56), *(unsigned int *)(a2 + 8));
        if ( v13[14] == 2 )
        {
          v21 = (char *)v13 + (unsigned int)v13[31];
          *(_DWORD *)v21 = 1;
          *((_DWORD *)v21 + 1) = 16;
          *((_DWORD *)v21 + 2) = *(_DWORD *)(a2 + 36);
          *((_QWORD *)v21 + 2) = a4;
        }
        return v13;
      }
      *(_DWORD *)v18 = 65;
      *((_DWORD *)v18 + 1) = 48;
    }
    else
    {
      *(_DWORD *)v18 = 64;
      *((_DWORD *)v18 + 1) = 32;
    }
    v18[8] = 0;
    v18[9] = *(_BYTE *)(a2 + 17);
    v18[10] = *(_BYTE *)(a2 + 8);
    *((_QWORD *)v18 + 2) = v4;
    v19 = v18 + 24;
    goto LABEL_35;
  }
  return v13;
}
