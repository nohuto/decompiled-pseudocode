/*
 * XREFs of ?GetProperty@CCachedVisualImage@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180165710
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::GetProperty(CCachedVisualImage *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // xmm0_4

  v3 = 0;
  v4 = a2 - 2;
  if ( !v4 )
  {
    v7 = *((_DWORD *)this + 18);
    goto LABEL_10;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = *((_DWORD *)this + 19);
    goto LABEL_10;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = *((_DWORD *)this + 20);
    goto LABEL_10;
  }
  if ( v6 == 1 )
  {
    v7 = *((_DWORD *)this + 21);
LABEL_10:
    *(_DWORD *)a3 = v7;
    *((_BYTE *)a3 + 68) = 1;
    *((_DWORD *)a3 + 16) = 18;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68Au);
  return v3;
}
