/*
 * XREFs of ?Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006E1B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0PTPProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18006DEFC (--0PTPProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18006E330 (-Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PTPProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  PTPProcessor *v4; // rax
  __int64 v5; // rcx
  PTPProcessor *v6; // rbx
  PTPProcessor *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

  v4 = (PTPProcessor *)malloc(0xDC8uLL);
  v6 = v4;
  if ( v4 )
    memset(v4, 0, 0xDC8uLL);
  if ( v6 )
    v7 = PTPProcessor::PTPProcessor(v6, a1);
  else
    v7 = 0LL;
  if ( v7 )
  {
    v9 = PTPProcessor::Initialize(v7, *a1);
    v8 = v9;
    if ( v9 >= 0 )
    {
      *a2 = (PTPProcessor *)((char *)v7 + 8);
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 11, 73, v9);
    }
  }
  else
  {
    v8 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 11, 70, 14);
  }
  return v8;
}
