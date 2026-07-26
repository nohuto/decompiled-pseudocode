/*
 * XREFs of ndisUnsetNdis6OpenHandlers @ 0x1C00FF57C
 * Callers:
 *     ndisDeQueueOpenOnMiniport @ 0x1C00FF4DC (ndisDeQueueOpenOnMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __fastcall ndisUnsetNdis6OpenHandlers(__int64 a1)
{
  __int64 v1; // rdi
  bool v2; // si
  bool v3; // bp
  unsigned __int8 v5; // dl
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x93u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
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
      v7 = (*(_DWORD *)(a1 + 120) & 0x20000000) == 0;
      v8 = *(_QWORD *)(a1 + 2160);
      *(_QWORD *)(a1 + 1896) = v8;
      if ( !v7 )
        *(_QWORD *)(a1 + 432) = v8;
      if ( v5 < 6u )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 224LL);
        *(_QWORD *)(a1 + 2192) = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 2184) = v9;
      }
    }
  }
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x94u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
}
