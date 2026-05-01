/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001CD10
 * Callers:
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800157F0 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D0C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D1B4 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z @ 0x18004CEE0 (-GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x180082440 (-GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800F7C9C (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_b31a7ee49596f02cdde0545643ebbb5a___ @ 0x1802E4B24 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___ea_1802E4B24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // r8
  _WORD *v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  LPVOID v8; // rax
  __int64 v9; // r8
  _WORD *v10; // rax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return 2147942934LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 == -1LL )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_WORD **)a1;
    if ( v9 == -1 )
    {
      if ( v10 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v10[v9] );
      }
      else
      {
        v9 = 0LL;
      }
      *(_QWORD *)(a1 + 8) = v9;
    }
    if ( v10 )
      v4 = v9 + 1;
    else
      v4 = 0LL;
    *(_QWORD *)(a1 + 16) = v4;
  }
  if ( v4 )
  {
    if ( v2 <= v4 )
      return 0LL;
    v7 = 2 * v4;
    if ( is_mul_ok(v4, 2uLL) )
    {
      if ( v4 > 0x800 )
        v7 = v4 + 2048;
      if ( v2 <= v7 )
        v2 = v7;
      v8 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v2);
      if ( v8 )
      {
        *(_QWORD *)a1 = v8;
        result = 0LL;
        *(_QWORD *)(a1 + 16) = v2;
        return result;
      }
      return 2147942414LL;
    }
    return 2147942934LL;
  }
  if ( !is_mul_ok(v2, 2uLL) )
    return 2147942934LL;
  v5 = CoTaskMemAlloc(2 * v2);
  if ( !v5 )
    return 2147942414LL;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)a1 = v5;
  *v5 = 0;
  return 0LL;
}
