/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x140580A48
 * Callers:
 *     PiDqQueryEnumObject @ 0x140529564 (PiDqQueryEnumObject.c)
 *     PiDqQueryApplyObjectEvent @ 0x14054D08C (PiDqQueryApplyObjectEvent.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     PiDqGetPnpObjectType @ 0x14052D580 (PiDqGetPnpObjectType.c)
 *     PiDqQueryFreeActiveData @ 0x14054CF70 (PiDqQueryFreeActiveData.c)
 *     PiDmGetObjectCount @ 0x1406C2D0C (PiDmGetObjectCount.c)
 */

void __fastcall PiDqQueryAppendActionEntry(__int64 a1, __int64 *a2)
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
    if ( *(_DWORD *)(a1 + 208) > 2 * (unsigned int)PiDmGetObjectCount(PnpObjectType) )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      PiDqQueryFreeActiveData(a1);
    }
  }
}
