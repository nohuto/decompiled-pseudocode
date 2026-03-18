/*
 * XREFs of AMLIAddNextNamespaceOverride @ 0x1C00458D4
 * Callers:
 *     AMLIAddNamespaceOverride @ 0x1C00457B8 (AMLIAddNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00458D4 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00458D4 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0045A38 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIGetValidNamespaceName @ 0x1C0046064 (AMLIGetValidNamespaceName.c)
 *     CreateNameSpaceObject @ 0x1C0049AB8 (CreateNameSpaceObject.c)
 *     OSCloseHandle @ 0x1C0082128 (OSCloseHandle.c)
 *     OSOpenNextSubkey @ 0x1C0082604 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00827EC (OSReadNextRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverride(void *a1, __int64 a2)
{
  ULONG v3; // edi
  int RegValue; // ebx
  ULONG v5; // esi
  int Subkey; // edi
  int v7; // edx
  unsigned int v9; // [rsp+28h] [rbp-48h]
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]
  __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  HANDLE v13; // [rsp+50h] [rbp-20h]
  _BYTE v14[8]; // [rsp+58h] [rbp-18h] BYREF

  KeyHandle = 0LL;
  v3 = 0;
  v11 = a2;
  v13 = a1;
  do
  {
    RegValue = OSReadNextRegValue(a1, v3, v14);
    if ( RegValue >= 0 )
      RegValue = AMLIAddNextNamespaceOverrideObject(a1, v11, v14);
    ++v3;
  }
  while ( !RegValue );
  if ( RegValue < 0 )
  {
    if ( RegValue == -2147483622 )
    {
      v5 = 0;
      do
      {
        Subkey = OSOpenNextSubkey(v13, v5, v14, (__int64)&KeyHandle);
        if ( Subkey >= 0 )
        {
          RegValue = AMLIGetValidNamespaceName(v14, 0LL);
          if ( RegValue < 0 )
            goto LABEL_20;
          Subkey = CreateNameSpaceObject(gpheapGlobal, v14, v11, *(_QWORD *)(v11 + 48), &v12, v7 & v9);
          if ( Subkey >= 0 )
          {
            Subkey = AMLIAddNextNamespaceOverride(KeyHandle, v12);
            DereferenceObjectEx(v12);
          }
          OSCloseHandle(KeyHandle);
          KeyHandle = 0LL;
        }
        ++v5;
      }
      while ( !Subkey );
      if ( Subkey == -2147483622 )
      {
        RegValue = 0;
      }
      else
      {
        if ( Subkey >= 0 )
          Subkey = -1073741823;
        RegValue = Subkey;
      }
    }
  }
  else
  {
    RegValue = -1073741823;
  }
LABEL_20:
  if ( KeyHandle )
    OSCloseHandle(KeyHandle);
  return (unsigned int)RegValue;
}
