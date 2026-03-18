/*
 * XREFs of ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x1800A0FA0
 * Callers:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x1800A1C80 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x1800A1CD0 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x1800A3E58 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpressionManager::QueueAnimationStateChange(__int64 a1, int a2, int *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r8
  unsigned int v7; // eax
  signed int v8; // ebx
  __int64 (__fastcall *v9)(CMILCOMBase *); // rax
  signed int v11; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xB5u);
    }
    else if ( v5 > *(_DWORD *)(v4 + 20) )
    {
      v11 = DynArrayImpl<1>::AddMultipleAndSet(v4, 0x10u, v6, &v12);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v4 + 16LL * (unsigned int)v6) = v12;
      *(_DWORD *)(v4 + 24) = v5;
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x30Eu);
      return (unsigned int)v8;
    }
    v9 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)a3 + 8LL);
    if ( v9 == CMILCOMBase::InternalAddRef )
      CMILCOMBase::InternalAddRef((CMILCOMBase *)a3);
    else
      v9((CMILCOMBase *)a3);
  }
  return 0;
}
