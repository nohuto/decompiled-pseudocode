/*
 * XREFs of ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005EF30
 * Callers:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x18000138C (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180059D28 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001434 (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmpQoSDisableForHostOnTimerExpiry(struct _RM_QOS_CONTEXT *a1, struct _RM_ACTIVITY_HOST *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v2; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  v2 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 64);
  if ( (*((_BYTE *)a2 + 804) & 1) != 0 )
  {
    HampHostAcquireLockExclusiveEx(v2, 0);
    *((_QWORD *)v2 + 79) |= 0x400000000000uLL;
    HampHostCheckQueueStateWorker(v2, 0);
    HampHostReleaseLockExclusiveEx(v2);
  }
  else
  {
    *((_DWORD *)a2 + 288) |= 4u;
    RmpQoSSetForHost(a1, a2, 0);
  }
  v4 = (_QWORD *)((char *)a2 + 1184);
  v5 = *((_QWORD *)a2 + 148);
  if ( *(struct _RM_ACTIVITY_HOST **)(v5 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a2 + 1184)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 149), (_QWORD *)*v6 != v4) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  *((_QWORD *)a2 + 149) = 0LL;
  RmpObjectRelease((char *)a2);
}
