/*
 * XREFs of ?Initialize@?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@AEAA_NXZ @ 0x1C0090A04
 * Callers:
 *     ?Create@?$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0090910 (-Create@-$CSectionEntry@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Create@?$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C0090ADC (-Create@-$CSectionBitmapAllocator@$0CIAAA@$0CIA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<163840,640>::Initialize(__int64 a1)
{
  PVOID v2; // rcx
  PVOID *v3; // rbx
  NTSTATUS v4; // eax
  __int64 v5; // rax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp+10h] BYREF
  PVOID Section; // [rsp+58h] [rbp+18h] BYREF

  Section = 0LL;
  ViewSize = 163840LL;
  if ( (unsigned int)MmCreateSection(&Section, 983071LL, 0LL) || ViewSize == 163840 )
  {
    v2 = Section;
  }
  else
  {
    ObfDereferenceObject(Section);
    v2 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = v2;
  if ( !v2 )
    return 0;
  ViewSize = 0LL;
  v3 = (PVOID *)(a1 + 24);
  v4 = MmMapViewInSessionSpace(v2, (PVOID *)(a1 + 24), &ViewSize);
  if ( v4 < 0 )
    return 0;
  if ( ViewSize != 163840 )
  {
    MmUnmapViewInSessionSpace(*v3);
    *v3 = 0LL;
    v4 = -1073741595;
  }
  if ( v4 < 0 )
    return 0;
  v5 = NSInstrumentation::CSectionBitmapAllocator<163840,640>::Create(*v3);
  *(_QWORD *)(a1 + 32) = v5;
  return v5 != 0;
}
