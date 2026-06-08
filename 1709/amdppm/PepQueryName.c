/*
 * XREFs of PepQueryName @ 0x1C0023170
 * Callers:
 *     PepNotifyQueryCoordinatedStates @ 0x1C0022C04 (PepNotifyQueryCoordinatedStates.c)
 *     PepQueryVetoList @ 0x1C0023040 (PepQueryVetoList.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1C00232B4 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x1C002631C (RegisterKernelPlatformStates.c)
 * Callees:
 *     memset @ 0x1C000CA40 (memset.c)
 */

__int64 __fastcall PepQueryName(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v8; // edi
  SIZE_T v9; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _WORD *v14; // rax
  __int16 v15; // dx
  bool v16; // zf
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  _WORD *v19; // [rsp+28h] [rbp-20h]

  v18 = 0LL;
  v19 = 0LL;
  v6 = *(_QWORD *)(a1 + 1088);
  LODWORD(v18) = a2;
  v8 = PoFxProcessorNotification(v6, a3, &v18);
  if ( !v8 )
  {
    v9 = 2 * (unsigned int)WORD2(v18) + 2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x72637250u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      v12 = *(_QWORD *)(a1 + 1088);
      v19 = v11;
      v8 = PoFxProcessorNotification(v12, a3, &v18);
      if ( !v8 )
      {
        *(_DWORD *)a4 = 0;
        v13 = 0x7FFFLL;
        *(_QWORD *)(a4 + 8) = 0LL;
        v14 = v11;
        do
        {
          if ( !*v14 )
            break;
          ++v14;
          --v13;
        }
        while ( v13 );
        v8 = v13 == 0 ? 0xC000000D : 0;
        if ( v13 )
          v15 = 0x7FFF - v13;
        else
          v15 = 0;
        v16 = v13 == 0;
        if ( v13 )
        {
          *(_QWORD *)(a4 + 8) = v11;
          *(_WORD *)a4 = 2 * v15;
          *(_WORD *)(a4 + 2) = 2 * v15 + 2;
          v16 = v13 == 0;
        }
        if ( !v16 )
          v11 = 0LL;
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
