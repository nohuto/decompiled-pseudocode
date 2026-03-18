/*
 * XREFs of ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C0129C24
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C01294D0 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x1C0129DF4 (-bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C012A128 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall FLOODBM::bExtendScanline(
        FLOODBM *this,
        struct STACKOBJ *a2,
        struct STACKOBJ *a3,
        int a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6)
{
  _DWORD *v6; // r10
  struct SCANLINE *v8; // rdx
  FLOODBM *v9; // rsi
  struct SCANLINE *v10; // r15
  _DWORD *v11; // r11
  _DWORD *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edi
  int v15; // r12d
  int v16; // r13d
  int v17; // esi
  int v18; // r14d
  __int64 v19; // rcx
  int v20; // ebx
  int v22; // eax
  int v23; // [rsp+40h] [rbp-18h] BYREF
  int v24; // [rsp+44h] [rbp-14h]
  struct SCANLINE *v25; // [rsp+48h] [rbp-10h]
  int v27; // [rsp+A8h] [rbp+50h] BYREF
  struct STACKOBJ *v28; // [rsp+B0h] [rbp+58h]
  int v29; // [rsp+B8h] [rbp+60h] BYREF

  v28 = a3;
  v6 = (_DWORD *)*((_QWORD *)a3 + 2);
  v8 = (struct SCANLINE *)*((_QWORD *)a2 + 1);
  v9 = this;
  v10 = 0LL;
  v25 = v8;
  v11 = (_DWORD *)*((_QWORD *)a2 + 2);
  v6[1] = 0;
  v11[1] = 0;
  *v6 = *(_DWORD *)v8;
  *v11 = a4;
  v12 = *(_DWORD **)(*((_QWORD *)a2 + 1) + 16LL);
  if ( v12 && *v12 == a4 )
    v10 = *(struct SCANLINE **)(*((_QWORD *)a2 + 1) + 16LL);
  v13 = 0LL;
  v14 = 1;
  v24 = 0;
  if ( *((_DWORD *)v8 + 1) )
  {
    while ( 1 )
    {
      v15 = *((_DWORD *)v8 + 2 * v13 + 7);
      v16 = *((_DWORD *)v8 + 2 * v13 + 6);
      v14 = FLOODBM::bSearchAllSpans(v9, v16, v15, &v29, &v23, a6, a2, v10);
      if ( !v14 )
        break;
      v17 = v29;
      v18 = v23;
      if ( v29 != v23 )
      {
        while ( 1 )
        {
          if ( v17 >= v16 - 1 )
            goto LABEL_8;
          v27 = v16 - 1;
          v14 &= FLOODBM::bSearchAllSpans(this, v17, v16 - 1, &v29, &v27, a5, v28, v25);
          if ( !v14 )
            return v14;
          v16 = v29;
          if ( v29 == v27 || v29 >= v17 - 1 )
          {
LABEL_8:
            while ( v18 > v15 + 1 )
            {
              v14 &= FLOODBM::bSearchAllSpans(this, v15 + 1, v18, &v29, &v23, a5, v28, v25);
              if ( !v14 )
                return v14;
              v15 = v23;
              if ( v29 == v23 || v23 <= v18 + 1 )
                break;
              v22 = FLOODBM::bSearchAllSpans(this, v18 + 1, v23, &v29, &v23, a6, a2, v10);
              v14 &= v22;
              if ( !v14 )
                return v14;
              v18 = v23;
              if ( v29 == v23 )
                goto LABEL_9;
            }
            break;
          }
          v27 = v17 - 1;
          v14 &= FLOODBM::bSearchAllSpans(this, v29, v17 - 1, &v29, &v27, a6, a2, v10);
          if ( !v14 )
            return v14;
          v17 = v29;
          if ( v29 == v27 )
            goto LABEL_8;
        }
      }
LABEL_9:
      v8 = v25;
      v13 = (unsigned int)(v24 + 1);
      v9 = this;
      v24 = v13;
      if ( (unsigned int)v13 >= *((_DWORD *)v25 + 1) )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v19 = *((_QWORD *)a2 + 1);
    *((_DWORD *)a2 + 1) -= *(_DWORD *)(v19 + 8);
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v19 + 16);
    v20 = STACKOBJ::bPushMergeScrScan(a2);
    v14 &= v20 & STACKOBJ::bPushMergeScrScan(v28);
  }
  return v14;
}
