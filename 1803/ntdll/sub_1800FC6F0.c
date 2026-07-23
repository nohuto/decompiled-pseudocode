/*
 * XREFs of sub_1800FC6F0 @ 0x1800FC6F0
 * Callers:
 *     sub_18005D6F8 @ 0x18005D6F8 (sub_18005D6F8.c)
 *     sub_1800FD450 @ 0x1800FD450 (sub_1800FD450.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18001ECD0 (RtlRunOnceBeginInitialize.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     sub_18010D8A4 @ 0x18010D8A4 (sub_18010D8A4.c)
 */

int __fastcall sub_1800FC6F0(_RTL_RUN_ONCE *a1, int a2, int a3)
{
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdi
  _BYTE *v7; // rbp
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  _BYTE *v10; // rdx
  __int64 v11; // rsi
  _QWORD *i; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-68h] BYREF
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18[4]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD *v20; // [rsp+A8h] [rbp+20h] BYREF

  LODWORD(v5) = RtlRunOnceBeginInitialize(a1, 1u, (PVOID *)&v20);
  if ( (v5 & 0x80000000) == 0LL )
  {
    v6 = v20;
    v7 = (_BYTE *)v20[3];
    v8 = v7;
    while ( 1 )
    {
      if ( !v8 )
        goto LABEL_8;
      v9 = (_QWORD *)*v8;
      v5 = *v8 & 0x8000000000000002uLL;
      if ( v5 == 0x8000000000000002uLL )
      {
        LODWORD(v5) = MEMORY[0];
        v9 = (_QWORD *)*v8;
      }
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
LABEL_8:
        v10 = v7 + 8;
        v5 = v6[3];
        while ( 1 )
        {
          if ( (unsigned __int64)v10 >= v5 + 8 * ((unsigned __int64)*((unsigned int *)v6 + 5) >> 5) )
          {
            v9 = 0LL;
            goto LABEL_13;
          }
          if ( (*v10 & 1) == 0 )
            break;
          v10 += 8;
        }
        v8 = *(_QWORD **)v10;
        v7 = v10;
        v9 = *(_QWORD **)v10;
      }
      else
      {
        v8 = v9;
      }
LABEL_13:
      if ( !v9 )
        break;
      v11 = (__int64)v8;
      for ( i = v7; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v8 )
        {
          *i = *v8;
          --*((_DWORD *)v6 + 4);
          *v8 |= 0x8000000000000002uLL;
          v8 = i;
          goto LABEL_21;
        }
      }
      v11 = 0LL;
LABEL_21:
      sub_18010D8A4(&qword_18015D2F0, *(_QWORD *)(v11 + 16));
      v16 = xmmword_18015A790;
      sub_18005F840(v11, &v16);
    }
    v13 = (__int64)v20;
    v14 = v20[3];
    if ( v14 )
    {
      v17 = xmmword_18015A790;
      LODWORD(v5) = sub_18005F840(v14, &v17);
    }
    if ( a2 )
    {
      v6[2] = 0LL;
      v6[3] = 0LL;
    }
    else
    {
      v18[0] = xmmword_18015A790;
      LODWORD(v5) = sub_18005F840(v13, v18);
      if ( a3 )
        a1->Ptr = 0LL;
    }
  }
  return v5;
}
