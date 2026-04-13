/*
 * XREFs of ??1?$_Yarn@D@std@@QEAA@XZ @ 0x180033F78
 * Callers:
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$1 @ 0x1800C2840 (_std--_Locinfo--_Locinfo_--_1_--dtor$1.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$2 @ 0x1800C2850 (_std--_Locinfo--_Locinfo_--_1_--dtor$2.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$3 @ 0x1800C2860 (_std--_Locinfo--_Locinfo_--_1_--dtor$3.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$4 @ 0x1800C2870 (_std--_Locinfo--_Locinfo_--_1_--dtor$4.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$5 @ 0x1800C2880 (_std--_Locinfo--_Locinfo_--_1_--dtor$5.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$6 @ 0x1800C2890 (_std--_Locinfo--_Locinfo_--_1_--dtor$6.c)
 *     _std::locale::_Locimp::_Locimp_::_1_::dtor$1 @ 0x1800CA1CD (_std--locale--_Locimp--_Locimp_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Yarn<char>::~_Yarn<char>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    free(v2);
  *a1 = 0LL;
}
