/*
 * XREFs of ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140016690
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140016620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 * Callees:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@UEAA@XZ @ 0x1400167E4 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001B954 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x14001BCA0 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x14001BF78 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

Microsoft::WRL::Details::EventTargetArray *__fastcall Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(
        Microsoft::WRL::Details::EventTargetArray *this,
        char a2)
{
  char *v4; // rcx
  char *v5; // rbx
  void *v6; // rcx

  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  v4 = (char *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = v4 - 8;
    `eh vector destructor iterator'(
      v4,
      8uLL,
      *((_QWORD *)v4 - 1),
      (void (*)(void *))Microsoft::WRL::ComPtr<IUnknown>::~ComPtr<IUnknown>);
    operator delete[](v5, 8LL * *(_QWORD *)v5 + 8);
  }
  operator delete(*((void **)this + 4));
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(this);
  if ( (a2 & 1) != 0 )
    operator delete(v6);
  return this;
}
