/*
 * XREFs of ndisPostSetOpenRSSParameters @ 0x1C0021378
 * Callers:
 *     ndisOidPostRSSParameters @ 0x1C00212E0 (ndisOidPostRSSParameters.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
 */

void __fastcall ndisPostSetOpenRSSParameters(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rbp
  int v4; // r12d
  __int64 v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // r14d
  bool v10; // bl
  KIRQL v11; // al
  _QWORD *v12; // r13
  _DWORD *v13; // rcx
  void *v14; // rcx
  int v15; // ebx
  bool v16; // [rsp+80h] [rbp+8h]
  KIRQL NewIrql; // [rsp+88h] [rbp+10h]
  int v19; // [rsp+98h] [rbp+20h]

  v3 = a1[2];
  v4 = a3;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqd(163LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, a3);
  if ( (*(_DWORD *)(a2 + 88) & 0x800) != 0 )
  {
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(v3 + 528);
    *(_DWORD *)(a2 + 48) = *(unsigned __int16 *)(v3 + 536);
    *(_QWORD *)(v3 + 528) = 0LL;
    *(_WORD *)(v3 + 536) = 0;
    *(_DWORD *)(a2 + 88) &= ~0x800u;
  }
  if ( !v4 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    v8 = *(_DWORD *)(v7 + 16) + *(unsigned __int16 *)(v7 + 12);
    if ( *(_BYTE *)(v7 + 1) < 2u )
      v9 = 0;
    else
      v9 = *(_DWORD *)(v7 + 28) + *(_DWORD *)(v7 + 32) * *(_DWORD *)(v7 + 36);
    if ( v8 <= *(_DWORD *)(v7 + 24) + (unsigned int)*(unsigned __int16 *)(v7 + 20) )
      v8 = *(_DWORD *)(v7 + 24) + *(unsigned __int16 *)(v7 + 20);
    if ( v8 > v9 )
      v9 = v8;
    v10 = (*(_BYTE *)(v7 + 4) & 0x10) != 0;
    v19 = (unsigned __int8)*(_DWORD *)(v7 + 8);
    v16 = v10;
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    v12 = *(_QWORD **)(v3 + 56);
    NewIrql = v11;
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1856) = 2305918;
    if ( v12 )
    {
      do
      {
        v13 = (_DWORD *)v12[61];
        if ( v13 && v12 != a1 )
        {
          if ( !v19 || v10 )
          {
            v12[61] = 0LL;
          }
          else
          {
            v15 = v13[2] & 0xFFFF00;
            memmove(v13, (const void *)v7, v9);
            *(_DWORD *)(v12[61] + 8LL) = v19 | v15;
            v10 = v16;
          }
        }
        v12 = (_QWORD *)v12[49];
      }
      while ( v12 );
      v4 = a3;
    }
    if ( !v19 || v10 )
    {
      a1[61] = 0LL;
    }
    else
    {
      v14 = (void *)a1[60];
      a1[61] = v14;
      memmove(v14, (const void *)v7, v9);
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqqL(164LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, v3, a1, a2, v4);
}
