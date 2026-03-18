/*
 * XREFs of ?InitializeInputSensors@@YAJXZ @ 0x1C012D6C0
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x1C012D860 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0019990 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C001A6B0 (-Read@CBaseInput@@QEAAJXZ.c)
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C001A700 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sd @ 0x1C012DA28 (WPP_RECORDER_SF_sd.c)
 */

__int64 InitializeInputSensors(void)
{
  CMouseSensor **v0; // rsi
  unsigned int v1; // edi
  CBaseInput **v2; // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // ecx
  int v10; // edi
  int v11; // r8d

  v0 = &qword_1C0188018;
  v1 = 0;
  v2 = &qword_1C0188018;
  while ( 1 )
  {
    if ( *((_DWORD *)v2 - 2) != 2 )
      goto LABEL_6;
    v4 = CBaseInput::InitializeSensor(*v2);
    if ( v4 < 0 )
      break;
    v4 = CBaseInput::RegisterDispatcherObject(
           *v2,
           (struct IRegisterInputDispatcherObjects *)WPP_MAIN_CB.Queue.ListEntry.Blink);
    if ( v4 < 0 )
    {
      v6 = 20;
      goto LABEL_11;
    }
    v4 = CBaseInput::Read(*v2);
    if ( v4 < 0 )
    {
      v6 = 21;
      goto LABEL_11;
    }
LABEL_6:
    ++v1;
    v2 += 6;
    if ( v1 >= 3 )
      goto LABEL_12;
  }
  v6 = 19;
LABEL_11:
  WPP_RECORDER_SF_sd(v4, v3, v5, v6);
LABEL_12:
  v7 = 0;
  while ( 1 )
  {
    v10 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)*v0 + 16LL))(*v0);
    if ( v10 < 0 )
      break;
    ++v7;
    v0 += 6;
    if ( v7 >= 3 )
      return (unsigned int)v10;
  }
  WPP_RECORDER_SF_sd(v9, v8, v11, 22);
  return (unsigned int)v10;
}
