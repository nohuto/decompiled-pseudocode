/*
 * XREFs of ??1CSurfaceManager@@MEAA@XZ @ 0x1801312B4
 * Callers:
 *     ??_ECSurfaceManager@@MEAAPEAXI@Z @ 0x180131530 (--_ECSurfaceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x180076A68 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180130154 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1801311C0 (--1CLegacySurfaceManager@@UEAA@XZ.c)
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
  qword_18026EF20 = 0LL;
  qword_18026EEC0 = 0LL;
  v2 = *((_QWORD *)this + 51) == 0LL;
  *((_BYTE *)this + 424) = 1;
  if ( !v2 )
  {
    SetEvent(*((HANDLE *)this + 52));
    WaitForSingleObject(*((HANDLE *)this + 51), 0xFFFFFFFF);
    CloseHandle(*((HANDLE *)this + 51));
    *((_QWORD *)this + 51) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 52);
  if ( v3 )
    CloseHandle(v3);
  CSurfaceManager::ReleaseAdapterInfo(this);
  v4 = (const void *)*((_QWORD *)this + 80);
  if ( v4 )
    UnmapViewOfFile(v4);
  v5 = (void *)*((_QWORD *)this + 79);
  if ( v5 )
    CloseHandle(v5);
  v6 = (void *)*((_QWORD *)this + 82);
  if ( v6 )
    CloseHandle(v6);
  v7 = (void *)*((_QWORD *)this + 83);
  if ( v7 )
    CloseHandle(v7);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 64);
  CMmcssTask::UnloadRuntime((CSurfaceManager *)((char *)this + 432));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
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
