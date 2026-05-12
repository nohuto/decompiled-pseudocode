/*
 * XREFs of TranslateScsiRequestBlockToIoInfoSrbExData @ 0x1C000DB98
 * Callers:
 *     TranslateToExtendedSrb @ 0x1C001E534 (TranslateToExtendedSrb.c)
 * Callees:
 *     StRtlIoStorInfoGetNvCachePriority @ 0x1C000DCD8 (StRtlIoStorInfoGetNvCachePriority.c)
 */

void __fastcall TranslateScsiRequestBlockToIoInfoSrbExData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // eax
  char v8; // al
  char v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v3 = a3;
  if ( !a3 )
    v3 = *(_QWORD *)(a2 + 48);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 192);
    v6 = *(_QWORD *)(v3 + 184);
    *(_DWORD *)(a1 + 8) = 0;
    v7 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)a1 = 128;
    *(_DWORD *)(a1 + 4) = 24;
    if ( (*(_BYTE *)(v3 + 16) & 1) != 0 )
      v7 = 1;
    *(_DWORD *)(a1 + 8) = v7;
    if ( (*(_DWORD *)(v3 + 16) & 0x42) != 0 )
      *(_DWORD *)(a1 + 8) |= 2u;
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 80) & 0x20) != 0 )
        *(_DWORD *)(a1 + 8) |= 4u;
      if ( (*(_DWORD *)(v5 + 80) & 0x18000) != 0 )
        *(_DWORD *)(a1 + 8) |= 8u;
      if ( (*(_DWORD *)(v5 + 80) & 0x10) != 0 )
        *(_DWORD *)(a1 + 8) |= 0x10u;
    }
    else
    {
      *(_DWORD *)(a1 + 8) |= 0x40u;
    }
    v10 = 0;
    if ( (int)IoGetGenericIrpExtension(v3, &v10, 4LL) >= 0 && (v10 & 0x20) != 0 )
      *(_DWORD *)(a1 + 8) |= 0x20u;
    if ( v6 )
    {
      if ( *(_BYTE *)v6 == 3 )
      {
        *(_DWORD *)(a1 + 12) = *(_DWORD *)(v6 + 16);
        *(_DWORD *)(a1 + 16) = *(_DWORD *)(v6 + 8);
        goto LABEL_23;
      }
      if ( *(_BYTE *)v6 == 4 )
      {
        *(_DWORD *)(a1 + 12) = *(_DWORD *)(v6 + 16);
        *(_DWORD *)(a1 + 16) = *(_DWORD *)(v6 + 8);
        *(_BYTE *)(a1 + 20) = 1;
        goto LABEL_25;
      }
    }
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
LABEL_23:
    *(_BYTE *)(a1 + 20) = 0;
LABEL_25:
    if ( (*(_DWORD *)(a1 + 12) & 0xFFFF0000) == 0x56530000 )
      *(_DWORD *)(a1 + 8) |= 0x80u;
    if ( (int)StRtlIoStorInfoGetNvCachePriority(v3, &v9) >= 0 )
    {
      v8 = v9;
      *(_DWORD *)(a1 + 8) |= 0x80000000;
      *(_BYTE *)(a1 + 21) = v8;
    }
  }
}
