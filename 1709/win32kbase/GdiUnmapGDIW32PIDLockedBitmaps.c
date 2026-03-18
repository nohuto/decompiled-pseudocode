/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C007BBD0
 * Callers:
 *     GdiProcessCallout @ 0x1C007B5C0 (GdiProcessCallout.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0042C5C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rcx
  int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rdx
  HSEMAPHORE v10; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  v10 = ghsemMapRot;
  EngAcquireSemaphore(ghsemMapRot);
  v2 = (_QWORD *)(a1 + 224);
  v3 = (_QWORD *)*v2;
  if ( *v2 )
  {
    while ( v3 != v2 )
    {
      v7 = v3;
      v3 = (_QWORD *)*v3;
      *(v7 - 23) = 0LL;
      *(v7 - 24) = 0LL;
      v8 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v7[1] = v7;
      *v7 = v7;
    }
  }
  v2[1] = v2;
  *v2 = v2;
  SEMOBJ::vUnlock((PERESOURCE *)&v10);
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v4);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v6);
  }
  return result;
}
