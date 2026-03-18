/*
 * XREFs of ?CheckForBufferedDescendant@CManipulationManager@@AEBA_NPEAVCManipulationFrame@@K@Z @ 0x18004DEC8
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1800CFDF0 (-RouteFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x180134EF4 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x180135308 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 */

bool __fastcall CManipulationManager::CheckForBufferedDescendant(
        CManipulationManager *this,
        struct CManipulationFrame *a2,
        unsigned int a3)
{
  unsigned int v4; // r13d
  int v5; // ebx
  bool v6; // r15
  unsigned int v7; // edi
  CManipulationManager *v8; // rdx
  __int64 v10; // rcx
  char *v11; // r12
  __int64 *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  char v15; // si
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h] BYREF
  __int64 i; // [rsp+30h] [rbp-18h]
  __int64 v22; // [rsp+98h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+58h]
  __int64 v24; // [rsp+A8h] [rbp+60h] BYREF

  v23 = a3;
  v4 = a3;
  v5 = 0;
  v6 = 0;
  LODWORD(v22) = 0;
  v7 = 0;
  v8 = this;
  for ( i = *((_QWORD *)a2 + 19 * a3 + 15); v7 < *((_DWORD *)a2 + 4); ++v7 )
  {
    if ( v6 )
      break;
    v22 = 0LL;
    v24 = 0LL;
    v10 = 152LL * v7;
    v11 = (char *)a2 + v10;
    if ( v7 == v4 || *(_QWORD *)((char *)a2 + v10 + 120) != -1LL )
      goto LABEL_17;
    v5 |= 1u;
    v12 = (__int64 *)CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
                       (char *)v8 + 120,
                       &v19,
                       v11 + 100);
    v13 = 0LL;
    if ( &v18 != v12 )
    {
      v13 = *v12;
      *v12 = 0LL;
    }
    v18 = 0LL;
    v24 = v13;
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v18);
    if ( v13
      && (v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 24LL))(v13, *((unsigned int *)v11 + 25)),
          *(_QWORD *)Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v22, v14)) )
    {
      v15 = 0;
    }
    else
    {
LABEL_17:
      v15 = 1;
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v19);
    }
    if ( v15 )
    {
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v22);
    }
    else
    {
      v16 = i;
      while ( v22 && !v6 )
      {
        v6 = (*(__int64 (**)(void))(*(_QWORD *)v22 + 64LL))() == v16;
        v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 88LL))(v22);
        Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v22, v17);
      }
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(&v22);
      v4 = v23;
    }
    v8 = this;
  }
  return v6;
}
