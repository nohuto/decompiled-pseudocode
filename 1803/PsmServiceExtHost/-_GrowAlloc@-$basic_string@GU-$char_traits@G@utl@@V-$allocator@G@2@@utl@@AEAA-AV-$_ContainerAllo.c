/*
 * XREFs of ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180014070
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180001B28 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180015570 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@8PEAPEAV12@@Z @ 0x18001EF50 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18004F7E4 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003F5B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  char *v4; // rax
  unsigned __int64 v5; // rax
  void *v6; // rax
  void **v7; // rcx
  char v8; // bl
  void *v10[2]; // [rsp+20h] [rbp-28h] BYREF
  void *Block[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( (_QWORD *)*a1 == a1 + 2 )
    v4 = (char *)a1 + 30;
  else
    v4 = (char *)a1[2];
  v5 = 2 * ((__int64)&v4[-*a1] >> 1) + 1;
  if ( v5 < a3 )
    v5 = a3;
  if ( v5 > 0x3FFFFFFFFFFFFFFELL )
    v5 = 0x3FFFFFFFFFFFFFFELL;
  if ( a3 > v5 )
  {
    Block[0] = 0LL;
    v7 = Block;
    Block[1] = 0LL;
    v8 = 2;
    v6 = 0LL;
  }
  else
  {
    v10[1] = (void *)(v5 + 1);
    if ( v5 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      v6 = 0LL;
    else
      v6 = operator new(2 * (v5 + 1), (const struct std::nothrow_t *)&std::nothrow);
    v10[0] = v6;
    v7 = v10;
    v8 = 1;
  }
  *a2 = v6;
  a2[1] = v7[1];
  *v7 = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( Block[0] )
      operator delete(Block[0]);
  }
  if ( (v8 & 1) != 0 && v10[0] )
    operator delete(v10[0]);
  return a2;
}
