/*
 * XREFs of ?OnMessage@InputQueue@@QEAAJPEAUInputQueueMessage@@_K@Z @ 0x1800824D4
 * Callers:
 *     ?AcknowledgeDelivery@InputQueue@@QEAAJPEAUInputDeliveryAcknowledgeData@@@Z @ 0x180082698 (-AcknowledgeDelivery@InputQueue@@QEAAJPEAUInputDeliveryAcknowledgeData@@@Z.c)
 *     ?OnItemMessage@InputQueueConversationHost@InputQueue@@UEAAJIIPEBX0I@Z @ 0x1800829C0 (-OnItemMessage@InputQueueConversationHost@InputQueue@@UEAAJIIPEBX0I@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBI@?$vector@IV?$allocator@I@std@@@std@@QEAAXAEBI@Z @ 0x18002B8F4 (--$emplace_back@AEBI@-$vector@IV-$allocator@I@std@@@std@@QEAAXAEBI@Z.c)
 *     ??$MakeAndInitialize@VInputAcknowledge@@V1@AEAIPEAVInputQueue@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@012@AEAI$$QEAPEAVInputQueue@@@Z @ 0x1800827AC (--$MakeAndInitialize@VInputAcknowledge@@V1@AEAIPEAVInputQueue@@@Details@WRL@Microsoft@@YAJV-$Com.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputQueue::OnMessage(void **this, struct InputQueueMessage *a2, unsigned int a3, const char *a4)
{
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF
  InputQueue *v16; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 != 1 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x11D,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
        a4);
      __debugbreak();
    }
    v15 = 0LL;
    v16 = (InputQueue *)this;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<InputAcknowledge,InputAcknowledge,unsigned int &,InputQueue *>(
           &v15,
           a2,
           &v16);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xF7,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    std::vector<unsigned int>::emplace_back<unsigned int const &>((__int64)(this + 11), &InputQueue::s_nextEventId);
    v7 = (*(__int64 (__fastcall **)(void *, char *, __int64))(*(_QWORD *)this[6] + 24LL))(this[6], (char *)a2 + 8, v15);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xFD,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    ++InputQueue::s_nextEventId;
    v8 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else if ( this[11] == this[12] )
  {
    v12 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)this[6] + 32LL))(
            this[6],
            *((unsigned int *)this + 7),
            *((unsigned int *)a2 + 1),
            (char *)a2 + 32,
            *((unsigned int *)a2 + 2));
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x116,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
  }
  else
  {
    if ( *((_BYTE *)this + 120) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xC1,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
        a4);
      __debugbreak();
    }
    v9 = a3;
    memcpy_0(this[14], a2, a3);
    *((_BYTE *)this + 120) = 1;
    this[16] = (void *)v9;
    if ( !*((_BYTE *)this + 24) )
    {
      *((_BYTE *)this + 24) = 1;
      LOBYTE(v10) = 1;
      v11 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)this[10] + 88LL))(this[10], v10);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xD6,
          (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
    }
  }
  return 0LL;
}
