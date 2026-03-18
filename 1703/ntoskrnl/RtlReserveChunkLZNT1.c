/*
 * XREFs of RtlReserveChunkLZNT1 @ 0x1406EFD60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlDescribeChunkLZNT1 @ 0x1406EFC90 (RtlDescribeChunkLZNT1.c)
 */

__int64 __fastcall RtlReserveChunkLZNT1(__int64 a1, unsigned __int64 a2, _QWORD *a3, unsigned int a4)
{
  _WORD *v4; // r14
  _WORD *v6; // rsi
  __int64 v7; // rdi
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // r8d
  _WORD *v13; // r9
  size_t v14; // r8
  _WORD *v16; // [rsp+20h] [rbp-38h] BYREF
  char v17[48]; // [rsp+28h] [rbp-30h] BYREF
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_WORD **)a1;
  v16 = v4;
  v6 = v4;
  v7 = a4;
  while ( 1 )
  {
    v10 = RtlDescribeChunkLZNT1((unsigned __int64 *)&v16, a2, (__int64)v17, &v18);
    v11 = v10;
    if ( v10 < 0 )
      break;
    if ( v6 == v4 )
      v6 = v16;
  }
  if ( v10 == -2147483622 )
  {
    v12 = (_DWORD)v16 - (_DWORD)v6;
    *a3 = v4;
    v13 = *(_WORD **)a1;
    v14 = (unsigned int)(v12 + 2);
    v11 = -1073741789;
    if ( *(_QWORD *)a1 <= a2 - v7 )
    {
      if ( (_DWORD)v7 == 4096 )
      {
        LODWORD(v7) = 4098;
        if ( (unsigned __int64)v13 + v14 + 4098 <= a2 )
        {
          memmove(v13 + 2049, v6, v14);
          **(_WORD **)a1 = 0x3FFF;
          *a3 += 2LL;
LABEL_15:
          v11 = 0;
        }
      }
      else if ( (_DWORD)v7 )
      {
        if ( (unsigned __int64)v13 + v14 + v7 <= a2 )
        {
          memmove((char *)v13 + v7, v6, v14);
          goto LABEL_15;
        }
      }
      else
      {
        LODWORD(v7) = 6;
        if ( (unsigned __int64)v13 + v14 + 6 <= a2 )
        {
          memmove(v13 + 3, v6, v14);
          **(_WORD **)a1 = -20477;
          *(_WORD *)(*(_QWORD *)a1 + 2LL) = 2;
          *(_WORD *)(*(_QWORD *)a1 + 4LL) = 4092;
          goto LABEL_15;
        }
      }
      *(_QWORD *)a1 += (unsigned int)v7;
    }
  }
  return v11;
}
