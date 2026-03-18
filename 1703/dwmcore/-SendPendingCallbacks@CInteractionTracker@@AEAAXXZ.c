/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x18016D67C
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18002CE40 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180004624 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016C43C (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18016C49C (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAAXUD2DVector3@@M@Z @ 0x18016DAA4 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAAXUD2DVector3@@M@Z.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18016E874 (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

void __fastcall CInteractionTracker::SendPendingCallbacks(CInteractionTracker *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // r12d
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int ChannelCallbackId; // eax
  CScrollAnimation **v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  __int128 v16; // xmm1
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // edx
  __int64 v23; // xmm0_8
  __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+80h] [rbp-80h] BYREF
  int v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int128 v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  __int128 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-20h] BYREF
  int v37; // [rsp+E8h] [rbp-18h]
  __int64 v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  __int64 v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  _QWORD v42[2]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v43[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v44[2]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v45[64]; // [rsp+140h] [rbp+40h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1352LL) + 56LL);
  if ( CInteractionTracker::ShouldNotify(this, 0) )
  {
    v4 = 0;
    if ( *(_DWORD *)(v3 + 552) )
    {
      do
      {
        v5 = *((_QWORD *)this + 66);
        v6 = *(_DWORD *)(v5 + 20LL * v4 + 12);
        v36 = *(_QWORD *)(v5 + 20LL * v4 + 4);
        v37 = v6;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v36);
        v7 = *(_DWORD *)(*((_QWORD *)this + 66) + 20LL * v4);
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
              {
                ModuleFailFastForHRESULT(-2147024809, retaddr);
                __debugbreak();
              }
              ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
              v42[1] = *((unsigned int *)this + 14);
              v42[0] = ChannelCallbackId;
              CoreUICallSend(v2, v42, 2LL, 4LL, 5, &unk_1801D53F7);
            }
            else
            {
              if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
              {
                v12 = CInteractionTracker::CalculateInertiaCallbackValues(v11, (__int64)v45);
                v13 = *(_OWORD *)(v12 + 16);
                v32 = *(_OWORD *)v12;
                v14 = *(_OWORD *)(v12 + 32);
                v33 = v13;
                v15 = *(_QWORD *)(v12 + 48);
              }
              else
              {
                v16 = *(_OWORD *)((char *)this + 648);
                v32 = *(_OWORD *)((char *)this + 632);
                v14 = *(_OWORD *)((char *)this + 664);
                v33 = v16;
                v15 = *((_QWORD *)this + 85);
              }
              v34 = v14;
              v39 = DWORD2(v14);
              v38 = v14;
              v41 = DWORD2(v33);
              v40 = v33;
              v28 = v32;
              v35 = v15;
              v29 = DWORD2(v32);
              v17 = CNotificationResource::GetChannelCallbackId(this);
              v43[1] = *((unsigned int *)this + 14);
              v43[0] = v17;
              CoreUICallSend(v2, v43, 2LL, 4LL, 1, &unk_1801D53E6);
            }
          }
          else
          {
            v18 = CNotificationResource::GetChannelCallbackId(this);
            v44[1] = *((unsigned int *)this + 14);
            v44[0] = v18;
            CoreUICallSend(v2, v44, 2LL, 4LL, 4, &unk_1801D53F7);
          }
        }
        else
        {
          v19 = CNotificationResource::GetChannelCallbackId(this);
          v31 = *((unsigned int *)this + 14);
          v30 = v19;
          CoreUICallSend(v2, &v30, 2LL, 4LL, 3, &unk_1801D53F7);
        }
        ++v4;
      }
      while ( v4 < *((_DWORD *)this + 138) );
    }
    if ( (*((_BYTE *)this + 592) & 1) != 0 )
    {
      v20 = *((_DWORD *)this + 18);
      v28 = *((_QWORD *)this + 8);
      v29 = v20;
      CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v28);
      *((_BYTE *)this + 592) &= ~1u;
    }
  }
  else
  {
    v21 = *(_DWORD *)(v3 + 552);
    v22 = 0;
    if ( v21 )
    {
      while ( *(_DWORD *)(*(_QWORD *)(v3 + 528) + 20LL * v22) )
      {
        if ( ++v22 >= v21 )
          goto LABEL_29;
      }
      v23 = *((_QWORD *)this + 8);
      v29 = *((_DWORD *)this + 18);
      v24 = *((_QWORD *)this + 6);
      v28 = v23;
      if ( v24 )
        v25 = *(_DWORD *)(v24 + 60);
      else
        v25 = 0;
      v30 = v25;
      v31 = *((unsigned int *)this + 14);
      CoreUICallSend(v2, &v30, 2LL, 4LL, 0, &unk_1801D53DF);
      v26 = *((_QWORD *)this + 6);
      if ( v26 )
        v27 = *(unsigned int *)(v26 + 60);
      else
        v27 = 0LL;
      v30 = v27;
      v31 = *((unsigned int *)this + 14);
      CoreUICallSend(v2, &v30, 2LL, 4LL, 3, &unk_1801D53F7);
    }
  }
LABEL_29:
  *((_DWORD *)this + 138) = 0;
}
