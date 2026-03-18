/*
 * XREFs of CmpCallbackFillObjectContext @ 0x1405A75B0
 * Callers:
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpGetCallbackObjectContext @ 0x1405585B8 (CmpGetCallbackObjectContext.c)
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
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct _KTHREAD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _KTHREAD *v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct _KTHREAD *v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct _KTHREAD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx

  if ( a1 == 29 )
  {
LABEL_11:
    v6 = 0LL;
    goto LABEL_10;
  }
  if ( a1 == 28 )
  {
LABEL_12:
    v8 = a2[1];
    v9 = 0LL;
    if ( v8 )
    {
      if ( *v8 == 1803104306 )
      {
        v10 = v8 + 18;
        if ( (_QWORD *)*v10 != v10 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v52 = (_QWORD *)*v10;
          if ( (_QWORD *)*v10 != v10 )
          {
            v53 = *a3;
            while ( 1 )
            {
              v54 = v52[4];
              if ( v54 == v53 )
                break;
              if ( v54 >= v53 )
              {
                v52 = (_QWORD *)*v52;
                if ( v52 != v10 )
                  continue;
              }
              goto LABEL_84;
            }
            v9 = (_DWORD *)v52[7];
          }
LABEL_84:
          ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL, v50, v51);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
    }
    a2[11] = v9;
  }
  else
  {
    if ( a1 != 7 )
    {
      if ( a1 != 22 )
      {
        if ( a1 == 8 )
        {
          v14 = *a2;
          v15 = 0LL;
          if ( *a2 )
          {
            if ( *v14 == 1803104306 )
            {
              v16 = v14 + 18;
              if ( (_QWORD *)*v16 != v16 )
              {
                v34 = KeGetCurrentThread();
                --v34->KernelApcDisable;
                ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
                v37 = (_QWORD *)*v16;
                if ( (_QWORD *)*v16 != v16 )
                {
                  v38 = *a3;
                  while ( 1 )
                  {
                    v39 = v37[4];
                    if ( v39 == v38 )
                      break;
                    if ( v39 >= v38 )
                    {
                      v37 = (_QWORD *)*v37;
                      if ( v37 != v16 )
                        continue;
                    }
                    goto LABEL_62;
                  }
                  v15 = (_DWORD *)v37[7];
                }
LABEL_62:
                ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL, v35, v36);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              }
            }
          }
          a2[7] = v15;
        }
        else
        {
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
              v12 = 0LL;
              if ( !*a2 )
                goto LABEL_19;
              if ( *v20 != 1803104306 )
                goto LABEL_19;
              v21 = v20 + 18;
              if ( (_QWORD *)*v21 == v21 )
                goto LABEL_19;
              v22 = KeGetCurrentThread();
              --v22->KernelApcDisable;
              ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
              v25 = (_QWORD *)*v21;
              if ( (_QWORD *)*v21 == v21 )
                goto LABEL_46;
              v26 = *a3;
              while ( 1 )
              {
                v27 = v25[4];
                if ( v27 == v26 )
                  goto LABEL_45;
                if ( v27 >= v26 )
                {
                  v25 = (_QWORD *)*v25;
                  if ( v25 != v21 )
                    continue;
                }
                goto LABEL_46;
              }
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
              v28 = KeGetCurrentThread();
              --v28->KernelApcDisable;
              ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
              v31 = (_QWORD *)*v19;
              if ( (_QWORD *)*v19 == v19 )
                goto LABEL_54;
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
              goto LABEL_7;
            case 25:
            case 27:
              goto LABEL_11;
            case 26:
              goto LABEL_12;
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
            goto LABEL_54;
          }
          v18 = (_DWORD *)v31[7];
LABEL_54:
          ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL, v29, v30);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_27:
          a2[2] = v18;
        }
        return;
      }
LABEL_7:
      v5 = *a2;
      v6 = 0LL;
      if ( *a2 )
      {
        if ( *v5 == 1803104306 )
        {
          v7 = v5 + 18;
          if ( (_QWORD *)*v7 != v7 )
          {
            v40 = KeGetCurrentThread();
            --v40->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v43 = (_QWORD *)*v7;
            if ( (_QWORD *)*v7 != v7 )
            {
              v44 = *a3;
              while ( 1 )
              {
                v45 = v43[4];
                if ( v45 == v44 )
                  break;
                if ( v45 >= v44 )
                {
                  v43 = (_QWORD *)*v43;
                  if ( v43 != v7 )
                    continue;
                }
                goto LABEL_70;
              }
              v6 = (_DWORD *)v43[7];
            }
LABEL_70:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL, v41, v42);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
LABEL_10:
      a2[5] = v6;
      return;
    }
    v11 = *a2;
    v12 = 0LL;
    if ( *a2 )
    {
      if ( *v11 == 1803104306 )
      {
        v13 = v11 + 18;
        if ( (_QWORD *)*v13 != v13 )
        {
          v46 = KeGetCurrentThread();
          --v46->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v25 = (_QWORD *)*v13;
          if ( (_QWORD *)*v13 != v13 )
          {
            v47 = *a3;
            while ( 1 )
            {
              v48 = v25[4];
              if ( v48 == v47 )
                break;
              if ( v48 >= v47 )
              {
                v25 = (_QWORD *)*v25;
                if ( v25 != v13 )
                  continue;
              }
              goto LABEL_46;
            }
LABEL_45:
            v12 = (_DWORD *)v25[7];
          }
LABEL_46:
          ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL, v23, v24);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        }
      }
    }
LABEL_19:
    a2[6] = v12;
  }
}
