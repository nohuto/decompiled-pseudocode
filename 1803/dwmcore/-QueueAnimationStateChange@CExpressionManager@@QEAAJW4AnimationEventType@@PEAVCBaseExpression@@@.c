/*
 * XREFs of ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18003A870
 * Callers:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ @ 0x18003B420 (-NotifyAnimationDisconnected@CBaseExpression@@QEAAJXZ.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ @ 0x18003B470 (-NotifyAnimationCompleted@CBaseExpression@@QEAAJXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z @ 0x18003D554 (-OnAnimationEvent@CKeyframeAnimation@@QEAAJW4AnimationEventType@@PEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?AddRef@CResource@@UEAAKXZ @ 0x180051070 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpressionManager::QueueAnimationStateChange(__int64 a1, int a2, int *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // ebx
  unsigned int (__fastcall *v8)(CResource *__hidden); // rax
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  if ( a3[2] > 0 )
  {
    v4 = a1 + 240;
    LODWORD(v11) = a2;
    *((_QWORD *)&v11 + 1) = a3;
    v5 = *(unsigned int *)(v4 + 24);
    v6 = v5 + 1;
    v7 = (int)v5 + 1 < (unsigned int)v5 ? 0x80070216 : 0;
    if ( (int)v5 + 1 < (unsigned int)v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
    }
    else if ( v6 > *(_DWORD *)(v4 + 20) )
    {
      v10 = DynArrayImpl<1>::AddMultipleAndSet(v4, 16LL, a3, &v11);
      v7 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v4 + 16 * v5) = v11;
      *(_DWORD *)(v4 + 24) = v6;
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x337u);
      return (unsigned int)v7;
    }
    v8 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)a3 + 8LL);
    if ( v8 == CResource::AddRef )
      CResource::AddRef((CResource *)a3);
    else
      v8((CResource *)a3);
  }
  return 0;
}
