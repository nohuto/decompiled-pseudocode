/*
 * XREFs of XSetupFrameTypeInFilter @ 0x1C01037C4
 * Callers:
 *     XNoteFilterOpenAdapter @ 0x1C000F5B0 (XNoteFilterOpenAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall XSetupFrameTypeInFilter(__int64 a1, __int64 a2)
{
  char v4; // si
  unsigned int v5; // ecx
  unsigned int v6; // r9d
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int16 v11; // r8
  __int64 v12; // rcx

  v4 = 0;
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0xBu, &WPP_7110227204e83a75a1487d801c2bcbe4_Traceguids, a2);
  v5 = *(_DWORD *)(a2 + 248);
  if ( !v5 || (v6 = *(_DWORD *)(a1 + 24), v6 + v5 < v5) || v6 + v5 >= 0x10 )
  {
LABEL_19:
    *(_QWORD *)(a2 + 424) = *(_QWORD *)(a1 + 8);
    ++*(_DWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 8) = a2;
    goto LABEL_17;
  }
  v7 = 0;
  if ( v6 )
  {
    do
    {
      v8 = 0LL;
      while ( *(_WORD *)(a2 + 2 * v8 + 252) != *(_WORD *)(a1 + 16 * (v7 + 2LL)) )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v5 )
          goto LABEL_10;
      }
      v4 = 1;
LABEL_10:
      if ( v4 == 1 )
        goto LABEL_19;
    }
    while ( ++v7 < v6 );
  }
  v9 = 0LL;
  do
  {
    v10 = *(unsigned int *)(a1 + 24);
    v11 = *(_WORD *)(a2 + 2 * v9 + 252);
    v12 = a1 + 16 * (v10 + 2);
    if ( v11 == 8 && (_DWORD)v10 )
    {
      *(_WORD *)v12 = *(_WORD *)(a1 + 32);
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(a1 + 40);
      *(_WORD *)(a1 + 32) = 8;
      *(_QWORD *)(a1 + 40) = a2;
    }
    else
    {
      *(_WORD *)v12 = v11;
      *(_QWORD *)(v12 + 8) = a2;
    }
    ++*(_DWORD *)(a1 + 24);
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (unsigned int)v9 < *(_DWORD *)(a2 + 248) );
  *(_QWORD *)(a2 + 424) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = a2;
LABEL_17:
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0xCu, &WPP_7110227204e83a75a1487d801c2bcbe4_Traceguids, a2);
}
