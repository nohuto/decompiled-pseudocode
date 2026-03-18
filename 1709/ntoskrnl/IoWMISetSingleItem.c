/*
 * XREFs of IoWMISetSingleItem @ 0x140740810
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WmipQuerySetExecuteSI @ 0x14051ECEC (WmipQuerySetExecuteSI.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1405E84B8 (WmipAllocateSingleInstanceWnode.c)
 */

NTSTATUS __stdcall IoWMISetSingleItem(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        ULONG DataItemId,
        ULONG Version,
        ULONG ValueBufferSize,
        PVOID ValueBuffer)
{
  NTSTATUS SetExecuteSI; // ebx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-34h] BYREF
  __int64 v18; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  SetExecuteSI = WmipAllocateSingleInstanceWnode(
                   0x44u,
                   &InstanceName->Length,
                   ValueBufferSize,
                   &v17,
                   (unsigned int *)&v18,
                   (unsigned int *)&v16,
                   P);
  if ( SetExecuteSI >= 0 )
  {
    v11 = P[0];
    v12 = v17;
    v13 = v16;
    *((_DWORD *)P[0] + 11) = 4;
    v11[2] = 0LL;
    *(_DWORD *)v11 = v13;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 2) = Version;
    *((_DWORD *)v11 + 14) = DataItemId;
    *((_DWORD *)v11 + 12) = v12;
    *(_WORD *)((char *)v11 + v12) = InstanceName->Length;
    memmove((char *)v11 + v12 + 2, InstanceName->Buffer, InstanceName->Length);
    v14 = (unsigned int)v18;
    *((_DWORD *)v11 + 16) = ValueBufferSize;
    *((_DWORD *)v11 + 15) = v14;
    memmove((char *)v11 + v14, ValueBuffer, ValueBufferSize);
    LODWORD(v18) = *(_DWORD *)v11;
    SetExecuteSI = WmipQuerySetExecuteSI(DataBlockObject, 0LL, 0, 3u, (__int64)v11, v13, (unsigned int *)&v18);
    ExFreePoolWithTag(v11, 0);
  }
  return SetExecuteSI;
}
