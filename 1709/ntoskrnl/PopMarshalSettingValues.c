/*
 * XREFs of PopMarshalSettingValues @ 0x14057D18C
 * Callers:
 *     PopDispatchNotificationsToList @ 0x1404E6D90 (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x14057CFF0 (PopGetSettingValue.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopMarshalSettingValues(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 i; // rdx
  PVOID *v11; // r8
  _DWORD *v12; // rax
  __int64 j; // rbx
  _DWORD *v14; // rdx
  unsigned int v15; // r14d
  unsigned int v16; // edi
  void *v17; // rcx
  __int64 k; // rbx
  _DWORD *v19; // rcx
  PVOID P; // [rsp+30h] [rbp-38h] BYREF
  void *v23; // [rsp+38h] [rbp-30h]
  __int64 v24; // [rsp+40h] [rbp-28h]

  P = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v8 = 0;
  v9 = dword_1403661AC;
  for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
  {
    v11 = &P + i;
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
    {
      *v11 = *(PVOID *)(a1 + 8 * v9 + 64);
    }
    else
    {
      v17 = *(void **)(a1 + 8 * i + 64);
      *v11 = v17;
      if ( (_DWORD)i == 2 && !v17 )
        *v11 = v23;
    }
    v8 += 8;
    v12 = *v11;
    if ( *v11 )
    {
      ++*v12;
      v8 += v12[1];
    }
  }
  if ( a3 < v8 )
  {
    v16 = -1073741789;
  }
  else
  {
    for ( j = 0LL; (unsigned int)j < 3; j = (unsigned int)(j + 1) )
    {
      v14 = *(&P + j);
      if ( v14 )
      {
        *a2 = v14[2];
        a2[1] = v14[1];
        v15 = v14[1];
        memmove(a2 + 2, v14 + 3, v15);
      }
      else
      {
        *a2 = 0;
        a2[1] = 0;
        v15 = 0;
      }
      a2 = (_DWORD *)((char *)a2 + v15 + 8);
    }
    *a4 = v8;
    v16 = 0;
  }
  for ( k = 0LL; (unsigned int)k < 3; k = (unsigned int)(k + 1) )
  {
    v19 = *(&P + k);
    if ( v19 )
    {
      if ( (*v19)-- == 1 )
        ExFreePoolWithTag(v19, 0x74655350u);
    }
  }
  return v16;
}
