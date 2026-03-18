/*
 * XREFs of IopRegistryCallback @ 0x14063AE00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1401A9700 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     IopRegistryOpenDeepestPath @ 0x14063AEE0 (IopRegistryOpenDeepestPath.c)
 */

NTSTATUS __fastcall IopRegistryCallback(unsigned int a1)
{
  wchar_t *v1; // rbx
  wchar_t **v2; // rdi
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rbx
  bool v4; // zf
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  char v7; // [rsp+70h] [rbp+8h] BYREF
  wchar_t *v8; // [rsp+78h] [rbp+10h] BYREF

  v1 = (wchar_t *)a1;
  v2 = &(&IopRegistryRegisteredCallbacks)[14 * a1];
  RtlInitUnicodeString(&DestinationString, *v2);
  v2[8] = 0LL;
  v2[10] = (wchar_t *)IopRegistryCallback;
  v2[11] = v1;
  if ( ((_DWORD)v2[5] & 1) != 0 )
  {
    ((void (__fastcall *)(wchar_t *))v2[2])(v2[3]);
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)(v2 + 12);
    result = ZwNotifyChangeKey(
               v2[4],
               0LL,
               (PIO_APC_ROUTINE)(v2 + 8),
               (PVOID)1,
               (PIO_STATUS_BLOCK)v2 + 6,
               *((_DWORD *)v2 + 2),
               1u,
               0LL,
               0,
               1u);
    if ( result >= 0 )
      return result;
  }
  else
  {
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)(v2 + 12);
  }
  if ( (int)IopRegistryOpenDeepestPath(&DestinationString, &v8, &v7) < 0 )
    goto LABEL_10;
  ZwClose(v2[4]);
  v4 = v7 == 1;
  v2[4] = v8;
  if ( v4 )
  {
    *((_DWORD *)v2 + 10) |= 1u;
    ((void (__fastcall *)(wchar_t *))v2[2])(v2[3]);
  }
  result = ZwNotifyChangeKey(
             v2[4],
             0LL,
             (PIO_APC_ROUTINE)(v2 + 8),
             (PVOID)1,
             IoStatusBlock,
             *((_DWORD *)v2 + 2),
             1u,
             0LL,
             0,
             1u);
  if ( result < 0 )
  {
LABEL_10:
    result = ZwClose(v2[4]);
    *((_DWORD *)v2 + 2) = 0;
  }
  return result;
}
