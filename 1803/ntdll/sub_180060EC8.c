/*
 * XREFs of sub_180060EC8 @ 0x180060EC8
 * Callers:
 *     RtlQueryHeapInformation @ 0x18005FC60 (RtlQueryHeapInformation.c)
 *     sub_1800EC6A0 @ 0x1800EC6A0 (sub_1800EC6A0.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_180061D14 @ 0x180061D14 (sub_180061D14.c)
 *     sub_1800FF4A0 @ 0x1800FF4A0 (sub_1800FF4A0.c)
 */

__int64 __fastcall sub_180060EC8(_QWORD *a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // edi
  char v9; // al
  __int16 v10; // cx
  __int16 v12; // cx
  char *v13; // r14
  unsigned __int64 v14; // rbx
  char *v15; // r12
  __int64 v16; // r9
  _QWORD *i; // r8
  _QWORD *v18; // rcx
  _QWORD **j; // rdx
  __int64 v20; // rdx
  unsigned __int8 *v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rax
  char *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v6 = *((unsigned __int16 *)a1 + 1);
  if ( (v6 & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741811;
  if ( a1[1] == -1LL )
  {
    v7 = 2LL;
    if ( (v6 & 2) != 0 && a2 < 0x30 )
      return (unsigned int)-1073741811;
    v8 = 0;
    v9 = (unsigned __int8)byte_18015D028 >> 1;
    a1[2] = 0LL;
    v10 = *((_WORD *)a1 + 1);
    if ( (v9 & 1) != 0 )
    {
      v12 = v10 | 1;
      v13 = (char *)(a1 + 3);
      *((_WORD *)a1 + 1) = v12;
      if ( (v12 & 2) != 0 )
      {
        v21 = (unsigned __int8 *)(a1 + 3);
        v22 = 314159LL;
        do
        {
          v23 = *v21;
          v21 += 8;
          v24 = (char *)(*(v21 - 3)
                       + 37
                       * (*(v21 - 4) + 37 * (*(v21 - 5) + 37 * (*(v21 - 6) + 37 * (*(v21 - 7) + 37 * (v23 + 37 * v22))))));
          v22 = *(v21 - 1) + 37 * (*(v21 - 2) + 37LL * (_QWORD)v24);
          --v7;
        }
        while ( v7 );
        RtlAcquireSRWLockShared(&qword_18015AA20, v24, 0LL, (__int64)v21);
        v25 = sub_180061D14(&qword_18015AA20, a1 + 3, v22);
        a1[2] = 1LL;
        if ( v25 )
          v26 = *(_QWORD *)(v25 + 32);
        else
          v26 = 0LL;
        a1[5] = v26;
        RtlReleaseSRWLockShared(&qword_18015AA20);
        *a3 = 48LL;
      }
      else
      {
        v14 = (a2 - 24) / 0x18;
        v15 = &v13[24 * v14];
        RtlAcquireSRWLockShared(
          &qword_18015AA20,
          (char *)(((a2 - 24) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64),
          2LL,
          a4);
        if ( (unsigned int)dword_18015AA28 > v14 )
        {
          v8 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_18015AA28 + 3);
          RtlReleaseSRWLockShared(&qword_18015AA20);
        }
        else
        {
          v16 = qword_18015AA30;
          for ( i = (_QWORD *)qword_18015AA30; v13 < v15; v13 += 24 )
          {
            if ( !i )
              goto LABEL_16;
            v18 = (_QWORD *)*i;
            if ( (*i & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              v18 = (_QWORD *)*i;
            if ( ((unsigned __int8)v18 & 1) == 0 )
            {
              i = v18;
            }
            else
            {
LABEL_16:
              for ( j = (_QWORD **)(v16 + 8);
                    (unsigned __int64)j < qword_18015AA30 + 8 * ((unsigned __int64)(unsigned int)dword_18015AA2C >> 5);
                    ++j )
              {
                if ( (*(_BYTE *)j & 1) == 0 )
                {
                  i = *j;
                  v16 = (__int64)j;
                  v18 = *j;
                  goto LABEL_21;
                }
              }
              v18 = 0LL;
            }
LABEL_21:
            if ( !v18 )
              break;
            *(_OWORD *)v13 = *((_OWORD *)v18 + 1);
            *((_QWORD *)v13 + 2) = v18[4];
          }
          RtlReleaseSRWLockShared(&qword_18015AA20);
          v20 = (v13 - (char *)a1 - 24) / 24;
          a1[2] = v20;
          *a3 = 24 * (v20 + 1);
        }
      }
    }
    else
    {
      *((_WORD *)a1 + 1) = v10 & 0xFFFE;
      *a3 = 24LL;
    }
  }
  else
  {
    return (unsigned int)sub_1800FF4A0(a1);
  }
  return v8;
}
