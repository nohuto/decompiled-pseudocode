/*
 * XREFs of ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01311D0
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0130A20 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     CreateKernelEvent @ 0x1C0008540 (CreateKernelEvent.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1C008B9B8 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     ApiSetEditionExtensibility_WakeMITForInterceptCallout @ 0x1C0139BBC (ApiSetEditionExtensibility_WakeMITForInterceptCallout.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::Marshal(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  void *v7; // rdi
  void *v8; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]

  Object[0] = 0LL;
  Object[1] = 0LL;
  v11 = 0LL;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( !*(_QWORD *)(a1 + 112) )
    *(_QWORD *)(a1 + 112) = CreateKernelEvent(SynchronizationEvent, 0);
  if ( *(_QWORD *)(a1 + 112) )
  {
    *(_OWORD *)(a1 + 40) = *a2;
    *(_OWORD *)(a1 + 56) = a2[1];
    *(_OWORD *)(a1 + 72) = a2[2];
    if ( (unsigned int)ApiSetEditionExtensibility_WakeMITForInterceptCallout() )
    {
      v6 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v6, 0LL);
      v7 = *(void **)(v6 + 32);
      ExReleasePushLockSharedEx(v6, 0LL);
      KeLeaveCriticalRegion();
      *(_QWORD *)(a1 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(a1, 0LL);
      KeLeaveCriticalRegion();
      v8 = *(void **)(a1 + 112);
      Object[0] = v7;
      Object[1] = v8;
      LOBYTE(v6) = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 0, 0, 0LL, 0LL) >= 1;
      RIMLockExclusive(a1);
      if ( !(_BYTE)v6
        || !CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable((CMouseProcessor::MouseInterceptState *)a1) )
      {
        Object[0] = 0LL;
        Object[1] = 0LL;
        v11 = 0LL;
        *(_OWORD *)(a1 + 88) = 0u;
        *(_QWORD *)(a1 + 104) = 0LL;
      }
    }
  }
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 88);
  a3[2] = *(_QWORD *)(a1 + 104);
  return *(unsigned int *)a3;
}
