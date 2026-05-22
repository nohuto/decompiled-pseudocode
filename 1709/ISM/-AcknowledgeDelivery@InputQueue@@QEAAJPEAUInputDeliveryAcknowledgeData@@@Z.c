/*
 * XREFs of ?AcknowledgeDelivery@InputQueue@@QEAAJPEAUInputDeliveryAcknowledgeData@@@Z @ 0x180082698
 * Callers:
 *     ?AcknowledgeDelivery@InputDeliveryServer@@UEAAJUInputDeliveryAcknowledgeData@@@Z @ 0x18007F890 (-AcknowledgeDelivery@InputDeliveryServer@@UEAAJUInputDeliveryAcknowledgeData@@@Z.c)
 *     ??_GInputAcknowledge@@EEAAPEAXI@Z @ 0x1800828D0 (--_GInputAcknowledge@@EEAAPEAXI@Z.c)
 *     ?OnAcknowledgeTimeoutStatic@InputAcknowledge@@SAJPEAX@Z @ 0x180082DE0 (-OnAcknowledgeTimeoutStatic@InputAcknowledge@@SAJPEAX@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnMessage@InputQueue@@QEAAJPEAUInputQueueMessage@@_K@Z @ 0x1800824D4 (-OnMessage@InputQueue@@QEAAJPEAUInputQueueMessage@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputQueue::AcknowledgeDelivery(
        InputQueue *this,
        struct InputDeliveryAcknowledgeData *a2,
        __int64 a3,
        const char *a4)
{
  _DWORD *v6; // rcx
  const char *v7; // r9
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (_DWORD *)*((_QWORD *)this + 11);
  if ( v6 == *((_DWORD **)this + 12) )
    goto LABEL_14;
  do
  {
    if ( *v6 == *(_DWORD *)a2 )
      break;
    ++v6;
  }
  while ( v6 != *((_DWORD **)this + 12) );
  if ( v6 == *((_DWORD **)this + 12) )
  {
LABEL_14:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x133,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
      a4);
    __debugbreak();
  }
  memmove(v6, v6 + 1, *((_QWORD *)this + 12) - (_QWORD)(v6 + 1));
  *((_QWORD *)this + 12) -= 4LL;
  if ( *((_DWORD *)a2 + 1) == 4 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 40LL))(
      *((_QWORD *)this + 6),
      *(unsigned int *)a2);
  if ( *((_QWORD *)this + 11) == *((_QWORD *)this + 12) )
  {
    if ( *((_BYTE *)this + 120) )
    {
      v8 = InputQueue::OnMessage((void **)this, *((struct InputQueueMessage **)this + 14), *((_QWORD *)this + 16), v7);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xB5,
          (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
      *((_BYTE *)this + 120) = 0;
      *((_QWORD *)this + 16) = 0LL;
    }
    if ( *((_BYTE *)this + 24) )
    {
      v9 = *((_QWORD *)this + 10);
      *((_BYTE *)this + 24) = 0;
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 88LL))(v9, 0LL);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xE2,
          (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputqueue.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
    }
  }
  return 0LL;
}
