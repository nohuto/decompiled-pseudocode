/*
 * XREFs of ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0074C70
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00FFCA8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C00FFFF0 (NtGdiStartPage.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C013E78C (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C0256240 (NtGdiEndPage.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vRestoreAttributesAlways(XDCOBJ *this)
{
  __int64 v2; // rcx
  _OWORD *v3; // rax
  _OWORD *v4; // rcx
  __int64 v5; // r8

  v2 = *(_QWORD *)this;
  v3 = (_OWORD *)(v2 + 984);
  if ( *(_QWORD *)(v2 + 80) == v2 + 984 )
  {
    v4 = *(_OWORD **)(v2 + 976);
    v5 = 3LL;
    do
    {
      *v4 = *v3;
      v4[1] = v3[1];
      v4[2] = v3[2];
      v4[3] = v3[3];
      v4[4] = v3[4];
      v4[5] = v3[5];
      v4[6] = v3[6];
      v4 += 8;
      *(v4 - 1) = v3[7];
      v3 += 8;
      --v5;
    }
    while ( v5 );
    *v4 = *v3;
    v4[1] = v3[1];
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)(*(_QWORD *)this + 976LL);
    *((_DWORD *)this + 2) = 0;
  }
}
