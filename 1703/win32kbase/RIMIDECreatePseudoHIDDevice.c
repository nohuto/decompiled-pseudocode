/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1C0109F10
 * Callers:
 *     RIMIDE_CreateGenericHidDevice @ 0x1C010C374 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C010C490 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C010C594 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C0091820 (RawInputManagerObjectCreateKernelHandle.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 *     rimFindReferencedRimObj @ 0x1C00FF52C (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0100090 (RIMAddInjectionDeviceOfType.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C01093AC (RIMIDECreateDeviceInstancePath.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        __int16 a1,
        unsigned __int16 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        PVOID Object,
        _OWORD *a7,
        char a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v13; // rbx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // edi
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v26; // [rsp+30h] [rbp-A1h]
  HANDLE Handle; // [rsp+38h] [rbp-99h] BYREF
  __int64 v28; // [rsp+40h] [rbp-91h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-89h] BYREF
  _OWORD v30[9]; // [rsp+58h] [rbp-79h] BYREF

  v29[0] = 0LL;
  v29[1] = 0LL;
  v13 = 0LL;
  v28 = 0LL;
  memset(v30, 0, sizeof(v30));
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    TemplateEventDescriptor(v15, &PseudoDevCreationStart, &W32kControlGuid);
  if ( (int)RIMIDECreateDeviceInstancePath(2u, a1, a2, (__int64)v29) >= 0 )
  {
    Object = 0LL;
    if ( (int)rimFindReferencedRimObj(28, a1, a2, (struct _LIST_ENTRY **)&Object) < 0 )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        17,
        18,
        (__int64)&WPP_fda5dd94230439844a6c55081ca9359e_Traceguids);
    }
    else
    {
      if ( RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle) >= 0 )
      {
        v17 = HIDWORD(v30[0]);
        if ( a5 )
          v17 = HIDWORD(v30[0]) | 1;
        *(_QWORD *)&v30[5] = a5;
        DWORD2(v30[5]) = a3;
        v18 = a7[1];
        v30[1] = *a7;
        v19 = a7[2];
        v30[2] = v18;
        v20 = a7[3];
        v30[3] = v19;
        v30[4] = v20;
        v21 = *((_QWORD *)gptiCurrent + 47);
        *(_QWORD *)((char *)&v30[7] + 4) = *(_QWORD *)(v21 + 824);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
        *(_QWORD *)&v30[8] = __PAIR64__(a9, a4);
        HIDWORD(v30[7]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
        *((_QWORD *)&v30[8] + 1) = a10;
        HIDWORD(v30[0]) = ((unsigned __int8)v17 ^ (unsigned __int8)(2 * a8)) & 2 ^ v17;
        v23 = RIMAddInjectionDeviceOfType((char *)Handle, (CTouchProcessor *)v29, 2u, v30, 0, (CTouchProcessor *)&v28);
        if ( v23 < 0 )
        {
          LODWORD(v26) = v23;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x11u,
            0x11u,
            (__int64)&WPP_fda5dd94230439844a6c55081ca9359e_Traceguids,
            v26);
        }
        ZwClose(Handle);
        v13 = v28;
      }
      ObfDereferenceObject(Object);
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      TemplateEventDescriptor(v24, &PseudoDevCreationStop, &W32kControlGuid);
  }
  return v13;
}
