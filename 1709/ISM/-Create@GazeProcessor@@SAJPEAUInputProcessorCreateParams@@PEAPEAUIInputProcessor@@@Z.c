/*
 * XREFs of ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180043370
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?UpdateDisplayCalibration@GazeProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18004374C (-UpdateDisplayCalibration@GazeProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18006D560 (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdi
  int updated; // ebx
  int v8; // r9d
  char v9; // al

  v4 = malloc(0x40uLL);
  v6 = v4;
  if ( v4 )
    memset(v4, 0, 0x40uLL);
  if ( v6 )
  {
    NonPointerProcessor::NonPointerProcessor((NonPointerProcessor *)(v6 + 1), *a1, a1[1]);
    *v6 = &GazeProcessor::`vftable';
    v6[1] = &GazeProcessor::`vftable'{for `IInputProcessor'};
    v6[2] = &GazeProcessor::`vftable'{for `RefCountedObject'};
    updated = GazeProcessor::UpdateDisplayCalibration((GazeProcessor *)v6, *a1);
    if ( updated < 0 )
    {
      v9 = Microsoft_OneCore_MinInputEnableBits;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_12;
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 37, updated);
    }
    v9 = Microsoft_OneCore_MinInputEnableBits;
LABEL_12:
    if ( updated >= 0 )
    {
      *a2 = (struct IInputProcessor *)(v6 + 1);
      return (unsigned int)updated;
    }
    if ( (v9 & 2) != 0 )
    {
      v8 = 69;
      goto LABEL_7;
    }
    return (unsigned int)updated;
  }
  updated = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 66;
LABEL_7:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v8, updated);
  }
  return (unsigned int)updated;
}
