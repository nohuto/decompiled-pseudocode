/*
 * XREFs of ?ProcessInput@CGestureTargetingManager@@SAJPEBUIManipulationContext@@AEBUtagPOINTER_INFO@@@Z @ 0x1801A4968
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180195AA0 (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x1801A433C (_anonymous_namespace_--BypassGestureTargeting.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInput(
        const struct IManipulationContext *a1,
        const struct tagPOINTER_INFO *a2)
{
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rax
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned int v16; // eax
  _BYTE v17[80]; // [rsp+30h] [rbp-68h] BYREF
  char v18; // [rsp+A8h] [rbp+10h] BYREF
  __int64 *v19; // [rsp+B0h] [rbp+18h] BYREF

  v4 = anonymous_namespace_::BypassGestureTargeting((__int64 *)a1, *(_DWORD *)a2) == 0;
  v5 = *(_QWORD *)a1;
  if ( v4 )
  {
    v8 = 0;
    v9 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD))(v5 + 24))(
           a1,
           *((unsigned int *)a2 + 1));
    if ( v9 )
    {
      while ( v8 >= 0 )
      {
        v10 = *(_QWORD *)v9;
        v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 176LL))(v9, v17);
        v12 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(
                a1,
                v9,
                *(unsigned int *)a2);
        v8 = (*(__int64 (__fastcall **)(__int64, const struct tagPOINTER_INFO *, _QWORD, __int64, char *))(v10 + 16))(
               v9,
               a2,
               v12,
               v11,
               &v18);
        if ( v8 >= 0 )
        {
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 208LL))(v9);
        }
        v9 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v9);
        if ( !v9 )
        {
          if ( v8 < 0 )
            return (unsigned int)v8;
          goto LABEL_10;
        }
      }
    }
    else
    {
LABEL_10:
      v19 = (__int64 *)(*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a1 + 112LL))(a1);
      v13 = v19;
      Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v19);
      v14 = *v13;
      v15 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v13 + 176))(v13, v17);
      v16 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64 *, _QWORD))(*(_QWORD *)a1 + 56LL))(
              a1,
              v13,
              *(unsigned int *)a2);
      v8 = (*(__int64 (__fastcall **)(__int64 *, const struct tagPOINTER_INFO *, _QWORD, __int64, char *))(v14 + 16))(
             v13,
             a2,
             v16,
             v15,
             &v18);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v19);
    }
    return (unsigned int)v8;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(v5 + 16))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL))(v6);
    return 0LL;
  }
}
