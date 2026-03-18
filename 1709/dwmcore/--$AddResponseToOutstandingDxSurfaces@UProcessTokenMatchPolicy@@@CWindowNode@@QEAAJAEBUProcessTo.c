/*
 * XREFs of ??$AddResponseToOutstandingDxSurfaces@UProcessTokenMatchPolicy@@@CWindowNode@@QEAAJAEBUProcessTokenMatchPolicy@@PEAVCResponseItem@@@Z @ 0x18013B164
 * Callers:
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x18007F7D0 (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::AddResponseToOutstandingDxSurfaces<ProcessTokenMatchPolicy>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  struct _RTL_GENERIC_TABLE *v3; // r12
  DWORD v5; // ebx
  _DWORD *v6; // rdi
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // r10
  __int64 v14; // rcx
  unsigned int v15; // eax
  signed int v16; // eax
  __int64 v17; // rax
  PVOID RestartKey; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF

  v20 = a3;
  v3 = (struct _RTL_GENERIC_TABLE *)(a1 + 712);
  v5 = 0;
  RestartKey = 0LL;
  v6 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(a1 + 712), &RestartKey);
  if ( v6 )
  {
    v7 = (unsigned int)RestartKey;
    while ( 1 )
    {
      v8 = v6[10];
      v9 = 0;
      if ( v8 )
        break;
LABEL_17:
      v6 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
      if ( !v6 )
        return v5;
    }
    v10 = 0LL;
    while ( 1 )
    {
      v11 = *((_QWORD *)v6 + 2);
      v12 = v7;
      if ( *a2 == *(_DWORD *)(v11 + v10 + 48) )
      {
        v13 = v11 + v10;
        v14 = *(unsigned int *)(v11 + v10 + 80);
        v15 = v14 + 1;
        v7 = v14 + 1;
        if ( (int)v14 + 1 < (unsigned int)v14 )
          v7 = v12;
        v5 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
        if ( v15 < (unsigned int)v14 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0xB5u);
        }
        else if ( v7 > *(_DWORD *)(v13 + 76) )
        {
          v16 = DynArrayImpl<0>::AddMultipleAndSet(v13 + 56, 8u, 1, &v20);
          v5 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v13 + 56) + 8 * v14) = v20;
          *(_DWORD *)(v13 + 80) = v7;
        }
        if ( (v5 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x2Eu);
          return v5;
        }
        v17 = v20;
        _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
        ++*(_DWORD *)(v17 + 16);
      }
      ++v9;
      v10 += 88LL;
      if ( v9 >= v8 )
        goto LABEL_17;
    }
  }
  return v5;
}
