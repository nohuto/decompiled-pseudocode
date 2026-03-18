/*
 * XREFs of Simulator_EvaluateNode @ 0x1C005BD54
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C005BB60 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_EvaluateNode(__int64 a1)
{
  int NameSpaceObject; // eax
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a1 + 16), 0LL, (__int64)&v6, 0);
  v3 = v6;
  v4 = NameSpaceObject;
  if ( NameSpaceObject >= 0 && v6 )
    v4 = AMLIEvalNameSpaceObject((__int64 *)(v6 + 120), *(void **)(a1 + 40), *(_DWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
  DereferenceObjectEx(v3);
  return v4;
}
