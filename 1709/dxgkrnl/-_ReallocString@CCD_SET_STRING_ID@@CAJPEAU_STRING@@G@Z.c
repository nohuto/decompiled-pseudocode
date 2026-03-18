/*
 * XREFs of ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C00DAE28
 * Callers:
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00DAC64 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00DAD20 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C00DADE0 (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_ReallocString(struct _STRING *a1, USHORT a2)
{
  __int64 v4; // rbp
  CHAR *v5; // rax
  __int64 v6; // rcx
  CHAR *v7; // rsi
  PCHAR Buffer; // rcx
  __int64 v10; // rax

  if ( a2 <= a1->MaximumLength )
    return 0LL;
  v4 = a2;
  v5 = (CHAR *)operator new(a2, 0x63644356u, PagedPool);
  v7 = v5;
  if ( v5 )
  {
    memmove(v5, a1->Buffer, a1->Length);
    Buffer = a1->Buffer;
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0);
    a1->Buffer = v7;
    a1->MaximumLength = a2;
    return 0LL;
  }
  v10 = WdLogNewEntry5_WdLowResource(v6);
  *(_QWORD *)(v10 + 24) = v4;
  WdLogEvent5_WdLowResource(v10);
  return 3221225495LL;
}
