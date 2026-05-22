/*
 * XREFs of ??$_Resetp@E@?$shared_ptr@E@std@@AEAAXPEAE@Z @ 0x1800291AC
 * Callers:
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x1800281E0 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::shared_ptr<unsigned char>::_Resetp<unsigned char>(_QWORD *a1, void *a2)
{
  _DWORD *v4; // rbx
  unsigned __int64 result; // rax
  volatile signed __int32 *v6; // rdi

  try
  {
    v4 = operator new(0x18uLL);
    v4[2] = 1;
    v4[3] = 1;
    result = (unsigned __int64)&std::_Ref_count<unsigned char>::`vftable';
    *(_QWORD *)v4 = &std::_Ref_count<unsigned char>::`vftable';
    *((_QWORD *)v4 + 2) = a2;
    v6 = (volatile signed __int32 *)a1[1];
    if ( v6 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
    }
    a1[1] = v4;
    *a1 = a2;
  }
  catch ( ... )
  {
    operator delete(a2);
    throw;
  }
  return result;
}
