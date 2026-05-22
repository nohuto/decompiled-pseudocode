/*
 * XREFs of ?deallocate@?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@QEAAXQEAV?$function@$$A6AX_N@Z@2@_K@Z @ 0x180008048
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::emplace_back_std::function_void___cdecl(bool)__&___ptr64__::_1_::catch$132 @ 0x1800E366D (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_1800E366D.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::function<void (bool)>>::deallocate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x3FFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( a3 << 6 >= 0x1000 )
  {
    if ( (a2 & 0x1F) == 0 )
    {
      v3 = *(_QWORD *)(a2 - 8);
      if ( v3 < a2 )
      {
        a2 = a2 - v3 - 8;
        if ( a2 <= 0x1F )
        {
          a2 = v3;
          goto LABEL_7;
        }
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    JUMPOUT(0x180008098LL);
  }
LABEL_7:
  operator delete((void *)a2);
}
