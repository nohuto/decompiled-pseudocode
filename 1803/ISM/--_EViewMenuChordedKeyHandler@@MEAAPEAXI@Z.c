/*
 * XREFs of ??_EViewMenuChordedKeyHandler@@MEAAPEAXI@Z @ 0x180036BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXXZ @ 0x18002576C (-_Tidy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
ViewMenuChordedKeyHandler *__fastcall ViewMenuChordedKeyHandler::`vector deleting destructor'(
        ViewMenuChordedKeyHandler *this,
        char a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  ViewMenuChordedKeyHandler *v9; // rcx

  *(_QWORD *)this = &ViewMenuChordedKeyHandler::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
  std::vector<enum _Button>::_Tidy((unsigned __int64 *)this + 10);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    v6 = (__int64)(*((_QWORD *)this + 8) - v5) >> 2;
    if ( v6 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      if ( 4 * v6 < 0x1000 )
      {
LABEL_10:
        operator delete((void *)v5);
        *((_QWORD *)this + 6) = 0LL;
        *((_QWORD *)this + 7) = 0LL;
        *((_QWORD *)this + 8) = 0LL;
        goto LABEL_11;
      }
      if ( (v5 & 0x1F) == 0 )
      {
        v7 = *(_QWORD *)(v5 - 8);
        if ( v7 < v5 )
        {
          v5 = v5 - v7 - 8;
          if ( v5 <= 0x1F )
          {
            v5 = v7;
            goto LABEL_10;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v5, 0x3FFFFFFFFFFFFFFFLL);
    goto LABEL_17;
  }
LABEL_11:
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v9 = this;
    if ( (a2 & 4) == 0 )
    {
      free(this);
      return this;
    }
LABEL_17:
    operator delete(v9);
  }
  return this;
}
