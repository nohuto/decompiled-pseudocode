/*
 * XREFs of ?ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION@@@Z @ 0x180199590
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     ?_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18019AE14 (-_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateEdgyConfiguration(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION *a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // edx
  char v8; // di
  __int64 Resource; // rax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  float v13; // xmm1_4
  float v14; // xmm1_4
  unsigned int v15; // r14d
  int updated; // eax
  const void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = *((_DWORD *)a3 + 5);
  if ( v5 )
  {
    v8 = 0;
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x52u);
    if ( Resource )
      Resource -= 8LL;
    if ( !Resource )
      ModuleFailFastForHRESULT(-2147467260, retaddr);
    v10 = *(_DWORD *)(Resource + 1696);
    *((_BYTE *)this + 568) = 0;
    if ( v10 != *((_DWORD *)this + 277) )
    {
      *((_DWORD *)this + 277) = v10;
      v8 = 1;
    }
    v11 = *((_DWORD *)a3 + 2) != 0;
    if ( *((_DWORD *)this + 274) != v11 )
    {
      *((_DWORD *)this + 274) = v11;
      v8 = 1;
    }
    v12 = *((_DWORD *)a3 + 6);
    if ( *((_DWORD *)this + 278) != v12 )
    {
      *((_DWORD *)this + 278) = v12;
      v8 = 1;
    }
    v13 = *((float *)a3 + 3);
    if ( *((float *)this + 275) != v13 )
    {
      *((float *)this + 275) = v13;
      v8 = 1;
    }
    v14 = *((float *)a3 + 4);
    if ( *((float *)this + 276) != v14 )
    {
      *((float *)this + 276) = v14;
      v8 = 1;
    }
    v15 = *((_DWORD *)a3 + 7);
    if ( *((_DWORD *)this + 279) != v15 || memcmp_0((char *)this + 1120, (char *)a3 + 32, 8LL * v15) )
    {
      *((_DWORD *)this + 279) = v15;
      memcpy_0((char *)this + 1120, (char *)a3 + 32, 8LL * *((unsigned int *)a3 + 7));
      v8 = 1;
    }
    if ( v8 )
    {
      updated = CManipulation::_UpdateEdgyInput(this, 0LL);
      v4 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x326u);
    }
  }
  return v4;
}
