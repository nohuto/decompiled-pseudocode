/*
 * XREFs of ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180032B4C
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x1800328D0 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x180068B70 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  unsigned int v6; // esi
  unsigned int v7; // r8d
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 64) )
  {
    v6 = v12;
    while ( 1 )
    {
      v7 = v6;
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3);
      if ( *(_BYTE *)(v12 + 221) )
      {
        v8 = *(unsigned int *)(a2 + 24);
        v9 = v8 + 1;
        v6 = v8 + 1;
        if ( (int)v8 + 1 < (unsigned int)v8 )
          v6 = v7;
        v2 = v9 < (unsigned int)v8 ? 0x80070216 : 0;
        if ( v9 < (unsigned int)v8 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
        }
        else if ( v6 <= *(_DWORD *)(a2 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 8 * v8) = v12;
          *(_DWORD *)(a2 + 24) = v6;
        }
        else
        {
          v10 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8u, 1, &v12);
          v2 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
        }
        if ( v2 < 0 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
        return (unsigned int)v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x12Du);
  }
  return (unsigned int)v2;
}
