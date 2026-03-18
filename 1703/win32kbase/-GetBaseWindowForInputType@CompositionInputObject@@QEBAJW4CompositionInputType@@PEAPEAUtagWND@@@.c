/*
 * XREFs of ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0150790
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX0KPEAUtagINPUTDEST@@@Z @ 0x1C000103C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX0KPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00111F8 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C001125C (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionInputObject::GetBaseWindowForInputType(_QWORD *a1, int a2, _QWORD *a3)
{
  int v6; // edi
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 v10; // rcx

  *a3 = 0LL;
  v6 = CPushLock::AcquireLockShared((CPushLock *)(a1 + 4));
  if ( v6 >= 0 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
          {
            *a3 = 0LL;
            v6 = -1073741811;
LABEL_12:
            CPushLock::ReleaseLock((CPushLock *)(a1 + 4));
            return (unsigned int)v6;
          }
          v10 = a1[12];
        }
        else
        {
          v10 = a1[11];
        }
      }
      else
      {
        v10 = a1[10];
      }
    }
    else
    {
      v10 = a1[9];
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 48LL))(v10, a3);
    goto LABEL_12;
  }
  return (unsigned int)v6;
}
