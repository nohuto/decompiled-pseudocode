/*
 * XREFs of AMLIReadNamespaceOverrideObject @ 0x1C005D3E8
 * Callers:
 *     AsyncEvalObject @ 0x1C0003100 (AsyncEvalObject.c)
 * Callees:
 *     ReadObject @ 0x1C00141BC (ReadObject.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005D260 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIReadNamespaceOverrideObject(__int64 a1, __int64 a2, __int64 a3)
{
  int Object; // edi
  _QWORD *v6; // rbx
  _QWORD *v8; // [rsp+48h] [rbp+20h] BYREF

  Object = AMLIGetNamespaceOverrideObject(a2, (__int64 *)&v8);
  if ( Object >= 0 )
  {
    v6 = v8;
    Object = ReadObject(a1, (__int64)(v8 + 8), a3);
    DereferenceObjectEx(v6);
  }
  return (unsigned int)Object;
}
