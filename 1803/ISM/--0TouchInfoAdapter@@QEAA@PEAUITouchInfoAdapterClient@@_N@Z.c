/*
 * XREFs of ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x1800DF41C
 * Callers:
 *     ?Initialize@EdgyProcessorTarget@@IEAAJUtagMsgRoutingInfo@@PEAX@Z @ 0x1800B3864 (-Initialize@EdgyProcessorTarget@@IEAAJUtagMsgRoutingInfo@@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

TouchInfoAdapter *__fastcall TouchInfoAdapter::TouchInfoAdapter(
        TouchInfoAdapter *this,
        struct ITouchInfoAdapterClient *a2)
{
  _DWORD *v2; // rdi
  _DWORD *v4; // rsi
  __int64 v6; // rcx
  TouchInfoAdapter *result; // rax

  v2 = (_DWORD *)((char *)this + 36);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  v4 = (_DWORD *)((char *)this + 116);
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &TouchInfoAdapter::`vftable'{for `ISessionBasedPointerDeviceArbitrationClient'};
  *((_QWORD *)this + 1) = &TouchInfoAdapter::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 29) = 0xFFFF;
  memset_0((char *)this + 36, 0, 0x50uLL);
  v6 = 10LL;
  do
  {
    *v2 = *v4;
    v2 += 2;
    --v6;
  }
  while ( v6 );
  *((_QWORD *)this + 3) = a2;
  *((_BYTE *)this + 32) = 0;
  memset_0((char *)this + 128, 0, 0x248uLL);
  result = this;
  *((_BYTE *)this + 712) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_WORD *)this + 62) = 0;
  return result;
}
