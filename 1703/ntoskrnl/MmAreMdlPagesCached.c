/*
 * XREFs of MmAreMdlPagesCached @ 0x140022450
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14005D274 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 */

__int64 __fastcall MmAreMdlPagesCached(_DWORD *a1)
{
  _QWORD *v1; // r8
  unsigned __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = a1 + 12;
  v2 = (unsigned __int64)&a1[2 * ((((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12)
                           + 12];
  while ( (unsigned int)MiIsPfnInline(*v1, *v1, v1, v2) && (*(_BYTE *)(48 * v3 - 0x57FFFFFFFDELL) & 0xC0) == 0x40 )
  {
    v1 = (_QWORD *)(v4 + 8);
    if ( (unsigned __int64)v1 >= v2 )
      return 1LL;
  }
  return 0LL;
}
