/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18016D804
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800A12A0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180084C7C (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18016B210 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAAXUD2DVector3@@M_N@Z @ 0x18016DC38 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAAXUD2DVector3@@M_N@Z.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18016EA64 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

void __fastcall CInteractionTracker::SendPendingCallbacks(CInteractionTracker *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // r12d
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edx
  int v10; // edx
  int v11; // edx
  unsigned int ChannelCallbackId; // eax
  CScrollAnimation **v13; // rcx
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // xmm1_8
  __int128 v18; // xmm1
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // xmm0_8
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  int v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h] BYREF
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int128 v34; // [rsp+A0h] [rbp-60h]
  __int128 v35; // [rsp+B0h] [rbp-50h]
  __int128 v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-20h] BYREF
  int v39; // [rsp+E8h] [rbp-18h]
  __int64 v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  __int64 v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  _QWORD v44[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v45[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v46[2]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v47[64]; // [rsp+140h] [rbp+40h] BYREF
  const void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1288LL) + 56LL);
  if ( CInteractionTracker::ShouldNotify(this, 0) )
  {
    v6 = 0;
    if ( *(_DWORD *)(v3 + 584) )
    {
      do
      {
        v7 = *((_QWORD *)this + 70);
        v8 = *(_DWORD *)(v7 + 20LL * v6 + 12);
        v38 = *(_QWORD *)(v7 + 20LL * v6 + 4);
        v39 = v8;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v38, v4, 0LL);
        v9 = *(_DWORD *)(*((_QWORD *)this + 70) + 20LL * v6);
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              if ( v11 != 1 )
                ModuleFailFastForHRESULT(-2147024809, retaddr);
              ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
              v44[1] = *((unsigned int *)this + 14);
              v44[0] = ChannelCallbackId;
              CoreUICallSend(v2, v44, 2LL, 4LL, 5, &unk_1801F0537);
            }
            else
            {
              if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
              {
                v14 = CInteractionTracker::CalculateInertiaCallbackValues(v13, (__int64)v47);
                v15 = *(_OWORD *)(v14 + 16);
                v34 = *(_OWORD *)v14;
                v16 = *(_OWORD *)(v14 + 32);
                v35 = v15;
                v17 = *(_QWORD *)(v14 + 48);
              }
              else
              {
                v18 = *(_OWORD *)((char *)this + 676);
                v34 = *(_OWORD *)((char *)this + 660);
                v16 = *(_OWORD *)((char *)this + 692);
                v35 = v18;
                v17 = *(_QWORD *)((char *)this + 708);
              }
              v36 = v16;
              v41 = DWORD2(v16);
              v40 = v16;
              v43 = DWORD2(v35);
              v42 = v35;
              v30 = v34;
              v37 = v17;
              v31 = DWORD2(v34);
              v19 = CNotificationResource::GetChannelCallbackId(this);
              v45[1] = *((unsigned int *)this + 14);
              v45[0] = v19;
              CoreUICallSend(v2, v45, 2LL, 4LL, 1, &unk_1801F0526);
            }
          }
          else
          {
            v20 = CNotificationResource::GetChannelCallbackId(this);
            v46[1] = *((unsigned int *)this + 14);
            v46[0] = v20;
            CoreUICallSend(v2, v46, 2LL, 4LL, 4, &unk_1801F0537);
          }
        }
        else
        {
          v21 = CNotificationResource::GetChannelCallbackId(this);
          v33 = *((unsigned int *)this + 14);
          v32 = v21;
          CoreUICallSend(v2, &v32, 2LL, 4LL, 3, &unk_1801F0537);
        }
        ++v6;
      }
      while ( v6 < *((_DWORD *)this + 146) );
    }
    LOBYTE(v5) = *((_BYTE *)this + 620);
    if ( (v5 & 6) != 0 )
    {
      v22 = *((_DWORD *)this + 18);
      LOBYTE(v5) = (v5 & 4) != 0;
      v30 = *((_QWORD *)this + 8);
      v31 = v22;
      CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v30, v4, v5);
      *((_BYTE *)this + 620) &= 0xF9u;
    }
  }
  else
  {
    v23 = *(_DWORD *)(v3 + 584);
    v24 = 0;
    if ( v23 )
    {
      while ( *(_DWORD *)(*(_QWORD *)(v3 + 560) + 20LL * v24) )
      {
        if ( ++v24 >= v23 )
          goto LABEL_29;
      }
      v25 = *((_QWORD *)this + 8);
      v31 = *((_DWORD *)this + 18);
      v26 = *((_QWORD *)this + 6);
      v30 = v25;
      if ( v26 )
        v27 = *(_DWORD *)(v26 + 68);
      else
        v27 = 0;
      v32 = v27;
      v33 = *((unsigned int *)this + 14);
      CoreUICallSend(v2, &v32, 2LL, 4LL, 0, &unk_1801F051F);
      v28 = *((_QWORD *)this + 6);
      if ( v28 )
        v29 = *(unsigned int *)(v28 + 68);
      else
        v29 = 0LL;
      v32 = v29;
      v33 = *((unsigned int *)this + 14);
      CoreUICallSend(v2, &v32, 2LL, 4LL, 3, &unk_1801F0537);
    }
  }
LABEL_29:
  *((_DWORD *)this + 146) = 0;
}
