/*
 * XREFs of sub_180006F80 @ 0x180006F80
 * Callers:
 *     RtlQueryHeapInformation @ 0x180005740 (RtlQueryHeapInformation.c)
 *     sub_1800F0640 @ 0x1800F0640 (sub_1800F0640.c)
 * Callees:
 *     sub_180008B20 @ 0x180008B20 (sub_180008B20.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_180100A00 @ 0x180100A00 (sub_180100A00.c)
 */

__int64 __fastcall sub_180006F80(_QWORD *a1, SIZE_T a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // r8
  unsigned int v7; // edi
  __int16 v8; // ax
  char *v9; // r14
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 *i; // rdx
  __int64 v16; // rdx
  unsigned __int8 *v18; // r9
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+28h] [rbp-30h]
  __int64 v23; // [rsp+30h] [rbp-28h]

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
    if ( (byte_18015BFBC & 2) != 0 )
    {
      v7 = 0;
      v8 = v5 | 1;
      a1[2] = 0LL;
      *((_WORD *)a1 + 1) = v8;
      if ( (v8 & 2) != 0 )
      {
        v18 = (unsigned __int8 *)(a1 + 3);
        v19 = 314159LL;
        do
        {
          v20 = *v18;
          v18 += 8;
          v19 = *(v18 - 1)
              + 37
              * (*(v18 - 2)
               + 37
               * (*(v18 - 3)
                + 37 * (*(v18 - 4) + 37 * (*(v18 - 5) + 37 * (*(v18 - 6) + 37 * (*(v18 - 7) + 37 * (v20 + 37 * v19)))))));
          --v6;
        }
        while ( v6 );
        RtlAcquireSRWLockShared(&Parameter);
        v21 = sub_180008B20(&Parameter, a1 + 3, v19);
        a1[2] = 1LL;
        if ( v21 )
          a1[5] = *(_QWORD *)(v21 + 32);
        else
          a1[5] = 0LL;
        RtlReleaseSRWLockShared(&Parameter);
        *a3 = 48LL;
      }
      else
      {
        v9 = (char *)(a1 + 3);
        v10 = (a2 - 24) / 0x18;
        v11 = (unsigned __int64)&a1[3 * v10 + 3];
        RtlAcquireSRWLockShared(&Parameter);
        if ( (unsigned int)dword_1801598C8 > v10 )
        {
          v7 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_1801598C8 + 3);
          RtlReleaseSRWLockShared(&Parameter);
        }
        else
        {
          v12 = qword_1801598D0;
          v23 = qword_1801598D0;
          v13 = (__int64 *)qword_1801598D0;
          v22 = qword_1801598D0;
          if ( (unsigned __int64)v9 < v11 )
          {
            while ( 1 )
            {
              if ( !v13 )
                goto LABEL_14;
              if ( (*v13 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              {
                v12 = v23;
                v13 = (__int64 *)v22;
              }
              v14 = *v13;
              if ( (*v13 & 1) == 0 )
              {
LABEL_19:
                v22 = v14;
              }
              else
              {
LABEL_14:
                for ( i = (__int64 *)(v12 + 8);
                      (unsigned __int64)i < qword_1801598D0 + 8 * ((unsigned __int64)(unsigned int)dword_1801598CC >> 5);
                      ++i )
                {
                  if ( (*(_BYTE *)i & 1) == 0 )
                  {
                    v14 = *i;
                    v23 = (__int64)i;
                    goto LABEL_19;
                  }
                }
                v14 = 0LL;
              }
              if ( !v14 )
                break;
              *(_OWORD *)v9 = *(_OWORD *)(v14 + 16);
              *((_QWORD *)v9 + 2) = *(_QWORD *)(v14 + 32);
              v9 += 24;
              if ( (unsigned __int64)v9 >= v11 )
                break;
              v12 = v23;
              v13 = (__int64 *)v22;
            }
          }
          RtlReleaseSRWLockShared(&Parameter);
          v16 = (v9 - (char *)a1 - 24) / 24;
          a1[2] = v16;
          *a3 = 24 * (v16 + 1);
        }
      }
    }
    else
    {
      v7 = 0;
      *((_WORD *)a1 + 1) = v5 & 0xFFFE;
      a1[2] = 0LL;
      *a3 = 24LL;
    }
  }
  else
  {
    return (unsigned int)sub_180100A00(a1, a2);
  }
  return v7;
}
