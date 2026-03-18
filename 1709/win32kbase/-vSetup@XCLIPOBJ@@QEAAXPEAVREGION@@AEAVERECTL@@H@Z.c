/*
 * XREFs of ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0055D30
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C0063D30 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?bEqual@ERECTL@@QEAAHAEAV1@@Z @ 0x1C0055798 (-bEqual@ERECTL@@QEAAHAEAV1@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00557F0 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 */

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, struct ERECTL *a3, int a4)
{
  XCLIPOBJ *v4; // r10
  int v6; // edi
  int v8; // ebx
  _DWORD *v9; // r9
  struct ERECTL *v10; // r15
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // r14d
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // eax
  _DWORD *v18; // rdx
  int v19; // r11d
  int v20; // edi
  int v21; // r14d
  int v22; // r12d
  int v23; // r15d
  int v24; // r13d
  int v25; // ebx
  __int64 v26; // rcx
  bool v27; // cc
  int v28; // eax
  ERECTL *v29; // rcx
  int v30; // [rsp+20h] [rbp-30h]
  __int128 v31; // [rsp+30h] [rbp-20h] BYREF
  __int128 v32; // [rsp+40h] [rbp-10h]
  signed int v33; // [rsp+90h] [rbp+40h]
  signed int v34; // [rsp+98h] [rbp+48h]
  struct ERECTL *v35; // [rsp+A0h] [rbp+50h]

  v35 = a3;
  *((_DWORD *)this + 5) = 0;
  v4 = this;
  *((_QWORD *)this + 7) = a2;
  v6 = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 4) = v6;
  v8 = *((_DWORD *)a3 + 2);
  v9 = (_DWORD *)((char *)this + 4);
  *((_DWORD *)this + 3) = v8;
  v10 = a3;
  v11 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 2) = v11;
  v12 = *(_DWORD *)a3;
  LOBYTE(a3) = 1;
  *v9 = v12;
  *(_DWORD *)v4 = *((_DWORD *)a2 + 7);
  if ( *((_DWORD *)a2 + 20) > 0xA0u
    || v12 < *((_DWORD *)a2 + 22)
    || a4 == 1
    || v11 < *((_DWORD *)a2 + 23)
    || v8 > *((_DWORD *)a2 + 24)
    || v6 > *((_DWORD *)a2 + 25)
    || v11 >= v6
    || v12 >= v8 )
  {
    v13 = *((_DWORD *)a2 + 22);
    if ( v12 > v13 )
      v13 = v12;
    *v9 = v13;
    v14 = *((_DWORD *)a2 + 23);
    if ( v11 > v14 )
      v14 = v11;
    *((_DWORD *)v4 + 2) = v14;
    v15 = *((_DWORD *)a2 + 24);
    if ( v8 < v15 )
      v15 = v8;
    *((_DWORD *)v4 + 3) = v15;
    v16 = *((_DWORD *)a2 + 25);
    if ( v6 < v16 )
      v16 = v6;
    *((_DWORD *)v4 + 4) = v16;
    if ( v13 >= v15 || v14 >= v16 )
    {
      *v9 = v15;
      return;
    }
    if ( a4 == 1 || *((_DWORD *)a2 + 20) > 0xA0u )
    {
      *((_DWORD *)v4 + 34) = 0;
      v17 = *((_DWORD *)a2 + 20);
      if ( v17 > 0xD8 )
      {
        *((_BYTE *)v4 + 21) = 3;
      }
      else if ( v17 > 0xA0 )
      {
        *((_BYTE *)v4 + 21) = 2;
      }
      v18 = (_DWORD *)((char *)a2 + 104);
      v19 = *((_DWORD *)a2 + 21);
      v20 = a4 != 1;
      v31 = 0LL;
      if ( v19 )
      {
        do
        {
          if ( v9[1] < v18[2] )
            break;
          v18 = (_DWORD *)((char *)v18 + (unsigned int)(4 * *v18 + 16));
          --v19;
        }
        while ( v19 );
        if ( v19 )
        {
          v21 = HIDWORD(v31);
          v22 = DWORD2(v31);
          v23 = DWORD1(v31);
          v24 = v31;
          do
          {
            --v19;
            if ( v18[1] >= v9[3] )
              break;
            v25 = 0;
            v26 = 0LL;
            if ( *v18 )
            {
              do
              {
                v27 = v18[(unsigned int)(v26 + 1) + 3] <= *v9;
                v9 = (_DWORD *)((char *)v4 + 4);
                if ( !v27 )
                {
                  v9 = (_DWORD *)((char *)v4 + 4);
                  if ( v18[v26 + 3] >= *((_DWORD *)v4 + 3) )
                    break;
                  if ( ++*((_DWORD *)v4 + 34) >= 0xAu )
                  {
                    *((_DWORD *)v4 + 34) = -1;
                    *((_BYTE *)v4 + 20) = 3;
                    return;
                  }
                  v28 = v18[v26 + 3];
                  LODWORD(v32) = v28;
                  v33 = v18[(unsigned int)(v26 + 1) + 3];
                  v34 = v18[1];
                  *(_QWORD *)((char *)&v32 + 4) = __PAIR64__(v33, v34);
                  v30 = v18[2];
                  HIDWORD(v32) = v30;
                  v9 = (_DWORD *)((char *)v4 + 4);
                  if ( v24 == v22 || v23 == v21 )
                  {
                    v31 = v32;
                    v21 = HIDWORD(v32);
                    v22 = DWORD2(v32);
                    v23 = DWORD1(v32);
                    v24 = v32;
                  }
                  else
                  {
                    if ( v28 < v24 )
                      v24 = v28;
                    LODWORD(v31) = v24;
                    if ( v34 < v23 )
                      v23 = v34;
                    DWORD1(v31) = v23;
                    if ( v33 > v22 )
                      v22 = v33;
                    DWORD2(v31) = v22;
                    if ( v30 > v21 )
                    {
                      v21 = v30;
                      HIDWORD(v31) = v30;
                    }
                  }
                  if ( *v9 >= v28 && *((_DWORD *)v4 + 3) <= v33 )
                    v25 = 1;
                }
                v26 = (unsigned int)(v26 + 2);
              }
              while ( (_DWORD)v26 != *v18 );
            }
            v20 &= v25;
            v18 = (_DWORD *)((char *)v18 + (unsigned int)(4 * *v18 + 16));
          }
          while ( v19 );
          v10 = v35;
        }
      }
      ERECTL::operator*=(v9, &v31);
      if ( v20 )
      {
        if ( a4 || ERECTL::bEqual(v29, v10) )
          return;
      }
      else if ( *((_DWORD *)v4 + 34) != (_DWORD)a3 )
      {
        LOBYTE(a3) = 3;
      }
    }
    else if ( a4 == 2 )
    {
      return;
    }
    *((_BYTE *)v4 + 20) = (_BYTE)a3;
  }
}
