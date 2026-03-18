/*
 * XREFs of ??$AddResponseToOutstandingDxSurfaces@UAnyMatchPolicy@@@CWindowNode@@QEAAJAEBUAnyMatchPolicy@@PEAVCResponseItem@@@Z @ 0x180149A14
 * Callers:
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x1800B0660 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CWindowNode::AddResponseToOutstandingDxSurfaces<AnyMatchPolicy>(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_GENERIC_TABLE *v3; // r12
  int v4; // ebx
  _DWORD *v5; // rdi
  unsigned int v6; // esi
  unsigned int v7; // r15d
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // r10
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rax
  PVOID RestartKey; // [rsp+68h] [rbp+10h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  v3 = (struct _RTL_GENERIC_TABLE *)(a1 + 688);
  v4 = 0;
  RestartKey = 0LL;
  v5 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(a1 + 688), &RestartKey);
  if ( v5 )
  {
    v6 = (unsigned int)RestartKey;
    while ( 1 )
    {
      v7 = v5[10];
      v8 = 0;
      if ( v7 )
        break;
LABEL_15:
      v5 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
      if ( !v5 )
        return (unsigned int)v4;
    }
    v9 = 0LL;
    while ( 1 )
    {
      v10 = v9 + *((_QWORD *)v5 + 2);
      v11 = *(unsigned int *)(v10 + 80);
      v12 = v11 + 1;
      if ( (int)v11 + 1 >= (unsigned int)v11 )
        v6 = v11 + 1;
      v4 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
      if ( v12 < (unsigned int)v11 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB5u);
      }
      else if ( v6 > *(_DWORD *)(v10 + 76) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 56, 8u, 1, &v17);
        v4 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v10 + 56) + 8 * v11) = v17;
        *(_DWORD *)(v10 + 80) = v6;
      }
      if ( v4 < 0 )
        break;
      v14 = v17;
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      ++*(_DWORD *)(v14 + 16);
      ++v8;
      v9 += 88LL;
      if ( v8 >= v7 )
        goto LABEL_15;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2Eu);
  }
  return (unsigned int)v4;
}
