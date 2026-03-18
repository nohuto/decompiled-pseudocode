/*
 * XREFs of PnpCmResourcesToIoResources @ 0x140617938
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x14016F33C (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopQueryDeviceResources @ 0x1405DB990 (IopQueryDeviceResources.c)
 *     IopAllocateBootResourcesInternal @ 0x140616020 (IopAllocateBootResourcesInternal.c)
 *     PnpFilterResourceRequirementsList @ 0x140617EE0 (PnpFilterResourceRequirementsList.c)
 *     IoReportResourceUsageInternal @ 0x140725DB8 (IoReportResourceUsageInternal.c)
 *     PnpRestoreResourcesInternal @ 0x14073A6C4 (PnpRestoreResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x14074071C (IopQueryConflictListInternal.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x1400D0500 (RtlCmDecodeMemIoResource.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char *__fastcall PnpCmResourcesToIoResources(__int64 a1, unsigned int *a2, int a3)
{
  unsigned int v3; // r9d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v4; // r14
  ULONG LowPart; // r13d
  int v8; // ebx
  _DWORD *v9; // rcx
  __int64 v10; // r10
  unsigned int v11; // eax
  __int64 v12; // r11
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdi
  char *PoolWithTag; // rax
  char *v18; // rsi
  char *v19; // rbx
  unsigned int v20; // ebp
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v21; // rdi
  ULONG v22; // r15d
  LONG HighPart; // eax
  char *result; // rax
  ULONGLONG v25; // rax
  unsigned __int64 v26; // rcx
  KAFFINITY Affinity; // rax
  int v28; // ecx
  int MessageCount; // eax
  unsigned __int64 Start; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(a2 + 1);
  LowPart = 0;
  v8 = 0;
  v9 = a2 + 1;
  if ( !*a2 )
    return 0LL;
  v10 = v3;
  do
  {
    v11 = v9[3];
    v9 += 4;
    v8 += v11;
    if ( v11 )
    {
      v12 = v11;
      do
      {
        v13 = 0;
        if ( *(_BYTE *)v9 == 5 )
          v13 = v9[1];
        v14 = v8 - 1;
        if ( *(_BYTE *)v9 != 5 )
          v14 = v8;
        v8 = v14;
        v9 = (_DWORD *)((char *)v9 + v13 + 20);
        --v12;
      }
      while ( v12 );
    }
    --v10;
  }
  while ( v10 );
  if ( !v8 )
    return 0LL;
  v15 = v3 + v8;
  v16 = 32LL * v15;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16 + 72, 0x75737050u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, v16 + 72);
  *((_DWORD *)v18 + 1) = *(_DWORD *)&v4->Type;
  *((_DWORD *)v18 + 2) = a2[2];
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *((_DWORD *)v18 + 7) = 1;
  *((_DWORD *)v18 + 9) = v15;
  v19 = v18 + 72;
  *((_DWORD *)v18 + 8) = 65537;
  *((_DWORD *)v18 + 12) = a3;
  v20 = 0;
  *((_WORD *)v18 + 20) = -32767;
  *(_DWORD *)(v18 + 42) = 3;
  *((_WORD *)v18 + 23) = 0;
  if ( *a2 )
  {
    while ( 1 )
    {
      if ( v20 )
      {
        *(_DWORD *)(v19 + 2) = 0;
        *(_WORD *)v19 = -4095;
        *((_WORD *)v19 + 3) = 0;
        v28 = *(_DWORD *)&v4->Type;
        if ( *(_DWORD *)&v4->Type == -1 )
          v28 = PnpDefaultInterfaceType;
        *((_DWORD *)v19 + 2) = v28;
        *(_QWORD *)(v19 + 12) = v4->u.Generic.Start.LowPart;
        v19 += 32;
      }
      v21 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v4->u.Memory48 + 1);
      v22 = 0;
      if ( v4->u.Generic.Length )
        break;
LABEL_23:
      ++v20;
      v4 = v21;
      if ( v20 >= *a2 )
        goto LABEL_24;
    }
    while ( 1 )
    {
      *v19 = 1;
      v19[1] = v21->Type;
      v19[2] = v21->ShareDisposition;
      *((_WORD *)v19 + 2) = v21->Flags;
      v19[3] = 0;
      *((_WORD *)v19 + 3) = 0;
      switch ( v21->Type )
      {
        case 1u:
          goto LABEL_26;
        case 2u:
          if ( (v21->Flags & 2) != 0 )
          {
            *((_DWORD *)v19 + 3) = -2;
            MessageCount = v21->u.MessageInterrupt.Raw.MessageCount;
            *((_DWORD *)v19 + 5) = 0;
            *((_DWORD *)v19 + 2) = ~MessageCount;
            *((_WORD *)v19 + 8) = 4;
            *((_WORD *)v19 + 9) = v21->u.MessageInterrupt.Raw.Reserved;
            Affinity = v21->u.Interrupt.Affinity;
            goto LABEL_27;
          }
          HighPart = v21->u.Generic.Start.HighPart;
          *((_DWORD *)v19 + 3) = HighPart;
          break;
        case 3u:
          goto LABEL_26;
        case 4u:
          if ( SLOBYTE(v21->Flags) < 0 )
          {
            *((_DWORD *)v19 + 2) = v21->u.Generic.Start.HighPart;
            *((_DWORD *)v19 + 3) = v21->u.Generic.Start.HighPart;
            *((_DWORD *)v19 + 4) = v21->u.Generic.Start.LowPart;
            *((_DWORD *)v19 + 5) = v21->u.DmaV3.TransferWidth;
          }
          else
          {
            *((_DWORD *)v19 + 2) = v21->u.Generic.Start.LowPart;
            *((_DWORD *)v19 + 3) = v21->u.Generic.Start.LowPart;
          }
          goto LABEL_21;
        case 5u:
          LowPart = v21->u.Generic.Start.LowPart;
          goto LABEL_22;
        case 6u:
          *((_DWORD *)v19 + 3) = v21->u.Generic.Start.LowPart;
          *((_DWORD *)v19 + 4) = v21->u.Generic.Start.LowPart - 1 + v21->u.Generic.Start.HighPart;
          HighPart = v21->u.Generic.Start.HighPart;
          break;
        case 7u:
LABEL_26:
          v25 = RtlCmDecodeMemIoResource(v21, &Start);
          *((_DWORD *)v19 + 2) = v21->u.Generic.Length;
          v26 = Start;
          *((_QWORD *)v19 + 2) = Start;
          Affinity = v26 + v25 - 1;
          *((_DWORD *)v19 + 3) = 1;
LABEL_27:
          *((_QWORD *)v19 + 3) = Affinity;
          goto LABEL_21;
        default:
          *((_DWORD *)v19 + 2) = v21->u.Generic.Start.LowPart;
          *((_DWORD *)v19 + 3) = v21->u.Generic.Start.HighPart;
          *((_DWORD *)v19 + 4) = v21->u.Generic.Length;
          goto LABEL_21;
      }
      *((_DWORD *)v19 + 2) = HighPart;
LABEL_21:
      v19 += 32;
LABEL_22:
      v21 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v21 + LowPart + 20);
      ++v22;
      LowPart = 0;
      if ( v22 >= v4->u.Generic.Length )
        goto LABEL_23;
    }
  }
LABEL_24:
  result = v18;
  *(_DWORD *)v18 = (_DWORD)v19 - (_DWORD)v18;
  return result;
}
