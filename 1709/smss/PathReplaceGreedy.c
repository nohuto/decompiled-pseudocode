/*
 * XREFs of PathReplaceGreedy @ 0x1400135B4
 * Callers:
 *     CreateRegistryLinksForMachine @ 0x140005790 (CreateRegistryLinksForMachine.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 */

__int64 __fastcall PathReplaceGreedy(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v3; // edi
  unsigned __int16 v6; // r8
  unsigned __int16 *v7; // r15
  unsigned __int16 v8; // r12
  unsigned __int16 v9; // r14
  __int64 v10; // rcx
  WCHAR v11; // bx
  __int64 v12; // rdx
  unsigned __int16 *v13; // r11
  int v15; // r9d
  int i; // r8d
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int16 v26; // ax
  _WORD v27[4]; // [rsp+10h] [rbp-10h] BYREF
  unsigned __int16 *v28; // [rsp+18h] [rbp-8h]
  unsigned __int16 v29; // [rsp+20h] [rbp+0h]
  unsigned __int16 *v30; // [rsp+28h] [rbp+8h]

  v3 = 0;
  v30 = a2;
  v29 = 0;
  v6 = 0;
  v7 = 0LL;
  if ( *a3 >= *a1 )
  {
    v8 = 0;
    if ( (*a3 & 0xFFFE) != 0 )
    {
      do
      {
        v9 = 0;
        if ( (*a1 & 0xFFFE) != 0 )
        {
          do
          {
            v10 = v8 + (unsigned int)v9;
            if ( (unsigned int)v10 >= *a3 >> 1 )
              break;
            v11 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v10));
            if ( v11 != RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v9)) )
              break;
            ++v9;
          }
          while ( v9 < (unsigned __int16)(*a1 >> 1) );
          v6 = v29;
          v3 = 0;
        }
        if ( v9 == *a1 >> 1 )
        {
          v12 = v8 + (unsigned int)v9;
          if ( (_DWORD)v12 == *a3 >> 1 || *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v12) == 92 )
          {
            v28 = v7;
            ++v6;
            v27[0] = v8;
            v29 = v6;
            v7 = v27;
            v27[1] = v8 + v9;
          }
        }
        ++v8;
      }
      while ( v8 < (unsigned __int16)(*a3 >> 1) );
      if ( v7 )
      {
        v13 = v30;
        if ( *v30 > *a1 && *a3 + v6 * (*v30 - (unsigned int)*a1) > a3[1] )
          return 2147483653LL;
        v15 = (a3[1] >> 1) - 1;
        for ( i = (*a3 >> 1) - 1; i >= 0; --i )
        {
          if ( v7 && i < v7[1] )
          {
            v17 = *v13;
            v18 = 0;
            if ( (*v13 & 0xFFFE) != 0 )
            {
              do
              {
                v19 = v18++;
                v20 = v15--;
                *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v20) = *(_WORD *)(*((_QWORD *)v13 + 1)
                                                                     + 2 * (((unsigned __int64)v17 >> 1) - v19)
                                                                     - 2);
                v17 = *v13;
              }
              while ( v18 < (unsigned __int16)(*v13 >> 1) );
            }
            i = *v7;
            v7 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
          }
          else
          {
            v21 = v15--;
            *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v21) = *(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * i);
          }
        }
        v22 = v15 + 1;
        if ( v22 < a3[1] >> 1 )
        {
          v23 = 2LL * v22;
          do
          {
            v24 = *((_QWORD *)a3 + 1);
            ++v22;
            v25 = v3++;
            v26 = *(_WORD *)(v23 + v24);
            v23 += 2LL;
            *(_WORD *)(v24 + 2 * v25) = v26;
          }
          while ( v22 < a3[1] >> 1 );
        }
        *a3 = 2 * v3;
      }
    }
  }
  return 0LL;
}
