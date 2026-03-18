/*
 * XREFs of IoSetLinkShareAccess @ 0x140547630
 * Callers:
 *     IoSetShareAccess @ 0x140546FC0 (IoSetShareAccess.c)
 *     RawCreate @ 0x1405472D0 (RawCreate.c)
 *     IoSetShareAccessEx @ 0x1405E85C0 (IoSetShareAccessEx.c)
 * Callees:
 *     <none>
 */

char __fastcall IoSetLinkShareAccess(int a1, char a2, __int64 a3, _DWORD *a4, _DWORD *a5, int a6)
{
  int v6; // r10d
  int v7; // ebx
  int v8; // r11d
  _DWORD *v9; // rax
  bool v10; // cl
  int v11; // eax

  v6 = a1 & 0x21;
  v7 = a1 & 6;
  *(_BYTE *)(a3 + 74) = v6 != 0;
  v8 = a1 & 0x10000;
  *(_BYTE *)(a3 + 75) = v7 != 0;
  *(_BYTE *)(a3 + 76) = (a1 & 0x10000) != 0;
  v9 = *(_DWORD **)(a3 + 208);
  v10 = !v9 || (*v9 & 1) == 0;
  if ( v6 || v7 || v8 )
  {
    LOBYTE(v11) = (a2 & 2) != 0;
    *(_BYTE *)(a3 + 77) = a2 & 1;
    *(_BYTE *)(a3 + 78) = v11;
    *(_BYTE *)(a3 + 79) = (a2 & 4) != 0;
    if ( a6 < 0 && (a2 & 1) == 0 )
      *(_BYTE *)(a3 + 77) = 1;
    if ( a5 )
    {
      if ( v10 )
      {
        *a4 = 1;
        *a5 = 1;
        a4[1] = *(unsigned __int8 *)(a3 + 74);
        a4[2] = *(unsigned __int8 *)(a3 + 75);
        a4[3] = 0;
        a5[1] = *(unsigned __int8 *)(a3 + 76);
        a4[4] = *(unsigned __int8 *)(a3 + 77);
        a4[5] = *(unsigned __int8 *)(a3 + 78);
        a4[6] = 0;
        v11 = *(unsigned __int8 *)(a3 + 79);
        a5[2] = v11;
      }
      else
      {
        *(_QWORD *)a4 = 0LL;
        *((_QWORD *)a4 + 1) = 0LL;
        *((_QWORD *)a4 + 2) = 0LL;
        a4[6] = 0;
        *(_QWORD *)a5 = 0LL;
        a5[2] = 0;
      }
    }
    else if ( v10 )
    {
      *a4 = 1;
      a4[1] = *(unsigned __int8 *)(a3 + 74);
      a4[2] = *(unsigned __int8 *)(a3 + 75);
      a4[3] = *(unsigned __int8 *)(a3 + 76);
      a4[4] = *(unsigned __int8 *)(a3 + 77);
      a4[5] = *(unsigned __int8 *)(a3 + 78);
      v11 = *(unsigned __int8 *)(a3 + 79);
      a4[6] = v11;
    }
    else
    {
      *(_QWORD *)a4 = 0LL;
      *((_QWORD *)a4 + 1) = 0LL;
      *((_QWORD *)a4 + 2) = 0LL;
      a4[6] = 0;
    }
  }
  else
  {
    LOBYTE(v11) = (_BYTE)a5;
    if ( a5 )
    {
      *(_QWORD *)a5 = 0LL;
      a5[2] = 0;
    }
    *(_QWORD *)a4 = 0LL;
    *((_QWORD *)a4 + 1) = 0LL;
    *((_QWORD *)a4 + 2) = 0LL;
    a4[6] = 0;
  }
  return v11;
}
