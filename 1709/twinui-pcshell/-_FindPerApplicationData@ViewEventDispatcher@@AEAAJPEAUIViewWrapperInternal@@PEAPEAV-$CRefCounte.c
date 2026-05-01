/*
 * XREFs of ?_FindPerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x180125388
 * Callers:
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180125100 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180125288 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindPerApplicationData(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx

  *a3 = 0LL;
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 592) )
    return 2147647531LL;
  while ( 1 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)(a1 + 584) + 8 * v3) + 8LL), 0LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, PCWSTR))(*(_QWORD *)a2 + 592LL))(a2, StringRawBuffer) )
      break;
    if ( (unsigned __int64)++v3 >= *(_QWORD *)(a1 + 592) )
      return 2147647531LL;
  }
  v9 = *(_QWORD *)(a1 + 584);
  v10 = *(_QWORD *)(v9 + 8 * v3);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *a3 = *(_QWORD *)(v9 + 8 * v3);
  return 0LL;
}
