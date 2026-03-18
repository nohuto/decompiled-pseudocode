/*
 * XREFs of PnpiCmResourceRemoveSidebandResources @ 0x1C00A35DC
 * Callers:
 *     PnpCmResourcesExcludeSidebandResources @ 0x1C00A34A8 (PnpCmResourcesExcludeSidebandResources.c)
 * Callees:
 *     PnpiCmResourceSidebandConnection @ 0x1C00A37BC (PnpiCmResourceSidebandConnection.c)
 */

__int64 __fastcall PnpiCmResourceRemoveSidebandResources(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6)
{
  __int64 v6; // r11
  unsigned int *v7; // rcx
  __int64 v8; // rbp
  unsigned int v12; // r12d
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  char v20; // r8
  unsigned int v21; // r10d
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // eax
  char v27; // [rsp+78h] [rbp+10h] BYREF

  v6 = a1;
  v7 = a6;
  v8 = 0LL;
  v12 = *a6;
  if ( !*(_DWORD *)a2 )
    return 3221225524LL;
  if ( *(_DWORD *)a2 != 1 || *(_DWORD *)a3 != 1 || *(_DWORD *)(a2 + 16) != *(_DWORD *)(a3 + 16) )
    return 3221225473LL;
  v14 = a5;
  if ( v12 >= 0x28 )
  {
    *(_OWORD *)a4 = *(_OWORD *)a2;
    *(_OWORD *)(a4 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a4 + 32) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a4 + 16) = 0;
    *(_OWORD *)v14 = *(_OWORD *)a3;
    *(_OWORD *)(v14 + 16) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(a3 + 32);
    *(_DWORD *)(v14 + 16) = 0;
  }
  v15 = 0LL;
  v16 = 20;
  if ( *(_DWORD *)(a2 + 16) )
  {
    while ( 1 )
    {
      v17 = 5 * v15;
      v27 = 0;
      v18 = a2 + 20 + 20 * v15;
      if ( *(_BYTE *)v18 == 2 )
      {
        v21 = *(_DWORD *)(v6 + 4);
        v20 = 0;
        v22 = 0;
        if ( v21 )
        {
          while ( 1 )
          {
            v23 = 32LL * v22;
            if ( *(_BYTE *)(v23 + v6 + 9) == 2 && *(_DWORD *)(v23 + v6 + 16) == *(_DWORD *)(v18 + 8) )
              break;
            if ( ++v22 >= v21 )
              goto LABEL_20;
          }
          v20 = 1;
        }
      }
      else
      {
        if ( *(_BYTE *)v18 != 0x84 )
          goto LABEL_22;
        result = PnpiCmResourceSidebandConnection(v6, a2 + 20 + 20 * v15, &v27);
        if ( (int)result < 0 )
          return result;
        v20 = v27;
        v18 = v19;
        v6 = a1;
      }
LABEL_20:
      if ( !v20 )
      {
        v17 = 5 * v15;
LABEL_22:
        v16 += 20;
        if ( v12 >= v16 )
        {
          v24 = 5 * v8;
          *(_OWORD *)(a4 + 4 * v24 + 20) = *(_OWORD *)v18;
          *(_DWORD *)(a4 + 4 * v24 + 36) = *(_DWORD *)(v18 + 16);
          ++*(_DWORD *)(a4 + 16);
          *(_OWORD *)(v14 + 4 * v24 + 20) = *(_OWORD *)(a3 + 4 * v17 + 20);
          *(_DWORD *)(v14 + 4 * v24 + 36) = *(_DWORD *)(a3 + 4 * v17 + 36);
          ++*(_DWORD *)(v14 + 16);
        }
        v8 = (unsigned int)(v8 + 1);
      }
      v15 = (unsigned int)(v15 + 1);
      if ( (unsigned int)v15 >= *(_DWORD *)(a2 + 16) )
      {
        v7 = a6;
        break;
      }
    }
  }
  v25 = v16 + 20;
  if ( (_DWORD)v8 )
    v25 = v16;
  if ( (_DWORD)v8 == *(_DWORD *)(a2 + 16) )
    return 3221225524LL;
  if ( v25 <= v12 )
    return 0LL;
  *v7 = v25;
  return 3221225507LL;
}
