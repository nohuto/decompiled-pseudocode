/*
 * XREFs of ??4?$ComPtr@UIWeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F5CB4
 * Callers:
 *     ??$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z @ 0x180287C5C (--$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IWeakReference>::operator=(__int64 *a1, char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  void (*v5)(void); // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v3 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        v4,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
    else
      v5();
  }
  return a1;
}
