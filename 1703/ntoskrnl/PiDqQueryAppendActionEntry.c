/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x1404BD794
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1404B83D4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x1404B9B98 (PiDqQueryEnumObject.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1404BDCE4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     PiDqQueryFreeActiveData @ 0x1404B8D48 (PiDqQueryFreeActiveData.c)
 *     PiDqGetPnpObjectType @ 0x1404BD764 (PiDqGetPnpObjectType.c)
 *     PiDmGetObjectCount @ 0x140697544 (PiDmGetObjectCount.c)
 */

char __fastcall PiDqQueryAppendActionEntry(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 **v4; // rcx
  unsigned int PnpObjectType; // eax

  v2 = a1 + 192;
  v4 = *(__int64 ***)(a1 + 200);
  if ( *v4 != (__int64 *)v2 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = (__int64)v4;
  *v4 = a2;
  *(_QWORD *)(v2 + 8) = a2;
  if ( ++*(_DWORD *)(a1 + 208) > 0x3E8u )
  {
    PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
    LODWORD(v2) = 2 * PiDmGetObjectCount(PnpObjectType);
    if ( *(_DWORD *)(a1 + 208) > (unsigned int)v2 )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      LOBYTE(v2) = PiDqQueryFreeActiveData(a1);
    }
  }
  return v2;
}
