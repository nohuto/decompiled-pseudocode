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

__int64 __fastcall sub_180060EC8(_QWORD *a1, SIZE_T a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // edi
  char v8; // al
  __int16 v9; // cx
  __int16 v11; // cx
  char *v12; // r14
  unsigned __int64 v13; // rbx
  char *v14; // r12
  __int64 v15; // r9
  _QWORD *i; // r8
  _QWORD *v17; // rcx
  _QWORD **j; // rdx
  __int64 v19; // rdx
  unsigned __int8 *v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v5 = *((unsigned __int16 *)a1 + 1);
  if ( (v5 & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741811;
  if ( a1[1] == -1LL )
  {
    v6 = 2LL;
    if ( (v5 & 2) != 0 && a2 < 0x30 )
      return (unsigned int)-1073741811;
    v7 = 0;
    v8 = (unsigned __int8)byte_18015D028 >> 1;
    a1[2] = 0LL;
    v9 = *((_WORD *)a1 + 1);
    if ( (v8 & 1) != 0 )
    {
      v11 = v9 | 1;
      v12 = (char *)(a1 + 3);
      *((_WORD *)a1 + 1) = v11;
      if ( (v11 & 2) != 0 )
      {
        v20 = (unsigned __int8 *)(a1 + 3);
        v21 = 314159LL;
        do
        {
          v22 = *v20;
          v20 += 8;
          v21 = *(v20 - 1)
              + 37
              * (*(v20 - 2)
               + 37
               * (*(v20 - 3)
                + 37 * (*(v20 - 4) + 37 * (*(v20 - 5) + 37 * (*(v20 - 6) + 37 * (*(v20 - 7) + 37 * (v22 + 37 * v21)))))));
          --v6;
        }
        while ( v6 );
        RtlAcquireSRWLockShared(&Parameter);
        v23 = sub_180061D14(&Parameter, a1 + 3, v21);
        a1[2] = 1LL;
        if ( v23 )
          v24 = *(_QWORD *)(v23 + 32);
        else
          v24 = 0LL;
        a1[5] = v24;
        RtlReleaseSRWLockShared(&Parameter);
        *a3 = 48LL;
      }
      else
      {
        v13 = (a2 - 24) / 0x18;
        v14 = &v12[24 * v13];
        RtlAcquireSRWLockShared(&Parameter);
        if ( (unsigned int)dword_18015AA28 > v13 )
        {
          v7 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_18015AA28 + 3);
          RtlReleaseSRWLockShared(&Parameter);
        }
        else
        {
          v15 = qword_18015AA30;
          for ( i = (_QWORD *)qword_18015AA30; v12 < v14; v12 += 24 )
          {
            if ( !i )
              goto LABEL_16;
            v17 = (_QWORD *)*i;
            if ( (*i & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              v17 = (_QWORD *)*i;
            if ( ((unsigned __int8)v17 & 1) == 0 )
            {
              i = v17;
            }
            else
            {
LABEL_16:
              for ( j = (_QWORD **)(v15 + 8);
                    (unsigned __int64)j < qword_18015AA30 + 8 * ((unsigned __int64)(unsigned int)dword_18015AA2C >> 5);
                    ++j )
              {
                if ( (*(_BYTE *)j & 1) == 0 )
                {
                  i = *j;
                  v15 = (__int64)j;
                  v17 = *j;
                  goto LABEL_21;
                }
              }
              v17 = 0LL;
            }
LABEL_21:
            if ( !v17 )
              break;
            *(_OWORD *)v12 = *((_OWORD *)v17 + 1);
            *((_QWORD *)v12 + 2) = v17[4];
          }
          RtlReleaseSRWLockShared(&Parameter);
          v19 = (v12 - (char *)a1 - 24) / 24;
          a1[2] = v19;
          *a3 = 24 * (v19 + 1);
        }
      }
    }
    else
    {
      *((_WORD *)a1 + 1) = v9 & 0xFFFE;
      *a3 = 24LL;
    }
  }
  else
  {
    return (unsigned int)sub_1800FF4A0(a1, a2);
  }
  return v7;
}
