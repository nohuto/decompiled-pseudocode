/*
 * XREFs of PiDevCfgFreeDriverNode @ 0x14058EDB0
 * Callers:
 *     PiDevCfgFreeDriverNode @ 0x14058EDB0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverNode @ 0x14058F3B8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140698E74 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14069B1C8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14069EB7C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PiDevCfgFreeDriverNode @ 0x14058EDB0 (PiDevCfgFreeDriverNode.c)
 */

void __fastcall PiDevCfgFreeDriverNode(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 **v3; // rdi
  __int64 **v4; // rdi
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = (__int64 **)(a1 + 208);
  while ( *v2 != (__int64 *)v2 )
  {
    v8 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v8 + 8) != *v2 )
      __fastfail(3u);
    *v2 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v2;
    PiDevCfgFreeDriverNode();
  }
  v3 = (__int64 **)(a1 + 192);
  while ( *v3 != (__int64 *)v3 )
  {
    v9 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v9 + 8) != *v3 )
      __fastfail(3u);
    *v3 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v3;
    PiDevCfgFreeDriverNode();
  }
  v4 = (__int64 **)(a1 + 352);
  while ( *v4 != (__int64 *)v4 )
  {
    v10 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v10 + 8) != *v4 )
      __fastfail(3u);
    *v4 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v4;
    PiDevCfgFreeDriverNode();
  }
  v5 = *(void **)(a1 + 16);
  if ( v5 )
    ZwClose(v5);
  v6 = *(void **)(a1 + 24);
  if ( v6 )
    ZwClose(v6);
  v7 = *(void **)(a1 + 32);
  if ( v7 )
    ZwClose(v7);
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 56));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 40));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 72));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 88));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 128));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 144));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 240));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 256));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 272));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 288));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 304));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 320));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 336));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 376));
  ExFreePoolWithTag((PVOID)a1, 0);
}
