/*
 * XREFs of ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006A250
 * Callers:
 *     <none>
 * Callees:
 *     ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x180069F60 (--0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJXZ @ 0x18006A2DC (-Initialize@MouseProcessor@@IEAAJXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  MouseProcessor *v4; // rax
  MouseProcessor *v5; // rbx
  __int64 result; // rax

  v4 = (MouseProcessor *)malloc(0x460uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x460uLL);
  if ( v5 )
    v5 = MouseProcessor::MouseProcessor(v5, a1);
  if ( !v5 )
    return 2147942414LL;
  result = MouseProcessor::Initialize(v5);
  if ( (int)result >= 0 )
    *a2 = (MouseProcessor *)((char *)v5 + 16);
  return result;
}
