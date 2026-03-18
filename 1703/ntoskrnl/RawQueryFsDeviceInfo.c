/*
 * XREFs of RawQueryFsDeviceInfo @ 0x1406E50A4
 * Callers:
 *     RawQueryVolumeInformation @ 0x140421FDC (RawQueryVolumeInformation.c)
 * Callees:
 *     RawEndOperation @ 0x140005378 (RawEndOperation.c)
 *     RawBeginOperation @ 0x140005430 (RawBeginOperation.c)
 */

__int64 __fastcall RawQueryFsDeviceInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  if ( *a4 < 8u )
    return 2147483653LL;
  if ( !RawBeginOperation(a1, a2) )
    return 3221226094LL;
  *a4 -= 8;
  *(_QWORD *)a3 = 0LL;
  *(_DWORD *)a3 = 7;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 52LL);
  RawEndOperation(a1, a2);
  return 0LL;
}
