/*
 * XREFs of ?RemoveAllShadows@CProjectedShadowCaster@@QEAAXXZ @ 0x1801A0B80
 * Callers:
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x18019F964 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RemoveShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z @ 0x1801A0C3C (-RemoveShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z.c)
 */

void __fastcall CProjectedShadowCaster::RemoveAllShadows(CProjectedShadowCaster *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rsi
  CProjectedShadowReceiver **v6; // rbx
  __int64 *v7; // rbx
  __int64 v8; // rcx
  CProjectedShadowReceiver **v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 9);
  v3 = ((__int64)v1 - *((_QWORD *)this + 8)) >> 3;
  v4 = (int)v3;
  if ( (int)v3 > 0 )
  {
    v5 = 0LL;
    do
    {
      v9 = *(CProjectedShadowReceiver ***)(*((_QWORD *)this + 8) + 8 * v5);
      v6 = v9;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v9);
      CProjectedShadowReceiver::RemoveShadow(v6[10], (struct CProjectedShadow *)v6);
      if ( v6 )
        (*((void (__fastcall **)(CProjectedShadowReceiver **))*v6 + 2))(v6);
      ++v5;
    }
    while ( v5 < v4 );
    v1 = (__int64 *)*((_QWORD *)this + 9);
  }
  v7 = (__int64 *)*((_QWORD *)this + 8);
  if ( v7 != v1 )
  {
    do
    {
      v8 = *v7;
      if ( *v7 )
      {
        *v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      ++v7;
    }
    while ( v7 != v1 );
    v7 = (__int64 *)*((_QWORD *)this + 8);
  }
  *((_QWORD *)this + 9) = v7;
}
