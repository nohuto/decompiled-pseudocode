/*
 * XREFs of ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003DEA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18003D078 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003D638 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  unsigned int v4; // ebx
  int v5; // r9d
  ControllerProcessor *v6; // rax
  ControllerProcessor *v7; // rbx
  ControllerProcessor *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx

  if ( *a1 && (*((_BYTE *)*a1 + 4) & 0x3B) != 0 )
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 425;
LABEL_5:
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 12, v5, v4);
    }
  }
  else
  {
    v6 = (ControllerProcessor *)malloc(0x1018uLL);
    v7 = v6;
    if ( v6 )
      memset(v6, 0, 0x1018uLL);
    if ( v7 )
      v8 = ControllerProcessor::ControllerProcessor(v7, *a1, a1[1]);
    else
      v8 = 0LL;
    if ( v8 )
    {
      v9 = ControllerProcessor::Initialize(v8);
      v4 = v9;
      if ( v9 >= 0 )
      {
        *a2 = v8;
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 12, 435, v9);
      }
    }
    else
    {
      v4 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 432;
        goto LABEL_5;
      }
    }
  }
  return v4;
}
