/*
 * XREFs of ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x180031F98
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180031CD4 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180023BE8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ??$CreateRefCountedObj@V?$CCoSimpleArray@K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@K@@@@@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@K@@@@@@@WRL@Microsoft@@XZ @ 0x180032928 (--$CreateRefCountedObj@V-$CCoSimpleArray@K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@K@@@@@.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_32debc2fc80ca1e0059f85a00ba9919c___ @ 0x180032C4C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_32debc2fc80ca1e0059f85a00ba9919c___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CImmersiveMode::_ScheduleDesktopVisibilityNotification(
        CImmersiveMode *this,
        struct IImmersiveMonitor *a2,
        char a3)
{
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // r8
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int128 v11; // rax
  unsigned __int64 v12; // kr00_8
  __int64 v13; // r14
  __int64 v14; // rdx
  _DWORD *v15; // r8
  int Ptr; // edi
  IUnknown **v17; // rax
  void *v18; // rcx
  struct IImmersiveMonitor *v19; // [rsp+40h] [rbp-20h] BYREF
  char v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  _QWORD *v22; // [rsp+58h] [rbp-8h]
  void *v23; // [rsp+90h] [rbp+30h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+48h] BYREF

  v6 = *((_QWORD *)this + 45);
  if ( v6 )
  {
    CreateRefCountedObj<CCoSimpleArray<unsigned long,4294967294,CSimpleArrayStandardCompareHelper<unsigned long>>>(&v24);
    v7 = (_QWORD *)v24;
    if ( !v24 || v6 > 0xFFFFFFFE )
      goto LABEL_35;
    v8 = *(_QWORD *)(v24 + 32);
    if ( v6 <= v8 )
      goto LABEL_15;
    v9 = v8 * (unsigned __int128)2uLL;
    if ( is_mul_ok(v8, 2uLL) )
    {
      v10 = v8 + 4096;
      if ( v8 <= 0x1000 )
        v10 = 2 * v8;
      if ( v6 > v10 )
        v10 = v6;
      if ( v10 > 0xFFFFFFFE )
        v10 = 4294967294LL;
      v23 = (void *)(*((_QWORD *)&v9 + 1) & (unsigned __int64)v23);
      v12 = (unsigned int)(DWORD2(v9) + 4);
      v11 = v10 * (unsigned __int128)(unsigned int)(DWORD2(v9) + 4);
      if ( is_mul_ok(v10, v12)
        && (int)CTCoAllocPolicy::Realloc((IMalloc *)&v23, *((__int64 *)&v11 + 1), *(void **)(v24 + 8), v11, &v23) >= 0 )
      {
        v7[4] = v10;
        v7[1] = v23;
LABEL_15:
        v13 = 0LL;
        v14 = 0LL;
        while ( 1 )
        {
          v15 = *(_DWORD **)(*((_QWORD *)this + 44) + 8 * v14);
          if ( !a2 )
            break;
          if ( v15[1] == 1 )
            goto LABEL_20;
LABEL_21:
          if ( ++v14 >= v6 )
          {
            if ( v13 )
            {
              if ( a2 )
                (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
              v19 = a2;
              if ( a2 )
                (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
              v20 = a3;
              v21 = v13;
              v22 = v7;
              (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
              Ptr = (int)CApplicationManagerUtility::g_pIAMGlobals[11].Ptr;
              v17 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_32debc2fc80ca1e0059f85a00ba9919c___(
                                   &v23,
                                   &v19);
              Windows::Internal::ComTaskPool::RunTask(3, 2u, Ptr, 0, *v17, 0LL);
              v18 = v23;
              if ( v23 )
              {
                v23 = 0LL;
                (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
              }
              if ( v22 )
                (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
              if ( v19 )
                (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v19 + 16LL))(v19);
              if ( a2 )
                (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 16LL))(a2);
            }
            goto LABEL_35;
          }
        }
        if ( v15[1] )
          goto LABEL_21;
LABEL_20:
        *(_DWORD *)(v7[1] + 4 * v13++) = *v15;
        goto LABEL_21;
      }
    }
LABEL_35:
    if ( v7 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  }
}
