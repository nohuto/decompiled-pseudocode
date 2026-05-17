/*
 * XREFs of sub_1800768AC @ 0x1800768AC
 * Callers:
 *     SbSelectProcedure @ 0x180039270 (SbSelectProcedure.c)
 * Callees:
 *     sub_180076A0C @ 0x180076A0C (sub_180076A0C.c)
 *     sub_180076A44 @ 0x180076A44 (sub_180076A44.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_180106674 @ 0x180106674 (sub_180106674.c)
 */

__int64 __fastcall sub_1800768AC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *v7; // rax
  __int64 i; // rbp
  __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // ecx
  unsigned int v12; // r10d
  unsigned int v13; // esi
  unsigned int v14; // r10d
  unsigned __int64 v15; // rdi
  unsigned int v16; // edx
  __int64 result; // rax
  unsigned int v18; // eax
  _DWORD *v19; // rcx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v25; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v26[16]; // [rsp+30h] [rbp-58h] BYREF

  if ( !(unsigned int)sub_180076A44(a4, v26, &v25) )
    return 0LL;
  v7 = *(_DWORD **)(a2 + 24);
  for ( i = 0LL; (unsigned int)i < *v7; i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)&v7[2 * i + 2];
    if ( v9 )
    {
      v10 = 0;
      if ( *(_DWORD *)(v9 + 68) )
      {
        while ( 1 )
        {
          v11 = 0;
          if ( *(_DWORD *)(a3 + 60) )
            break;
LABEL_6:
          if ( ++v10 >= *(_DWORD *)(v9 + 68) )
            goto LABEL_7;
        }
        v21 = (unsigned __int64)v10 << 7;
        while ( 1 )
        {
          v22 = 16 * (v11 + 4LL);
          v23 = *(_QWORD *)(v21 + v9 + 184) - *(_QWORD *)(v22 + a3);
          if ( !v23 )
            v23 = *(_QWORD *)(v21 + v9 + 192) - *(_QWORD *)(v22 + a3 + 8);
          if ( !v23 )
            break;
          if ( ++v11 >= *(_DWORD *)(a3 + 60) )
            goto LABEL_6;
        }
        if ( !*(_QWORD *)(v21 + v9 + 80) && *(_DWORD *)(v21 + v9 + 88) == 2 )
          *(_QWORD *)(v21 + v9 + 80) = sub_180106674(*(_QWORD *)(v21 + v9 + 72));
        *(_QWORD *)(a1 + 8 * i + 16) = v21 + v9 + 72;
      }
LABEL_7:
      v12 = *(_DWORD *)(v9 + 68);
      if ( v10 >= v12 )
      {
        v13 = 0;
        if ( v12 )
        {
          while ( (unsigned int)sub_180076A0C(v26, v9 + ((unsigned __int64)v13 << 7) + 72) != 1 )
          {
            if ( ++v13 >= v14 )
              goto LABEL_14;
          }
          v15 = (unsigned __int64)v13 << 7;
          if ( !*(_QWORD *)(v15 + v9 + 80) && *(_DWORD *)(v15 + v9 + 88) == 2 )
            *(_QWORD *)(v15 + v9 + 80) = sub_180106674(*(_QWORD *)(v15 + v9 + 72));
          *(_QWORD *)(a1 + 8 * i + 16) = v15 + v9 + 72;
        }
LABEL_14:
        v16 = *(_DWORD *)(v9 + 68);
        if ( v13 >= v16 )
        {
          v18 = 0;
          if ( v16 )
          {
            v19 = (_DWORD *)(v9 + 104);
            while ( !*v19 )
            {
              ++v18;
              v19 += 32;
              if ( v18 >= v16 )
                goto LABEL_15;
            }
            v20 = (unsigned __int64)v18 << 7;
            if ( !*(_QWORD *)(v20 + v9 + 80) && *(_DWORD *)(v20 + v9 + 88) == 2 )
              *(_QWORD *)(v20 + v9 + 80) = sub_180106674(*(_QWORD *)(v20 + v9 + 72));
            *(_QWORD *)(a1 + 8 * i + 16) = v20 + v9 + 72;
          }
        }
      }
    }
LABEL_15:
    v7 = *(_DWORD **)(a2 + 24);
  }
  result = 1LL;
  *(_QWORD *)a1 = v25;
  *(_DWORD *)(a1 + 8) = a4;
  return result;
}
