/*
 * XREFs of AMLIGetNamespaceOverrideObject @ 0x1C005D050
 * Callers:
 *     AMLIGetNamespaceOverrideObject @ 0x1C005D050 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005D1DC (AMLIReadNamespaceOverrideObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C005D050 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIGetNamespaceOverrideObject(__int64 a1, _QWORD *a2)
{
  int NameSpaceObject; // ebx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  int Src; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+34h] [rbp-14h]

  NameSpaceObject = 0;
  if ( a1 == gpnsNameSpaceRoot )
  {
    if ( gpnsNameSpaceOverrideRoot )
    {
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(gpnsNameSpaceOverrideRoot + 112));
      *a2 = gpnsNameSpaceOverrideRoot;
    }
    else
    {
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    NameSpaceObject = GetNameSpaceObject("^", a1, (__int64)&v7, 0);
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIGetNamespaceOverrideObject(v7, &v6);
      if ( NameSpaceObject >= 0 )
      {
        Src = *(_DWORD *)(a1 + 40);
        v9 = 0;
        NameSpaceObject = GetNameSpaceObject(&Src, v6, (__int64)a2, 0);
        DereferenceObjectEx(v6);
      }
      DereferenceObjectEx(v7);
    }
  }
  return (unsigned int)NameSpaceObject;
}
