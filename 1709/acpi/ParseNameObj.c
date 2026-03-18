/*
 * XREFs of ParseNameObj @ 0x1C001ADAC
 * Callers:
 *     ParseScope @ 0x1C000AE20 (ParseScope.c)
 *     ParseOpcode @ 0x1C0019E50 (ParseOpcode.c)
 * Callees:
 *     PushCall @ 0x1C000CB4C (PushCall.c)
 *     ReadObject @ 0x1C001A0F0 (ReadObject.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     ParseAndGetNameSpaceObject @ 0x1C001B624 (ParseAndGetNameSpaceObject.c)
 */

__int64 __fastcall ParseNameObj(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int NameSpaceObject; // esi
  __int64 v6; // rdi
  __int64 i; // rbx
  unsigned int Object; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[10];
  v14 = 0LL;
  NameSpaceObject = ParseAndGetNameSpaceObject((_DWORD)a1, (int)a1 + 120, v2, (unsigned int)&v14, 0);
  if ( !NameSpaceObject )
  {
    v6 = v14;
    for ( i = v14; *(_WORD *)(i + 66) == 128; i = *(_QWORD *)(i + 80) )
      ;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(i + 112));
      v6 = v14;
    }
    if ( *(_WORD *)(i + 66) == 8 )
      Object = PushCall(a1, i, a2);
    else
      Object = ReadObject((__int64)a1, i + 64, a2);
    NameSpaceObject = Object;
    DereferenceObjectEx(i, 0LL, v9, v10);
    DereferenceObjectEx(v6, 0LL, v11, v12);
  }
  return NameSpaceObject;
}
