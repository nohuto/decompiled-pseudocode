/*
 * XREFs of ?EmitUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0022984
 * Callers:
 *     ?EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0022C00 (-EmitUpdateCommands@CInteractionConfigurationGroup@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CInteractionConfigurationGroup::EmitUpdateTouchpadConfiguration(
        DirectComposition::CInteractionConfigurationGroup *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  char *v8; // r9
  unsigned int v9; // r8d
  _QWORD *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  void *v14; // [rsp+50h] [rbp+18h] BYREF

  while ( (*((_DWORD *)this + 3) & 8) != 0 || *((_DWORD *)this + 14) < *((_DWORD *)this + 12) )
  {
    v5 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 15) + 40LL);
    v13 = v5;
    if ( v5 < 0x24 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v13) )
        return *((_DWORD *)this + 14) == *((_DWORD *)this + 12);
      v5 = v13;
    }
    v6 = (unsigned int)(*((_DWORD *)this + 12) - *((_DWORD *)this + 14));
    v7 = (v5 - 24) / 0xC;
    if ( v6 >= v7 )
      LODWORD(v6) = v7;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(12 * (v6 + 2)), &v14);
    v8 = (char *)v14;
    *(_DWORD *)v14 = 12 * (v6 + 2);
    *(_QWORD *)(v8 + 4) = 0LL;
    *(_QWORD *)(v8 + 12) = 0LL;
    *((_DWORD *)v8 + 5) = 0;
    *((_DWORD *)v8 + 1) = 186;
    *((_DWORD *)v8 + 2) = *(_DWORD *)(*(_QWORD *)this + 24LL);
    *((_DWORD *)v8 + 3) = v6;
    *((_DWORD *)v8 + 4) = *((_DWORD *)this + 2);
    *((_DWORD *)v8 + 5) = 2;
    if ( *((_DWORD *)this + 12) )
    {
      v9 = 0;
      if ( (_DWORD)v6 )
      {
        v10 = v8 + 24;
        do
        {
          v11 = v9 + *((_DWORD *)this + 14);
          ++v9;
          v12 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11);
          *v10 = *(_QWORD *)v12;
          v10 = (_QWORD *)((char *)v10 + 12);
          *((_DWORD *)v10 - 1) = *(_DWORD *)(v12 + 8);
        }
        while ( v9 < (unsigned int)v6 );
      }
    }
    *((_DWORD *)this + 3) &= ~8u;
    *((_DWORD *)this + 14) += v6;
  }
  return *((_DWORD *)this + 14) == *((_DWORD *)this + 12);
}
