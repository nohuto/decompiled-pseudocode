/*
 * XREFs of AMLIAddNextNamespaceOverride @ 0x1C005CA10
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C005CA10 (AMLIAddNextNamespaceOverride.c)
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C001C380 (CreateNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005CA10 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005CB74 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIGetValidNamespaceName @ 0x1C005D140 (AMLIGetValidNamespaceName.c)
 *     OSCloseHandle @ 0x1C008F8C8 (OSCloseHandle.c)
 *     OSOpenNextSubkey @ 0x1C00A48F0 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00A4AD8 (OSReadNextRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverride(void *a1, __int64 a2)
{
  ULONG v3; // edi
  int RegValue; // ebx
  ULONG v5; // esi
  int Subkey; // edi
  int v7; // edx
  unsigned int v9; // [rsp+28h] [rbp-48h]
  HANDLE v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]
  struct _EX_RUNDOWN_REF *v12; // [rsp+48h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-20h]
  unsigned __int8 v14[8]; // [rsp+58h] [rbp-18h] BYREF

  v10 = 0LL;
  v3 = 0;
  v11 = a2;
  KeyHandle = a1;
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
        Subkey = OSOpenNextSubkey(KeyHandle, v5, v14, (__int64)&v10);
        if ( Subkey >= 0 )
        {
          RegValue = AMLIGetValidNamespaceName(v14, 0LL);
          if ( RegValue < 0 )
            goto LABEL_20;
          Subkey = CreateNameSpaceObject(gpheapGlobal, v14, v11, *(struct _EX_RUNDOWN_REF **)(v11 + 48), &v12, v7 & v9);
          if ( Subkey >= 0 )
          {
            Subkey = AMLIAddNextNamespaceOverride(v10, v12);
            DereferenceObjectEx((__int64)v12);
          }
          OSCloseHandle(v10);
          v10 = 0LL;
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
  if ( v10 )
    OSCloseHandle(v10);
  return (unsigned int)RegValue;
}
