/*
 * XREFs of ControllerAllocateUncachedExtension @ 0x1C00013F0
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001590 (NVMeHwFindAdapter.c)
 * Callees:
 *     memset @ 0x1C0014380 (memset.c)
 */

char __fastcall ControllerAllocateUncachedExtension(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  void *UncachedExtension; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 PhysicalAddress; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  int v20; // [rsp+30h] [rbp+8h] BYREF

  v20 = 0;
  v3 = *(_BYTE *)(a1 + 16) != 0 ? 40960 : 69632;
  UncachedExtension = (void *)StorPortGetUncachedExtension(a1, a2, v3);
  *(_QWORD *)(a1 + 1128) = UncachedExtension;
  if ( UncachedExtension )
  {
    memset(UncachedExtension, 0, 4LL * (v3 >> 2));
    v5 = *(_QWORD *)(a1 + 1128);
    if ( *(_BYTE *)(a1 + 16) )
    {
      v5 = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(a1 + 1128) = v5;
    }
    *(_QWORD *)(a1 + 1112) = v5;
    *(_QWORD *)(a1 + 1120) = StorPortGetPhysicalAddress(a1, 0LL, v5, &v20);
    v6 = *(_QWORD *)(a1 + 1128) + 4096LL;
    v7 = *(_BYTE *)(a1 + 16) == 0;
    *(_QWORD *)(a1 + 688) = v6;
    v8 = v6 + 0x2000;
    *(_QWORD *)(a1 + 1128) = v6 + 0x2000;
    if ( v7 )
    {
      v9 = (_QWORD *)(a1 + 792);
      v10 = 4LL;
      do
      {
        *v9 = *(_QWORD *)(a1 + 1128);
        v9 += 13;
        v8 = *(_QWORD *)(a1 + 1128) + 0x2000LL;
        *(_QWORD *)(a1 + 1128) = v8;
        --v10;
      }
      while ( v10 );
    }
    *(_QWORD *)(a1 + 1208) = v8;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, v8, &v20);
    v12 = *(_QWORD *)(a1 + 1128) + 4096LL;
    *(_QWORD *)(a1 + 1216) = PhysicalAddress;
    v13 = (unsigned __int64)*(unsigned __int16 *)(a1 + 236) << 6;
    *(_QWORD *)(a1 + 248) = v12;
    v14 = v13 + v12;
    *(_QWORD *)(a1 + 384) = v14;
    v15 = v14 + 4096;
    v7 = *(_BYTE *)(a1 + 16) == 0;
    *(_QWORD *)(a1 + 1128) = v15;
    if ( !v7 )
    {
      v16 = v15;
      v17 = v15 + 4096;
      v18 = v15 + 0x2000;
      *(_QWORD *)(a1 + 1128) = v18;
      *(_QWORD *)(a1 + 560) = v18 - 168;
      *(_QWORD *)(a1 + 552) = v18 - 304;
      *(_QWORD *)(v18 - 304) = v16;
      **(_QWORD **)(a1 + 560) = v17;
    }
    LOBYTE(UncachedExtension) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 1;
  }
  return (char)UncachedExtension;
}
