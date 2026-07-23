/*
 * XREFs of sub_180004C48 @ 0x180004C48
 * Callers:
 *     sub_1800518CC @ 0x1800518CC (sub_1800518CC.c)
 * Callees:
 *     ZwWriteFile @ 0x1800A5400 (ZwWriteFile.c)
 */

__int64 __fastcall sub_180004C48(__int64 a1, _DWORD *a2, _DWORD *a3)
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
