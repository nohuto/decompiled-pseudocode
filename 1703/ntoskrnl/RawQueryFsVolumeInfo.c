/*
 * XREFs of RawQueryFsVolumeInfo @ 0x140421710
 * Callers:
 *     RawQueryVolumeInformation @ 0x140421FDC (RawQueryVolumeInformation.c)
 * Callees:
 *     RawEndOperation @ 0x140005378 (RawEndOperation.c)
 *     RawBeginOperation @ 0x140005430 (RawBeginOperation.c)
 */

__int64 __fastcall RawQueryFsVolumeInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v8; // ecx

  if ( !RawBeginOperation(a1, a2) )
    return 3221226094LL;
  *a4 -= 18;
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
  *(_DWORD *)(a3 + 12) = 0;
  *(_DWORD *)(a3 + 8) = v8;
  *(_BYTE *)(a3 + 16) = 0;
  RawEndOperation(a1, a2);
  return 0LL;
}
