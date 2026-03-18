/*
 * XREFs of ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x180166AFC
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x18019309C (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 * Callees:
 *     ?SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@PEBXI@Z @ 0x1800B2828 (-SetInteractionConfiguration@CInteractionProcessor@@QEAAJW4Enum@InteractionConfigurationUpdateTy.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z @ 0x1800B2C74 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800B3C00 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x1800C7B50 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionRoot::Initialize(CInteractionRoot *this, struct IManipulationContext *a2, char a3)
{
  CInteractionContextWrapper *v5; // rax
  struct IInteractionContextWrapper *v6; // rdi
  CInteractionContextWrapper *v7; // rax
  signed int v8; // ebx
  __int64 v9; // r8
  int v11; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+38h] [rbp-18h] BYREF
  int v13; // [rsp+3Ch] [rbp-14h]
  int v14; // [rsp+40h] [rbp-10h]

  *((_QWORD *)this + 123) = a2;
  v5 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
  if ( v5 )
    v6 = CInteractionContextWrapper::CInteractionContextWrapper(v5);
  else
    v6 = 0LL;
  v7 = 0LL;
  v8 = v6 == 0LL ? 0x8007000E : 0;
  if ( v6 )
  {
    v7 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new();
    if ( v7 )
      v7 = CInteractionContextWrapper::CInteractionContextWrapper(v7);
    if ( !v7 )
      v8 = -2147024882;
  }
  if ( v8 >= 0 )
  {
    v8 = CInteractionProcessor::Initialize((CInteractionRoot *)((char *)this + 32), v6, v7);
    if ( v8 >= 0 )
    {
      v12 = 1;
      v13 = -1;
      v14 = -1;
      v8 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 1, &v12, 1u);
      if ( v8 >= 0 )
      {
        v12 = 1;
        v13 = -1;
        v14 = -1;
        v8 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 2, &v12, 1u);
        if ( v8 >= 0 )
        {
          v11 = -1;
          v8 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 4, &v11, 1u);
          if ( v8 >= 0 )
          {
            v11 = -1;
            v8 = CInteractionProcessor::SetInteractionConfiguration((__int64)this + 32, 0, 3, &v11, 1u);
            if ( v8 >= 0 )
            {
              if ( a3 )
              {
                LOBYTE(v9) = a3;
                (*(void (__fastcall **)(CInteractionRoot *, _QWORD, __int64, __int64))(*(_QWORD *)this + 40LL))(
                  this,
                  0LL,
                  v9,
                  1LL);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v8;
}
