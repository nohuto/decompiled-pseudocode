/*
 * XREFs of IoQueuesFreeResources @ 0x1C00043D0
 * Callers:
 *     IoQueuesCreation @ 0x1C0003F00 (IoQueuesCreation.c)
 *     NVMeControllerStop @ 0x1C0004EAC (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C0004FE4 (NVMeControllerRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  unsigned int v6; // edi
  unsigned __int16 i; // si
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax
  unsigned __int16 j; // di
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8

  v5 = 16 * *(unsigned __int16 *)(a1 + 238);
  v6 = *(unsigned __int16 *)(a1 + 238) << 6;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( *(_QWORD *)(a1 + 552) )
    {
      for ( i = 0; i < *(_WORD *)(a1 + 240); ++i )
      {
        v8 = *(_QWORD *)(a1 + 552);
        v9 = 136LL * i;
        v10 = *(_QWORD *)(v9 + v8);
        result = *(_QWORD *)(v9 + v8 + 8);
        if ( v10 )
          result = StorPortExtendedFunction(83LL, a1, v10, v6);
      }
    }
    if ( *(_QWORD *)(a1 + 560) )
    {
      for ( j = 0; j < *(_WORD *)(a1 + 242); ++j )
      {
        v13 = *(_QWORD *)(a1 + 560);
        v14 = 168LL * j;
        v15 = *(_QWORD *)(v14 + v13);
        result = *(_QWORD *)(v14 + v13 + 8);
        if ( v15 )
          result = StorPortExtendedFunction(83LL, a1, v15, v5);
      }
    }
    v16 = *(_QWORD *)(a1 + 552);
    if ( v16 )
    {
      if ( *(_QWORD *)(v16 + 24) )
      {
        StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v16 + 24), a4);
        v16 = *(_QWORD *)(a1 + 552);
      }
      result = *(_QWORD *)(v16 + 32);
      if ( result )
      {
        result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v16 + 32), a4);
        v16 = *(_QWORD *)(a1 + 552);
      }
      if ( v16 )
        result = StorPortExtendedFunction(1LL, a1, v16, a4);
    }
    v17 = *(_QWORD *)(a1 + 560);
    if ( v17 )
    {
      result = *(_QWORD *)(v17 + 120);
      if ( result )
      {
        result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v17 + 120), a4);
        v17 = *(_QWORD *)(a1 + 560);
      }
      if ( v17 )
        result = StorPortExtendedFunction(1LL, a1, v17, a4);
    }
  }
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_DWORD *)(a1 + 240) = 0;
  return result;
}
