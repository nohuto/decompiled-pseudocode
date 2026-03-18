/*
 * XREFs of ?RemoveShadowsFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowScene@@@Z @ 0x1801A1AEC
 * Callers:
 *     ?ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_CLEARRECEIVERS@@@Z @ 0x1801A216C (-ProcessClearReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADO.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RemoveShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z @ 0x1801A0C3C (-RemoveShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801A1070 (-erase@-$vector@V-$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCProjectedS.c)
 */

void __fastcall CProjectedShadowReceiver::RemoveShadowsFromScene(
        CProjectedShadowReceiver *this,
        struct CProjectedShadowScene *a2)
{
  _QWORD *v2; // r14
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // r15
  CProjectedShadowReceiver **v7; // rbx
  CProjectedShadowReceiver **v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v2 = (_QWORD *)((char *)this + 64);
  v4 = ((__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) >> 3) - 1;
  if ( v4 >= 0 )
  {
    v5 = 8LL * v4;
    v6 = v5;
    do
    {
      v8 = *(CProjectedShadowReceiver ***)(v5 + *v2);
      v7 = v8;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v8);
      if ( v7[11] == a2 )
      {
        CProjectedShadowReceiver::RemoveShadow(v7[9], (struct CProjectedShadow *)v7);
        std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::erase((__int64)v2, &v9, v6 + *v2);
      }
      if ( v7 )
        (*((void (__fastcall **)(CProjectedShadowReceiver **))*v7 + 2))(v7);
      v6 -= 8LL;
      v5 -= 8LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
}
