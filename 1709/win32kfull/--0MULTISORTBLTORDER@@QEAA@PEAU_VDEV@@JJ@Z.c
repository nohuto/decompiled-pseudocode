/*
 * XREFs of ??0MULTISORTBLTORDER@@QEAA@PEAU_VDEV@@JJ@Z @ 0x1C027C610
 * Callers:
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0281440 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?vSortBltOrderWorker@@YAXPEAPEAU_SODISPSURF@@JJ@Z @ 0x1C0282618 (-vSortBltOrderWorker@@YAXPEAPEAU_SODISPSURF@@JJ@Z.c)
 */

MULTISORTBLTORDER *__fastcall MULTISORTBLTORDER::MULTISORTBLTORDER(
        MULTISORTBLTORDER *this,
        struct _VDEV *a2,
        int a3,
        int a4)
{
  void *v8; // rax
  unsigned int v9; // r9d
  _QWORD *v10; // rbx
  _QWORD *v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 v14; // rax

  v8 = PALLOCMEM2((unsigned int)(16 * *((_DWORD *)a2 + 4)), 1869835591LL, 0);
  v9 = 0;
  *(_QWORD *)this = v8;
  *((_QWORD *)this + 2) = 0LL;
  v10 = (_QWORD *)((char *)this + 8);
  *((_QWORD *)this + 1) = v8;
  if ( v8 )
  {
    v11 = *(_QWORD **)a2;
    v12 = 0;
    while ( v11 )
    {
      v13 = 2LL * v12++;
      *(_QWORD *)(*v10 + 8 * v13 + 8) = v11;
      *(_QWORD *)(*v10 + 8 * v13) = 0LL;
      v11 = (_QWORD *)*v11;
    }
    if ( *((_DWORD *)a2 + 4) != 1 )
    {
      do
      {
        v14 = v9++;
        *(_QWORD *)(*v10 + 16 * v14) = *v10 + 16LL * v9;
      }
      while ( v9 < *((_DWORD *)a2 + 4) - 1 );
    }
    vSortBltOrderWorker((struct _SODISPSURF **)this + 1, a3, a4);
    *((_QWORD *)this + 2) = *v10;
  }
  return this;
}
