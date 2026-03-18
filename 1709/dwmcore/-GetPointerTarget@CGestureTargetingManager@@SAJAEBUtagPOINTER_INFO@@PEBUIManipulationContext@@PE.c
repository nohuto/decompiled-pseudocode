/*
 * XREFs of ?GetPointerTarget@CGestureTargetingManager@@SAJAEBUtagPOINTER_INFO@@PEBUIManipulationContext@@PEAUTargetingInfo@@@Z @ 0x1801A44E4
 * Callers:
 *     ?TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAXPEA_K@Z @ 0x18019874C (-TargetPointer@CManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B7B24 (-InternalRelease@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180195874 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _anonymous_namespace_::AllSupportedWithSingleTarget @ 0x1801A42BC (_anonymous_namespace_--AllSupportedWithSingleTarget.c)
 */

__int64 __fastcall CGestureTargetingManager::GetPointerTarget(
        const struct tagPOINTER_INFO *a1,
        const struct IManipulationContext *a2,
        struct TargetingInfo *a3)
{
  int v6; // r12d
  CNaturalAnimationScalarForceAdapater *v7; // rdi
  _DWORD *v8; // rax
  int v9; // ecx
  CNaturalAnimationScalarForceAdapater **v10; // rax
  unsigned int v11; // r15d
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  bool v18; // al
  int v20; // [rsp+20h] [rbp-69h]
  CNaturalAnimationScalarForceAdapater *v21; // [rsp+28h] [rbp-61h] BYREF
  int v22; // [rsp+30h] [rbp-59h] BYREF
  CNaturalAnimationScalarForceAdapater *v23; // [rsp+38h] [rbp-51h] BYREF
  CNaturalAnimationScalarForceAdapater *v24; // [rsp+40h] [rbp-49h] BYREF
  CNaturalAnimationScalarForceAdapater *v25; // [rsp+48h] [rbp-41h] BYREF
  char v26[8]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v27; // [rsp+58h] [rbp-31h] BYREF
  int v28; // [rsp+60h] [rbp-29h] BYREF
  char v29; // [rsp+64h] [rbp-25h]
  char v30; // [rsp+98h] [rbp+Fh]

  v22 = 1;
  v21 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v23);
  v6 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, _QWORD, int *))(*(_QWORD *)a2 + 64LL))(
         a2,
         *((unsigned int *)a1 + 1),
         &v22);
  if ( v6 >= 0 )
  {
    if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0
      && v22
      && v23
      && (*(unsigned int (__fastcall **)(CNaturalAnimationScalarForceAdapater *))(*(_QWORD *)v23 + 144LL))(v23) )
    {
      v20 = v22;
      Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))&v21, &v23);
      v7 = v21;
    }
    else
    {
      v8 = (_DWORD *)(*(__int64 (__fastcall **)(const struct IManipulationContext *, char *))(*(_QWORD *)a2 + 80LL))(
                       a2,
                       v26);
      v7 = 0LL;
      v9 = *v8;
      v10 = (CNaturalAnimationScalarForceAdapater **)(v8 + 2);
      v20 = v9;
      if ( &v24 != v10 )
      {
        v7 = *v10;
        *v10 = 0LL;
      }
      v24 = 0LL;
      v21 = v7;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v24);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v27);
    }
    if ( v7 )
    {
      v11 = (*(__int64 (__fastcall **)(const struct IManipulationContext *, CNaturalAnimationScalarForceAdapater *, _QWORD))(*(_QWORD *)a2 + 56LL))(
              a2,
              v7,
              *(unsigned int *)a1);
      if ( !v11
        || (v12 = *(_QWORD *)a2,
            v13 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2),
            (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v12 + 56))(
              a2,
              v13,
              *(unsigned int *)a1) > v11) )
      {
        v20 = 0;
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v21);
        v7 = v21;
      }
    }
    if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 )
    {
      if ( v22 && v23 != v7 && !anonymous_namespace_::AllSupportedWithSingleTarget((__int64)a2, *(_DWORD *)a1) )
      {
        v20 = 1;
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v21);
        v7 = v21;
      }
      if ( (*((_DWORD *)a1 + 3) & 0x40000) != 0 && v22 == 2 && v20 == 1 && v7 )
      {
        v20 = 1;
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v21);
        v7 = v21;
      }
    }
    v14 = (__int64)v23;
    if ( v23 )
    {
      if ( v23 != v7 )
      {
        v15 = *(_QWORD *)a2;
        v16 = (*(__int64 (__fastcall **)(const struct IManipulationContext *))(*(_QWORD *)a2 + 16LL))(a2);
        LODWORD(v15) = (*(__int64 (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(v15 + 56))(
                         a2,
                         v16,
                         *(unsigned int *)a1);
        if ( (*(unsigned int (__fastcall **)(const struct IManipulationContext *, __int64, _QWORD))(*(_QWORD *)a2 + 56LL))(
               a2,
               v14,
               *(unsigned int *)a1) == (_DWORD)v15 )
        {
          if ( (*(unsigned int (__fastcall **)(CNaturalAnimationScalarForceAdapater *, _QWORD, __int64))(*(_QWORD *)v23 + 80LL))(
                 v23,
                 *(unsigned int *)a1,
                 1LL) )
          {
            v24 = 0LL;
            v17 = (__int64)v23;
            Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(&v24);
            if ( (*(int (__fastcall **)(__int64, _QWORD, CNaturalAnimationScalarForceAdapater **))(*(_QWORD *)v17 + 128LL))(
                   v17,
                   *(unsigned int *)a1,
                   &v24) >= 0 )
            {
              (*(void (__fastcall **)(CNaturalAnimationScalarForceAdapater *, int *))(*(_QWORD *)v24 + 40LL))(v24, &v28);
              v18 = v28 == 1 && ((v29 & 1) != 0 || (v29 & 2) != 0);
              if ( ((v30 & 1) == 0 || v18)
                && (*(unsigned int (__fastcall **)(CNaturalAnimationScalarForceAdapater *))(*(_QWORD *)v23 + 136LL))(v23) )
              {
                Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))&v21, &v23);
                v7 = v21;
                v20 = v22;
              }
            }
            Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalRelease(&v24);
          }
        }
      }
    }
    if ( !v20 )
    {
      if ( !v22 && (*((_DWORD *)a1 + 3) & 0x40000) == 0 )
      {
LABEL_48:
        *(_DWORD *)a3 = v20;
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=((__int64 (__fastcall ****)(_QWORD))a3 + 1, &v21);
        goto LABEL_49;
      }
      v20 = 1;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v21);
      v7 = v21;
    }
    if ( v20 == 1 && !v7 )
    {
      (*(void (__fastcall **)(const struct IManipulationContext *, CNaturalAnimationScalarForceAdapater **))(*(_QWORD *)a2 + 96LL))(
        a2,
        &v24);
      if ( v25 )
      {
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v21);
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v25);
        v6 = 0;
        v21 = v25;
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v25);
    }
    goto LABEL_48;
  }
LABEL_49:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v21);
  return (unsigned int)v6;
}
