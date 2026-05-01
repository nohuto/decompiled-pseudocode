/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180032930
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000DE10 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18000F7C8 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetI.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180032910 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 * Callees:
 *     ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXAEAV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180002158 (-_Reinit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXAEAV-$_ContainerAlloc.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180008D7C (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
        _QWORD *a1,
        const void *a2,
        unsigned __int64 a3)
{
  void *v5; // rcx
  char v7; // bp
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  char *v10; // rax
  _WORD *v11; // r14
  size_t v12; // rbx
  void *Block[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (void *)a1[1];
  v7 = 1;
  v8 = ((__int64)v5 - *a1) >> 1;
  v9 = v8 + a3;
  if ( v8 + a3 < a3 )
    return 0;
  if ( (_QWORD *)*a1 == a1 + 2 )
    v10 = (char *)a1 + 30;
  else
    v10 = (char *)a1[2];
  if ( v9 > (__int64)&v10[-*a1] >> 1 )
  {
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      a1,
      Block,
      v8 + a3);
    v11 = Block[0];
    if ( Block[0] )
    {
      v12 = v8;
      memcpy_0(Block[0], (const void *)*a1, v12 * 2);
      memcpy_0(&v11[v12], a2, 2 * a3);
      v11[v9] = 0;
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
        (__int64)a1,
        (__int64 *)Block,
        v9);
      v11 = Block[0];
    }
    else
    {
      v7 = 0;
    }
    if ( v11 )
      operator delete(v11);
  }
  else
  {
    if ( v5 != a2 )
      memmove(v5, a2, 2 * a3);
    a1[1] += 2 * a3;
    *(_WORD *)a1[1] = 0;
  }
  return v7;
}
