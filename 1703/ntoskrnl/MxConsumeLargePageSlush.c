/*
 * XREFs of MxConsumeLargePageSlush @ 0x1407F6284
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiVaToPfn @ 0x1400B2D70 (MiVaToPfn.c)
 *     MiAddExpansionNonPagedPool @ 0x140160910 (MiAddExpansionNonPagedPool.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rdi
  unsigned __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v13[5]; // [rsp+28h] [rbp-40h]

  if ( (MiFlags & 4) != 0 )
  {
    if ( !dword_1403E3110 )
      dword_1403E3110 = 0x80000;
    v0 = MxHalDataTableEntry;
    v1 = 0;
    v2 = (unsigned int)dword_1403E3168;
    if ( *(_QWORD *)(qword_1407C5508 + 48) >= *(_QWORD *)(MxHalDataTableEntry + 48) )
    {
      v3 = MxHalDataTableEntry;
      v0 = qword_1407C5508;
    }
    else
    {
      v3 = qword_1407C5508;
    }
    v4 = *(_QWORD *)(v3 + 48);
    v5 = *(_QWORD *)(v0 + 48);
    v6 = (unsigned int)dword_1403E3168 + v4 + *(unsigned int *)(v3 + 64);
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
