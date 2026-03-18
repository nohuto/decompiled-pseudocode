/*
 * XREFs of ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0031288
 * Callers:
 *     HmgShareUnlockRemoveObject @ 0x1C00817F0 (HmgShareUnlockRemoveObject.c)
 *     HmgFree @ 0x1C0096D40 (HmgFree.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C002F18C (HmgDecProcessHandleCount.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z @ 0x1C00335A0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAA_NI_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C00336B0 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 */

void __fastcall HANDLELOCK::vUnlockAndRelease(HANDLELOCK *this)
{
  int v2; // ebx
  GdiHandleManager *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned int v7; // r8d
  signed int v8; // ecx
  __int64 v9; // rax
  _DWORD *v10; // rdi
  unsigned int v11; // r15d
  __int64 v12; // rdx
  unsigned int v13; // esi

  v2 = *(_DWORD *)(*(_QWORD *)this + 8LL);
  HmgDecProcessHandleCount(v2 & 0xFFFFFFFE);
  *(_BYTE *)(*(_QWORD *)this + 14LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = v2 & 1;
  v3 = gpHandleManager;
  v4 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v5 = *((_QWORD *)v3 + 2);
  v6 = v4;
  v7 = *(_DWORD *)(v5 + 2056);
  if ( v4 >= v7 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
    goto LABEL_10;
  if ( v4 < v7 )
  {
    v8 = 0;
    goto LABEL_4;
  }
  v8 = ((v4 - v7) >> 16) + 1;
  if ( (v4 - v7) >> 16 == -2 )
  {
LABEL_10:
    v10 = 0LL;
    goto LABEL_8;
  }
LABEL_4:
  v9 = *(_QWORD *)(v5 + 8LL * v8 + 8);
  if ( v8 )
    v6 = (_DWORD)v6 - (v8 << 16) - v7 + 0x10000;
  if ( (unsigned int)v6 >= *(_DWORD *)(v9 + 20) )
    goto LABEL_10;
  v10 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
LABEL_8:
  v11 = GdiHandleManager::DecodeIndex(v3, (unsigned __int16)*v10 | (*v10 >> 8) & 0xFF0000);
  GdiHandleManager::DecodeIndex(v3, v11);
  v12 = *((_QWORD *)v3 + 3);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 4LL * (unsigned __int16)v11);
    if ( v13 )
    {
      if ( GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v3 + 2), v13, 1) )
        GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v3 + 2), v13, 1);
      *(_DWORD *)(*((_QWORD *)v3 + 3) + 4LL * (unsigned __int16)v11) = 0;
      --*((_DWORD *)v3 + 1);
    }
  }
  GdiHandleEntryDirectory::ReleaseLockAndEntry(*((GdiHandleEntryDirectory **)v3 + 2), v11, 0);
  *(_QWORD *)v10 = 0LL;
  --*((_DWORD *)v3 + 1);
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
