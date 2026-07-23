/*
 * XREFs of sub_180003794 @ 0x180003794
 * Callers:
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 * Callees:
 *     ZwWriteFile @ 0x18009ABC0 (ZwWriteFile.c)
 */

__int64 __fastcall sub_180003794(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _QWORD *v7; // rsi
  NTSTATUS v8; // edx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  *a2 = 0;
  *a3 = 0;
  if ( !*(_DWORD *)(a1 + 452) )
    return 0LL;
  v7 = (_QWORD *)(a1 + 360);
  v8 = ZwWriteFile(
         *(HANDLE *)(a1 + 144),
         0LL,
         0LL,
         0LL,
         &IoStatusBlock,
         *(PVOID *)(a1 + 440),
         *(_DWORD *)(a1 + 208),
         (PLARGE_INTEGER)(a1 + 360),
         0LL);
  if ( v8 < 0 )
  {
    *a3 = *(_DWORD *)(a1 + 456);
  }
  else
  {
    *v7 += *(unsigned int *)(a1 + 452);
    *a2 = *(_DWORD *)(a1 + 456);
  }
  return (unsigned int)v8;
}
