/*
 * XREFs of ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x180084760
 * Callers:
 *     ??_GCCompiledEffectTemplate@@MEAAPEAXI@Z @ 0x1800845A0 (--_GCCompiledEffectTemplate@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ @ 0x1800845D0 (-SignalCompileCompletedEvent@CCompiledEffectTemplate@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompiledEffectTemplate::~CCompiledEffectTemplate(CCompiledEffectTemplate *this)
{
  __int64 v1; // r8
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 i; // r9
  __int64 v6; // rcx
  __int64 v7; // rdx

  v1 = *((_QWORD *)this + 9);
  *(_QWORD *)this = &CCompiledEffectTemplate::`vftable';
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 40);
    v4 = 0LL;
    for ( i = *(_QWORD *)(v1 + 16); (unsigned int)v4 < v3; v4 = (unsigned int)(v4 + 1) )
    {
      if ( this == *(CCompiledEffectTemplate **)(i + 8 * v4) )
        break;
    }
    if ( (unsigned int)v4 < v3 )
    {
      if ( (unsigned int)v4 < v3 - 1 )
      {
        do
        {
          v7 = (unsigned int)(v4 + 1);
          *(_QWORD *)(i + 8 * v4) = *(_QWORD *)(i + 8 * v7);
          v4 = v7;
        }
        while ( (unsigned int)v7 < *(_DWORD *)(v1 + 40) - 1 );
      }
      --*(_DWORD *)(v1 + 40);
    }
  }
  CCompiledEffectTemplate::SignalCompileCompletedEvent(this);
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
