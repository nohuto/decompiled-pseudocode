/*
 * XREFs of ??1CStreamProcessNode@@UEAA@XZ @ 0x1400020C8
 * Callers:
 *     ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x1400021E0 (--_GCStreamProcessNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000AF50 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x14001A220 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CStreamProcessNode::~CStreamProcessNode(CStreamProcessNode *this)
{
  _QWORD *v2; // rdi
  HandleSendReceiveServer *v3; // rcx
  void *(__fastcall *v4)(HandleSendReceiveServer *__hidden, unsigned int); // rax
  __int64 v5; // rcx
  CAudioMediaType *v6; // rcx
  unsigned int (__fastcall *v7)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v8; // rcx
  unsigned int (__fastcall *v9)(CAudioMediaType *__hidden); // rax
  CAudioMediaType *v10; // rcx
  unsigned int (__fastcall *v11)(CAudioMediaType *__hidden); // rax

  *(_QWORD *)this = &CStreamProcessNode::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = (HandleSendReceiveServer *)v2[2];
    if ( v3 )
    {
      v4 = **(void *(__fastcall ***)(HandleSendReceiveServer *__hidden, unsigned int))v3;
      if ( v4 == HandleSendReceiveServer::`vector deleting destructor' )
        HandleSendReceiveServer::`vector deleting destructor'(v3, 1u);
      else
        v4(v3, 1u);
    }
    v2[2] = 0LL;
    v5 = v2[3];
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( *v2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
    operator delete(v2);
  }
  *((_QWORD *)this + 4) = 0LL;
  v6 = (CAudioMediaType *)*((_QWORD *)this + 6);
  if ( v6 )
  {
    v7 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v6 + 16LL);
    if ( v7 == CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v7(v6);
  }
  *(_QWORD *)this = &CProcessNode::`vftable';
  v8 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v8 )
  {
    v9 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v8 + 16LL);
    if ( v9 == CAudioMediaType::Release )
      CAudioMediaType::Release(v8);
    else
      v9(v8);
  }
  v10 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v10 )
  {
    v11 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v10 + 16LL);
    if ( v11 == CAudioMediaType::Release )
      CAudioMediaType::Release(v10);
    else
      v11(v10);
  }
}
