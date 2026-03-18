/*
 * XREFs of MiCompressImportList @ 0x1405920C0
 * Callers:
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     MiApplyDriverHotPatch @ 0x1406E15C8 (MiApplyDriverHotPatch.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiAllocateImportList @ 0x1405921C0 (MiAllocateImportList.c)
 */

unsigned __int64 *__fastcall MiCompressImportList(unsigned __int64 *P)
{
  unsigned __int64 v1; // rdx
  __int64 ImportList; // rdi
  int v3; // eax
  unsigned int v4; // r8d
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // r8

  v1 = *P;
  ImportList = 0LL;
  v3 = 0;
  v4 = 0;
  if ( !*P )
    goto LABEL_17;
  v6 = 0LL;
  do
  {
    v7 = P[v6 + 1];
    if ( v7 )
    {
      ImportList = v7 | 1;
      ++v3;
    }
    v6 = ++v4;
  }
  while ( v4 < v1 );
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( v3 == v1 )
        return P;
      ImportList = MiAllocateImportList();
      if ( !ImportList )
        return P;
      v9 = 0LL;
      v10 = 0;
      if ( *P )
      {
        v11 = 0LL;
        do
        {
          v12 = P[v11 + 1];
          if ( v12 )
          {
            *(_QWORD *)(ImportList + 8 * v9 + 8) = v12;
            v9 = (unsigned int)(v9 + 1);
          }
          v11 = ++v10;
        }
        while ( v10 < *P );
      }
    }
  }
  else
  {
LABEL_17:
    ImportList = -2LL;
  }
  ExFreePoolWithTag(P, 0);
  return (unsigned __int64 *)ImportList;
}
