/*
 * XREFs of PiDevCfgFreeDriverNode @ 0x1405A1298
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     PiDevCfgFreeDriverNode @ 0x1405A1298 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405A13E0 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverNode @ 0x1405A1890 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1406C4CA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406C6DE8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1406C9D50 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PiDevCfgFreeDriverNode @ 0x1405A1298 (PiDevCfgFreeDriverNode.c)
 */

void __fastcall PiDevCfgFreeDriverNode(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 **v4; // rdi
  __int64 **v5; // rdi
  __int64 **v6; // rdi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 *v10; // rcx
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rax

  v4 = (__int64 **)(a1 + 208);
  while ( *v4 != (__int64 *)v4 )
  {
    v10 = *v4;
    if ( (__int64 **)(*v4)[1] != v4 || (v11 = (__int64 *)*v10, *(__int64 **)(*v10 + 8) != v10) )
      __fastfail(3u);
    *v4 = v11;
    v11[1] = (__int64)v4;
    PiDevCfgFreeDriverNode(v10, a2, a3);
  }
  v5 = (__int64 **)(a1 + 192);
  while ( *v5 != (__int64 *)v5 )
  {
    v12 = *v5;
    if ( (__int64 **)(*v5)[1] != v5 || (v13 = (__int64 *)*v12, *(__int64 **)(*v12 + 8) != v12) )
      __fastfail(3u);
    *v5 = v13;
    v13[1] = (__int64)v5;
    PiDevCfgFreeDriverNode(v12, a2, a3);
  }
  v6 = (__int64 **)(a1 + 352);
  while ( *v6 != (__int64 *)v6 )
  {
    v14 = *v6;
    if ( (__int64 **)(*v6)[1] != v6 || (v15 = (__int64 *)*v14, *(__int64 **)(*v14 + 8) != v14) )
      __fastfail(3u);
    *v6 = v15;
    v15[1] = (__int64)v6;
    PiDevCfgFreeDriverNode(v14, a2, a3);
  }
  v7 = *(void **)(a1 + 16);
  if ( v7 )
    ZwClose(v7);
  v8 = *(void **)(a1 + 24);
  if ( v8 )
    ZwClose(v8);
  v9 = *(void **)(a1 + 32);
  if ( v9 )
    ZwClose(v9);
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
