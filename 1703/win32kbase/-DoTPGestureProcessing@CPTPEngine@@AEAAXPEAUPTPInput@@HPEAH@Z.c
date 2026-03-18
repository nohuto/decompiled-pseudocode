/*
 * XREFs of ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@HPEAH@Z @ 0x1C0134A2C
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?CacheGestureState@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0133098 (-CacheGestureState@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?CleanupGestureState@CPTPEngine@@AEAAXXZ @ 0x1C0133368 (-CleanupGestureState@CPTPEngine@@AEAAXXZ.c)
 *     ?GestureContactProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@HPEAH@Z @ 0x1C0135DD0 (-GestureContactProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@HPEAH@Z.c)
 *     ?SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEnginePointerNode@@@Z @ 0x1C0137CA4 (-SendGestureOutput@CBasePTPEngine@@IEAAXW4Action@Gesture@Payload@PTPEngineOutput@@HIPEAUPTPEngin.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x1C0137D28 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1C0137EFC (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

void __fastcall CPTPEngine::DoTPGestureProcessing(CPTPEngine *this, struct PTPInput *a2, int a3, int *a4)
{
  CPTPEngine *v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r9
  unsigned int v15; // r8d
  _DWORD *v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  int v19; // eax
  __int64 v20; // r10
  __int64 v21; // r8
  unsigned int v22; // r9d
  unsigned int v23; // r11d
  __int64 v24; // rdx
  __int128 *v25; // rcx
  int *v26; // rax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm1
  unsigned int v36; // r8d
  unsigned int *v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rdx
  unsigned int v40; // r9d
  _DWORD *v41; // r8
  __int64 v42; // rdx
  int v43; // ecx
  __int128 v44; // [rsp+30h] [rbp-168h]
  __int64 v45; // [rsp+40h] [rbp-158h]
  __int128 v46; // [rsp+50h] [rbp-148h] BYREF
  __int64 v47; // [rsp+60h] [rbp-138h]
  int v48; // [rsp+70h] [rbp-128h] BYREF

  if ( *((_DWORD *)this + 733) != 3 )
  {
    *((_DWORD *)this + 733) = 3;
    CBasePTPEngine::SendInertiaOutput(this, 1LL);
    LODWORD(v44) = 9;
    v47 = v45;
    v46 = v44;
    CBasePTPEngine::SendTelemetryOutput(this, 4LL, &v46);
    v8 = (CPTPEngine *)((char *)this + 1168);
    *((_QWORD *)this + 391) = *(_QWORD *)a2;
    v9 = (_DWORD *)((char *)this + 1168);
    v10 = 6LL;
    do
    {
      if ( (*v9 & 1) != 0 )
        *v9 |= 0x800u;
      v9 += 72;
      --v10;
    }
    while ( v10 );
    if ( *((_DWORD *)a2 + 12) )
    {
      v11 = (_DWORD *)((char *)a2 + 56);
      do
      {
        v12 = 288LL * (unsigned int)(*v11 % *((_DWORD *)this + 4));
        v13 = *(_DWORD *)((char *)this + v12 + 1168);
        if ( (v13 & 1) != 0 )
          *(_DWORD *)((char *)this + v12 + 1168) = v13 & 0xFFFFF7FF;
        v11 += 24;
        LODWORD(v10) = v10 + 1;
      }
      while ( (unsigned int)v10 < *((_DWORD *)a2 + 12) );
    }
    v14 = *((_QWORD *)this + 399);
    v15 = 0;
    if ( *(_DWORD *)(v14 + 48) )
    {
      v16 = (_DWORD *)(v14 + 56);
      do
      {
        v17 = 288LL * (unsigned int)(*v16 % *((_DWORD *)this + 4));
        v18 = *(_DWORD *)((char *)this + v17 + 1168);
        if ( (v18 & 1) != 0 )
          *(_DWORD *)((char *)this + v17 + 1168) = v18 & 0xFFFFF7FF;
        v16 += 24;
        ++v15;
      }
      while ( v15 < *(_DWORD *)(*((_QWORD *)this + 399) + 48LL) );
    }
    while ( v8 != (CPTPEngine *)((char *)this + 2896) )
    {
      v19 = *(_DWORD *)v8;
      if ( (*(_DWORD *)v8 & 1) != 0 && (v19 & 0x100) != 0 )
        *(_DWORD *)v8 = v19 | 0x800;
      v8 = (CPTPEngine *)((char *)v8 + 288);
    }
    v20 = *((_QWORD *)this + 399);
    v21 = 0LL;
    v22 = *(_DWORD *)(v20 + 48);
    if ( v22 )
    {
      v23 = *((_DWORD *)this + 4);
      while ( 1 )
      {
        v24 = 2LL;
        v25 = (__int128 *)((char *)this + 288 * (*(_DWORD *)(96 * v21 + v20 + 56) % v23) + 1168);
        v26 = &v48;
        do
        {
          v27 = *v25;
          v28 = v25[1];
          v25 += 8;
          *(_OWORD *)v26 = v27;
          v29 = *(v25 - 6);
          *((_OWORD *)v26 + 1) = v28;
          v30 = *(v25 - 5);
          *((_OWORD *)v26 + 2) = v29;
          v31 = *(v25 - 4);
          *((_OWORD *)v26 + 3) = v30;
          v32 = *(v25 - 3);
          *((_OWORD *)v26 + 4) = v31;
          v33 = *(v25 - 2);
          *((_OWORD *)v26 + 5) = v32;
          v34 = *(v25 - 1);
          *((_OWORD *)v26 + 6) = v33;
          v26 += 32;
          *((_OWORD *)v26 - 1) = v34;
          --v24;
        }
        while ( v24 );
        v35 = v25[1];
        *(_OWORD *)v26 = *v25;
        *((_OWORD *)v26 + 1) = v35;
        if ( (v48 & 1) != 0 && (v48 & 0x800) != 0 )
          break;
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= v22 )
          goto LABEL_37;
      }
      CPTPEngine::CleanupGestureState(this);
      CPTPEngine::CacheGestureState(this, a2);
      v36 = 0;
      if ( *((_DWORD *)a2 + 12) )
      {
        v37 = (unsigned int *)((char *)a2 + 64);
        do
        {
          v38 = *(v37 - 2);
          if ( v38 )
          {
            v39 = 288LL * (v38 % *((_DWORD *)this + 4));
            if ( (*(_DWORD *)((_BYTE *)this + v39 + 1168) & 1) != 0 && (*v37 & 0x10000) != 0 )
            {
              *v37 = *v37 & 0xFFFCFFFF | 0x20000;
              *(_DWORD *)((char *)this + v39 + 1168) &= ~2u;
            }
          }
          v37 += 24;
          ++v36;
        }
        while ( v36 < *((_DWORD *)a2 + 12) );
      }
    }
LABEL_37:
    v40 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v41 = (_DWORD *)((char *)a2 + 56);
      do
      {
        if ( *v41 )
        {
          v42 = (unsigned int)(*v41 % *((_DWORD *)this + 4));
          v43 = *((_DWORD *)this + 72 * (unsigned int)v42 + 292);
          if ( (v43 & 1) != 0 && (v43 & 0x80u) == 0 && (v41[2] & 0x20000) != 0 )
            *((_DWORD *)this + 72 * v42 + 292) = v43 | 2;
        }
        v41 += 24;
        ++v40;
      }
      while ( v40 < *((_DWORD *)a2 + 12) );
    }
    CBasePTPEngine::SendGestureOutput(this, 2LL, 0LL, 0LL, 0LL);
    *((_QWORD *)this + 399) = 0LL;
  }
  if ( !a3 )
    CPTPEngine::GestureContactProcessing(this, a2, 0LL, 0, a4);
}
