/*
 * XREFs of PopMarshalSettingValues @ 0x1404C7D08
 * Callers:
 *     PopDispatchNotificationsToList @ 0x1404C5F9C (PopDispatchNotificationsToList.c)
 *     PopGetSettingValue @ 0x1404C79F0 (PopGetSettingValue.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopMarshalSettingValues(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 i; // rdx
  PVOID *v11; // r8
  _DWORD *v12; // rax
  void *v13; // rcx
  __int64 j; // rbx
  _DWORD *v15; // rdx
  unsigned int v16; // r14d
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 k; // rbx
  _DWORD *v20; // rcx
  PVOID P; // [rsp+30h] [rbp-38h] BYREF
  __int64 v24; // [rsp+38h] [rbp-30h]
  __int64 v25; // [rsp+40h] [rbp-28h]

  P = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v8 = 0;
  v9 = dword_14034BB2C;
  for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
  {
    v11 = &P + i;
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
    {
      *v11 = *(PVOID *)(a1 + 8 * v9 + 64);
    }
    else
    {
      v13 = *(void **)(a1 + 8 * i + 64);
      *v11 = v13;
      if ( (_DWORD)i == 2 )
      {
        v18 = v25;
        if ( !v13 )
          v18 = v24;
        v25 = v18;
      }
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
    v17 = -1073741789;
  }
  else
  {
    for ( j = 0LL; (unsigned int)j < 3; j = (unsigned int)(j + 1) )
    {
      v15 = *(&P + j);
      if ( v15 )
      {
        *a2 = v15[2];
        a2[1] = v15[1];
        v16 = v15[1];
        memmove(a2 + 2, v15 + 3, v16);
      }
      else
      {
        *a2 = 0;
        a2[1] = 0;
        v16 = 0;
      }
      a2 = (_DWORD *)((char *)a2 + v16 + 8);
    }
    *a4 = v8;
    v17 = 0;
  }
  for ( k = 0LL; (unsigned int)k < 3; k = (unsigned int)(k + 1) )
  {
    v20 = *(&P + k);
    if ( v20 )
    {
      if ( (*v20)-- == 1 )
        ExFreePoolWithTag(v20, 0x74655350u);
    }
  }
  return v17;
}
