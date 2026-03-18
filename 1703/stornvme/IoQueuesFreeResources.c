/*
 * XREFs of IoQueuesFreeResources @ 0x1C0004124
 * Callers:
 *     IoQueuesCreation @ 0x1C0003C34 (IoQueuesCreation.c)
 *     NVMeControllerStop @ 0x1C0004B70 (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C0004C98 (NVMeControllerRemove.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall IoQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned __int16 v5; // si
  unsigned __int16 i; // di
  __int64 v8; // r8
  unsigned __int16 j; // di
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  void *v15; // r8
  __int64 v16; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = *(_WORD *)(a1 + 230);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( *(_QWORD *)(a1 + 544) )
    {
      for ( i = 0; i < *(_WORD *)(a1 + 232); ++i )
      {
        v8 = *(_QWORD *)(136LL * i + *(_QWORD *)(a1 + 544));
        if ( v8 )
          StorPortExtendedFunction(25LL, a1, v8, (unsigned __int64)v5 << 6);
      }
    }
    if ( *(_QWORD *)(a1 + 552) )
    {
      for ( j = 0; j < *(_WORD *)(a1 + 234); ++j )
      {
        v10 = *(_QWORD *)(168LL * j + *(_QWORD *)(a1 + 552));
        if ( v10 )
          StorPortExtendedFunction(25LL, a1, v10, 16LL * v5);
      }
    }
    v11 = *(_QWORD *)(a1 + 544);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 24);
      if ( v12 )
        StorPortExtendedFunction(1LL, a1, v12, a4);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 32LL);
      if ( v13 )
        StorPortExtendedFunction(1LL, a1, v13, a4);
      v14 = *(_QWORD *)(a1 + 544);
      if ( v14 )
        StorPortExtendedFunction(1LL, a1, v14, a4);
    }
    result = *(_UNKNOWN ***)(a1 + 552);
    if ( result )
    {
      v15 = result[15];
      if ( v15 )
        result = (_UNKNOWN **)StorPortExtendedFunction(1LL, a1, v15, a4);
      v16 = *(_QWORD *)(a1 + 552);
      if ( v16 )
        result = (_UNKNOWN **)StorPortExtendedFunction(1LL, a1, v16, a4);
    }
  }
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_DWORD *)(a1 + 232) = 0;
  return result;
}
