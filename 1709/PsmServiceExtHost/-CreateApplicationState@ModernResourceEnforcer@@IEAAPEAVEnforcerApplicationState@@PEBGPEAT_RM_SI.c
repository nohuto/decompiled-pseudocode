/*
 * XREFs of ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000CAA0
 * Callers:
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000C694 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 * Callees:
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x180006D00 (-_EmplaceImpl@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicat.c)
 *     ??$?RU_RM_PSM_HOST_INFO@@AEAU0@@?$construct@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NPEAU_RM_PSM_HOST_INFO@@AEAU2@@Z @ 0x180006ED4 (--$-RU_RM_PSM_HOST_INFO@@AEAU0@@-$construct@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NPEAU_RM_PSM_HOST_INF.c)
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x18001F09C (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800269EC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

struct EnforcerApplicationState *__fastcall ModernResourceEnforcer::CreateApplicationState(
        ModernResourceEnforcer *this,
        wchar_t *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r10
  char v11; // al
  __int64 *Block; // rbx
  struct EnforcerApplicationState *result; // rax
  int v14[2]; // [rsp+38h] [rbp-270h] BYREF
  __int64 v15; // [rsp+48h] [rbp-260h]
  wchar_t Destination[280]; // [rsp+60h] [rbp-248h] BYREF

  v15 = 0LL;
  RmpPsmAppInstanceIdInitialize(Destination, a2, a3, a4, a5, a6);
  v7 = (char *)operator new(0x248uLL, (const struct std::nothrow_t *)&unk_180052632);
  v10 = (__int64 *)v7;
  if ( v7
    && (v11 = utl::construct<_RM_PSM_HOST_INFO>::operator()<_RM_PSM_HOST_INFO,_RM_PSM_HOST_INFO &>(
                v8,
                v7 + 24,
                Destination),
        *((_BYTE *)v10 + 576) = 0,
        *((_WORD *)v10 + 289) = -1,
        v11) )
  {
    Block = v10;
  }
  else
  {
    Block = v10;
    if ( v10 )
    {
      Block = 0LL;
      operator delete(v10);
    }
  }
  utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_EmplaceImpl(
    (__int64)this + 304,
    (__int64)v14,
    v9,
    0LL,
    Block);
  result = (struct EnforcerApplicationState *)(*(_QWORD *)v14 + 576LL);
  if ( *(_QWORD *)v14 == -576LL )
    __fastfail(0x80004003);
  return result;
}
