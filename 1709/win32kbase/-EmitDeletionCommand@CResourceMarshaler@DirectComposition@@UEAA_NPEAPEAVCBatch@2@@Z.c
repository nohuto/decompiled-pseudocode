/*
 * XREFs of ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002A190
 * Callers:
 *     ?EmitDeletionCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00931B0 (-EmitDeletionCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C0034A5C (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitDeletionCommand(
        DirectComposition::CResourceMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  struct DirectComposition::CBatch *v5; // r9
  char v6; // bl
  int v7; // ebp
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rdx
  void *v11; // rdx
  char *v12; // rcx
  void *v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)this + 16LL))(this);
  v5 = *a2;
  v6 = 0;
  v7 = v4;
  v8 = *((_QWORD *)*a2 + 15);
  v9 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(4096 - v9) >= 0x10
    && (v10 = *(_QWORD *)(v8 + 56), *(_QWORD *)(v8 + 40) = v9 + 16, (v11 = (void *)(v9 + v10)) != 0LL) )
  {
    v14 = v11;
    *((_QWORD *)v5 + 17) += 16LL;
  }
  else
  {
    if ( !DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
      return v6;
    DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x10uLL, &v14);
  }
  v12 = (char *)v14;
  v6 = 1;
  *(_DWORD *)v14 = 16;
  *(_QWORD *)(v12 + 4) = 0LL;
  *((_DWORD *)v12 + 3) = 0;
  *((_DWORD *)v12 + 1) = 37;
  *((_DWORD *)v12 + 2) = *((_DWORD *)this + 6);
  *((_DWORD *)v12 + 3) = v7;
  return v6;
}
