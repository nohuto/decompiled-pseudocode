/*
 * XREFs of ?NdisMTcpOffloadReceiveIndicate@@YAHPEAXPEAU_NET_BUFFER_LIST@@HPEAK@Z @ 0x1C0067070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ?ndisNumDataBytesInNblChain@@YA_KPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0067190 (-ndisNumDataBytesInNblChain@@YA_KPEAU_NET_BUFFER_LIST@@@Z.c)
 */

__int64 __fastcall NdisMTcpOffloadReceiveIndicate(
        __int64 *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v4; // rbp
  __int64 v9; // rax
  int v10; // r11d
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int Number; // r10d

  v4 = *a1;
  v9 = *(_QWORD *)(*a1 + 16);
  v10 = *(_DWORD *)(v9 + 48);
  v11 = *(_QWORD *)(v9 + 40);
  if ( (v10 & 0x8000) != 0 )
  {
    v12 = v11 + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v12 + 248);
  }
  if ( (v10 & 0x20000) != 0 )
  {
    v13 = ndisNumDataBytesInNblChain(a2);
    if ( Number == -1 )
      Number = KeGetPcr()->Prcb.Number;
    *(_QWORD *)(ndisPcwOffsetToPerCpuData + v11 + ndisPcwPerCpuDataStride * Number + 264) += v13;
  }
  return (*(__int64 (__fastcall **)(__int64 *, struct _NET_BUFFER_LIST *, _QWORD, unsigned int *))(v4 + 672))(
           a1,
           a2,
           a3,
           a4);
}
