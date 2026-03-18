/*
 * XREFs of _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1663::__AUTO_USING_PM_PathChangeReason1663 @ 0x1C00E1820
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00DE7C8 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F718C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1663::__AUTO_USING_PM_PathChangeReason1663(
        __int64 *a1)
{
  unsigned int i; // r8d
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax

  for ( i = 0; i < *((_DWORD *)a1 + 2); *(_DWORD *)(v3 + *a1 + 224) &= ~1u )
  {
    v2 = i++;
    v3 = 264 * v2;
    *(_DWORD *)(v3 + *a1 + 228) = 0;
    result = *a1;
  }
  return result;
}
