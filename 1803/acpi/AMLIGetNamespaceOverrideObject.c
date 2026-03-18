/*
 * XREFs of AMLIGetNamespaceOverrideObject @ 0x1C0045F78
 * Callers:
 *     AMLIGetNamespaceOverrideObject @ 0x1C0045F78 (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0046100 (AMLIReadNamespaceOverrideObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0045F78 (AMLIGetNamespaceOverrideObject.c)
 *     GetNameSpaceObject @ 0x1C004A1E0 (GetNameSpaceObject.c)
 */

__int64 __fastcall AMLIGetNamespaceOverrideObject(__int64 a1, _QWORD *a2)
{
  int NameSpaceObject; // ebx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int Src; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+34h] [rbp-14h]

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
    NameSpaceObject = GetNameSpaceObject((void *)"^");
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIGetNamespaceOverrideObject(v6, &v5);
      if ( NameSpaceObject >= 0 )
      {
        Src = *(_DWORD *)(a1 + 40);
        v8 = 0;
        NameSpaceObject = GetNameSpaceObject(&Src);
        DereferenceObjectEx(v5);
      }
      DereferenceObjectEx(v6);
    }
  }
  return (unsigned int)NameSpaceObject;
}
