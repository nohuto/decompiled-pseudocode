/*
 * XREFs of ?GetFormat@CAudioDeviceGraph@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140040EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000DCB0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140015384 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14002FE10 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140034F50 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetFormat(CAudioDeviceGraph *this, __int64 a2, struct tWAVEFORMATEX **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v7; // ebx
  struct CPipeInstance *PipeInstance; // rax
  __int64 v9; // rcx
  const struct tWAVEFORMATEX *v10; // rax
  void (*v11)(void); // rax
  CAudioMediaType *v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
    if ( PipeInstance
      && (v9 = *(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)PipeInstance + 2)) != 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, CAudioMediaType **))(*(_QWORD *)v9 + 8LL))(v9, &v13);
      if ( v7 >= 0 )
      {
        v10 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v13 + 40LL))(v13);
        v7 = CloneWaveFormat(v10, a3);
      }
    }
    else
    {
      v7 = -2005139430;
    }
  }
  else
  {
    v7 = -2005139437;
  }
  LeaveCriticalSection(v3);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x36u,
        (__int64)&WPP_4aa9f3a5c249328694bb02b83da61cfa_Traceguids,
        v7);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetFormat", 0x490u, v7);
  }
  if ( v13 )
  {
    v11 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
    if ( (char *)v11 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v13);
    else
      v11();
  }
  return (unsigned int)v7;
}
