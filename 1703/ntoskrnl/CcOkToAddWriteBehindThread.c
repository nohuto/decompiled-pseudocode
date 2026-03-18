/*
 * XREFs of CcOkToAddWriteBehindThread @ 0x1401DD6CC
 * Callers:
 *     CcWorkerThread @ 0x1400AB860 (CcWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcOkToAddWriteBehindThread(__int64 a1)
{
  __int64 v2; // r11
  unsigned int v3; // edx
  unsigned int v4; // r9d
  __int64 v5; // r10
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // r11d
  __int64 v9; // rbx
  __int64 v10; // r10
  int v11; // eax
  unsigned int v12; // eax
  int v13; // ecx

  v2 = *(_QWORD *)(a1 + 752);
  v3 = 0;
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 376);
  v6 = *(_DWORD *)(v2 + 8 * v5);
  v7 = *(_DWORD *)(a1 + 528);
  if ( v6 >= v7 )
    v4 = v6 - v7;
  *(_DWORD *)(v2 + 8 * v5) = v7;
  v8 = 1;
  v9 = *(unsigned int *)(a1 + 376);
  v10 = *(_QWORD *)(a1 + 752);
  if ( (_DWORD)v9 )
    v3 = *(_DWORD *)(v10 + 8LL * (unsigned int)(v9 - 1) + 4);
  *(_DWORD *)(v10 + 8 * v9 + 4) = v4;
  if ( v4 )
  {
    if ( v4 < v3 )
    {
      if ( *(int *)(a1 + 760) > 0 )
        *(_DWORD *)(a1 + 760) = 0;
      --*(_DWORD *)(a1 + 760);
    }
    else
    {
      if ( *(int *)(a1 + 760) < 0 )
        *(_DWORD *)(a1 + 760) = 0;
      ++*(_DWORD *)(a1 + 760);
    }
    v11 = *(_DWORD *)(a1 + 760);
    if ( v11 == 3 )
    {
      *(_DWORD *)(a1 + 760) = 0;
      v8 = 2;
      v12 = *(_DWORD *)(a1 + 376);
      if ( v12 < *(_DWORD *)(a1 + 380) )
      {
        *(_DWORD *)(v10 + 8LL * (v12 + 1)) = *(_DWORD *)(a1 + 528);
        *(_DWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 376) + 1) + 4) = 0;
      }
    }
    else if ( v11 == -3 )
    {
      *(_DWORD *)(a1 + 760) = 0;
      v8 = 3;
      v13 = *(_DWORD *)(a1 + 376);
      if ( v13 )
      {
        *(_DWORD *)(v10 + 8LL * (unsigned int)(v13 - 1)) = *(_DWORD *)(a1 + 528);
        *(_DWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 376) - 1) + 4) = 0;
      }
    }
  }
  return v8;
}
