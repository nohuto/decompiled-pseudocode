/*
 * XREFs of ?Initialize@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00B0E3C
 * Callers:
 *     ?Create@?$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00B0BEC (-Create@-$CSectionEntry@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C005DAB8 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C005DAFC (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00B0B34 (-Create@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<81920,160>::Initialize(__int64 a1)
{
  NSInstrumentation *Section; // rax
  PVOID *v4; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x14000);
  *(_QWORD *)(a1 + 16) = Section;
  if ( !Section || NSInstrumentation::PlatformMapViewInSessionSpace(Section, (PVOID *)(a1 + 24), (void **)0x14000) < 0 )
    return 0;
  v4 = NSInstrumentation::CSectionBitmapAllocator<81920,160>::Create(*(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = v4;
  return v4 != 0LL;
}
