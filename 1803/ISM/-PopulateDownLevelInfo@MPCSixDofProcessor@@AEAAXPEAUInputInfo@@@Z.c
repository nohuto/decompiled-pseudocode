/*
 * XREFs of ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18003E2B0
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18003E020 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180054744 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::PopulateDownLevelInfo(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  int v4; // ebx
  __int64 v5; // rax
  volatile signed __int32 *v6; // rdi
  char v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  volatile signed __int32 *v10; // rdi
  char v11; // r14
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1
  bool v15; // zf
  __int128 v16; // xmm0

  v4 = 0;
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 336),
    *((_BYTE *)this + 3233),
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 151),
    *((float *)a2 + 152),
    *((float *)a2 + 166));
  v5 = *((_QWORD *)this + 336);
  v6 = *(volatile signed __int32 **)(v5 + 24);
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v6 = *(volatile signed __int32 **)(v5 + 24);
  }
  v7 = *(_BYTE *)(*(_QWORD *)(v5 + 16) + 10LL);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v8 = 2LL;
  if ( v7 )
  {
    v4 = 1;
  }
  else
  {
    v9 = *((_QWORD *)this + 336);
    if ( *(_BYTE *)(v9 + 13) )
    {
      v4 = 7;
    }
    else
    {
      v10 = *(volatile signed __int32 **)(v9 + 24);
      if ( v10 )
      {
        _InterlockedIncrement(v10 + 2);
        v10 = *(volatile signed __int32 **)(v9 + 24);
      }
      v11 = *(_BYTE *)(*(_QWORD *)(v9 + 16) + 12LL);
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
        }
      }
      if ( v11 )
      {
        v4 = 2;
      }
      else if ( *((_DWORD *)a2 + 131) == 6 )
      {
        v4 = 4;
      }
    }
  }
  v12 = (_OWORD *)((char *)this + 2312);
  v13 = (_OWORD *)((char *)a2 + 600);
  do
  {
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v12[5] = v13[5];
    v12[6] = v13[6];
    v12 += 8;
    v14 = v13[7];
    v13 += 8;
    *(v12 - 1) = v14;
    --v8;
  }
  while ( v8 );
  *v12 = *v13;
  v12[1] = v13[1];
  v12[2] = v13[2];
  v12[3] = v13[3];
  v15 = *((_BYTE *)a2 + 897) == 1;
  v16 = *(_OWORD *)((char *)a2 + 612);
  *((_DWORD *)a2 + 278) = *((_DWORD *)a2 + 151);
  *((_DWORD *)a2 + 279) = *((_DWORD *)a2 + 152);
  *((_DWORD *)a2 + 284) = *((_DWORD *)a2 + 158);
  *((_DWORD *)a2 + 274) = v4;
  *((_BYTE *)a2 + 1140) = v15;
  *((_OWORD *)a2 + 70) = v16;
}
