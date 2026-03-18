/*
 * XREFs of RIMAddSimulatedPointerDeviceData @ 0x1C0106BE0
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C010F7F8 (RIMInsertSimulatedContactEndStateInFrame.c)
 * Callees:
 *     rimHidP_SetUsageValue @ 0x1C0008BA0 (rimHidP_SetUsageValue.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     RIMSetContactBoundary @ 0x1C01061B0 (RIMSetContactBoundary.c)
 *     RIMQuirkSetContactBoundary @ 0x1C0115B8C (RIMQuirkSetContactBoundary.c)
 */

__int64 __fastcall RIMAddSimulatedPointerDeviceData(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char **a5,
        unsigned int *a6)
{
  __int64 v6; // rdi
  __int64 v9; // rax
  struct _HIDP_PREPARSED_DATA *v10; // r14
  unsigned int v11; // ebp
  _DWORD *v12; // rdx
  unsigned __int64 v13; // r8
  int v14; // ebx
  char *v15; // rax
  char *v16; // rdi
  int v17; // eax
  unsigned __int16 v18; // r9
  __int64 v20; // [rsp+28h] [rbp-20h]

  v6 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(v6 + 456);
  v10 = *(struct _HIDP_PREPARSED_DATA **)(v9 + 16);
  v11 = *(unsigned __int16 *)(v9 + 44);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3 )
    goto LABEL_5;
  v12 = (_DWORD *)(a4 + 128);
  v13 = *(_QWORD *)(a3 + 2556);
  if ( (*(_DWORD *)(v6 + 184) & 0x1000000) != 0 )
  {
    RIMQuirkSetContactBoundary(a1, (_DWORD)v12, v13, 0, 0);
    goto LABEL_5;
  }
  v14 = RIMSetContactBoundary(a2, v12, v13, 0, 0);
  if ( v14 >= 0 )
  {
LABEL_5:
    v15 = (char *)Win32AllocPoolZInit(*(unsigned __int16 *)(*(_QWORD *)(v6 + 456) + 44LL), 1668313938LL);
    v16 = v15;
    if ( !v15 )
      return (unsigned int)-1073741801;
    v17 = rimHidP_SetUsageValue(HidP_Input, 1u, 0, 0x30u, *(_DWORD *)(a3 + 2556), v10, v15, v11);
    v14 = v17;
    if ( v17 < 0 )
    {
      v18 = 36;
    }
    else
    {
      v17 = rimHidP_SetUsageValue(HidP_Input, 1u, 0, 0x31u, *(_DWORD *)(a3 + 2560), v10, v16, v11);
      v14 = v17;
      if ( v17 >= 0 )
      {
        *a5 = v16;
        *a6 = v11;
        return (unsigned int)v14;
      }
      v18 = 35;
    }
    LODWORD(v20) = v17;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      v18,
      (__int64)&WPP_0f3e873ef26134f564643c470ca4b782_Traceguids,
      v20);
  }
  return (unsigned int)v14;
}
