/*
 * XREFs of std::function_void___cdecl(void)_::function_void___cdecl(void)___lambda_af28356267c3f0f0f506d99a7f614f80__void_ @ 0x1800C6704
 * Callers:
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800C68EC (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall std::function_void___cdecl_void__::function_void___cdecl_void____lambda_af28356267c3f0f0f506d99a7f614f80__void_(
        __int64 a1,
        __int64 a2)
{
  std::_Ref_count_base *v3; // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)a1 = off_180122520;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 56) = a1;
  v3 = *(std::_Ref_count_base **)(a2 + 16);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return a1;
}
