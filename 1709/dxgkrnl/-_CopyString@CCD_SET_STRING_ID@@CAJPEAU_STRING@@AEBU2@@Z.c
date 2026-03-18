/*
 * XREFs of ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C00DADE0
 * Callers:
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C00DA9D8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C00DAE28 (-_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_CopyString(struct _STRING *a1, const struct _STRING *a2)
{
  __int64 result; // rax

  result = CCD_SET_STRING_ID::_ReallocString(a1, a2->Length);
  if ( (int)result >= 0 )
  {
    memmove(a1->Buffer, a2->Buffer, a2->Length);
    a1->Length = a2->Length;
    return 0LL;
  }
  return result;
}
