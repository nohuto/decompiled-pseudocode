/*
 * XREFs of ?RegisterProcessAttribution@CEnergyReporter@@QEAAJPEAVCProcessAttribution@@@Z @ 0x180134550
 * Callers:
 *     ?RegisterForEnergyReporting@CProcessAttribution@@AEAAXXZ @ 0x18013293C (-RegisterForEnergyReporting@CProcessAttribution@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CEnergyReporter::RegisterProcessAttribution(CEnergyReporter *this, struct CProcessAttribution *a2)
{
  int v2; // ebx
  unsigned int v3; // edx
  char *v4; // r10
  __int64 v5; // rcx
  unsigned int v6; // eax
  int v7; // eax
  struct CProcessAttribution *v9; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v9 = a2;
  if ( CEnergyReporter::s_reportingEnabled )
  {
    if ( *((_DWORD *)this + 8) < 0x400u )
    {
      v3 = v10;
      v4 = (char *)this + 8;
      v5 = *((unsigned int *)this + 8);
      v6 = v5 + 1;
      if ( (int)v5 + 1 >= (unsigned int)v5 )
        v3 = v5 + 1;
      v2 = v6 < (unsigned int)v5 ? 0x80070216 : 0;
      if ( v6 < (unsigned int)v5 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xB5u);
      }
      else if ( v3 > *((_DWORD *)v4 + 5) )
      {
        v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v4, 8u, 1, &v9);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v4 + 8 * v5) = v9;
        *((_DWORD *)v4 + 6) = v3;
      }
      if ( v2 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v2, 0x58u);
      else
        _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, -2147467259, 0x51u);
    }
  }
  else
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, -2147467259, 0x4Cu);
  }
  return (unsigned int)v2;
}
