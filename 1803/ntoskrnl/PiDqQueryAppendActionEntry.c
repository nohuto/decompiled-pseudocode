/*
 * XREFs of PiDqQueryAppendActionEntry @ 0x14056C100
 * Callers:
 *     PiDqQueryEnumObject @ 0x1404FDAD4 (PiDqQueryEnumObject.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x1405DD894 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     PiDqGetPnpObjectType @ 0x1404FDBEC (PiDqGetPnpObjectType.c)
 *     PiDqQueryFreeActiveData @ 0x140573470 (PiDqQueryFreeActiveData.c)
 *     PiDmGetObjectCount @ 0x140728DFC (PiDmGetObjectCount.c)
 */

__int64 __fastcall PiDqQueryAppendActionEntry(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 **v4; // rcx
  unsigned int PnpObjectType; // eax

  result = a1 + 192;
  v4 = *(__int64 ***)(a1 + 200);
  if ( *v4 != (__int64 *)result )
    __fastfail(3u);
  *a2 = result;
  a2[1] = (__int64)v4;
  *v4 = a2;
  *(_QWORD *)(result + 8) = a2;
  if ( ++*(_DWORD *)(a1 + 208) > 0x3E8u )
  {
    PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
    result = 2 * (unsigned int)PiDmGetObjectCount(PnpObjectType);
    if ( *(_DWORD *)(a1 + 208) > (unsigned int)result )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      return PiDqQueryFreeActiveData(a1);
    }
  }
  return result;
}
