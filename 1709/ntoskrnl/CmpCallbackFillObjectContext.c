/*
 * XREFs of CmpCallbackFillObjectContext @ 0x1404B4550
 * Callers:
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpGetCallbackObjectContext @ 0x14056E72C (CmpGetCallbackObjectContext.c)
 */

void __fastcall CmpCallbackFillObjectContext(int a1, _QWORD *a2, __int64 *a3)
{
  _DWORD *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // r14
  _DWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // r14
  _DWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // r14
  _DWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // r14
  _DWORD *v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // r14
  _DWORD *v20; // rax
  _QWORD *v21; // r14
  struct _KTHREAD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KTHREAD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct _KTHREAD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _KTHREAD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx

  switch ( a1 )
  {
    case 29:
LABEL_15:
      v9 = 0LL;
      goto LABEL_14;
    case 28:
LABEL_16:
      v11 = (_DWORD *)a2[1];
      v12 = 0LL;
      if ( v11 )
      {
        if ( *v11 == 1803104306 )
        {
          v13 = v11 + 18;
          if ( (_QWORD *)*v13 != v13 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v42 = (_QWORD *)*v13;
            if ( (_QWORD *)*v13 != v13 )
            {
              v43 = *a3;
              while ( 1 )
              {
                v44 = v42[4];
                if ( v44 == v43 )
                  break;
                if ( v44 >= v43 )
                {
                  v42 = (_QWORD *)*v42;
                  if ( v42 != v13 )
                    continue;
                }
                goto LABEL_84;
              }
              v12 = v42[7];
            }
LABEL_84:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[11] = v12;
      break;
    case 8:
      v14 = (_DWORD *)*a2;
      v15 = 0LL;
      if ( *a2 )
      {
        if ( *v14 == 1803104306 )
        {
          v16 = v14 + 18;
          if ( (_QWORD *)*v16 != v16 )
          {
            v37 = KeGetCurrentThread();
            --v37->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v38 = (_QWORD *)*v16;
            if ( (_QWORD *)*v16 != v16 )
            {
              v39 = *a3;
              while ( 1 )
              {
                v40 = v38[4];
                if ( v40 == v39 )
                  break;
                if ( v40 >= v39 )
                {
                  v38 = (_QWORD *)*v38;
                  if ( v38 != v16 )
                    continue;
                }
                goto LABEL_76;
              }
              v15 = v38[7];
            }
LABEL_76:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[7] = v15;
      break;
    case 23:
    case 22:
LABEL_11:
      v8 = (_DWORD *)*a2;
      v9 = 0LL;
      if ( *a2 )
      {
        if ( *v8 == 1803104306 )
        {
          v10 = v8 + 18;
          if ( (_QWORD *)*v10 != v10 )
          {
            v33 = KeGetCurrentThread();
            --v33->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v34 = (_QWORD *)*v10;
            if ( (_QWORD *)*v10 != v10 )
            {
              v35 = *a3;
              while ( 1 )
              {
                v36 = v34[4];
                if ( v36 == v35 )
                  break;
                if ( v36 >= v35 )
                {
                  v34 = (_QWORD *)*v34;
                  if ( v34 != v10 )
                    continue;
                }
                goto LABEL_68;
              }
              v9 = v34[7];
            }
LABEL_68:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
LABEL_14:
      a2[5] = v9;
      return;
    default:
      switch ( a1 )
      {
        case 0:
        case 30:
          a2[2] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 1:
        case 6:
          a2[6] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 2:
        case 4:
        case 34:
          a2[3] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 3:
        case 36:
        case 47:
          a2[5] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 5:
          v20 = (_DWORD *)*a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_10;
          if ( *v20 != 1803104306 )
            goto LABEL_10;
          v21 = v20 + 18;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_10;
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v23 = (_QWORD *)*v21;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_46;
          v24 = *a3;
          while ( 1 )
          {
            v25 = v23[4];
            if ( v25 == v24 )
              goto LABEL_45;
            if ( v25 >= v24 )
            {
              v23 = (_QWORD *)*v23;
              if ( v23 != v21 )
                continue;
            }
            goto LABEL_46;
          }
        case 7:
          v5 = (_DWORD *)*a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_10;
          if ( *v5 != 1803104306 )
            goto LABEL_10;
          v7 = v5 + 18;
          if ( (_QWORD *)*v7 == v7 )
            goto LABEL_10;
          v26 = KeGetCurrentThread();
          --v26->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v23 = (_QWORD *)*v7;
          if ( (_QWORD *)*v7 == v7 )
            goto LABEL_46;
          v27 = *a3;
          while ( 1 )
          {
            v28 = v23[4];
            if ( v28 == v27 )
              break;
            if ( v28 >= v27 )
            {
              v23 = (_QWORD *)*v23;
              if ( v23 != v7 )
                continue;
            }
            goto LABEL_46;
          }
LABEL_45:
          v6 = v23[7];
LABEL_46:
          ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_10:
          a2[6] = v6;
          return;
        case 9:
          a2[7] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 14:
          v17 = (_DWORD *)*a2;
          v18 = 0LL;
          if ( !*a2 )
            goto LABEL_27;
          if ( *v17 != 1803104306 )
            goto LABEL_27;
          v19 = v17 + 18;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_27;
          v29 = KeGetCurrentThread();
          --v29->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v30 = (_QWORD *)*v19;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_60;
          v31 = *a3;
          break;
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 31:
        case 33:
        case 35:
        case 37:
        case 39:
        case 42:
        case 44:
        case 46:
        case 48:
          goto LABEL_11;
        case 25:
        case 27:
          goto LABEL_15;
        case 26:
          goto LABEL_16;
        case 32:
          a2[9] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 38:
        case 41:
        case 43:
        case 45:
          a2[4] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        default:
          return;
      }
      while ( 1 )
      {
        v32 = v30[4];
        if ( v32 == v31 )
          break;
        if ( v32 >= v31 )
        {
          v30 = (_QWORD *)*v30;
          if ( v30 != v19 )
            continue;
        }
        goto LABEL_60;
      }
      v18 = v30[7];
LABEL_60:
      ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_27:
      a2[2] = v18;
      return;
  }
}
