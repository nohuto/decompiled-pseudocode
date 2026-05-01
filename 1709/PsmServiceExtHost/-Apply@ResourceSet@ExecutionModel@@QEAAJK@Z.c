/*
 * XREFs of ?Apply@ResourceSet@ExecutionModel@@QEAAJK@Z @ 0x180012590
 * Callers:
 *     ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180014F80 (-RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 * Callees:
 *     ?ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EDB4 (-ApplyResourceSetWithoutEnforcement@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAP.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800154F0 (-RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::Apply(ExecutionModel::ResourceManager **this, DWORD a2)
{
  char *v2; // rbx
  DWORD v3; // ebp
  _BYTE *Value; // rdi
  int v7; // eax
  unsigned int v8; // edi
  _BYTE *v9; // rax
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = HampLockTrackerId;
  P = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v3) )
      __int2c();
    *(_QWORD *)Value |= 1uLL;
    ++Value[8];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800681D0 = GetCurrentThreadId();
  if ( a2 || *((_DWORD *)this + 34) )
  {
    v7 = ExecutionModel::ResourceManager::ApplyResourceSetWithoutEnforcement(
           this[3],
           (struct ExecutionModel::ResourceSet *)this,
           a2,
           (struct _RM_ACTIVITY_HOST **)&P);
    v2 = (char *)P;
    v8 = v7;
    if ( v7 >= 0 && P )
    {
      RmpEnforcementWorkerSynchronize((struct _RM_ACTIVITY_HOST *)P);
      v8 = 0;
    }
  }
  else
  {
    v8 = -2147418113;
  }
  dword_1800681D0 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v9 = TlsGetValue(HampLockTrackerId);
    if ( (*v9 & 1) == 0 )
      __int2c();
    if ( v9[8]-- == 1 )
      *(_QWORD *)v9 &= ~1uLL;
  }
  if ( v2 )
    RmpObjectRelease(v2);
  return v8;
}
