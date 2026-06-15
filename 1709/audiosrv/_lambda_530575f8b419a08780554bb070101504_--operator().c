/*
 * XREFs of _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x1800924B0
 * Callers:
 *     ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180093460 (-ForEachStream@CBaseStreamGroupProxy@@UEAAXV-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C7C0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000CB4C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800919B8 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800921FC (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_530575f8b419a08780554bb070101504_::operator()(
        __int64 a1,
        Microsoft::WRL::Details::WeakReferenceImpl **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax
  Microsoft::WRL::Details::WeakReferenceImpl *v7; // rcx
  _BYTE v8[64]; // [rsp+30h] [rbp-40h] BYREF
  CProcessSubmixProxy *v9; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+38h] BYREF

  v9 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(a2, (struct IInspectable **)&v9) >= 0 && v9 )
  {
    v10 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v9, &v10) >= 0 )
    {
      v4 = v10;
      v5 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v8, a1);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 184LL))(v4, v5);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v10);
  }
  result = Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v9);
  v7 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    if ( *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL) == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)v7);
    else
      return (*(__int64 (__fastcall **)(Microsoft::WRL::Details::WeakReferenceImpl *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
