/*
 * XREFs of ??$AsWeak@UIIconLoaderInternal@@@WRL@Microsoft@@YAJPEAUIIconLoaderInternal@@PEAVWeakRef@01@@Z @ 0x180287C5C
 * Callers:
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x180288AAC (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800F5C4C (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800F5C78 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIWeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F5CB4 (--4-$ComPtr@UIWeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<IIconLoaderInternal>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int v4; // ebx
  __int64 *v5; // rax
  __int64 v6; // rcx
  void (*v7)(void); // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+20h] BYREF
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF

  v2 = *a1;
  v11 = 0LL;
  v4 = (*v2)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v11);
  if ( v4 >= 0 )
  {
    v10 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
    if ( v4 >= 0 )
    {
      v5 = Microsoft::WRL::WeakRef::WeakRef(&v12, &v10);
      Microsoft::WRL::ComPtr<IWeakReference>::operator=(a2, (char *)v5);
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v12);
      v4 = 0;
    }
    v6 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
      if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
          v6,
          (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
      else
        v7();
    }
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v4;
}
