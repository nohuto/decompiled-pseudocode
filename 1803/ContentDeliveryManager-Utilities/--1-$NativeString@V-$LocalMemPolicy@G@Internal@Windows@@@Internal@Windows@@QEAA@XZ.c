/*
 * XREFs of ??1?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x1800969E8
 * Callers:
 *     _StartUI::MRTHelperBase::InitializeMRTObjects_::_1_::dtor$0 @ 0x1800C908E (_StartUI--MRTHelperBase--InitializeMRTObjects_--_1_--dtor$0.c)
 *     _StartUI::MRTHelperBase::Resolve_::_1_::dtor$1 @ 0x1800C90A6 (_StartUI--MRTHelperBase--Resolve_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::~NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>(
        __int64 a1)
{
  void *v2; // rcx
  HLOCAL result; // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    result = LocalFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
