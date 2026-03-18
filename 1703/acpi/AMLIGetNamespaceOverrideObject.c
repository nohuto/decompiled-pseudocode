/*
 * XREFs of AMLIGetNamespaceOverrideObject @ 0x1C005D260
 * Callers:
 *     AMLIGetNamespaceOverrideObject @ 0x1C005D260 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005D3E8 (AMLIReadNamespaceOverrideObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005D260 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIGetNamespaceOverrideObject(__int64 a1, __int64 *a2)
{
  int NameSpaceObject; // ebx
  __int64 v4; // rcx
  _QWORD *v6; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v7; // [rsp+28h] [rbp-20h]
  int Src; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+34h] [rbp-14h]

  NameSpaceObject = 0;
  if ( a1 == gpnsNameSpaceRoot )
  {
    v4 = gpnsNameSpaceOverrideRoot;
    if ( gpnsNameSpaceOverrideRoot )
    {
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(gpnsNameSpaceOverrideRoot + 112));
        v4 = gpnsNameSpaceOverrideRoot;
      }
      *a2 = v4;
    }
    else
    {
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    NameSpaceObject = GetNameSpaceObject("^");
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIGetNamespaceOverrideObject(v7, &v6);
      if ( NameSpaceObject >= 0 )
      {
        Src = *(_DWORD *)(a1 + 40);
        v9 = 0;
        NameSpaceObject = GetNameSpaceObject(&Src);
        DereferenceObjectEx(v6);
      }
      DereferenceObjectEx(v7);
    }
  }
  return (unsigned int)NameSpaceObject;
}
