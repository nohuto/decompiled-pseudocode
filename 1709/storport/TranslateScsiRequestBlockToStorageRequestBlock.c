/*
 * XREFs of TranslateScsiRequestBlockToStorageRequestBlock @ 0x1C0039E2C
 * Callers:
 *     TranslateToExtendedSrb @ 0x1C0039F50 (TranslateToExtendedSrb.c)
 * Callees:
 *     <none>
 */

void __fastcall TranslateScsiRequestBlockToStorageRequestBlock(__int64 a1, __int64 a2, char a3, char a4, int a5)
{
  char v5; // al
  _DWORD *v6; // rax

  if ( a1 && a2 )
  {
    *(_BYTE *)(a1 + 2) = 40;
    *(_WORD *)a1 = 8;
    *(_DWORD *)(a1 + 16) = a5;
    *(_WORD *)(a1 + 36) = 2;
    *(_DWORD *)(a1 + 8) = 1397899864;
    *(_DWORD *)(a1 + 12) = 1;
    *(_DWORD *)(a1 + 52) = 128;
    if ( a3 )
    {
      if ( a4 )
      {
        *(_DWORD *)(a1 + 56) = 2;
        *(_DWORD *)(a1 + 52) = 136;
      }
      else
      {
        *(_DWORD *)(a1 + 56) = 1;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 56) = 0;
    }
    *(_DWORD *)(a1 + 20) = *(unsigned __int8 *)(a2 + 2);
    *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 56);
    if ( *(_BYTE *)(a2 + 2) == 23 )
      *(_QWORD *)(a1 + 112) = 0LL;
    else
      *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 40);
    v5 = *(_BYTE *)(a2 + 2);
    if ( v5 == 23 || (unsigned __int8)(v5 - 36) <= 1u )
    {
      *(_DWORD *)(a1 + 32) = 0;
      *(_WORD *)(a1 + 38) = 0;
      *(_DWORD *)(a1 + 44) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 32) = *(unsigned __int8 *)(a2 + 8);
      *(_WORD *)(a1 + 38) = *(unsigned __int8 *)(a2 + 9);
      *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 64);
    }
    v6 = *(_DWORD **)(a2 + 48);
    if ( v6 )
    {
      if ( *v6 == 523124044 )
      {
        *(_QWORD *)(a1 + 96) = v6;
        *(_QWORD *)(a1 + 80) = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 176LL);
      }
      else
      {
        *(_QWORD *)(a1 + 80) = v6;
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 56);
      }
    }
  }
}
