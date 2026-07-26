/*
 * XREFs of ndisUnsetNdis6OpenHandlers @ 0x1C01030F4
 * Callers:
 *     ndisDeQueueOpenOnMiniport @ 0x1C0103054 (ndisDeQueueOpenOnMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __fastcall ndisUnsetNdis6OpenHandlers(__int64 a1)
{
  __int64 v1; // rdi
  bool v2; // si
  bool v3; // bp
  unsigned __int8 v5; // r8
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x96u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  v5 = *(_BYTE *)(a1 + 32);
  if ( !v1 )
    goto LABEL_20;
  do
  {
    v6 = *(_QWORD *)(v1 + 24);
    if ( !v2 )
      v2 = *(_BYTE *)(v6 + 56) >= 6u;
    if ( !v3 )
      v3 = *(_BYTE *)(v6 + 56) < 6u;
    v1 = *(_QWORD *)(v1 + 392);
  }
  while ( v1 );
  if ( !v2 )
  {
LABEL_20:
    if ( !*(_QWORD *)(a1 + 2056) )
    {
      *(_DWORD *)(a1 + 2248) = 0;
      v7 = *(_DWORD *)(a1 + 120);
      v8 = *(_QWORD *)(a1 + 2160);
      *(_QWORD *)(a1 + 1896) = v8;
      if ( (v7 & 0x20000000) != 0 )
        *(_QWORD *)(a1 + 432) = v8;
      if ( v5 < 6u )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 224LL);
        *(_QWORD *)(a1 + 2192) = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 2184) = v9;
      }
    }
  }
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x97u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
}
