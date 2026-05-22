/*
 * XREFs of ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180061518
 * Callers:
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x180014DF0 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z.c)
 *     ?StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z @ 0x18006411C (-StartGestureRecognition@DragNDropProcessor@@AEAAJUtagPOINT@@PEAUHMONITOR__@@K@Z.c)
 *     ?Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006AC80 (-Create@TouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Initialize@TapProcessor@@IEAAJXZ @ 0x1800B618C (-Initialize@TapProcessor@@IEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
PointerInfoAdapter *__fastcall PointerInfoAdapter::PointerInfoAdapter(
        PointerInfoAdapter *this,
        struct IPointerInfoAdapterClient *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &PointerInfoAdapter::`vftable'{for `IInputClient'};
  *((_QWORD *)this + 1) = &PointerInfoAdapter::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 12) = 0xFFFF;
  *((_QWORD *)this + 4) = operator new[](0x130uLL);
  v4 = 0LL;
  v5 = 2LL;
  do
  {
    *(_DWORD *)(v4 + *((_QWORD *)this + 4)) = *((_DWORD *)this + 12);
    v4 += 152LL;
    --v5;
  }
  while ( v5 );
  *((_DWORD *)this + 10) = 2;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 9) = operator new[](0x20uLL);
  v6 = 0LL;
  v7 = 2LL;
  do
  {
    *(_DWORD *)(v6 + *((_QWORD *)this + 9)) = *((_DWORD *)this + 22);
    v6 += 16LL;
    --v7;
  }
  while ( v7 );
  *((_DWORD *)this + 20) = 2;
  *((_DWORD *)this + 21) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 15) = 1;
  *((_DWORD *)this + 14) = 1;
  *((_BYTE *)this + 64) = 1;
  return this;
}
