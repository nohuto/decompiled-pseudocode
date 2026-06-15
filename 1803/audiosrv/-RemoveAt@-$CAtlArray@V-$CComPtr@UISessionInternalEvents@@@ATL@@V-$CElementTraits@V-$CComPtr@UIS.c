/*
 * XREFs of ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800440C0
 * Callers:
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180044008 (-RemoveInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComP.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x18004749C (--1CAudioSession@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180032820 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     _invalid_parameter_noinfo @ 0x180061852 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // rsi
  CAudioSessionManager *v10; // rcx
  __int64 (*v11)(void); // rax
  size_t v12; // r8
  const void *v13; // rdx
  void *v14; // rcx

  v4 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v7 = a1[1], v4 > v7) )
    ATL::AtlThrowImpl(-2147024809);
  result = *a1;
  v9 = v7 - v4;
  v10 = *(CAudioSessionManager **)(*a1 + 8 * a2);
  if ( v10 )
  {
    v11 = *(__int64 (**)(void))(*(_QWORD *)v10 + 16LL);
    if ( (char *)v11 == (char *)CAudioSessionManager::Release )
      result = CAudioSessionManager::Release(v10);
    else
      result = v11();
  }
  if ( v9 )
  {
    result = *a1;
    v12 = 8 * v9;
    v13 = (const void *)(*a1 + 8 * v4);
    v14 = (void *)(*a1 + 8 * a2);
    if ( 8 * v9 )
    {
      if ( !v14 || !v13 )
      {
        *(_DWORD *)_o__errno(v14, v13, v12, a4) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      result = (__int64)memmove(v14, v13, v12);
    }
  }
  --a1[1];
  return result;
}
