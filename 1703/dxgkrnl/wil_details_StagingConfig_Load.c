/*
 * XREFs of wil_details_StagingConfig_Load @ 0x1C0012658
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C00125A0 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(_QWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  int v6; // edi
  __int64 v7; // r13
  char *PoolWithTag; // r15
  char *v9; // rbx
  SIZE_T v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 result; // rax
  unsigned __int64 v14; // r8
  unsigned __int16 v15; // r9
  __int64 v16; // r10
  int v17; // r9d
  char *v18; // rdx
  unsigned int v19; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+34h] [rbp-2Ch] BYREF
  char *v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF

  v21 = a4;
  memset(a1, 0, 0x58uLL);
  v6 = 0;
  *a1 = 0LL;
  v7 = 200LL;
  PoolWithTag = 0LL;
  v9 = 0LL;
  v22 = 0x418A073AA3BC7C75LL;
  v10 = -(__int64)(a4 != 0LL) & 0xC8;
  v19 = a4 != 0LL ? 0xC8 : 0;
  v11 = ZwQueryWnfStateData(&v22, 0LL, 0LL, a1 + 1, a4, &v19);
  v12 = v11;
  if ( v11 )
    goto LABEL_2;
  v9 = v21;
  if ( v21 )
    goto LABEL_2;
  do
  {
    if ( v10 < 0xC8 )
      v10 = 200LL;
    if ( v10 < v19 )
      v10 = v19;
    if ( v10 < 0x10 )
      v10 = 16LL;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPool, v10, 0x4C4957u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v19 = v10;
    v11 = ZwQueryWnfStateData(&v22, 0LL, 0LL, a1 + 1, PoolWithTag, &v19);
    v9 = PoolWithTag;
    v12 = v11;
LABEL_2:
    ;
  }
  while ( v11 == -1073741789 );
  if ( v12 || !v9 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    return v12;
  }
  else
  {
    v14 = v19;
    if ( v19 > 4 )
      *((_BYTE *)a1 + 12) = *v9;
    if ( (unsigned int)v14 >= 0x10
      && *((_BYTE *)a1 + 12) == 2
      && (v15 = *((_WORD *)v9 + 1), v15 >= 0x10u)
      && (v16 = *((unsigned __int16 *)v9 + 2),
          v14 >= v15 + 16 * (unsigned __int64)*((unsigned __int16 *)v9 + 3) + 12 * v16) )
    {
      v20 = 0;
      v17 = 0;
      if ( (_WORD)v16 )
      {
        v23 = 0x418A073AA3BC8075LL;
        LODWORD(v21) = 0;
        ZwQueryWnfStateData(&v23, 0LL, 0LL, &v20, 0LL, &v21);
        LODWORD(v14) = v19;
        v17 = v20;
      }
      a1[3] = v9;
      a1[4] = v9 + 16;
      a1[5] = &v9[12 * *((unsigned __int16 *)v9 + 2) + 16];
      *((_DWORD *)a1 + 12) = v17 != 0;
      if ( *v9 == 2 && (unsigned __int8)v9[1] < 2u )
      {
        LODWORD(v14) = *((unsigned __int16 *)v9 + 1)
                     + 16 * *((unsigned __int16 *)v9 + 3)
                     + 12 * *((unsigned __int16 *)v9 + 2);
        *((_DWORD *)a1 + 4) = 1;
      }
    }
    else
    {
      v19 = 16;
      *(_QWORD *)v9 = 0LL;
      *((_QWORD *)v9 + 1) = 0LL;
      *((_WORD *)v9 + 1) = 16;
      *v9 = 2;
      v9[1] = 2;
      LODWORD(v14) = v19;
      a1[3] = v9;
      v18 = &v9[*((unsigned __int16 *)v9 + 1)];
      a1[4] = v18;
      a1[5] = &v18[12 * *((unsigned __int16 *)v9 + 2)];
    }
    a1[8] = (unsigned int)v14;
    if ( PoolWithTag )
      v7 = v10;
    a1[7] = v9;
    a1[9] = v7;
    LOBYTE(v6) = v9 == PoolWithTag;
    result = 0LL;
    *((_DWORD *)a1 + 20) = v6;
  }
  return result;
}
