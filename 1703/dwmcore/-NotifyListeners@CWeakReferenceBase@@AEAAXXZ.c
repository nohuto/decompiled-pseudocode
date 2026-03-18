/*
 * XREFs of ?NotifyListeners@CWeakReferenceBase@@AEAAXXZ @ 0x1800C1DA4
 * Callers:
 *     ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18005B660 (-ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWeakReferenceBase::NotifyListeners(CWeakReferenceBase *this)
{
  int v2; // eax
  __int64 v3; // rdi
  int v4; // r8d
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rcx

  while ( 1 )
  {
    v2 = *((_DWORD *)this + 10);
    if ( !v2 )
      break;
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * (unsigned int)(v2 - 1));
    (*(void (__fastcall **)(__int64, CWeakReferenceBase *))(*(_QWORD *)v3 + 120LL))(v3, this);
    v4 = *((_DWORD *)this + 10);
    if ( v4 )
    {
      v5 = (unsigned int)(v4 - 1);
      if ( v3 == *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v5) )
      {
        v6 = *((_DWORD *)this + 10);
        if ( (unsigned int)v5 >= v6 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x193u);
        }
        else
        {
          v7 = *((_QWORD *)this + 2);
          if ( (unsigned int)v5 < v6 - 1 )
          {
            do
            {
              v8 = (unsigned int)v5;
              LODWORD(v5) = v5 + 1;
              *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8LL * (unsigned int)v5);
            }
            while ( (unsigned int)v5 < *((_DWORD *)this + 10) - 1 );
          }
          --*((_DWORD *)this + 10);
        }
      }
    }
  }
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 16, 8u);
}
