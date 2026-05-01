/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ActivationHints::Hint_______lambda_0a52f427c5b5bf7050ffc8143780caa2___ @ 0x1802B0CB0
 * Callers:
 *     ?GetAndDeleteFirstHint@ActivationHints@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z @ 0x1802B1220 (-GetAndDeleteFirstHint@ActivationHints@@UEAAJPEBGAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??0?$CAutoHandle@PEAX@@QEAA@PEAX@Z @ 0x1801F7330 (--0-$CAutoHandle@PEAX@@QEAA@PEAX@Z.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ActivationHints::Hint_______lambda_0a52f427c5b5bf7050ffc8143780caa2___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // r8
  const WCHAR *v9; // rcx
  _QWORD *result; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v7 = *CAutoHandle<void *>::CAutoHandle<void *>(&v11, a4);
  if ( a2 != v8 )
  {
    do
    {
      v9 = (const WCHAR *)a2;
      if ( *(_QWORD *)(a2 + 24) >= 8uLL )
        v9 = *(const WCHAR **)a2;
      if ( CompareStringOrdinal(v9, *(_DWORD *)(a2 + 16), **(LPCWCH **)v7, **(_DWORD **)(v7 + 8), 1) == 2 )
        break;
      a2 += 48LL;
    }
    while ( a2 != a3 );
  }
  result = a1;
  *a1 = a2;
  return result;
}
