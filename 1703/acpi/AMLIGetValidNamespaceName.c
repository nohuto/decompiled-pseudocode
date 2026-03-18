/*
 * XREFs of AMLIGetValidNamespaceName @ 0x1C005D350
 * Callers:
 *     AMLICreateNativeNamespaceObject @ 0x1C005BA04 (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C005CC20 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C005CD84 (AMLIAddNextNamespaceOverrideObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetValidNamespaceName(char *a1, int *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  signed __int64 v4; // rbx
  char *v6; // r10
  char v7; // cl
  __int64 v8; // rdi
  int v10; // [rsp+18h] [rbp+18h] BYREF

  v2 = 0;
  v3 = 0;
  v10 = 1600085855;
  v4 = (char *)&v10 - a1;
  v6 = a1;
  do
  {
    v7 = *v6;
    if ( !*v6 )
      break;
    if ( (unsigned __int8)(v7 - 48) > 0x2Fu || (v8 = 0x87FFFFFE03FFLL, !_bittest64(&v8, (char)(v7 - 48))) )
    {
      if ( (unsigned __int8)(v7 - 97) > 0x19u )
        return (unsigned int)-1073741811;
    }
    v6[v4] = v7;
    ++v3;
    ++v6;
  }
  while ( v3 < 4 );
  if ( a1[v3] )
    return (unsigned int)-1073741811;
  if ( a2 )
    *a2 = v10;
  return v2;
}
