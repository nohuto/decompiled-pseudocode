/*
 * XREFs of ndisUnsetNdis6OpenHandlers @ 0x1C00FBC74
 * Callers:
 *     ndisDeQueueOpenOnMiniport @ 0x1C00FBBD4 (ndisDeQueueOpenOnMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __fastcall ndisUnsetNdis6OpenHandlers(__int64 a1)
{
  __int64 v1; // rdi
  bool v2; // si
  bool v3; // bp
  char v5; // dl
  unsigned __int8 v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  v3 = 0;
  v5 = byte_1C009260D;
  if ( (unsigned __int8)byte_1C009260D >= 4u )
  {
    WPP_SF_q(0x8Cu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
    v5 = byte_1C009260D;
  }
  v6 = *(_BYTE *)(a1 + 32);
  if ( !v1 )
    goto LABEL_20;
  do
  {
    v7 = *(_QWORD *)(v1 + 24);
    if ( !v2 )
      v2 = *(_BYTE *)(v7 + 56) >= 6u;
    if ( !v3 )
      v3 = *(_BYTE *)(v7 + 56) < 6u;
    v1 = *(_QWORD *)(v1 + 392);
  }
  while ( v1 );
  if ( !v2 )
  {
LABEL_20:
    if ( !*(_QWORD *)(a1 + 2056) )
    {
      *(_DWORD *)(a1 + 2248) = 0;
      v8 = (*(_DWORD *)(a1 + 120) & 0x20000000) == 0;
      v9 = *(_QWORD *)(a1 + 2160);
      *(_QWORD *)(a1 + 1896) = v9;
      if ( !v8 )
        *(_QWORD *)(a1 + 432) = v9;
      if ( v6 < 6u )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 3784) + 224LL);
        *(_QWORD *)(a1 + 2192) = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(a1 + 2184) = v10;
      }
    }
  }
  if ( (unsigned __int8)v5 >= 4u )
    WPP_SF_q(0x8Du, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
}
