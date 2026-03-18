/*
 * XREFs of ?SendPendingCallbacks@CInteractionTracker@@AEAAXXZ @ 0x180195A44
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18002BCF4 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180193928 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x180193AFC (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAAXUD2DVector3@@M_N@Z @ 0x180195E74 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAAXUD2DVector3@@M_N@Z.c)
 *     ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x180196C3C (-ShouldNotify@CInteractionTracker@@AEAA_NI@Z.c)
 */

void __fastcall CInteractionTracker::SendPendingCallbacks(CInteractionTracker *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // r10d
  unsigned int v7; // r12d
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edx
  int v11; // edx
  int v12; // edx
  unsigned int ChannelCallbackId; // eax
  CScrollAnimation **v14; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  __int128 v19; // xmm1
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // eax
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

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1312LL) + 56LL);
  if ( CInteractionTracker::ShouldNotify(this, 0) )
  {
    v7 = 0;
    if ( v6 )
    {
      do
      {
        v8 = *((_QWORD *)this + 77);
        v9 = *(_DWORD *)(v8 + 20LL * v7 + 12);
        v38 = *(_QWORD *)(v8 + 20LL * v7 + 4);
        v39 = v9;
        CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v38, v4, 0LL);
        v10 = *(_DWORD *)(*((_QWORD *)this + 77) + 20LL * v7);
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 != 1 )
                ModuleFailFastForHRESULT(-2147024809, retaddr);
              ChannelCallbackId = CNotificationResource::GetChannelCallbackId(this);
              v44[1] = *((unsigned int *)this + 14);
              v44[0] = ChannelCallbackId;
              CoreUICallSend(v2, v44, 2LL, 8LL, 5, &unk_180239CAC);
            }
            else
            {
              if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
              {
                v15 = CInteractionTracker::CalculateInertiaCallbackValues(v14, (__int64)v47);
                v16 = *(_OWORD *)(v15 + 16);
                v34 = *(_OWORD *)v15;
                v17 = *(_OWORD *)(v15 + 32);
                v35 = v16;
                v18 = *(_QWORD *)(v15 + 48);
              }
              else
              {
                v19 = *(_OWORD *)((char *)this + 732);
                v34 = *(_OWORD *)((char *)this + 716);
                v17 = *(_OWORD *)((char *)this + 748);
                v35 = v19;
                v18 = *(_QWORD *)((char *)this + 764);
              }
              v36 = v17;
              v41 = DWORD2(v17);
              v40 = v17;
              v43 = DWORD2(v35);
              v42 = v35;
              v30 = v34;
              v37 = v18;
              v31 = DWORD2(v34);
              v20 = CNotificationResource::GetChannelCallbackId(this);
              v45[1] = *((unsigned int *)this + 14);
              v45[0] = v20;
              CoreUICallSend(v2, v45, 2LL, 8LL, 1, &unk_180239C9B);
            }
          }
          else
          {
            v21 = CNotificationResource::GetChannelCallbackId(this);
            v46[1] = *((unsigned int *)this + 14);
            v46[0] = v21;
            CoreUICallSend(v2, v46, 2LL, 8LL, 4, &unk_180239CAC);
          }
        }
        else
        {
          v22 = CNotificationResource::GetChannelCallbackId(this);
          v33 = *((unsigned int *)this + 14);
          v32 = v22;
          CoreUICallSend(v2, &v32, 2LL, 8LL, 3, &unk_180239CAC);
        }
        ++v7;
      }
      while ( v7 < *((_DWORD *)this + 160) );
    }
    LOBYTE(v5) = *((_BYTE *)this + 676);
    if ( (v5 & 6) != 0 )
    {
      v23 = *((_DWORD *)this + 18);
      LOBYTE(v5) = (v5 & 4) != 0;
      v30 = *((_QWORD *)this + 8);
      v31 = v23;
      CInteractionTracker::SendValuesChangedCallbackIfNecessary(this, &v30, v4, v5);
      *((_BYTE *)this + 676) &= 0xF9u;
    }
  }
  else
  {
    v24 = 0;
    if ( v6 )
    {
      while ( *(_DWORD *)(*(_QWORD *)(v3 + 616) + 20LL * v24) )
      {
        if ( ++v24 >= v6 )
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
      CoreUICallSend(v2, &v32, 2LL, 8LL, 0, &unk_180239C94);
      v28 = *((_QWORD *)this + 6);
      if ( v28 )
        v29 = *(unsigned int *)(v28 + 68);
      else
        v29 = 0LL;
      v32 = v29;
      v33 = *((unsigned int *)this + 14);
      CoreUICallSend(v2, &v32, 2LL, 8LL, 3, &unk_180239CAC);
    }
  }
LABEL_29:
  *((_DWORD *)this + 160) = 0;
}
