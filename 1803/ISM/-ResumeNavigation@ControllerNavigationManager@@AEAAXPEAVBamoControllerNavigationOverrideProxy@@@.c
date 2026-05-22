/*
 * XREFs of ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18002F2E0
 * Callers:
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18002F618 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 *     ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x180030E60 (-OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 * Callees:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800332A4 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerNavigationManager::ResumeNavigation(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationOverrideProxy *a2)
{
  char v2; // bp
  __int64 v3; // rsi
  char *v5; // rbx
  __int128 v6; // xmm6
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  int v9; // ebp
  __int64 v10; // rcx
  __int64 *v11; // r9
  __int128 *v12; // r8
  __int128 v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0uLL;
  v3 = 0LL;
  if ( a2 )
  {
    v5 = (char *)a2 + 8;
    v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 40LL))((char *)a2 + 8);
    v6 = *(_OWORD *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 48LL))(v5);
    v3 = *(_QWORD *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v5 + 56LL))(v5);
  }
  else
  {
    v6 = v13;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 9);
  v8 = (_QWORD *)*v7;
  if ( (_QWORD *)*v7 != v7 )
  {
    v9 = v2 & 0x10;
    do
    {
      v10 = v8[3];
      v13 = v6;
      v14 = v3;
      if ( v9 )
      {
        v11 = &v14;
        v12 = &v13;
      }
      else
      {
        v11 = 0LL;
        v12 = 0LL;
      }
      if ( (int)ControllerProcessor::UpdateNavigationState(v10, 3LL, v12, v11) < 0 )
      {
        if ( IsDebuggerPresent() )
          __debugbreak();
        RaiseFailFastException(0LL, 0LL, 0);
      }
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != v7 );
  }
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, 0LL);
}
