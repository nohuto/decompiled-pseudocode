/*
 * XREFs of ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x1C0129DF4
 * Callers:
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C0129C24 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C0129B38 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C012A020 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C012A080 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 */

__int64 __fastcall FLOODBM::bSearchAllSpans(
        FLOODBM *this,
        int a2,
        int a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        struct STACKOBJ *a7,
        struct SCANLINE *a8)
{
  unsigned int v8; // ebx
  int v10; // edi
  unsigned int *v12; // rsi
  __int64 v13; // r13
  unsigned int v14; // r12d
  unsigned int v15; // eax
  int v16; // r10d
  STACKOBJ *v17; // r11
  bool v18; // zf
  unsigned int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // r8d
  int *v24; // rax
  unsigned int v25; // edx
  unsigned int *v26; // r9
  unsigned int v27; // eax
  signed int v28; // r11d
  signed int *v29; // rcx
  unsigned int v30; // edx
  unsigned int v31; // ecx
  int *v32; // rax
  __int64 v33; // rcx
  int *v34; // [rsp+68h] [rbp+20h]

  v34 = a4;
  v8 = 0;
  v10 = a2;
  v12 = (unsigned int *)*((_QWORD *)a7 + 2);
  v13 = v12[1];
  *((_QWORD *)this + 4) = a6;
  v14 = 8 * v13 + 24;
  if ( a2 < a3 )
  {
    while ( 1 )
    {
      v15 = FLOODBM::iColorGet(this, v10);
      if ( *((_DWORD *)this + 6) )
      {
        while ( v15 != v16 )
        {
          v18 = ++v10 == a3;
          if ( v10 >= a3 )
            goto LABEL_7;
          v15 = FLOODBM::iColorGet(this, v10);
        }
      }
      else
      {
        while ( v15 == v16 )
        {
          v18 = ++v10 == a3;
          if ( v10 >= a3 )
            goto LABEL_7;
          v15 = FLOODBM::iColorGet(this, v10);
        }
      }
      v18 = v10 == a3;
LABEL_7:
      if ( v18 )
      {
LABEL_13:
        a4 = v34;
        break;
      }
      if ( a8 )
      {
        v30 = *((_DWORD *)a8 + 1);
        v31 = 0;
        if ( v30 )
        {
          v32 = (int *)((char *)a8 + 28);
          while ( v10 >= *(v32 - 1) )
          {
            if ( v10 < *v32 )
            {
              v10 = *((_DWORD *)a8 + 2 * v31 + 7);
              goto LABEL_12;
            }
            ++v31;
            v32 += 2;
            if ( v31 >= v30 )
              break;
          }
        }
      }
      v19 = v12[1];
      v20 = 0;
      if ( v19 )
      {
        v24 = (int *)(v12 + 7);
        while ( v10 < *(v24 - 1) || v10 >= *v24 )
        {
          ++v20;
          v24 += 2;
          if ( v20 >= v19 )
            goto LABEL_10;
        }
        v10 = v12[2 * v20 + 7];
      }
      else
      {
LABEL_10:
        v14 += 8;
        if ( v14 > v12[2] )
        {
          if ( !(unsigned int)STACKOBJ::bExpandScanline(v17, v14, 0) )
            return 0LL;
          v12 = (unsigned int *)*((_QWORD *)a7 + 2);
        }
        FLOODBM::vFindExtent(this, v10, (int *)&v12[2 * v12[1] + 6], (int *)&v12[2 * v12[1] + 7]);
        v21 = v12[1];
        v10 = v12[2 * v21 + 7] + 1;
        v12[1] = v21 + 1;
      }
LABEL_12:
      if ( v10 >= a3 )
        goto LABEL_13;
    }
  }
  v22 = v12[1];
  if ( (_DWORD)v13 == v22 )
  {
    *a5 = 0;
    *a4 = 0;
  }
  else
  {
    *a4 = v12[2 * v13 + 6];
    *a5 = v12[2 * v22 + 5];
    if ( v22 != 1 )
    {
      do
      {
        v25 = v8;
        v26 = &v12[2 * v8];
        v27 = v8;
        v28 = v26[6];
        if ( v8 < v22 )
        {
          v29 = (signed int *)(v26 + 6);
          do
          {
            if ( *v29 < v28 )
            {
              v28 = *v29;
              v25 = v27;
            }
            ++v27;
            v29 += 2;
          }
          while ( v27 < v22 );
          if ( v8 != v25 )
          {
            v33 = *((_QWORD *)v26 + 3);
            *((_QWORD *)v26 + 3) = *(_QWORD *)&v12[2 * v25 + 6];
            *(_QWORD *)&v12[2 * v25 + 6] = v33;
          }
        }
        v22 = v12[1];
        ++v8;
      }
      while ( v8 < v22 - 1 );
    }
  }
  return 1LL;
}
