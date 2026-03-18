/*
 * XREFs of ?EmitSourceModifiers@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0141F18
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0142020 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitSourceModifiers(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char v4; // al
  int v5; // edx
  char *v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rax
  int v10; // r8d
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rax
  int v14; // r8d
  __int64 v15; // rax
  void *v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) != 0 )
  {
    v4 = DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v17);
    v5 = 0;
    if ( v4 )
    {
      v6 = (char *)v17;
      *(_DWORD *)v17 = 32;
      *(_QWORD *)(v6 + 4) = 0LL;
      *(_QWORD *)(v6 + 12) = 0LL;
      *(_QWORD *)(v6 + 20) = 0LL;
      *((_DWORD *)v6 + 7) = 0;
      *((_DWORD *)v6 + 1) = 227;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
      v7 = *((_QWORD *)this + 6);
      if ( v7 )
        v8 = *(_DWORD *)(*(_QWORD *)(v7 + 16) + 24LL);
      else
        v8 = 0;
      *((_DWORD *)v6 + 3) = v8;
      v9 = *((_QWORD *)this + 7);
      if ( v9 )
        v10 = *(_DWORD *)(*(_QWORD *)(v9 + 16) + 24LL);
      else
        v10 = 0;
      *((_DWORD *)v6 + 4) = v10;
      v11 = *((_QWORD *)this + 8);
      if ( v11 )
        v12 = *(_DWORD *)(*(_QWORD *)(v11 + 16) + 24LL);
      else
        v12 = 0;
      *((_DWORD *)v6 + 5) = v12;
      v13 = *((_QWORD *)this + 9);
      if ( v13 )
        v14 = *(_DWORD *)(*(_QWORD *)(v13 + 16) + 24LL);
      else
        v14 = 0;
      *((_DWORD *)v6 + 6) = v14;
      v15 = *((_QWORD *)this + 10);
      if ( v15 )
        v5 = *(_DWORD *)(*(_QWORD *)(v15 + 16) + 24LL);
      *((_DWORD *)v6 + 7) = v5;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
