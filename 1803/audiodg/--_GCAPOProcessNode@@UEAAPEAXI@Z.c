/*
 * XREFs of ??_GCAPOProcessNode@@UEAAPEAXI@Z @ 0x14000D830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001B954 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
CAPOProcessNode *__fastcall CAPOProcessNode::`scalar deleting destructor'(CAPOProcessNode *this, char a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rdi
  __int64 (__fastcall *v7)(CAudioMediaType *); // rax
  volatile signed __int32 *v8; // rdi
  __int64 (__fastcall *v9)(CAudioMediaType *); // rax

  *(_QWORD *)this = &CAPOProcessNode::`vftable';
  v4 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = v4[5];
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    operator delete(v4);
  }
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CProcessNode::`vftable';
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v7 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        *(_QWORD *)v6 = &CAudioMediaType::`vftable';
        operator delete(*((void **)v6 + 2));
        *((_QWORD *)v6 + 2) = 0LL;
        operator delete((void *)v6);
      }
    }
    else
    {
      v7((CAudioMediaType *)v6);
    }
  }
  v8 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        *(_QWORD *)v8 = &CAudioMediaType::`vftable';
        operator delete(*((void **)v8 + 2));
        *((_QWORD *)v8 + 2) = 0LL;
        operator delete((void *)v8);
      }
    }
    else
    {
      v9(*((CAudioMediaType **)this + 1));
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
