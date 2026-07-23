/*
 * XREFs of RtlApplyRXact @ 0x1800DFB20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x180080090 (RtlAbortRXact.c)
 *     sub_1800800D0 @ 0x1800800D0 (sub_1800800D0.c)
 *     ZwSetValueKey @ 0x18009B6B0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009C4B0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x18009C6F0 (ZwFlushKey.c)
 */

NTSTATUS __fastcall RtlApplyRXact(__int64 a1)
{
  void *v1; // rbx
  NTSTATUS result; // eax
  int v4; // edi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(void **)(a1 + 8);
  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey(v1, &DestinationString, 0, 3u, *(PVOID *)(a1 + 24), *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
  if ( result >= 0 )
  {
    v4 = ZwFlushKey(v1);
    if ( v4 < 0 )
    {
      ZwDeleteValueKey(v1, &DestinationString);
      return v4;
    }
    v4 = sub_1800800D0((__int64 *)a1);
    ZwDeleteValueKey(v1, &DestinationString);
    if ( v4 < 0 )
      return v4;
    RtlAbortRXact(a1);
    return 0;
  }
  return result;
}
