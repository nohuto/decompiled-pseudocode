/*
 * XREFs of ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@@Z @ 0x1C012C0EC
 * Callers:
 *     NtUserCreatePalmRejectionDelayZone @ 0x1C00B55E0 (NtUserCreatePalmRejectionDelayZone.c)
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000FC20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1C0132B48 (-UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFram.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddDelayZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        struct tagRECT *a3)
{
  unsigned int v6; // ebp
  char *v7; // rsi
  __int64 v8; // r8
  PVOID v9; // rdi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  CInpLockGuard *v19; // [rsp+40h] [rbp-38h] BYREF
  int v20; // [rsp+48h] [rbp-30h]
  struct tagRECT v21; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v19,
    (DelayZonePalmRejection *)((char *)this + 120));
  v6 = 0;
  v7 = (char *)Win32AllocPoolZInit(0x48uLL, 0x7A647355u);
  if ( v7 )
  {
    v9 = 0LL;
    Object = 0LL;
    if ( a2 )
    {
      LOBYTE(v8) = 1;
      v10 = CompositionInputObject::ResolveHandle(a2, 1LL, v8, (struct CompositionInputObject **)&Object);
      if ( v10 < 0 )
      {
        WPP_RECORDER_SF_d(
          *((_QWORD *)this + 14),
          2u,
          0xDu,
          0x18u,
          (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
          v10);
        goto LABEL_13;
      }
      v9 = Object;
      if ( Object )
        ObReferenceObjectByPointer(Object, 3u, ExCompositionObjectType, 0);
    }
    *(struct tagRECT *)(v7 + 24) = *a3;
    *((_QWORD *)v7 + 6) = v9;
    *((_QWORD *)v7 + 2) = KeGetCurrentThread();
    v6 = *((_DWORD *)this + 22);
    v11 = v6 + 1;
    if ( v6 == -1 )
      v11 = 1;
    *((_DWORD *)this + 22) = v11;
    *((_DWORD *)v7 + 10) = v6;
    *((_DWORD *)v7 + 15) = 3;
    v12 = *((_DWORD *)this + 26);
    *((_QWORD *)v7 + 8) = 0LL;
    *((_DWORD *)v7 + 14) = v12;
    v13 = (_QWORD *)((char *)this + 72);
    v7[44] = 0;
    v14 = *((_QWORD *)this + 9);
    if ( *(DelayZonePalmRejection **)(v14 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
      __fastfail(3u);
    *(_QWORD *)v7 = v14;
    *((_QWORD *)v7 + 1) = v13;
    *(_QWORD *)(v14 + 8) = v7;
    *v13 = v7;
    WPP_RECORDER_SF_dd(
      *((_QWORD *)this + 14),
      4u,
      0xDu,
      0x17u,
      (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
      v6,
      ++*((_DWORD *)this + 23));
    v16 = *((_QWORD *)this + 21);
    if ( v16 )
    {
      v17 = *((unsigned int *)this + 1);
      v21 = *a3;
      DelayZoneTelemetry::UpdateDelayZoneStateInfo(v16, v17, v15, 3LL, &v21);
    }
  }
LABEL_13:
  if ( !v20 )
    CInpLockGuard::UnLock((PERESOURCE *)v19);
  return v6;
}
