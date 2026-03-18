/*
 * XREFs of ??$AddResponseToOutstandingDxSurfaces@UAnyMatchPolicy@@@CWindowNode@@QEAAJAEBUAnyMatchPolicy@@PEAVCResponseItem@@@Z @ 0x18013B01C
 * Callers:
 *     ?AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z @ 0x18007F4A8 (-AddCaptureBitsResponse@CLegacySurfaceManager@@QEAAJPEAVCaptureBitsResponse@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::AddResponseToOutstandingDxSurfaces<AnyMatchPolicy>(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_GENERIC_TABLE *v3; // r12
  DWORD v4; // ebx
  _DWORD *v5; // rdi
  unsigned int v6; // ebp
  unsigned int v7; // r15d
  unsigned int v8; // esi
  __int64 v9; // r14
  __int64 v10; // r10
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  signed int v14; // eax
  __int64 v15; // rax
  PVOID RestartKey; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  v3 = (struct _RTL_GENERIC_TABLE *)(a1 + 712);
  v4 = 0;
  RestartKey = 0LL;
  v5 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(a1 + 712), &RestartKey);
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
        return v4;
    }
    v9 = 0LL;
    while ( 1 )
    {
      v10 = v9 + *((_QWORD *)v5 + 2);
      v11 = *(unsigned int *)(v10 + 80);
      v12 = v11 + 1;
      v13 = v11 + 1;
      if ( (int)v11 + 1 < (unsigned int)v11 )
        v13 = v6;
      v4 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
      v6 = v13;
      if ( v12 < (unsigned int)v11 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xB5u);
      }
      else if ( v13 > *(_DWORD *)(v10 + 76) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet(v10 + 56, 8u, 1, &v18);
        v4 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v10 + 56) + 8 * v11) = v18;
        *(_DWORD *)(v10 + 80) = v13;
      }
      if ( (v4 & 0x80000000) != 0 )
        break;
      v15 = v18;
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      ++*(_DWORD *)(v15 + 16);
      ++v8;
      v9 += 88LL;
      if ( v8 >= v7 )
        goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x2Eu);
  }
  return v4;
}
