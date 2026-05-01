/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180001B28
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180001BF0 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18001C5F4 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18001E048 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetI.c)
 * Callees:
 *     ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXAEAV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180001AC8 (-_Reinit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXAEAV-$_ContainerAlloc.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180014070 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
        _QWORD *a1,
        char **a2,
        unsigned __int64 a3)
{
  char **v3; // rax
  char **v5; // rcx
  char v8; // r15
  char *v9; // rax
  _WORD *v10; // rbp
  char *v12; // rax
  void *Block[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (char **)(a1 + 2);
  v5 = (char **)*a1;
  v8 = 1;
  if ( v5 == v3 )
    v9 = (char *)a1 + 30;
  else
    v9 = *v3;
  if ( a3 <= (v9 - (char *)v5) >> 1 )
  {
    if ( v5 != a2 )
    {
      memmove(v5, a2, 2 * a3);
      v5 = (char **)*a1;
    }
    v12 = (char *)v5 + 2 * a3;
    a1[1] = v12;
    *(_WORD *)v12 = 0;
  }
  else
  {
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      a1,
      Block);
    v10 = Block[0];
    if ( Block[0] )
    {
      memcpy_0(Block[0], a2, 2 * a3);
      v10[a3] = 0;
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
        (__int64)a1,
        (__int64 *)Block,
        a3);
      v10 = Block[0];
    }
    else
    {
      v8 = 0;
    }
    if ( v10 )
      operator delete(v10);
  }
  return v8;
}
