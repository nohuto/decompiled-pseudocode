/*
 * XREFs of ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C012C2AC
 * Callers:
 *     AddEdgePalmRejectionZone @ 0x1C012D880 (AddEdgePalmRejectionZone.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 */

__int64 __fastcall DelayZonePalmRejection::AddEdgeZoneToList(
        DelayZonePalmRejection *this,
        void *a2,
        int a3,
        struct tagRECT *a4)
{
  char *v8; // rax
  char *v9; // r10
  unsigned int v10; // ebx
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  CInpLockGuard *v15; // [rsp+40h] [rbp-18h] BYREF
  int v16; // [rsp+48h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v15,
    (DelayZonePalmRejection *)((char *)this + 120));
  v8 = (char *)Win32AllocPoolZInit(0x48uLL, 0x7A647355u);
  v9 = v8;
  if ( v8 )
  {
    *((_QWORD *)v8 + 6) = 0LL;
    *(struct tagRECT *)(v8 + 24) = *a4;
    *((_QWORD *)v8 + 2) = KeGetCurrentThread();
    v10 = *((_DWORD *)this + 22);
    v11 = v10 + 1;
    if ( v10 == -1 )
      v11 = 1;
    *((_DWORD *)this + 22) = v11;
    v12 = (_QWORD *)((char *)this + 72);
    *((_DWORD *)v9 + 14) = 0;
    *((_DWORD *)v9 + 10) = v10;
    *((_DWORD *)v9 + 15) = a3;
    *((_QWORD *)v9 + 8) = a2;
    v9[44] = 1;
    v13 = *((_QWORD *)this + 9);
    if ( *(DelayZonePalmRejection **)(v13 + 8) != (DelayZonePalmRejection *)((char *)this + 72) )
      __fastfail(3u);
    *(_QWORD *)v9 = v13;
    *((_QWORD *)v9 + 1) = v12;
    *(_QWORD *)(v13 + 8) = v9;
    *v12 = v9;
    WPP_RECORDER_SF_dd(
      *((_QWORD *)this + 14),
      4u,
      0xDu,
      0x19u,
      (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids,
      v10,
      ++*((_DWORD *)this + 23));
  }
  else
  {
    v10 = 0;
  }
  if ( !v16 )
    CInpLockGuard::UnLock((PERESOURCE *)v15);
  return v10;
}
