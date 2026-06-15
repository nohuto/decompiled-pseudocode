/*
 * XREFs of ??_GCAPOProcessNode@@UEAAPEAXI@Z @ 0x14000E4D0
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400081D0 (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

CAPOProcessNode *__fastcall CAPOProcessNode::`scalar deleting destructor'(CAPOProcessNode *this, char a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rcx
  volatile signed __int32 *v6; // rdi
  __int64 (__fastcall *v7)(CAudioMediaType *); // rax
  volatile signed __int32 *v8; // rdi
  __int64 (__fastcall *v9)(CAudioMediaType *); // rax
  void *v11; // rcx
  void *v12; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 4);
  *(_QWORD *)this = &CAPOProcessNode::`vftable';
  if ( v2 )
  {
    v5 = v2[5];
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    operator delete(v2);
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
        v11 = (void *)*((_QWORD *)v6 + 2);
        *(_QWORD *)v6 = &CAudioMediaType::`vftable';
        operator delete(v11);
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
        v12 = (void *)*((_QWORD *)v8 + 2);
        *(_QWORD *)v8 = &CAudioMediaType::`vftable';
        operator delete(v12);
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
