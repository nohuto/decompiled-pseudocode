/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18004F7E4
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18001C5F4 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetInfo@2@PEBGKPEA_K@Z @ 0x18001E048 (-GetMemoryRequirementEstimateFromRegistry@ResourceManager@ExecutionModel@@QEBAJPEAU_ResourceSetI.c)
 * Callees:
 *     ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXAEAV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180001AC8 (-_Reinit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXAEAV-$_ContainerAlloc.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180014070 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
        _QWORD *a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v5; // rcx
  char v7; // bp
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  char *v10; // rax
  char *v11; // rax
  _WORD *v12; // r14
  size_t v13; // rbx
  void *Block[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (char *)a1[1];
  v7 = 1;
  v8 = (__int64)&v5[-*a1] >> 1;
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
    v12 = Block[0];
    if ( Block[0] )
    {
      v13 = v8;
      memcpy_0(Block[0], (const void *)*a1, v13 * 2);
      memcpy_0(&v12[v13], a2, 2 * a3);
      v12[v9] = 0;
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
        (__int64)a1,
        (__int64 *)Block,
        v9);
      v12 = Block[0];
    }
    else
    {
      v7 = 0;
    }
    if ( v12 )
      operator delete(v12);
  }
  else
  {
    if ( v5 != a2 )
    {
      memmove(v5, a2, 2 * a3);
      v5 = (char *)a1[1];
    }
    v11 = &v5[2 * a3];
    a1[1] = v11;
    *(_WORD *)v11 = 0;
  }
  return v7;
}
