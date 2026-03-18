/*
 * XREFs of ?PackFrameControls@@YAHHHH@Z @ 0x1C0080C1C
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C007DEFC (-CreateDPIBitmapStrip@@YAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PackFrameControls(int a1, int a2, int a3)
{
  int v3; // r9d
  int v4; // r11d
  int v5; // r10d
  _DWORD *v8; // r8
  __int64 v9; // rdx
  int v10; // ecx

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( a3 )
    v8 = (_DWORD *)(gpsi + 8488LL);
  else
    v8 = (_DWORD *)(gpsi + 7000LL);
  v9 = 93LL;
  do
  {
    v10 = v8[1];
    if ( v10 )
    {
      if ( v10 + v4 > a1 )
      {
        v5 += v3;
        v3 = 0;
        v4 = 0;
      }
      if ( a2 )
      {
        *(v8 - 1) = v4;
        *v8 = v5;
      }
      if ( v3 < v8[2] )
        v3 = v8[2];
      v4 += v10;
    }
    v8 += 4;
    --v9;
  }
  while ( v9 );
  return (unsigned int)(v5 + v3);
}
