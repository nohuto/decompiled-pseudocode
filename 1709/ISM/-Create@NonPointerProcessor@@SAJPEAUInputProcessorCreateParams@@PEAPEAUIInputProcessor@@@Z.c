/*
 * XREFs of ?Create@NonPointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006D6E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18006D560 (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NonPointerProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  unsigned int v4; // ebx
  char v5; // al
  int v6; // r9d
  NonPointerProcessor *v7; // rax
  NonPointerProcessor *v8; // rdi
  struct IInputProcessor *v9; // rax

  v4 = 0;
  if ( *a1 && (*((_BYTE *)*a1 + 4) & 0x3B) != 0 )
  {
    v5 = 87;
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 49;
LABEL_5:
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v6, v5);
    }
  }
  else
  {
    v7 = (NonPointerProcessor *)malloc(0x30uLL);
    v8 = v7;
    if ( v7 )
      memset(v7, 0, 0x30uLL);
    if ( v8 )
      v9 = NonPointerProcessor::NonPointerProcessor(v8, *a1, a1[1]);
    else
      v9 = 0LL;
    if ( v9 )
    {
      *a2 = v9;
      return v4;
    }
    v5 = 14;
    v4 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v6 = 56;
      goto LABEL_5;
    }
  }
  return v4;
}
