/*
 * XREFs of ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x1C0299564
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00DADC0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vFill_triples(XEPALOBJ *this, struct tagRGBTRIPLE *a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // eax
  __int16 v8; // [rsp+18h] [rbp+18h]

  v4 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  if ( a4 < v4 )
    v4 = a4;
  v5 = 0LL;
  if ( v4 )
  {
    v6 = v4;
    do
    {
      v7 = *(_DWORD *)(v5 + *(_QWORD *)(*(_QWORD *)this + 120LL));
      v5 += 4LL;
      LOBYTE(v8) = BYTE2(v7);
      HIBYTE(v8) = BYTE1(v7);
      *(_WORD *)&a2->rgbtBlue = v8;
      a2->rgbtRed = v7;
      ++a2;
      --v6;
    }
    while ( v6 );
  }
}
