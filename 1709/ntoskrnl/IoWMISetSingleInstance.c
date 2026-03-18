/*
 * XREFs of IoWMISetSingleInstance @ 0x140740700
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WmipQuerySetExecuteSI @ 0x14051ECEC (WmipQuerySetExecuteSI.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1405E84B8 (WmipAllocateSingleInstanceWnode.c)
 */

NTSTATUS __stdcall IoWMISetSingleInstance(
        PVOID DataBlockObject,
        PUNICODE_STRING InstanceName,
        ULONG Version,
        ULONG ValueBufferSize,
        PVOID ValueBuffer)
{
  NTSTATUS SetExecuteSI; // ebx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  int v15; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-34h] BYREF
  __int64 v17; // [rsp+48h] [rbp-30h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-28h] BYREF

  SetExecuteSI = WmipAllocateSingleInstanceWnode(
                   0x40u,
                   &InstanceName->Length,
                   ValueBufferSize,
                   &v16,
                   (unsigned int *)&v17,
                   (unsigned int *)&v15,
                   P);
  if ( SetExecuteSI >= 0 )
  {
    v10 = P[0];
    v11 = v16;
    v12 = v15;
    *((_DWORD *)P[0] + 11) = 2;
    v10[2] = 0LL;
    *(_DWORD *)v10 = v12;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 2) = Version;
    *((_DWORD *)v10 + 12) = v11;
    *(_WORD *)((char *)v10 + v11) = InstanceName->Length;
    memmove((char *)v10 + v11 + 2, InstanceName->Buffer, InstanceName->Length);
    v13 = (unsigned int)v17;
    *((_DWORD *)v10 + 15) = ValueBufferSize;
    *((_DWORD *)v10 + 14) = v13;
    memmove((char *)v10 + v13, ValueBuffer, ValueBufferSize);
    LODWORD(v17) = *(_DWORD *)v10;
    SetExecuteSI = WmipQuerySetExecuteSI(DataBlockObject, 0LL, 0, 2u, (__int64)v10, v12, (unsigned int *)&v17);
    ExFreePoolWithTag(v10, 0);
  }
  return SetExecuteSI;
}
