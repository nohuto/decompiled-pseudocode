/*
 * XREFs of ?RemoveShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z @ 0x1801A0C3C
 * Callers:
 *     ?RemoveAllShadows@CProjectedShadowCaster@@QEAAXXZ @ 0x1801A0B80 (-RemoveAllShadows@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?RemoveShadowsFromScene@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowScene@@@Z @ 0x1801A0CAC (-RemoveShadowsFromScene@CProjectedShadowCaster@@QEAAXPEAVCProjectedShadowScene@@@Z.c)
 *     ?RemoveAllShadows@CProjectedShadowReceiver@@QEAAXXZ @ 0x1801A19E4 (-RemoveAllShadows@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?RemoveShadowsFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowScene@@@Z @ 0x1801A1AEC (-RemoveShadowsFromScene@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadowScene@@@Z.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x1801B3C98 (--1CProjectedShadow@@MEAA@XZ.c)
 * Callees:
 *     ?erase@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1801A1070 (-erase@-$vector@V-$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCProjectedS.c)
 */

void __fastcall CProjectedShadowReceiver::RemoveShadow(CProjectedShadowReceiver *this, struct CProjectedShadow *a2)
{
  _QWORD *v2; // r14
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rsi
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 64);
  v4 = ((__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) >> 3) - 1;
  if ( v4 >= 0 )
  {
    v5 = 8LL * v4;
    v6 = v5;
    do
    {
      if ( *(struct CProjectedShadow **)(v5 + *v2) == a2 )
        std::vector<Microsoft::WRL::ComPtr<CProjectedShadow>>::erase(v2, &v7, v6 + *v2);
      v6 -= 8LL;
      v5 -= 8LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
}
