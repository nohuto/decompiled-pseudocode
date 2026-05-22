/*
 * XREFs of ??1?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180077A90
 * Callers:
 *     ??1WGIRawInputProvider@@UEAA@XZ @ 0x180076634 (--1WGIRawInputProvider@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800779D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<WGIController>>::~vector<Microsoft::WRL::ComPtr<WGIController>>(
        __int64 a1,
        __int64 a2)
{
  volatile signed __int64 **v2; // rbx
  volatile signed __int64 **v4; // rsi
  volatile signed __int64 *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v2 = *(volatile signed __int64 ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(volatile signed __int64 ***)(a1 + 8);
    if ( v2 != v4 )
    {
      do
      {
        v5 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v5);
        }
        ++v2;
      }
      while ( v2 != v4 );
      v2 = *(volatile signed __int64 ***)a1;
    }
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3;
    if ( v6 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v6 < 0x1000 )
      {
LABEL_13:
        operator delete(v2);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v2 & 0x1F) == 0 )
      {
        v7 = (unsigned __int64)*(v2 - 1);
        if ( v7 < (unsigned __int64)v2 && (unsigned __int64)v2 - v7 - 8 <= 0x1F )
        {
          v2 = (volatile signed __int64 **)*(v2 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL, a2);
    JUMPOUT(0x180077B44LL);
  }
}
