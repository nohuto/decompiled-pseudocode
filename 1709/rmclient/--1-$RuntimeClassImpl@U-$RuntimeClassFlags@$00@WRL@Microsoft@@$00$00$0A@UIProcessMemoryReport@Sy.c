/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000B748
 * Callers:
 *     ??_E?$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000B8D0 (--_E-$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@@WRL@Microsoft@@UEAAPEAX.c)
 *     ??_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x18000B900 (--_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008120 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release((volatile signed __int32 *)(2 * v1));
  return result;
}
