/*
 * XREFs of UsbhGetHubPdoName @ 0x1C003B07C
 * Callers:
 *     UsbhFdoReturnHubName @ 0x1C003E364 (UsbhFdoReturnHubName.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004975C (UsbhIoctlGetNodeConnectionName.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memmove @ 0x1C0028680 (memmove.c)
 *     memset @ 0x1C00289C0 (memset.c)
 */

__int64 __fastcall UsbhGetHubPdoName(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rsi
  _DWORD *v9; // rbp
  size_t v10; // r12
  _WORD *v12; // rax
  unsigned int v13; // ebx
  __int16 *v14; // rax
  __int16 v15; // cx
  unsigned int v16; // esi

  v5 = a4;
  FdoExt(a1);
  v9 = PdoExt(a2);
  v10 = (unsigned int)v5;
  Log(a1, 8, 1735290430, (__int64)a3, v5);
  *a5 = 0;
  if ( !a3 )
    return 3221225485LL;
  if ( (unsigned int)v5 < 6 )
    return 3221225507LL;
  if ( (v9[353] & 0xC) == 0xC )
  {
    v12 = (_WORD *)*((_QWORD *)v9 + 150);
    v13 = 0;
    if ( *v12 == 92 )
    {
      v14 = v12 + 1;
      v15 = *v14;
      if ( *v14 == 92 )
        goto LABEL_11;
      do
      {
        if ( !v15 )
          break;
        v15 = *++v14;
      }
      while ( *v14 != 92 );
      if ( *v14 == 92 )
LABEL_11:
        LODWORD(v14) = (_DWORD)v14 + 2;
      v13 = (_DWORD)v14 - v9[300];
    }
    v16 = *((unsigned __int16 *)v9 + 596) - v13;
    memset(a3, 0, v10);
    if ( v10 < (unsigned __int64)v16 + 6 )
    {
      *(_DWORD *)a3 = v16 + 6;
      a3[2] = 0;
      *a5 = 6;
    }
    else
    {
      memmove(a3 + 2, (const void *)(*((_QWORD *)v9 + 150) + 2 * ((unsigned __int64)v13 >> 1)), v16);
      *a5 = v16 + 6;
      *(_DWORD *)a3 = v16 + 6;
    }
  }
  else
  {
    *(_DWORD *)a3 = 6;
    a3[2] = 0;
    *a5 = 6;
  }
  Log(a1, 8, 1735290428, (unsigned int)*a5, 0LL);
  return 0LL;
}
