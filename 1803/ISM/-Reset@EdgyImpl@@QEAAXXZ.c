/*
 * XREFs of ?Reset@EdgyImpl@@QEAAXXZ @ 0x1800B45EC
 * Callers:
 *     ??_EEdgyProcessor@@MEAAPEAXI@Z @ 0x1800B2E0C (--_EEdgyProcessor@@MEAAPEAXI@Z.c)
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800B3090 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800B3D84 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1800B3F20 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800668E8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall EdgyImpl::Reset(EdgyImpl *this)
{
  void *v1; // rbx
  unsigned __int64 **v3; // rdi
  unsigned __int64 *v4; // rbx
  unsigned __int64 *v5; // rbp
  signed __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
  {
    std::wstring::_Tidy_deallocate(*((unsigned __int64 **)this + 1));
    operator delete(v1);
  }
  *((_QWORD *)this + 1) = 0LL;
  v3 = *(unsigned __int64 ***)this;
  if ( *(_QWORD *)this )
  {
    v4 = *v3;
    if ( !*v3 )
    {
LABEL_15:
      operator delete(v3);
      *(_QWORD *)this = 0LL;
      goto LABEL_16;
    }
    v5 = v3[1];
    if ( v4 != v5 )
    {
      do
      {
        std::wstring::_Tidy_deallocate(v4);
        v4 += 5;
      }
      while ( v4 != v5 );
      v4 = *v3;
    }
    v6 = (char *)v3[2] - (char *)v4;
    v7 = v6 / 40;
    if ( (unsigned __int64)(v6 / 40) <= 0x666666666666666LL )
    {
      if ( (unsigned __int64)(40 * v7) < 0x1000 )
      {
LABEL_14:
        operator delete(v4);
        *v3 = 0LL;
        v3[1] = 0LL;
        v3[2] = 0LL;
        goto LABEL_15;
      }
      if ( ((unsigned __int8)v4 & 0x1F) == 0 )
      {
        v8 = *(v4 - 1);
        if ( v8 < (unsigned __int64)v4 && (unsigned __int64)v4 - v8 - 8 <= 0x1F )
        {
          v4 = (unsigned __int64 *)*(v4 - 1);
          goto LABEL_14;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v6, v7);
    JUMPOUT(0x1800B4700LL);
  }
LABEL_16:
  *((_DWORD *)this + 4) = 0;
}
