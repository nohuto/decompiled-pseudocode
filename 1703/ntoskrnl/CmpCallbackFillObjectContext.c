/*
 * XREFs of CmpCallbackFillObjectContext @ 0x140534180
 * Callers:
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpGetCallbackObjectContext @ 0x140436E60 (CmpGetCallbackObjectContext.c)
 */

void __fastcall CmpCallbackFillObjectContext(int a1, _DWORD **a2, __int64 *a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  _QWORD *v7; // r14
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // r14
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  _QWORD *v13; // r14
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  _QWORD *v16; // r14
  _DWORD *v17; // rax
  _DWORD *v18; // rbx
  _QWORD *v19; // r14
  _DWORD *v20; // rax
  _QWORD *v21; // r14
  struct _KTHREAD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KTHREAD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KTHREAD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _KTHREAD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _KTHREAD *v38; // rax
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
      v11 = a2[1];
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
              v12 = (_DWORD *)v42[7];
            }
LABEL_84:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[11] = v12;
      break;
    case 7:
      v14 = *a2;
      v15 = 0LL;
      if ( *a2 )
      {
        if ( *v14 == 1803104306 )
        {
          v16 = v14 + 18;
          if ( (_QWORD *)*v16 != v16 )
          {
            v38 = KeGetCurrentThread();
            --v38->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v23 = (_QWORD *)*v16;
            if ( (_QWORD *)*v16 != v16 )
            {
              v39 = *a3;
              while ( 1 )
              {
                v40 = v23[4];
                if ( v40 == v39 )
                  break;
                if ( v40 >= v39 )
                {
                  v23 = (_QWORD *)*v23;
                  if ( v23 != v16 )
                    continue;
                }
                goto LABEL_46;
              }
LABEL_45:
              v15 = (_DWORD *)v23[7];
            }
LABEL_46:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
        }
      }
LABEL_23:
      a2[6] = v15;
      break;
    case 22:
    case 23:
LABEL_11:
      v8 = *a2;
      v9 = 0LL;
      if ( *a2 )
      {
        if ( *v8 == 1803104306 )
        {
          v10 = v8 + 18;
          if ( (_QWORD *)*v10 != v10 )
          {
            v34 = KeGetCurrentThread();
            --v34->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v35 = (_QWORD *)*v10;
            if ( (_QWORD *)*v10 != v10 )
            {
              v36 = *a3;
              while ( 1 )
              {
                v37 = v35[4];
                if ( v37 == v36 )
                  break;
                if ( v37 >= v36 )
                {
                  v35 = (_QWORD *)*v35;
                  if ( v35 != v10 )
                    continue;
                }
                goto LABEL_70;
              }
              v9 = (_DWORD *)v35[7];
            }
LABEL_70:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
          a2[2] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 1:
        case 6:
          a2[6] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 2:
        case 4:
        case 34:
          a2[3] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 3:
        case 36:
        case 47:
          a2[5] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 5:
          v20 = *a2;
          v15 = 0LL;
          if ( !*a2 )
            goto LABEL_23;
          if ( *v20 != 1803104306 )
            goto LABEL_23;
          v21 = v20 + 18;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_23;
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
        case 8:
          v5 = *a2;
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
          v27 = (_QWORD *)*v7;
          if ( (_QWORD *)*v7 == v7 )
            goto LABEL_54;
          v28 = *a3;
          while ( 1 )
          {
            v29 = v27[4];
            if ( v29 == v28 )
              break;
            if ( v29 >= v28 )
            {
              v27 = (_QWORD *)*v27;
              if ( v27 != v7 )
                continue;
            }
            goto LABEL_54;
          }
          v6 = (_DWORD *)v27[7];
LABEL_54:
          ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_10:
          a2[7] = v6;
          return;
        case 9:
          a2[7] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 14:
          v17 = *a2;
          v18 = 0LL;
          if ( !*a2 )
            goto LABEL_27;
          if ( *v17 != 1803104306 )
            goto LABEL_27;
          v19 = v17 + 18;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_27;
          v30 = KeGetCurrentThread();
          --v30->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v31 = (_QWORD *)*v19;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_62;
          v32 = *a3;
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
          a2[9] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 38:
        case 41:
        case 43:
        case 45:
          a2[4] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        default:
          return;
      }
      while ( 1 )
      {
        v33 = v31[4];
        if ( v33 == v32 )
          break;
        if ( v33 >= v32 )
        {
          v31 = (_QWORD *)*v31;
          if ( v31 != v19 )
            continue;
        }
        goto LABEL_62;
      }
      v18 = (_DWORD *)v31[7];
LABEL_62:
      ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_27:
      a2[2] = v18;
      return;
  }
}
