/*
 * XREFs of ?HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047A8C
 * Callers:
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x180045B10 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180019198 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A388 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001A4C0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x180040714 (-HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE.c)
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x180040990 (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 *     ?HampHostComputeActivityCounters@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180043660 (-HampHostComputeActivityCounters@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180044E68 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x1800478B8 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

__int64 __fastcall HampActNotifyRmStarted(struct _HAM_ACTIVITY *a1)
{
  int v2; // edi
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  struct _HAM_CLIENT_CONTEXT *v8; // rcx
  const WCHAR *v10; // [rsp+20h] [rbp-60h]
  __int64 v11; // [rsp+28h] [rbp-58h]
  _QWORD v12[3]; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v13[4]; // [rsp+58h] [rbp-28h] BYREF
  char *v14; // [rsp+68h] [rbp-18h]
  char v15; // [rsp+90h] [rbp+10h] BYREF
  __int64 v16; // [rsp+98h] [rbp+18h] BYREF

  if ( *((_BYTE *)a1 + 500) != 2 )
    return (unsigned int)-1073741436;
  v3 = *((_DWORD *)a1 + 91);
  if ( v3 != 4 )
  {
    memset_0(v13, 0, 0x20uLL);
    v4 = *((_QWORD *)a1 + 4);
    v13[1] = *((_DWORD *)a1 + 92);
    v14 = (char *)a1 + 108;
    v5 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFCuLL) + 80);
    v10 = (const WCHAR *)(*((_QWORD *)a1 + 9) + 24LL);
    v13[0] = 1;
    v2 = HampSystemActivationClientActivate(v5, (int)v13, (int)a1, v3, v10, v11, (__int64)&v16, (__int64)&v15);
    if ( v2 < 0 )
    {
LABEL_5:
      HampActInvalidateAndNotify(a1);
      return (unsigned int)v2;
    }
    *((_QWORD *)a1 + 61) = v16;
  }
  v6 = *((_QWORD *)a1 + 9);
  if ( (*(_DWORD *)(v6 + 628) & 3) != 0
    && ((*(_DWORD *)(v6 + 628) & 3u) - 1 > 1 || *((char *)a1 + 104) < 0 || ((*(_DWORD *)(v6 + 628) >> 7) & 7u) - 4 <= 1) )
  {
    v2 = -1073741436;
    goto LABEL_5;
  }
  v7 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 9);
  *((_WORD *)a1 + 250) = 3;
  HampHostComputeActivityCounters(v7);
  *((_DWORD *)a1 + 124) |= 8u;
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v6, 0);
  HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(v6 + 640));
  HampDepGroupQueueWorker(*(struct _HAM_DEPENDENCY_GROUP **)(v6 + 640));
  HampDepGroupReleaseLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(v6 + 640));
  if ( (*((_DWORD *)a1 + 124) & 0x180) == 0 )
  {
    v8 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
    v12[1] = 0LL;
    v12[2] = 0LL;
    v12[0] = *((_QWORD *)a1 + 5);
    HampSystemIssueActivityCallback(v8, (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v12);
  }
  return 0;
}
