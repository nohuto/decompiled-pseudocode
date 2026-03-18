/*
 * XREFs of MxConsumeLargePageSlush @ 0x140827268
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiVaToPfn @ 0x1400C00C4 (MiVaToPfn.c)
 *     MiAddExpansionNonPagedPool @ 0x14014DD28 (MiAddExpansionNonPagedPool.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void MxConsumeLargePageSlush()
{
  __int64 v0; // rdi
  unsigned int v1; // ebx
  __int64 v2; // r14
  __int64 v3; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v13[5]; // [rsp+28h] [rbp-40h]

  if ( (MiFlags & 4) != 0 )
  {
    if ( !dword_140400110 )
      dword_140400110 = 0x80000;
    v0 = MxHalDataTableEntry;
    v1 = 0;
    v2 = (unsigned int)dword_140400168;
    if ( *(_QWORD *)(qword_14087C5A0 + 48) >= *(_QWORD *)(MxHalDataTableEntry + 48) )
    {
      v3 = MxHalDataTableEntry;
      v0 = qword_14087C5A0;
    }
    else
    {
      v3 = qword_14087C5A0;
    }
    v4 = *(_QWORD *)(v3 + 48);
    v5 = *(_QWORD *)(v0 + 48);
    v6 = (unsigned int)dword_140400168 + v4 + *(unsigned int *)(v3 + 64);
    if ( v6 != v5 )
    {
      v12 = MiVaToPfn(v6);
      v1 = 1;
      v13[0] = MiVaToPfn(v5) - v12;
    }
    v7 = MiVaToPfn(v4);
    if ( (v7 & 0x1FF) != 0 )
    {
      v8 = 2LL * v1++;
      v13[v8 - 1] = v7 & 0xFFFFFFFFFFFFFE00uLL;
      v13[v8] = v7 & 0x1FF;
    }
    v9 = MiVaToPfn(v5 + *(unsigned int *)(v0 + 64) + v2 - 1);
    if ( (v9 & 0x1FF) != 0x1FF )
    {
      v10 = 2LL * v1++;
      v13[v10 - 1] = v9 + 1;
      v13[v10] = 511 - (v9 & 0x1FF);
    }
    if ( v1 )
    {
      v11 = &v13[2 * v1 - 1];
      do
      {
        v11 -= 2;
        MiAddExpansionNonPagedPool(*v11, v11[1]);
        --v1;
      }
      while ( v1 );
    }
  }
}
