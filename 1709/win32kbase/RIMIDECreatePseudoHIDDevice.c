/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1C0108FA8
 * Callers:
 *     RIMIDE_CreateGenericHidDevice @ 0x1C010B328 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C010B444 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C010B548 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C00973E0 (RawInputManagerObjectCreateKernelHandle.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 *     rimFindReferencedRimObj @ 0x1C00FF854 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100490 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01083D4 (RIMIDECreateDeviceInstancePath.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        __int16 a1,
        unsigned __int16 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *Object,
        _OWORD *a7,
        char a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v13; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // edi
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v27; // [rsp+30h] [rbp-A1h]
  HANDLE Handle; // [rsp+38h] [rbp-99h] BYREF
  __int64 v29; // [rsp+40h] [rbp-91h] BYREF
  UNICODE_STRING v30; // [rsp+48h] [rbp-89h] BYREF
  _OWORD v31[9]; // [rsp+58h] [rbp-79h] BYREF

  *(_QWORD *)&v30.Length = 0LL;
  v30.Buffer = 0LL;
  v13 = 0LL;
  v29 = 0LL;
  memset(v31, 0, sizeof(v31));
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    McTemplateK0(v15, &PseudoDevCreationStart, &W32kControlGuid);
  if ( (int)RIMIDECreateDeviceInstancePath(2u, a1, a2, (__int64)&v30) >= 0 )
  {
    Object = 0LL;
    if ( (int)rimFindReferencedRimObj(28, a1, a2, (struct _LIST_ENTRY **)&Object) < 0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x11u,
        0x12u,
        (__int64)&WPP_0c4627cde00e3179b88e5cbd3acec521_Traceguids);
    }
    else
    {
      if ( RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle) >= 0 )
      {
        v18 = HIDWORD(v31[0]);
        if ( a5 )
          v18 = HIDWORD(v31[0]) | 1;
        *(_QWORD *)&v31[5] = a5;
        DWORD2(v31[5]) = a3;
        v19 = a7[1];
        v31[1] = *a7;
        v20 = a7[2];
        v31[2] = v19;
        v21 = a7[3];
        v31[3] = v20;
        v31[4] = v21;
        v22 = *((_QWORD *)gptiCurrent + 50);
        *(_QWORD *)((char *)&v31[7] + 4) = *(_QWORD *)(v22 + 832);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v22, v16, v17);
        *(_QWORD *)&v31[8] = __PAIR64__(a9, a4);
        HIDWORD(v31[7]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
        *((_QWORD *)&v31[8] + 1) = a10;
        HIDWORD(v31[0]) = ((unsigned __int8)v18 ^ (unsigned __int8)(2 * a8)) & 2 ^ v18;
        v24 = RIMAddInjectionDeviceOfType((char *)Handle, &v30, 2, v31, 0, &v29);
        if ( v24 < 0 )
        {
          LODWORD(v27) = v24;
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x11u,
            0x11u,
            (__int64)&WPP_0c4627cde00e3179b88e5cbd3acec521_Traceguids,
            v27);
        }
        ZwClose(Handle);
        v13 = v29;
      }
      ObfDereferenceObject(Object);
    }
    if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      McTemplateK0(v25, &PseudoDevCreationStop, &W32kControlGuid);
  }
  return v13;
}
