/*
 * XREFs of ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00EE288
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B03E0 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B0984 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 * Callees:
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B1474 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 */

const struct CCD_SET_STRING_ID *__fastcall CCD_TOPOLOGY::SetModalitySetId(
        CCD_TOPOLOGY *this,
        const struct CCD_SET_STRING_ID *a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  *((_QWORD *)this + 7) = 0LL;
  CCD_SET_STRING_ID::operator=(this, (__int64)a2);
  return this;
}
