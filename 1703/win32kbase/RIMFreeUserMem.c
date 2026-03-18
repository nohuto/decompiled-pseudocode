/*
 * XREFs of RIMFreeUserMem @ 0x1C0105640
 * Callers:
 *     rimProcessInput @ 0x1C0099D80 (rimProcessInput.c)
 *     RIMFreeInputBuffer @ 0x1C01012C0 (RIMFreeInputBuffer.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMFreeUserMem(__int64 a1, void *a2)
{
  struct _RTL_AVL_TABLE *v2; // rbx
  _QWORD *v3; // rax
  void *v4; // rcx
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    BaseAddress = a2;
    v2 = (struct _RTL_AVL_TABLE *)(a1 + 856);
    Buffer[0] = a2;
    v3 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 856), Buffer);
    if ( v3 )
    {
      v4 = (void *)v3[2];
      RegionSize = v3[1];
      MmUnsecureVirtualMemory(v4);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      Buffer[0] = BaseAddress;
      RtlDeleteElementGenericTableAvl(v2, Buffer);
    }
  }
}
