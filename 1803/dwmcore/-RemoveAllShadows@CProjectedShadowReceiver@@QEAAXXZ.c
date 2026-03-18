/*
 * XREFs of ?RemoveAllShadows@CProjectedShadowReceiver@@QEAAXXZ @ 0x1801A19E4
 * Callers:
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x1801A112C (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RemoveShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z @ 0x1801A0C3C (-RemoveShadow@CProjectedShadowReceiver@@QEAAXPEAVCProjectedShadow@@@Z.c)
 */

void __fastcall CProjectedShadowReceiver::RemoveAllShadows(CProjectedShadowReceiver *this)
{
  char *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rbx
  char *v7; // rsi
  char *v8; // r14
  __int64 v9; // rbp
  char *v10; // rbx
  __int64 v11; // rcx
  char v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = (char *)this + 64;
  v3 = (__int64)(*((_QWORD *)this + 9) - *((_QWORD *)this + 8)) >> 3;
  v4 = (int)v3;
  if ( (int)v3 > 0 )
  {
    v5 = 0LL;
    do
    {
      v13 = *(_QWORD *)(*(_QWORD *)v1 + 8 * v5);
      v6 = v13;
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v13);
      CProjectedShadowReceiver::RemoveShadow(*(CProjectedShadowReceiver **)(v6 + 72), (struct CProjectedShadow *)v6);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v6 + 72));
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(*(_QWORD *)(v6 + 88) + 80LL));
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      ++v5;
    }
    while ( v5 < v4 );
  }
  if ( &v12 != v1 )
  {
    v7 = *(char **)v1;
    *(_QWORD *)v1 = 0LL;
    v8 = (char *)*((_QWORD *)v1 + 1);
    *((_QWORD *)v1 + 1) = 0LL;
    v9 = *((_QWORD *)v1 + 2);
    *((_QWORD *)v1 + 2) = 0LL;
    if ( v7 )
    {
      if ( v7 != v8 )
      {
        v10 = v7;
        do
        {
          v11 = *(_QWORD *)v10;
          if ( *(_QWORD *)v10 )
          {
            *(_QWORD *)v10 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
          v10 += 8;
        }
        while ( v10 != v8 );
      }
      std::_Deallocate(v7, (v9 - (__int64)v7) >> 3, 8uLL);
    }
  }
}
