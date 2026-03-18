/*
 * XREFs of ?Initialize@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@AEAA_NXZ @ 0x1C0073288
 * Callers:
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0073234 (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C005DAB8 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C005DAFC (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00732E8 (-Create@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<36864,144>::Initialize(__int64 a1)
{
  NSInstrumentation *Section; // rax
  __int64 v3; // rax

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x9000);
  *(_QWORD *)(a1 + 16) = Section;
  if ( !Section || NSInstrumentation::PlatformMapViewInSessionSpace(Section, (PVOID *)(a1 + 24), (void **)0x9000) < 0 )
    return 0;
  v3 = NSInstrumentation::CSectionBitmapAllocator<36864,144>::Create(*(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 32) = v3;
  return v3 != 0;
}
