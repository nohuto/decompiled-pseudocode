/*
 * XREFs of ?EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00194A0
 * Callers:
 *     ?EmitCreationCommand@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00046E0 (-EmitCreationCommand@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C000FFF4 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitCreationCommand(
        DirectComposition::CResourceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  DirectComposition::CBatchSharedMemoryPool **v2; // r8
  struct DirectComposition::CBatch *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r10
  void *v8; // r10
  char *v9; // rbx
  void *v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v5 = (*a2)[17];
  v6 = *((_QWORD *)v5 + 5);
  if ( (unsigned __int64)(4096 - v6) >= 0x10 )
  {
    v7 = *((_QWORD *)v5 + 7);
    *((_QWORD *)v5 + 5) = v6 + 16;
    v8 = (void *)(v6 + v7);
    if ( v8 )
    {
      v11 = v8;
      v2[19] = (DirectComposition::CBatchSharedMemoryPool *)((char *)v2[19] + 16);
LABEL_4:
      v9 = (char *)v11;
      *(_DWORD *)v11 = 16;
      *(_QWORD *)(v9 + 4) = 0LL;
      *((_DWORD *)v9 + 3) = 0;
      *((_DWORD *)v9 + 1) = 48;
      *((_DWORD *)v9 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v9 + 3) = (*(__int64 (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)this + 16LL))(this);
      return 1;
    }
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
  {
    DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x10uLL, &v11);
    goto LABEL_4;
  }
  return 0;
}
