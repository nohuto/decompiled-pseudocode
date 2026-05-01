/*
 * XREFs of ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z @ 0x1800365B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180037554 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetLastActiveClassicTimestamp(
        CClassicWindowManager *this,
        struct _FILETIME *a2)
{
  int LastActiveClassicWindowWithValidation; // edi
  struct IClassicWindow *v4; // rbx
  struct IClassicWindow *v6; // [rsp+40h] [rbp+8h] BYREF
  struct _FILETIME v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  LastActiveClassicWindowWithValidation = CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
                                            (CClassicWindowManager *)((char *)this - 56),
                                            0LL,
                                            &v6);
  v4 = v6;
  if ( LastActiveClassicWindowWithValidation >= 0 )
    (*(void (__fastcall **)(struct IClassicWindow *, struct _FILETIME *))(*(_QWORD *)v6 + 64LL))(v6, &v7);
  *a2 = v7;
  if ( v4 )
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)LastActiveClassicWindowWithValidation;
}
