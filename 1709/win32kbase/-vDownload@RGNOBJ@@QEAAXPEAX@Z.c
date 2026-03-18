/*
 * XREFs of ?vDownload@RGNOBJ@@QEAAXPEAX@Z @ 0x1C00456F0
 * Callers:
 *     GreGetRegionData @ 0x1C0040F80 (GreGetRegionData.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00FCB74 (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vDownload(RGNOBJ *this, _OWORD *a2)
{
  int v3; // r9d
  unsigned int *v4; // r8
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int128 v7; // [rsp+0h] [rbp-18h]

  v3 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  v4 = (unsigned int *)(*(_QWORD *)this + 104LL);
  while ( v3 )
  {
    --v3;
    v5 = 0;
    DWORD1(v7) = v4[1];
    for ( HIDWORD(v7) = v4[2]; v5 < *v4; ++a2 )
    {
      v6 = v5 + 1;
      LODWORD(v7) = v4[v5 + 3];
      v5 += 2;
      DWORD2(v7) = v4[v6 + 3];
      *a2 = v7;
    }
    v4 += *v4 + 4;
  }
}
