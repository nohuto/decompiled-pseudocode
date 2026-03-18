/*
 * XREFs of IoWMIQuerySingleInstance @ 0x140580670
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WmipQuerySetExecuteSI @ 0x1405807A8 (WmipQuerySetExecuteSI.c)
 */

NTSTATUS __stdcall IoWMIQuerySingleInstance(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  ULONG v5; // ebp
  unsigned int v6; // edi
  _DWORD *PoolWithTag; // rbx
  __int64 v11; // r9
  NTSTATUS v12; // edi
  int v13; // eax
  ULONG v15; // [rsp+78h] [rbp+10h] BYREF

  v5 = *InOutBufferSize;
  v6 = (InstanceName->Length + 73) & 0xFFFFFFF8;
  PoolWithTag = OutBuffer;
  if ( !OutBuffer || v5 < v6 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x70696D57u);
    v5 = v6;
  }
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, 0x40uLL);
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  PoolWithTag[3] = 0;
  PoolWithTag[11] = 2;
  *PoolWithTag = v6;
  PoolWithTag[12] = 64;
  PoolWithTag[14] = v6;
  *((_WORD *)PoolWithTag + 32) = InstanceName->Length;
  memmove((char *)PoolWithTag + 66, InstanceName->Buffer, InstanceName->Length);
  LOBYTE(v11) = 1;
  v15 = *PoolWithTag;
  v12 = WmipQuerySetExecuteSI(DataBlockObject, 0LL, 0LL, v11, PoolWithTag, v5, &v15);
  if ( v12 >= 0 )
  {
    v13 = PoolWithTag[11];
    if ( (v13 & 0x100) != 0 )
    {
      v12 = -1073741637;
    }
    else
    {
      if ( (v13 & 0x20) != 0 )
      {
        *InOutBufferSize = PoolWithTag[12];
      }
      else
      {
        *InOutBufferSize = v15;
        if ( PoolWithTag == OutBuffer )
          return v12;
      }
      v12 = -1073741789;
    }
  }
  if ( PoolWithTag != OutBuffer )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}
