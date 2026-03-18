/*
 * XREFs of ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801695CC
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x1801A1DBC (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 * Callees:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@00@Z @ 0x180091F50 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@00@Z.c)
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x180092008 (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800B7CD0 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800BE440 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x1800BE588 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionRoot::Initialize(CInteractionRoot *this, struct IManipulationContext *a2, char a3)
{
  CInteractionContextWrapper *v5; // rax
  CInteractionContextWrapper *v6; // rbx
  int v7; // ebx
  CInteractionContextWrapper *v8; // rax
  struct IInteractionContextWrapper *v9; // rdi
  CInteractionContextWrapper *v10; // rax
  __int64 v11; // r8
  CInteractionContextWrapper *v13; // [rsp+30h] [rbp-30h] BYREF
  void *v14; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  *((_QWORD *)this + 147) = a2;
  v5 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( v5 )
  {
    v6 = CInteractionContextWrapper::CInteractionContextWrapper(v5);
    v13 = v6;
  }
  else
  {
    v6 = 0LL;
    v13 = 0LL;
  }
  if ( v6 )
  {
    v8 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
    if ( v8 )
      v9 = CInteractionContextWrapper::CInteractionContextWrapper(v8);
    else
      v9 = 0LL;
    v10 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
    if ( v10 )
      v10 = CInteractionContextWrapper::CInteractionContextWrapper(v10);
    v7 = CInteractionProcessor::Initialize((CInteractionRoot *)((char *)this + 32), v6, v9, v10);
  }
  else
  {
    v7 = -2147024882;
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)&v13);
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(&v14);
    SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)&v15);
  }
  if ( v7 >= 0 )
  {
    v16 = -805306369;
    v15 = 0xFFFFFFFF00000001uLL;
    v7 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 1, &v15, 1u);
    if ( v7 >= 0 )
    {
      v15 = 0xFFFFFFFF00000001uLL;
      v16 = -805306369;
      v7 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 2, &v15, 1u);
      if ( v7 >= 0 )
      {
        LODWORD(v13) = -805306369;
        v7 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 4, &v13, 1u);
        if ( v7 >= 0 )
        {
          v15 = 0xFFFFFFFF00000001uLL;
          v16 = -805306369;
          v7 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 3, &v15, 1u);
          if ( v7 >= 0 )
          {
            if ( a3 )
            {
              LOBYTE(v11) = a3;
              (*(void (__fastcall **)(CInteractionRoot *, _QWORD, __int64, __int64))(*(_QWORD *)this + 40LL))(
                this,
                0LL,
                v11,
                1LL);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
