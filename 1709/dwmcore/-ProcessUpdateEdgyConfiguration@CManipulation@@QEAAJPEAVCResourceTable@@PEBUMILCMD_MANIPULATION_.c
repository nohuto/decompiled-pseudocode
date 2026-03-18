/*
 * XREFs of ?ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION@@@Z @ 0x180170880
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     ?_UpdateEdgyInputConfiguration@CManipulation@@AEAAJW4Enum@EdgyInputSourceUpdateType@@@Z @ 0x180171E28 (-_UpdateEdgyInputConfiguration@CManipulation@@AEAAJW4Enum@EdgyInputSourceUpdateType@@@Z.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateEdgyConfiguration(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION *a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // edx
  __int64 Resource; // rax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  bool v12; // si
  int v13; // eax
  float v14; // xmm1_4
  float v15; // xmm1_4
  unsigned int v16; // r14d
  signed int updated; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 5);
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x4Cu);
    if ( Resource )
      Resource -= 8LL;
    if ( Resource )
    {
      v9 = *(_DWORD *)(Resource + 1520);
      v10 = *((_DWORD *)this + 133);
      if ( v9 != v10 )
        *((_DWORD *)this + 133) = v9;
      v11 = *((_DWORD *)a3 + 2) != 0;
      v12 = v9 != v10;
      if ( *((_DWORD *)this + 130) != v11 )
      {
        *((_DWORD *)this + 130) = v11;
        v12 = 1;
      }
      v13 = *((_DWORD *)a3 + 6);
      if ( *((_DWORD *)this + 134) != v13 )
      {
        *((_DWORD *)this + 134) = v13;
        v12 = 1;
      }
      v14 = *((float *)a3 + 3);
      if ( *((float *)this + 131) != v14 )
      {
        *((float *)this + 131) = v14;
        v12 = 1;
      }
      v15 = *((float *)a3 + 4);
      if ( *((float *)this + 132) != v15 )
      {
        *((float *)this + 132) = v15;
        v12 = 1;
      }
      v16 = *((_DWORD *)a3 + 7);
      if ( *((_DWORD *)this + 135) != v16 || memcmp_0((char *)this + 544, (char *)a3 + 32, 8LL * v16) )
      {
        *((_DWORD *)this + 135) = v16;
        memcpy_0((char *)this + 544, (char *)a3 + 32, 8LL * *((unsigned int *)a3 + 7));
        v12 = 1;
      }
      if ( v12 )
      {
        updated = CManipulation::_UpdateEdgyInputConfiguration(this, 0LL);
        v4 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x33Eu);
      }
    }
  }
  return v4;
}
