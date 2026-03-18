/*
 * XREFs of ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0039AE4
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C0037300 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     GreRestoreDCInternal @ 0x1C00A0C40 (GreRestoreDCInternal.c)
 * Callees:
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0039C50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

void __fastcall DC::vCopyTo(DC *this, DC **a2)
{
  DC *v4; // rcx
  __int64 v5; // rsi
  _OWORD *v6; // rcx
  _OWORD *v7; // rdx
  __int64 v8; // rax
  __int128 v9; // xmm1
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  __int128 v12; // xmm1
  DC *v13; // rcx
  void *v14; // rcx

  v4 = (DC *)*((_QWORD *)*a2 + 39);
  if ( v4 && v4 != (DC *)((char *)*a2 + 276) )
    Win32FreePool(v4);
  v5 = 3LL;
  v6 = (_OWORD *)*((_QWORD *)this + 10);
  v7 = (_OWORD *)*((_QWORD *)*a2 + 10);
  v8 = 3LL;
  do
  {
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    v7[6] = v6[6];
    v7 += 8;
    v9 = v6[7];
    v6 += 8;
    *(v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *v7 = *v6;
  v7[1] = v6[1];
  DC::hpath(*a2, *((struct HPATH__ **)this + 21));
  v10 = (_OWORD *)((char *)this + 88);
  v11 = (_OWORD *)((char *)*a2 + 88);
  do
  {
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    v11[6] = v10[6];
    v11 += 8;
    v12 = v10[7];
    v10 += 8;
    *(v11 - 1) = v12;
    --v5;
  }
  while ( v5 );
  *v11 = *v10;
  v11[1] = v10[1];
  v11[2] = v10[2];
  v11[3] = v10[3];
  v11[4] = v10[4];
  *((_QWORD *)v11 + 10) = *((_QWORD *)v10 + 10);
  v13 = (DC *)*((_QWORD *)this + 39);
  if ( v13 == (DC *)((char *)this + 276) )
  {
    *((_QWORD *)*a2 + 39) = (char *)*a2 + 276;
  }
  else if ( v13 )
  {
    *((_QWORD *)*a2 + 39) = PALLOCMEM2((unsigned int)(8 * *((_DWORD *)this + 80)));
    v14 = (void *)*((_QWORD *)*a2 + 39);
    if ( v14 )
      memmove(v14, *((const void **)this + 39), 8LL * *((unsigned int *)this + 80));
    else
      *((_DWORD *)*a2 + 80) = 0;
  }
}
