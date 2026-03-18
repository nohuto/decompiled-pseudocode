/*
 * XREFs of ?AddBufferReference@ScanPipelineBuilder@@IEAAJPEAPEBXW4BufferLocation@@@Z @ 0x1801ABFC8
 * Callers:
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1801AC108 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 *     ?ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ @ 0x1801AC61C (-ConvertDestBufferReferences@ScanPipelineBuilder@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall ScanPipelineBuilder::AddBufferReference(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v15; // [rsp+50h] [rbp+18h]
  char *v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( (unsigned int)(a3 - 3) > 2 )
  {
    *a2 = 0LL;
    v4 = *a1;
    v16 = (char *)a2 - *(_QWORD *)(*a1 + 8LL);
    if ( a3 == 1 )
    {
      v5 = *(unsigned int *)(v4 + 560);
      v6 = v15;
      v7 = v5 + 1;
      if ( (int)v5 + 1 >= (unsigned int)v5 )
        v6 = v5 + 1;
      v8 = v7 < (unsigned int)v5 ? 0x80070216 : 0;
      if ( v7 >= (unsigned int)v5 )
      {
        if ( v6 <= *(_DWORD *)(v4 + 556) )
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 536) + 8 * v5) = v16;
          *(_DWORD *)(v4 + 560) = v6;
          return v8;
        }
        v9 = v4 + 536;
        goto LABEL_17;
      }
    }
    else
    {
      if ( a3 != 2 )
        return (unsigned int)-2003304320;
      v10 = *(unsigned int *)(v4 + 616);
      v11 = v15;
      v12 = v10 + 1;
      if ( (int)v10 + 1 >= (unsigned int)v10 )
        v11 = v10 + 1;
      v8 = v12 < (unsigned int)v10 ? 0x80070216 : 0;
      if ( v12 >= (unsigned int)v10 )
      {
        if ( v11 <= *(_DWORD *)(v4 + 612) )
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 592) + 8 * v10) = v16;
          *(_DWORD *)(v4 + 616) = v11;
          return v8;
        }
        v9 = v4 + 592;
LABEL_17:
        v13 = DynArrayImpl<0>::AddMultipleAndSet(v9, 8u, 1, &v16);
        v8 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
        return v8;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
    return v8;
  }
  *a2 = *(_QWORD *)(a1[1] + 8LL * (unsigned int)(a3 - 3));
  return v3;
}
