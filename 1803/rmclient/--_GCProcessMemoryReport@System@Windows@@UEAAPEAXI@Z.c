/*
 * XREFs of ??_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x18000ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006ABC (--3@YAXPEAX@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@System@Windows@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000AB3C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIProcessMemoryReport@Sy.c)
 */

Windows::System::CProcessMemoryReport *__fastcall Windows::System::CProcessMemoryReport::`scalar deleting destructor'(
        Windows::System::CProcessMemoryReport *this,
        char a2)
{
  *(_QWORD *)this = &Windows::System::CProcessMemoryReport::`vftable';
  *((_QWORD *)this + 1) = &Windows::System::CProcessMemoryReport::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::System::CProcessMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IProcessMemoryReport,IInspectable>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
