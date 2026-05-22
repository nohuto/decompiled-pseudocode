/*
 * XREFs of ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180032BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180031DA8 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x18003254C (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  __int64 result; // rax
  ControllerProcessor *v5; // rax
  ControllerProcessor *v6; // rbx

  if ( *a1 && (*((_BYTE *)*a1 + 4) & 0x3B) != 0 )
    return 2147942487LL;
  v5 = (ControllerProcessor *)malloc(0x1C08uLL);
  v6 = v5;
  if ( v5 )
    memset_0(v5, 0, 0x1C08uLL);
  if ( v6 )
    v6 = ControllerProcessor::ControllerProcessor(v6, *a1, a1[1]);
  if ( !v6 )
    return 2147942414LL;
  result = ControllerProcessor::Initialize(v6);
  if ( (int)result >= 0 )
    *a2 = v6;
  return result;
}
