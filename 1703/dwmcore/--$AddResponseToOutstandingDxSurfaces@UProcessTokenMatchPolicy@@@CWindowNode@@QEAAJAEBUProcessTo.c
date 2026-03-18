/*
 * XREFs of ??$AddResponseToOutstandingDxSurfaces@UProcessTokenMatchPolicy@@@CWindowNode@@QEAAJAEBUProcessTokenMatchPolicy@@PEAVCResponseItem@@@Z @ 0x18005411C
 * Callers:
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x1800B058C (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CWindowNode::AddResponseToOutstandingDxSurfaces<ProcessTokenMatchPolicy>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  struct _RTL_GENERIC_TABLE *v3; // r12
  unsigned int v5; // ebx
  _DWORD *v6; // rdi
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // eax
  PVOID RestartKey; // [rsp+70h] [rbp+8h] BYREF
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = a3;
  v3 = (struct _RTL_GENERIC_TABLE *)(a1 + 688);
  v5 = 0;
  RestartKey = 0LL;
  v6 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(a1 + 688), &RestartKey);
  if ( v6 )
  {
    v12 = (unsigned int)RestartKey;
    while ( 1 )
    {
      v8 = v6[10];
      v9 = 0;
      if ( v8 )
        break;
LABEL_8:
      v6 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
      if ( !v6 )
        return v5;
    }
    v10 = 0LL;
    while ( 1 )
    {
      v13 = *((_QWORD *)v6 + 2);
      if ( *a2 == *(_DWORD *)(v13 + v10 + 48) )
      {
        v14 = v13 + v10;
        v15 = *(unsigned int *)(v13 + v10 + 80);
        v16 = v15 + 1;
        if ( (int)v15 + 1 >= (unsigned int)v15 )
          v12 = v15 + 1;
        v5 = v16 < (unsigned int)v15 ? 0x80070216 : 0;
        if ( v16 < (unsigned int)v15 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
        }
        else if ( v12 > *(_DWORD *)(v14 + 76) )
        {
          v17 = DynArrayImpl<0>::AddMultipleAndSet(v14 + 56, 8LL, 1LL, &v19);
          v5 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v14 + 56) + 8 * v15) = v19;
          *(_DWORD *)(v14 + 80) = v12;
        }
        if ( (v5 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x2Eu);
          return v5;
        }
        v11 = v19;
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        ++*(_DWORD *)(v11 + 16);
      }
      ++v9;
      v10 += 88LL;
      if ( v9 >= v8 )
        goto LABEL_8;
    }
  }
  return v5;
}
