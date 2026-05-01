/*
 * XREFs of wil::ResultFromException__lambda_afc9c880bfa977df46ee43b72b143ab9___ @ 0x18023B418
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180240060 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180003904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800FA3E8 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_afc9c880bfa977df46ee43b72b143ab9___(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 *v2; // r14
  __int64 *v3; // rdi
  std::_Ref_count_base *v4; // rcx
  __int64 result; // rax

  try
  {
    v1 = *a1;
    v2 = *(__int64 **)(*a1 + 432);
    v3 = (__int64 *)(*(_QWORD *)a1[1] + 16LL);
    if ( v3 != v2 )
    {
      do
      {
        std::shared_ptr<KBViewInfo>::operator=(v3 - 2, v3);
        v3 += 2;
      }
      while ( v3 != v2 );
      v2 = *(__int64 **)(v1 + 432);
    }
    v4 = (std::_Ref_count_base *)*(v2 - 1);
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    *(_QWORD *)(v1 + 432) -= 16LL;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v4);
  }
  return result;
}
