/*
 * XREFs of ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x140017BE0
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000D800 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140018390 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
CStreamProcessNode *__fastcall CStreamProcessNode::`scalar deleting destructor'(CStreamProcessNode *this, char a2)
{
  _QWORD *v4; // rdi
  HandleSendReceiveServer *v5; // rcx
  void *(__fastcall *v6)(HandleSendReceiveServer *__hidden, unsigned int); // rax
  __int64 v7; // rcx
  CAudioMediaType *v8; // rcx
  __int64 (__fastcall *v9)(CAudioMediaType *); // rax
  CAudioMediaType *v10; // rcx
  __int64 (__fastcall *v11)(CAudioMediaType *); // rax
  CAudioMediaType *v12; // rcx
  __int64 (__fastcall *v13)(CAudioMediaType *); // rax

  *(_QWORD *)this = &CStreamProcessNode::`vftable';
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = (HandleSendReceiveServer *)v4[2];
    if ( v5 )
    {
      v6 = **(void *(__fastcall ***)(HandleSendReceiveServer *__hidden, unsigned int))v5;
      if ( v6 == HandleSendReceiveServer::`vector deleting destructor' )
        HandleSendReceiveServer::`vector deleting destructor'(v5, 1u);
      else
        v6(v5, 1u);
    }
    v4[2] = 0LL;
    v7 = v4[3];
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( *v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
    operator delete(v4);
  }
  *((_QWORD *)this + 4) = 0LL;
  v8 = (CAudioMediaType *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == CAudioMediaType::Release )
      CAudioMediaType::Release(v8);
    else
      v9(v8);
  }
  *(_QWORD *)this = &CProcessNode::`vftable';
  v10 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v10 )
  {
    v11 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v10 + 16LL);
    if ( v11 == CAudioMediaType::Release )
      CAudioMediaType::Release(v10);
    else
      v11(v10);
  }
  v12 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v12 )
  {
    v13 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v12 + 16LL);
    if ( v13 == CAudioMediaType::Release )
      CAudioMediaType::Release(v12);
    else
      v13(v12);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
