/*
 * XREFs of ParseNameObj @ 0x1C00147FC
 * Callers:
 *     ParseScope @ 0x1C0012A00 (ParseScope.c)
 *     ParseOpcode @ 0x1C0016890 (ParseOpcode.c)
 * Callees:
 *     ParseAndGetNameSpaceObject @ 0x1C00140C4 (ParseAndGetNameSpaceObject.c)
 *     ReadObject @ 0x1C00141BC (ReadObject.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     PushCall @ 0x1C0016E3C (PushCall.c)
 */

__int64 __fastcall ParseNameObj(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int NameSpaceObject; // esi
  __int64 v6; // rdi
  __int64 i; // rbx
  unsigned int Object; // eax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  v10 = 0LL;
  NameSpaceObject = ParseAndGetNameSpaceObject(a1, a1 + 120, v2, &v10, 0);
  if ( !NameSpaceObject )
  {
    v6 = v10;
    for ( i = v10; *(_WORD *)(i + 66) == 128; i = *(_QWORD *)(i + 80) )
      ;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(i + 112));
      v6 = v10;
    }
    if ( *(_WORD *)(i + 66) == 8 )
      Object = PushCall(a1, i, a2);
    else
      Object = ReadObject(a1, i + 64, a2);
    NameSpaceObject = Object;
    DereferenceObjectEx(i, 0LL);
    DereferenceObjectEx(v6, 0LL);
  }
  return NameSpaceObject;
}
