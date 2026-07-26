/*
 * XREFs of NdisMStartBufferPhysicalMapping @ 0x1C005AD00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisMStartBufferPhysicalMapping(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_BUFFER Buffer,
        ULONG PhysicalMapRegister,
        BOOLEAN WriteToDevice,
        PNDIS_PHYSICAL_ADDRESS_UNIT PhysicalAddressArray,
        PUINT ArraySize)
{
  __int64 v6; // rdi
  unsigned int v7; // r12d
  char *v9; // r15
  ULONG ByteCount; // r13d
  ULONG v11; // r14d
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  BOOLEAN v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rbx
  NDIS_PHYSICAL_ADDRESS v16; // rax
  PNDIS_PHYSICAL_ADDRESS_UNIT v17; // rcx
  int v18; // [rsp+28h] [rbp-60h]
  ULONG v19; // [rsp+90h] [rbp+8h] BYREF
  __int64 (__fastcall *v20)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // [rsp+98h] [rbp+10h]
  ULONG v21; // [rsp+A0h] [rbp+18h]
  BOOLEAN v22; // [rsp+A8h] [rbp+20h]

  v22 = WriteToDevice;
  v21 = PhysicalMapRegister;
  v6 = *((_QWORD *)MiniportAdapterHandle + 63);
  v7 = 0;
  v9 = (char *)Buffer->StartVa + Buffer->ByteOffset;
  ByteCount = Buffer->ByteCount;
  v11 = PhysicalMapRegister;
  v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL)
                                                                                 + 64LL);
  v20 = v12;
  if ( ByteCount )
  {
    v13 = WriteToDevice;
    v14 = 2LL * PhysicalMapRegister;
    do
    {
      v19 = ByteCount;
      LOBYTE(v18) = v13;
      v15 = v7;
      v16.QuadPart = v12(*(_QWORD *)(v6 + 24), Buffer, *(_QWORD *)(*(_QWORD *)(v6 + 136) + 8 * v14), v9, &v19, v18);
      v17 = PhysicalAddressArray;
      ++v7;
      PhysicalAddressArray[v15].PhysicalAddress = v16;
      v16.LowPart = v19;
      v9 += v19;
      v17[v15].Length = v19;
      ByteCount -= v16.LowPart;
      v12 = v20;
    }
    while ( ByteCount );
    v11 = v21;
    WriteToDevice = v22;
  }
  *(_BYTE *)(*(_QWORD *)(v6 + 136) + 16LL * v11 + 8) = WriteToDevice;
  *ArraySize = v7;
}
