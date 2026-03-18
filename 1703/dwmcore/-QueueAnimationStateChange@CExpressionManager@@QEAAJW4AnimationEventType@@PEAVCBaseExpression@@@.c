/*
 * XREFs of ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18002D4D0
 * Callers:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ @ 0x18002F018 (-NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ @ 0x18002F068 (-NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x18002F6A0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?AddRef@CResource@@UEAAKXZ @ 0x180034810 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpressionManager::QueueAnimationStateChange(__int64 a1, int a2, int *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // ebx
  unsigned int (__fastcall *v9)(CResource *__hidden); // rax
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+18h]

  if ( a3[2] > 0 )
  {
    v4 = a1 + 240;
    LODWORD(v12) = a2;
    v5 = v13;
    *((_QWORD *)&v12 + 1) = a3;
    v6 = *(unsigned int *)(v4 + 24);
    v7 = v6 + 1;
    if ( (int)v6 + 1 >= (unsigned int)v6 )
      v5 = v6 + 1;
    v8 = v7 < (unsigned int)v6 ? 0x80070216 : 0;
    if ( v7 < (unsigned int)v6 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
    }
    else if ( v5 > *(_DWORD *)(v4 + 20) )
    {
      v11 = DynArrayImpl<1>::AddMultipleAndSet(v4, 16LL, v6, &v12);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v4 + 16LL * (unsigned int)v6) = v12;
      *(_DWORD *)(v4 + 24) = v5;
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x311u);
      return (unsigned int)v8;
    }
    v9 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)a3 + 8LL);
    if ( v9 == CResource::AddRef )
      CResource::AddRef((CResource *)a3);
    else
      v9((CResource *)a3);
  }
  return 0;
}
