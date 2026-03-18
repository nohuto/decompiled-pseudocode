/*
 * XREFs of ?CreateShadow@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowReceiver@@PEAVCProjectedShadowScene@@@Z @ 0x18019FAC4
 * Callers:
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x1801A1F5C (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWS.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$emplace_back@AEBV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@Z @ 0x18019F7F4 (--$emplace_back@AEBV-$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCProjectedS.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x180211550 (--2CBspNode@@SAPEAX_K@Z.c)
 */

void __fastcall CProjectedShadowCaster::CreateShadow(
        CProjectedShadowCaster *this,
        struct CProjectedShadowReceiver *a2,
        struct CProjectedShadowScene *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v6 = CBspNode::operator new((unsigned __int64)this);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = *((_QWORD *)this + 2);
    *((_DWORD *)v6 + 2) = 0;
    v6[3] = 0LL;
    v6[5] = 0LL;
    *((_DWORD *)v6 + 8) = 0;
    v6[8] = 0LL;
    *v6 = &CProjectedShadow::`vftable'{for `CContent'};
    v6[7] = &CProjectedShadow::`vftable'{for `IVisualListenerInfoProvider'};
    v6[12] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = v7;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v8);
  v7[9] = this;
  v7[11] = a3;
  std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::emplace_back<Microsoft::WRL::ComPtr<CProjectedShadow> const &>(
    (_QWORD *)this + 8,
    (__int64 *)&v8);
  v8 = v7;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v8);
  v7[10] = a2;
  std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::emplace_back<Microsoft::WRL::ComPtr<CProjectedShadow> const &>(
    (_QWORD *)a2 + 8,
    (__int64 *)&v8);
  (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
}
