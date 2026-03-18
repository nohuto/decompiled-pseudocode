/*
 * XREFs of ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0041050
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C00EFAD0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?bEqual@ERECTL@@QEAAHAEAV1@@Z @ 0x1C0040E0C (-bEqual@ERECTL@@QEAAHAEAV1@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0040E64 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 */

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, struct ERECTL *a3, int a4)
{
  XCLIPOBJ *v4; // r10
  struct ERECTL *v5; // r14
  int v6; // ebx
  int v8; // r11d
  _DWORD *v9; // r9
  int v10; // r8d
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // ecx
  int v15; // r8d
  char v16; // bl
  unsigned int v17; // eax
  int v18; // r11d
  _DWORD *v19; // r8
  int v20; // esi
  int v21; // r14d
  signed int v22; // r13d
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r12
  unsigned int v26; // eax
  unsigned int v27; // r12d
  int v28; // r15d
  int v29; // eax
  ERECTL *v30; // rcx
  __int64 v31; // r10
  int v32; // r9d
  int v33; // [rsp+20h] [rbp-30h]
  signed int v34; // [rsp+28h] [rbp-28h]
  __int128 v35; // [rsp+30h] [rbp-20h] BYREF
  __int128 v36; // [rsp+40h] [rbp-10h]
  int v37; // [rsp+90h] [rbp+40h]
  int v38; // [rsp+98h] [rbp+48h]

  *((_DWORD *)this + 5) = 0;
  v4 = this;
  *((_QWORD *)this + 7) = a2;
  v5 = a3;
  v6 = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 4) = v6;
  v8 = *((_DWORD *)a3 + 2);
  v9 = (_DWORD *)((char *)this + 4);
  *((_DWORD *)this + 3) = v8;
  v10 = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 2) = v10;
  v11 = *(_DWORD *)v5;
  *v9 = *(_DWORD *)v5;
  *(_DWORD *)v4 = *((_DWORD *)a2 + 7);
  if ( *((_DWORD *)a2 + 20) <= 0xA0u
    && v11 >= *((_DWORD *)a2 + 22)
    && a4 != 1
    && v10 >= *((_DWORD *)a2 + 23)
    && v8 <= *((_DWORD *)a2 + 24)
    && v6 <= *((_DWORD *)a2 + 25)
    && v10 < v6
    && v11 < v8 )
  {
    return;
  }
  v12 = *((_DWORD *)a2 + 22);
  if ( v11 > v12 )
    v12 = v11;
  *v9 = v12;
  v13 = *((_DWORD *)a2 + 23);
  if ( v10 > v13 )
    v13 = v10;
  *((_DWORD *)v4 + 2) = v13;
  v14 = *((_DWORD *)a2 + 24);
  if ( v8 < v14 )
    v14 = v8;
  *((_DWORD *)v4 + 3) = v14;
  v15 = *((_DWORD *)a2 + 25);
  if ( v6 < v15 )
    v15 = v6;
  *((_DWORD *)v4 + 4) = v15;
  if ( v12 >= v14 || v13 >= v15 )
  {
    *v9 = v14;
    return;
  }
  if ( a4 != 1 && *((_DWORD *)a2 + 20) <= 0xA0u )
  {
    if ( a4 == 2 )
      return;
    goto LABEL_23;
  }
  *((_DWORD *)v4 + 34) = 0;
  v16 = 3;
  v17 = *((_DWORD *)a2 + 20);
  if ( v17 > 0xD8 )
  {
    *((_BYTE *)v4 + 21) = 3;
  }
  else if ( v17 > 0xA0 )
  {
    *((_BYTE *)v4 + 21) = 2;
  }
  v18 = *((_DWORD *)a2 + 21);
  v19 = (_DWORD *)((char *)a2 + 104);
  v35 = 0LL;
  v20 = a4 != 1;
  if ( v18 )
  {
    do
    {
      if ( v9[1] < v19[2] )
        break;
      v19 = (_DWORD *)((char *)v19 + (unsigned int)(4 * *v19 + 16));
      --v18;
    }
    while ( v18 );
    if ( v18 )
    {
      v21 = HIDWORD(v35);
      v22 = DWORD1(v35);
      v38 = DWORD2(v35);
      v37 = v35;
      do
      {
        --v18;
        if ( v19[1] >= v9[3] )
          break;
        v23 = 0;
        v24 = 0LL;
        if ( *v19 )
        {
          do
          {
            v25 = (unsigned int)(v24 + 1);
            if ( v19[v25 + 3] > *v9 )
            {
              if ( v19[v24 + 3] >= v9[2] )
                break;
              if ( ++*((_DWORD *)v4 + 34) >= 0xAu )
              {
                *((_DWORD *)v4 + 34) = -1;
                *((_BYTE *)v4 + 20) = 3;
                return;
              }
              v26 = v19[v25 + 3];
              v9 = (_DWORD *)((char *)v4 + 4);
              v27 = v38;
              v28 = v19[v24 + 3];
              v33 = v26;
              v34 = v19[1];
              *(_QWORD *)((char *)&v36 + 4) = __PAIR64__(v26, v34);
              v29 = v19[2];
              HIDWORD(v36) = v29;
              LODWORD(v36) = v28;
              if ( v37 == v38 || v22 == v21 )
              {
                v35 = v36;
                v21 = HIDWORD(v36);
                v22 = DWORD1(v36);
                v38 = DWORD2(v36);
                v37 = v36;
              }
              else
              {
                v32 = v37;
                if ( v28 < v37 )
                  v32 = v28;
                v37 = v32;
                if ( v34 < v22 )
                  v22 = v34;
                LODWORD(v35) = v32;
                v9 = (_DWORD *)((char *)v4 + 4);
                if ( v33 > v38 )
                  v27 = v33;
                v38 = v27;
                *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(v27, v22);
                if ( v29 > v21 )
                {
                  v21 = v29;
                  HIDWORD(v35) = v29;
                }
              }
              if ( *v9 >= v28 && v9[2] <= v33 )
                v23 = 1;
            }
            v24 = (unsigned int)(v24 + 2);
          }
          while ( (_DWORD)v24 != *v19 );
        }
        v20 &= v23;
        v19 = (_DWORD *)((char *)v19 + (unsigned int)(4 * *v19 + 16));
      }
      while ( v18 );
      v5 = a3;
    }
  }
  ERECTL::operator*=(v9, &v35);
  if ( v20 )
  {
    if ( a4 || ERECTL::bEqual(v30, v5) )
      return;
LABEL_23:
    *((_BYTE *)v4 + 20) = 1;
    return;
  }
  if ( *(_DWORD *)(v31 + 136) == 1 )
    v16 = 1;
  *(_BYTE *)(v31 + 20) = v16;
}
