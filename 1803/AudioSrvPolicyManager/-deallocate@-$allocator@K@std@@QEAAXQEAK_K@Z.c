/*
 * XREFs of ?deallocate@?$allocator@K@std@@QEAAXQEAK_K@Z @ 0x18001964C
 * Callers:
 *     _std::vector_unsigned_long_std::allocator_unsigned_long___::emplace_back_unsigned_long_const_&___ptr64__::_1_::catch$100 @ 0x180038054 (_std--vector_unsigned_long_std--allocator_unsigned_long___--emplace_back_unsigned_long_const_-__.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall std::allocator<unsigned long>::deallocate(__int64 a1, void *a2, unsigned __int64 a3, __int64 a4)
{
  void *v4; // rbx
  unsigned __int64 v5; // rax
  HANDLE ProcessHeap; // rax

  v4 = a2;
  if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 4 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) == 0 )
    {
      v5 = *((_QWORD *)a2 - 1);
      if ( v5 < (unsigned __int64)a2 && (unsigned __int64)a2 - v5 - 8 <= 0x1F )
      {
        v4 = (void *)*((_QWORD *)a2 - 1);
        goto LABEL_7;
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, a4);
    JUMPOUT(0x1800196B1LL);
  }
LABEL_7:
  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, v4);
}
