/*
 * XREFs of ?UpdateKeyState@@YAXPEAUtagQ@@IH@Z @ 0x1C009D640
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C009E924 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateKeyState(struct tagQ *a1, unsigned int a2, int a3)
{
  unsigned __int64 v5; // rcx
  int v6; // edx
  int v7; // eax
  char v8; // r8
  unsigned int v9; // edx
  int v10; // eax

  if ( a3 )
  {
    v5 = (unsigned __int64)(unsigned __int8)a2 >> 2;
    v6 = a2 & 3;
    v7 = *((unsigned __int8 *)a1 + v5 + 224);
    v8 = 2 * v6;
    if ( !_bittest(&v7, 2 * v6) )
    {
      v9 = 2 * v6 + 1;
      if ( _bittest(&v7, v9) )
        v10 = v7 & ~(1 << v9);
      else
        v10 = v7 | (1 << v9);
      *((_BYTE *)a1 + v5 + 224) = v10;
    }
    *((_BYTE *)a1 + v5 + 224) |= 1 << v8;
  }
  else
  {
    *((_BYTE *)a1 + ((unsigned __int64)(unsigned __int8)a2 >> 2) + 224) &= ~(1 << (2 * (a2 & 3)));
  }
  if ( a2 < 0x20 )
    ++*(_DWORD *)(gpsi + 6984LL);
}
