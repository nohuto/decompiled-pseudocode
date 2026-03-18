/*
 * XREFs of ?NotifyListeners@CWeakReferenceBase@@AEAAXXZ @ 0x180034BB0
 * Callers:
 *     ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180034930 (-ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWeakReferenceBase::NotifyListeners(CWeakReferenceBase *this)
{
  char *v2; // rbx
  int v3; // eax
  __int64 v4; // rsi
  int v5; // ecx
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // edx

  v2 = (char *)this + 16;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 10);
    if ( !v3 )
      break;
    v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL * (unsigned int)(v3 - 1));
    (*(void (__fastcall **)(__int64, CWeakReferenceBase *))(*(_QWORD *)v4 + 136LL))(v4, this);
    v5 = *((_DWORD *)this + 10);
    if ( v5 )
    {
      v6 = *(_QWORD *)v2;
      v7 = (unsigned int)(v5 - 1);
      if ( v4 == *(_QWORD *)(*(_QWORD *)v2 + 8 * v7) )
      {
        v8 = *((_DWORD *)v2 + 6);
        if ( (unsigned int)v7 >= v8 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
        }
        else
        {
          while ( (unsigned int)v7 < v8 - 1 )
          {
            *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8LL * (unsigned int)(v7 + 1));
            v7 = (unsigned int)(v7 + 1);
            v8 = *((_DWORD *)v2 + 6);
          }
          *((_DWORD *)v2 + 6) = v8 - 1;
        }
      }
    }
  }
  *((_DWORD *)v2 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v2, 8LL);
}
