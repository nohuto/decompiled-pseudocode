/*
 * XREFs of ?AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z @ 0x180202C78
 * Callers:
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x180202DB0 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x1802032C4 (-ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::AddBufferReference(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  char *v12; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( (unsigned int)(a3 - 3) > 2 )
  {
    *a2 = 0LL;
    v4 = *a1;
    v12 = (char *)a2 - *(_QWORD *)(*a1 + 8LL);
    if ( a3 == 1 )
    {
      v5 = *(_DWORD *)(v4 + 560);
      v6 = v5 + 1;
      v7 = v5 + 1 < v5 ? 0x80070216 : 0;
      if ( v5 + 1 >= v5 )
      {
        if ( v6 <= *(_DWORD *)(v4 + 556) )
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 536) + 8LL * v5) = v12;
          *(_DWORD *)(v4 + 560) = v6;
          return v7;
        }
        v8 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 536, 8u, 1, &v12);
        goto LABEL_13;
      }
    }
    else
    {
      if ( a3 != 2 )
        return (unsigned int)-2003304320;
      v9 = *(_DWORD *)(v4 + 616);
      v10 = v9 + 1;
      v7 = v9 + 1 < v9 ? 0x80070216 : 0;
      if ( v9 + 1 >= v9 )
      {
        if ( v10 <= *(_DWORD *)(v4 + 612) )
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 592) + 8LL * v9) = v12;
          *(_DWORD *)(v4 + 616) = v10;
          return v7;
        }
        v8 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 592, 8u, 1, &v12);
LABEL_13:
        v7 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
        return v7;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
    return v7;
  }
  *a2 = *(_QWORD *)(a1[1] + 8LL * (unsigned int)(a3 - 3));
  return v3;
}
