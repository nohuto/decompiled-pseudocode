/*
 * XREFs of PiDevCfgFreeDriverNode @ 0x1405D9EBC
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x1405D749C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverNode @ 0x1405D8B48 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgFreeDriverNode @ 0x1405D9EBC (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072B048 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072D8D8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407310F0 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     PiDevCfgFreeDriverNode @ 0x1405D9EBC (PiDevCfgFreeDriverNode.c)
 */

void __fastcall PiDevCfgFreeDriverNode(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD **v4; // rdi
  _QWORD *v5; // rcx
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax

  v2 = (_QWORD **)(a1 + 208);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v11 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v11;
    v11[1] = v2;
    PiDevCfgFreeDriverNode(v3);
  }
  v4 = (_QWORD **)(a1 + 192);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v12 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v12;
    v12[1] = v4;
    PiDevCfgFreeDriverNode(v5);
  }
  v6 = (_QWORD **)(a1 + 352);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == v6 )
      break;
    if ( (_QWORD **)v7[1] != v6 || (v13 = (_QWORD *)*v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v13;
    v13[1] = v6;
    PiDevCfgFreeDriverNode(v7);
  }
  v8 = *(void **)(a1 + 16);
  if ( v8 )
    ZwClose(v8);
  v9 = *(void **)(a1 + 24);
  if ( v9 )
    ZwClose(v9);
  v10 = *(void **)(a1 + 32);
  if ( v10 )
    ZwClose(v10);
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 56));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 40));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 72));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 88));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 128));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 144));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 240));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 256));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 272));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 288));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 336));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 376));
  ExFreePoolWithTag((PVOID)a1, 0);
}
