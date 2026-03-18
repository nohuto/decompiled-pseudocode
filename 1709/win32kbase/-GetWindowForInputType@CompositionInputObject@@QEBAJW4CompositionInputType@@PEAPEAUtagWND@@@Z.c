/*
 * XREFs of ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C00215F0
 * Callers:
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1C0012F50 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z @ 0x1C00134C0 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00387DC (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00388B0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionInputObject::GetWindowForInputType(_QWORD *a1, int a2, _QWORD *a3)
{
  int v6; // edi
  int v7; // ebx
  __int64 v8; // rcx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx

  *a3 = 0LL;
  v6 = CPushLock::AcquireLockShared((CPushLock *)(a1 + 4));
  if ( v6 >= 0 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v10 = v7 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
            {
              *a3 = 0LL;
              v6 = -1073741811;
              goto LABEL_5;
            }
            v8 = a1[13];
          }
          else
          {
            v8 = a1[12];
          }
        }
        else
        {
          v8 = a1[11];
        }
      }
      else
      {
        v8 = a1[10];
      }
    }
    else
    {
      v8 = a1[9];
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 40LL))(v8, a3);
LABEL_5:
    CPushLock::ReleaseLock((CPushLock *)(a1 + 4));
  }
  return (unsigned int)v6;
}
