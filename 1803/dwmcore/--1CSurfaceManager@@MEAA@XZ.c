/*
 * XREFs of ??1CSurfaceManager@@MEAA@XZ @ 0x1801527B4
 * Callers:
 *     ??_ECSurfaceManager@@MEAAPEAXI@Z @ 0x180152A40 (--_ECSurfaceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x18001FE1C (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180151DC0 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1801526F8 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

void __fastcall CSurfaceManager::~CSurfaceManager(CSurfaceManager *this)
{
  bool v2; // zf
  void *v3; // rcx
  const void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  PVOID v8; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSurfaceManager::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 2) = &CSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  *((_QWORD *)this + 12) = &CSurfaceManager::`vftable'{for `CLegacySurfaceManager'};
  qword_1802D6760 = 0LL;
  qword_1802D6440 = 0LL;
  v2 = *((_QWORD *)this + 42) == 0LL;
  *((_BYTE *)this + 352) = 1;
  if ( !v2 )
  {
    SetEvent(*((HANDLE *)this + 43));
    WaitForSingleObject(*((HANDLE *)this + 42), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 42));
    *((_QWORD *)this + 42) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 43);
  if ( v3 )
    CloseHandle(v3);
  CSurfaceManager::ReleaseAdapterInfo(this);
  v4 = (const void *)*((_QWORD *)this + 65);
  if ( v4 )
    UnmapViewOfFile(v4);
  v5 = (void *)*((_QWORD *)this + 64);
  if ( v5 )
    CloseHandle(v5);
  v6 = (void *)*((_QWORD *)this + 67);
  if ( v6 )
    CloseHandle(v6);
  v7 = (void *)*((_QWORD *)this + 68);
  if ( v7 )
    CloseHandle(v7);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 440);
  CMmcssTask::UnloadRuntime((CSurfaceManager *)((char *)this + 360));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 9);
  CLegacySurfaceManager::~CLegacySurfaceManager((CSurfaceManager *)((char *)this + 96));
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  while ( 1 )
  {
    RestartKey = 0LL;
    v8 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 24), &RestartKey);
    if ( !v8 )
      break;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 24), v8);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
