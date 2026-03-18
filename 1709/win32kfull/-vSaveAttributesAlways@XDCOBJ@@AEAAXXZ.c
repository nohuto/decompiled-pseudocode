/*
 * XREFs of ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C002BD54
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C010C3BC (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C010C710 (NtGdiStartPage.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C010C980 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C010C9A8 (--1RESTORESAVEDCATTRS@@QEAA@XZ.c)
 *     NtGdiEndPage @ 0x1C0257D40 (NtGdiEndPage.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vSaveAttributesAlways(XDCOBJ *this)
{
  __int64 v2; // rcx
  _OWORD *v3; // rdx
  _OWORD *v4; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)this;
  v3 = *(_OWORD **)(v2 + 80);
  if ( v3 < MmSystemRangeStart )
  {
    v4 = (_OWORD *)(v2 + 984);
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
    *(_QWORD *)(*(_QWORD *)this + 976LL) = *(_QWORD *)(*(_QWORD *)this + 80LL);
    *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 984LL;
    *((_DWORD *)this + 2) = 1;
  }
}
