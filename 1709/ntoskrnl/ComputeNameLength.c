/*
 * XREFs of ComputeNameLength @ 0x14071FF14
 * Callers:
 *     PfxFindPrefix @ 0x14071FFA0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x1407200A0 (PfxInsertPrefix.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeNameLength(unsigned __int16 *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // eax
  char *v8; // rax
  __int64 v9; // r9
  char v10; // dl
  unsigned int v11; // ecx

  v1 = *a1 - 1;
  v2 = 1;
  if ( (_BYTE)NlsMbCodePageTag )
  {
    v3 = 0;
    if ( *a1 != 1 )
    {
      v4 = *((_QWORD *)a1 + 1);
      do
      {
        v5 = *(unsigned __int8 *)(v3 + v4);
        if ( NlsLeadByteInfoTable[v5] )
        {
          v6 = 2;
        }
        else
        {
          v7 = v2 + 1;
          if ( (_BYTE)v5 != 92 )
            v7 = v2;
          v2 = v7;
          v6 = 1;
        }
        v3 += v6;
      }
      while ( v3 < v1 );
    }
  }
  else if ( *a1 != 1 )
  {
    v8 = (char *)*((_QWORD *)a1 + 1);
    v9 = v1;
    do
    {
      v10 = *v8;
      v11 = v2 + 1;
      ++v8;
      if ( v10 != 92 )
        v11 = v2;
      v2 = v11;
      --v9;
    }
    while ( v9 );
  }
  return v2;
}
