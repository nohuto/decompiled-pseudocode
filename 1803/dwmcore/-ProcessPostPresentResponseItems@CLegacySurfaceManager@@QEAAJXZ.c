/*
 * XREFs of ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x18013FC0C
 * Callers:
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1801526F8 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessPostPresentResponseItems(CLegacySurfaceManager *this)
{
  int v1; // ebx
  __int64 i; // rbp
  __int64 v4; // r14
  int v5; // eax
  int v6; // esi

  v1 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 42); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * i);
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x175u);
    if ( !v1 || v1 >= 0 && v6 < 0 )
      v1 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  *((_DWORD *)this + 42) = 0;
  return (unsigned int)v1;
}
