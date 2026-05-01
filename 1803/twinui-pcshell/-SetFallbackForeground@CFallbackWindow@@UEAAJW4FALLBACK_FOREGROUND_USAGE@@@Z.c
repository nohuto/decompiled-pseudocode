/*
 * XREFs of ?SetFallbackForeground@CFallbackWindow@@UEAAJW4FALLBACK_FOREGROUND_USAGE@@@Z @ 0x180114D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qLd @ 0x180115258 (WPP_SF_qLd.c)
 */

__int64 __fastcall CFallbackWindow::SetFallbackForeground(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  int v6; // edx
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8

  v2 = 0;
  if ( *(_DWORD *)(a1 + 44) != a2 )
  {
    v5 = 0LL;
    v6 = a2 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        v2 = -2147024809;
LABEL_9:
        *(_DWORD *)(a1 + 44) = a2;
        return v2;
      }
      v5 = *(_QWORD *)(a1 - 32);
      v2 = 1;
    }
    v7 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr
                                                           + 56LL))(
           CApplicationManagerUtility::g_pIAMGlobals[16].Ptr,
           v5,
           v2);
    v2 = v7;
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_qLd(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, v9, v5, a2, v7);
    goto LABEL_9;
  }
  return v2;
}
