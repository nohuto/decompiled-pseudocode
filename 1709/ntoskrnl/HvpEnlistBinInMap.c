/*
 * XREFs of HvpEnlistBinInMap @ 0x14047C674
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14047C538 (HvpRemapAndEnlistHiveBins.c)
 *     HvpBuildMap @ 0x1406A0C7C (HvpBuildMap.c)
 * Callees:
 *     SetFailureLocation @ 0x1401E2FD4 (SetFailureLocation.c)
 *     HvpEnlistFreeCells @ 0x14047C740 (HvpEnlistFreeCells.c)
 *     HvpPointMapEntriesToBuffer @ 0x14047D3E0 (HvpPointMapEntriesToBuffer.c)
 */

__int64 __fastcall HvpEnlistBinInMap(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rsi
  int v10; // eax
  int v12; // r9d
  int v13; // edx
  int v14; // [rsp+20h] [rbp-38h]

  v5 = *(_QWORD *)(BugCheckParameter2 + 56);
  v6 = 0;
  v7 = a4;
  if ( !a4 )
    v7 = a3;
  v10 = *(_DWORD *)(v7 + 8);
  if ( (v10 & 0xFFF) != 0 )
  {
    v14 = 0;
    goto LABEL_10;
  }
  if ( a5 + v10 > a2 )
  {
    if ( !CmpSelfHeal && (CmpBootType & 6) == 0 )
    {
      v14 = 32;
      goto LABEL_10;
    }
    v6 = 1073741833;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    *(_DWORD *)(v7 + 8) = a2 - a5;
    SetFailureLocation(v5, 1, 10, 1073741833, 16);
  }
  HvpPointMapEntriesToBuffer(BugCheckParameter2, a5, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 2) == 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 128) += 32;
    if ( !(unsigned __int8)HvpEnlistFreeCells(BugCheckParameter2) )
    {
      if ( v5 )
      {
        *(_DWORD *)(v5 + 296) = a2;
        *(_DWORD *)(v5 + 300) = a5;
        *(_QWORD *)(v5 + 304) = v7;
      }
      if ( CmpSelfHeal || (CmpBootType & 6) != 0 )
      {
        v12 = 1073741833;
        v14 = 48;
        v13 = 1;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        goto LABEL_20;
      }
      v14 = 64;
LABEL_10:
      v12 = -1073741492;
      v13 = 0;
LABEL_20:
      v6 = v12;
      SetFailureLocation(v5, v13, 10, v12, v14);
    }
  }
  return v6;
}
