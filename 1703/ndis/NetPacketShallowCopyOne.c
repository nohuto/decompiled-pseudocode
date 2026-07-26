/*
 * XREFs of NetPacketShallowCopyOne @ 0x1C00785E0
 * Callers:
 *     NetPacketShallowCopyMany @ 0x1C0078550 (NetPacketShallowCopyMany.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 */

__int64 __fastcall NetPacketShallowCopyOne(_WORD *a1, _DWORD *Src)
{
  _QWORD *v2; // r9
  _QWORD *v5; // rdx
  _QWORD *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int16 v11; // cx
  _QWORD *i; // rbx
  __int64 v13; // rax
  char *v14; // rcx
  char *v15; // rdx
  __int64 (__fastcall *v16)(_QWORD, char *, char *); // rax
  __int64 v17; // rbx

  v2 = (_QWORD *)(*(_QWORD *)Src & 0xFFFFFFFFFFFFFFE0uLL);
  v5 = v2;
  v6 = (_QWORD *)(*(_QWORD *)a1 & 0xFFFFFFFFFFFFFFE0uLL);
  if ( v6 )
  {
    while ( v5 )
    {
      v2 = (_QWORD *)(*v2 & 0xFFFFFFFFFFFFFFE0uLL);
      v6 = (_QWORD *)(*v6 & 0xFFFFFFFFFFFFFFE0uLL);
      if ( !v6 )
      {
        if ( !v2 )
          break;
        return 3221225626LL;
      }
      if ( v2 )
      {
        v6[2] = v2[2];
        v6[1] = v2[1];
        *v6 ^= (*(_DWORD *)v6 ^ *(_DWORD *)v2) & 1LL;
        *v6 ^= (*v6 ^ *v2) & 2LL;
        v6[3] ^= (v2[3] ^ v6[3]) & 0x4000000000000000LL;
        v7 = v2[3] ^ (v6[3] ^ v2[3]) & 0x7FFFFFFFFFFFFFFFLL;
        v6[3] = v7;
        v8 = v7 ^ (v2[3] ^ v7) & 0xFFFFFFC000000LL;
        v6[3] = v8;
        v9 = v8 ^ (v2[3] ^ v8) & 0x3FF0000000000000LL;
        v6[3] = v9;
        v6[3] = v9 ^ (*((_DWORD *)v2 + 6) ^ (unsigned int)v8) & 0x3FFFFFF;
      }
      else
      {
        v6[2] = 0LL;
        v6[1] = 0LL;
        *v6 &= 0xFFFFFFFFFFFFFFFCuLL;
        v6[3] = 0LL;
      }
    }
  }
  if ( (dword_1C00926F8 & 4) != 0 )
  {
    v11 = a1[19];
    *((_DWORD *)a1 + 8) = Src[8];
    *((_BYTE *)a1 + 36) = *((_BYTE *)Src + 36);
    *((_BYTE *)a1 + 37) = *((_BYTE *)Src + 37);
    a1[19] ^= (*((_WORD *)Src + 19) ^ v11) & 1;
    a1[19] ^= (*((_WORD *)Src + 19) ^ a1[19]) & 2;
    *((_DWORD *)a1 + 10) = Src[10];
    for ( i = P; i; i = (_QWORD *)i[3] )
    {
      v13 = *((unsigned int *)i + 4);
      v14 = (char *)a1 + v13;
      v15 = (char *)Src + v13;
      v16 = (__int64 (__fastcall *)(_QWORD, char *, char *))i[7];
      if ( v16 )
      {
        result = v16(i[4], v14, v15);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        memmove(v14, v15, *((unsigned int *)i + 2));
      }
    }
  }
  else
  {
    v17 = *(_QWORD *)a1;
    memmove(a1, Src, (unsigned int)Size);
    *(_QWORD *)a1 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)*(_QWORD *)a1) & 0x1F;
  }
  return 0LL;
}
