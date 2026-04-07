/*
 * XREFs of ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18000FA70
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18000F7D8 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x18007272C (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  unsigned int v6; // r14d
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 64) )
  {
    v6 = v11;
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v3);
      if ( *(_BYTE *)(v11 + 217) )
      {
        v7 = *(unsigned int *)(a2 + 24);
        v8 = v7 + 1;
        if ( (int)v7 + 1 >= (unsigned int)v7 )
          v6 = v7 + 1;
        v2 = v8 < (unsigned int)v7 ? 0x80070216 : 0;
        if ( v8 < (unsigned int)v7 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xB5u);
        }
        else if ( v6 <= *(_DWORD *)(a2 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 8 * v7) = v11;
          *(_DWORD *)(a2 + 24) = v6;
        }
        else
        {
          v9 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8LL, 1LL, &v11);
          v2 = v9;
          if ( v9 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
        }
        if ( v2 < 0 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 64) )
        return (unsigned int)v2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x12Bu);
  }
  return (unsigned int)v2;
}
