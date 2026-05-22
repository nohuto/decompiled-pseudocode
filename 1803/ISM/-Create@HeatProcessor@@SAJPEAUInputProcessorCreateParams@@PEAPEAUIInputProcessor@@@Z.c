/*
 * XREFs of ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180039480
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180039208 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 __fastcall HeatProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

  v4 = (char *)malloc(0x50uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0x50uLL);
  if ( !v5 )
    return 2147942414LL;
  v6 = *(_QWORD *)a1;
  v7 = *((_QWORD *)a1 + 1);
  *((_QWORD *)v5 + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)v5 + 6) = 1;
  *((_QWORD *)v5 + 5) = v6;
  *((_QWORD *)v5 + 4) = v7;
  *(_QWORD *)v5 = &HeatProcessor::`vftable';
  *((_QWORD *)v5 + 1) = &HeatProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)v5 + 2) = &HeatProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)v5 + 6) = 0LL;
  *((_QWORD *)v5 + 7) = 0LL;
  *((_QWORD *)v5 + 8) = 0LL;
  *((_QWORD *)v5 + 9) = 0LL;
  result = HeatProcessor::Initialize(
             (HeatProcessor *)v5,
             *(struct DeviceInfo **)a1,
             *((struct IInputProcessorHost **)a1 + 1));
  if ( (int)result >= 0 )
    *a2 = (struct IInputProcessor *)(v5 + 8);
  return result;
}
