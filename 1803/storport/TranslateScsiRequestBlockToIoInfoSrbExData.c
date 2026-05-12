/*
 * XREFs of TranslateScsiRequestBlockToIoInfoSrbExData @ 0x1C0037E2C
 * Callers:
 *     TranslateToExtendedSrb @ 0x1C0038100 (TranslateToExtendedSrb.c)
 * Callees:
 *     StRtlIoStorInfoGetNvCachePriority @ 0x1C004984C (StRtlIoStorInfoGetNvCachePriority.c)
 */

void __fastcall TranslateScsiRequestBlockToIoInfoSrbExData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // al
  char v14; // [rsp+40h] [rbp+18h] BYREF
  int v15; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0;
  v3 = a3;
  if ( !a3 )
    v3 = *(_QWORD *)(a2 + 48);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 192);
    v6 = 0;
    v7 = *(_QWORD *)(v3 + 184);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)a1 = 128;
    *(_DWORD *)(a1 + 4) = 24;
    v8 = *(_DWORD *)(v3 + 16);
    if ( (v8 & 1) != 0 )
    {
      *(_DWORD *)(a1 + 8) = 1;
      v6 = 1;
      v8 = *(_DWORD *)(v3 + 16);
    }
    if ( (v8 & 0x42) != 0 )
    {
      v6 |= 2u;
      *(_DWORD *)(a1 + 8) = v6;
    }
    if ( v5 )
    {
      v9 = *(_DWORD *)(v5 + 80);
      if ( (v9 & 0x20) != 0 )
      {
        v6 |= 4u;
        *(_DWORD *)(a1 + 8) = v6;
        v9 = *(_DWORD *)(v5 + 80);
      }
      if ( (v9 & 0x18000) != 0 )
      {
        v6 |= 8u;
        *(_DWORD *)(a1 + 8) = v6;
        v9 = *(_DWORD *)(v5 + 80);
      }
      if ( (v9 & 0x10) == 0 )
      {
LABEL_17:
        v15 = 0;
        if ( (int)IoGetGenericIrpExtension(v3, &v15, 4LL) >= 0 && (v15 & 0x20) != 0 )
          *(_DWORD *)(a1 + 8) |= 0x20u;
        if ( !v7 )
        {
          *(_DWORD *)(a1 + 12) = 0;
          *(_DWORD *)(a1 + 16) = 0;
          v12 = 0;
          *(_BYTE *)(a1 + 20) = 0;
          goto LABEL_29;
        }
        if ( *(_BYTE *)v7 == 3 )
        {
          *(_DWORD *)(a1 + 12) = *(_DWORD *)(v7 + 16);
          v11 = *(_DWORD *)(v7 + 8);
        }
        else
        {
          if ( *(_BYTE *)v7 == 4 )
          {
            *(_DWORD *)(a1 + 12) = *(_DWORD *)(v7 + 16);
            v11 = *(_DWORD *)(v7 + 8);
            *(_BYTE *)(a1 + 20) = 1;
LABEL_27:
            *(_DWORD *)(a1 + 16) = v11;
            v12 = *(_DWORD *)(a1 + 12);
LABEL_29:
            if ( (v12 & 0xFFFF0000) == 0x56530000 )
              *(_DWORD *)(a1 + 8) |= 0x80u;
            if ( (int)StRtlIoStorInfoGetNvCachePriority(v3, &v14) >= 0 )
            {
              v13 = v14;
              *(_DWORD *)(a1 + 8) |= 0x80000000;
              *(_BYTE *)(a1 + 21) = v13;
            }
            return;
          }
          *(_DWORD *)(a1 + 12) = 0;
          v11 = 0;
        }
        *(_BYTE *)(a1 + 20) = 0;
        goto LABEL_27;
      }
      v10 = v6 | 0x10;
    }
    else
    {
      v10 = v6 | 0x40;
    }
    *(_DWORD *)(a1 + 8) = v10;
    goto LABEL_17;
  }
}
