/*
 * XREFs of AMLIGetValidNamespaceName @ 0x1C0046064
 * Callers:
 *     AMLICreateNativeNamespaceObject @ 0x1C0044F0C (AMLICreateNativeNamespaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C00458D4 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0045A38 (AMLIAddNextNamespaceOverrideObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetValidNamespaceName(__int64 a1, int *a2)
{
  int *v2; // r10
  unsigned int v3; // r8d
  unsigned int v5; // r9d
  __int64 v6; // r11
  char v7; // cl
  __int64 v8; // rdi
  int v10; // [rsp+18h] [rbp+18h] BYREF

  v2 = &v10;
  v3 = 0;
  v10 = 1600085855;
  v5 = 0;
  v6 = a1 - (_QWORD)&v10;
  do
  {
    v7 = *((_BYTE *)v2 + v6);
    if ( !v7 )
      break;
    if ( (unsigned __int8)(v7 - 48) > 0x2Fu || (v8 = 0x87FFFFFE03FFLL, !_bittest64(&v8, (char)(v7 - 48))) )
    {
      if ( (unsigned __int8)(v7 - 97) > 0x19u )
        return (unsigned int)-1073741811;
    }
    *(_BYTE *)v2 = v7;
    ++v5;
    v2 = (int *)((char *)v2 + 1);
  }
  while ( v5 < 4 );
  if ( *(_BYTE *)(v5 + a1) )
    return (unsigned int)-1073741811;
  if ( a2 )
    *a2 = v10;
  return v3;
}
