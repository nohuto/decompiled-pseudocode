/*
 * XREFs of ?ndisIfQueryLoopbackObject@@YAHPEAXIPEAK0@Z @ 0x1C00A3120
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_LqL @ 0x1C0043EA4 (WPP_SF_LqL.c)
 */

__int64 __fastcall ndisIfQueryLoopbackObject(_DWORD *a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  unsigned int v6; // ebp
  char v8; // r14
  int v9; // eax
  __int64 v11; // rax
  __int64 v12; // rax

  v6 = a2;
  v8 = byte_1C009261D;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
  {
    WPP_SF_LqL(0x42u, a2, a2, (__int64)a4);
    v8 = byte_1C009261D;
  }
  if ( !a1 )
    return 3221225485LL;
  if ( v6 <= 0x10285 )
  {
    if ( v6 != 66181 )
    {
      switch ( v6 )
      {
        case 0x10106u:
          if ( *a3 < 4 )
            return 3221291030LL;
          *a3 = 4;
          v9 = a1[280];
          goto LABEL_20;
        case 0x10280u:
          if ( *a3 )
          {
            *a3 = 1;
            *(_BYTE *)a4 = *((_BYTE *)a1 + 1216);
            goto LABEL_21;
          }
          return 3221291030LL;
        case 0x10281u:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v11 = *((_QWORD *)a1 + 170);
          goto LABEL_27;
        case 0x10282u:
          if ( *a3 < 8 )
            return 3221291030LL;
          *a3 = 8;
          v11 = *((_QWORD *)a1 + 171);
          goto LABEL_27;
        case 0x10283u:
          if ( *a3 < 4 )
            return 3221291030LL;
          *a3 = 4;
          v9 = a1[278];
LABEL_20:
          *a4 = v9;
          goto LABEL_21;
      }
      if ( v6 != 66180 )
        goto LABEL_45;
    }
    if ( *a3 < 8 )
      return 3221291030LL;
    *a3 = 8;
    v11 = 0x40000000LL;
LABEL_27:
    *(_QWORD *)a4 = v11;
    goto LABEL_21;
  }
  if ( v6 == 66183 )
  {
    if ( *a3 >= 0xD8 )
    {
      *a3 = 216;
      *a4 = a1[278];
      a4[1] = a1[279];
      *((_QWORD *)a4 + 3) = 0x40000000LL;
      *((_QWORD *)a4 + 4) = 0x40000000LL;
      a4[2] = 1;
      a4[3] = 2;
      memset(a4 + 16, 0, 0x90uLL);
      a4[4] = a1[280];
      *((_BYTE *)a4 + 20) = *((_BYTE *)a1 + 1216);
      *((_BYTE *)a4 + 21) = *((_BYTE *)a1 + 1217);
      *((_QWORD *)a4 + 5) = *((_QWORD *)a1 + 170);
      v12 = *((_QWORD *)a1 + 171);
      *((_QWORD *)a4 + 7) = 0LL;
      *((_QWORD *)a4 + 6) = v12;
      a4[52] = a1[144];
      a4[53] = a1[356];
      goto LABEL_21;
    }
    return 3221291030LL;
  }
  if ( v6 == 66184 )
  {
    if ( *a3 < 4 )
      return 3221291030LL;
    *a3 = 4;
    v9 = a1[298];
    goto LABEL_20;
  }
  if ( v6 != 66186 )
  {
    if ( v6 == 66188 )
    {
      if ( *a3 >= 4 )
      {
        *a3 = 4;
        *a4 = 2;
        goto LABEL_21;
      }
      return 3221291030LL;
    }
    if ( v6 == 131334 )
    {
      if ( *a3 >= 0x90 )
      {
        *a3 = 144;
        memset(a4, 0, 0x90uLL);
        goto LABEL_21;
      }
      return 3221291030LL;
    }
LABEL_45:
    if ( *a3 >= 8 )
    {
      *a3 = 8;
      *(_QWORD *)a4 = 0LL;
      goto LABEL_21;
    }
    return 3221291030LL;
  }
  if ( *a3 < 4 )
    return 3221291030LL;
  *a3 = 4;
  *a4 = 1;
LABEL_21:
  if ( (unsigned __int8)v8 >= 4u )
    WPP_SF_LqL(0x43u, a2, v6, (__int64)a4);
  return 0LL;
}
