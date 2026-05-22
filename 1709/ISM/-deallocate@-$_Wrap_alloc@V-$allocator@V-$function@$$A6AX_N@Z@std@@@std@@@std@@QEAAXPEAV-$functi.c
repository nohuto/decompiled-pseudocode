/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@QEAAXPEAV?$function@$$A6AX_N@Z@2@_K@Z @ 0x1800080B8
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::emplace_back_std::function_void___cdecl(bool)__&___ptr64__::_1_::catch$136 @ 0x1800CC7F0 (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_1800CC7F0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::function<void (bool)>>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x3FFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( a3 << 6 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) == 0 )
    {
      v3 = *(a2 - 1);
      if ( v3 < (unsigned __int64)a2 && (unsigned __int64)a2 - v3 - 8 <= 0x1F )
      {
        a2 = (_QWORD *)*(a2 - 1);
        goto LABEL_7;
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1);
    JUMPOUT(0x180008108LL);
  }
LABEL_7:
  operator delete(a2);
}
