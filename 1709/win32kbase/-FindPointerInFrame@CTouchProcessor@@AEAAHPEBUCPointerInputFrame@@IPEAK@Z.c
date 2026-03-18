/*
 * XREFs of ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C011D438
 * Callers:
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C0120690 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchProcessor::FindPointerInFrame(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        int a3,
        unsigned int *a4)
{
  __int64 v4; // r11
  unsigned int v5; // ecx
  unsigned int v6; // r10d
  __int64 v7; // rbx
  _DWORD *v8; // rax
  bool v9; // cf
  _DWORD *v10; // rax

  v4 = *a4;
  v5 = *((_DWORD *)a2 + 12);
  v6 = *a4;
  v7 = *((_QWORD *)a2 + 12);
  if ( (unsigned int)v4 < v5 )
  {
    v8 = (_DWORD *)(v7 + 608 * v4 + 252);
    do
    {
      if ( *v8 == a3 )
        break;
      ++v6;
      v8 += 152;
    }
    while ( v6 < v5 );
  }
  v9 = v6 < v5;
  if ( v6 == v5 )
  {
    v6 = 0;
    if ( (_DWORD)v4 )
    {
      v10 = (_DWORD *)(v7 + 252);
      do
      {
        if ( *v10 == a3 )
          break;
        ++v6;
        v10 += 152;
      }
      while ( v6 < (unsigned int)v4 );
    }
    v9 = v6 < v5;
  }
  if ( !v9 || *(unsigned __int16 *)(608LL * v6 + v7 + 252) != a3 )
    return 0LL;
  *a4 = v6;
  return 1LL;
}
