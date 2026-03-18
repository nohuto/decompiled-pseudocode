/*
 * XREFs of MarkNativeObjectsDefunct @ 0x1C00455C8
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C0045160 (AMLIRemoveNativeObjectsFromNamespace.c)
 *     NotifyObjectDestruction @ 0x1C00473D8 (NotifyObjectDestruction.c)
 * Callees:
 *     SetClearAssociatedNativeObjectNoLock @ 0x1C0045788 (SetClearAssociatedNativeObjectNoLock.c)
 */

__int64 __fastcall MarkNativeObjectsDefunct(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int16 v3; // r9
  __int16 v4; // ax
  __int64 *v5; // rdx
  __int64 *i; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx

  v2 = a2;
  v3 = 4;
  if ( a1 )
  {
    v4 = *(_WORD *)(a1 + 66);
    if ( v4 == 6 || (unsigned __int16)(v4 - 11) <= 2u )
    {
      v5 = (__int64 *)(a1 + 24);
      for ( i = *(__int64 **)(a1 + 24); v5 != i; i = (__int64 *)*i )
      {
        if ( i[6] == gpNativeNameSpaceOwner )
          *((_WORD *)i + 32) |= 4u;
      }
    }
  }
  if ( v2 )
    v7 = *(_QWORD *)(v2 + 24);
  else
    v7 = 0LL;
  while ( v7 )
  {
    if ( ((unsigned __int8)v3 & *(_BYTE *)(v7 + 64)) != 0 )
    {
      v8 = *(_QWORD *)(v7 + 136);
      if ( v8 )
      {
        *(_WORD *)(v8 + 64) |= v3;
        SetClearAssociatedNativeObjectNoLock(v7, 0LL, v2);
      }
    }
    v7 = *(_QWORD *)(v7 + 56);
  }
  result = gpNativeNameSpaceOwner;
  v10 = *(_QWORD *)(gpNativeNameSpaceOwner + 24);
  if ( v10 )
  {
    do
    {
      v11 = *(_QWORD *)(v10 + 56);
      v12 = v10;
      while ( ((unsigned __int8)v3 & *(_BYTE *)(v12 + 64)) == 0 )
      {
        v12 = *(_QWORD *)(v12 + 16);
        if ( !v12 )
          goto LABEL_23;
      }
      *(_WORD *)(v10 + 64) |= v3;
LABEL_23:
      v10 = v11;
    }
    while ( v11 );
  }
  return result;
}
