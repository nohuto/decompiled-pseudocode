/*
 * XREFs of ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x18009BF00
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x18008AC60 (--_E-$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 *     ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800BDDD0 (--_E-$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z.c)
 *     ??_ECDynamicInlineStorage@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800C5330 (--_ECDynamicInlineStorage@PrimitiveStorage@@UEAAPEAXI@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CHWDrawListEntry *__fastcall CHWDrawListEntry::`scalar deleting destructor'(CHWDrawListEntry *this, char a2)
{
  CMILRefCountBase *v3; // rcx
  void (*v5)(void); // rax
  dataproviderBamoConnection *(__fastcall ***v6)(dataproviderBamoConnection *, char); // rcx
  dataproviderBamoConnection *(__fastcall *v7)(dataproviderBamoConnection *, char); // rax
  __int64 v8; // rcx
  LPVOID Value; // rbx
  _QWORD *v11; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  --CHWDrawListEngineMetrics::s_cDrawListEntries;
  *(_QWORD *)this = &CHWDrawListEntry::`vftable';
  v3 = (CMILRefCountBase *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    *((_QWORD *)this + 8) = 0LL;
    v5 = *(void (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v5 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v3);
    else
      v5();
  }
  v6 = (dataproviderBamoConnection *(__fastcall ***)(dataproviderBamoConnection *, char))*((_QWORD *)this + 7);
  if ( v6 )
  {
    v7 = **v6;
    if ( (char *)v7 == (char *)PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor' )
    {
      PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor'(v6);
    }
    else if ( v7 == PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor' )
    {
      PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor'(
        (dataproviderBamoConnection *)v6,
        1);
    }
    else if ( (char *)v7 == (char *)PrimitiveStorage::CDynamicInlineStorage::`vector deleting destructor' )
    {
      PrimitiveStorage::CDynamicInlineStorage::`vector deleting destructor'(
        (PrimitiveStorage::CDynamicInlineStorage *)v6,
        1u);
    }
    else
    {
      v7((dataproviderBamoConnection *)v6, 1);
    }
  }
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v11 = operator new(0xF8uLL);
        Value = v11;
        if ( v11 )
        {
          *v11 = 0LL;
          v11[1] = 0LL;
          v11[2] = 0LL;
          v11[3] = 0LL;
          v11[4] = 0LL;
          v11[5] = 0LL;
          v11[6] = 0LL;
          v11[7] = 0LL;
          v11[8] = 0LL;
          v11[9] = 0LL;
          v11[10] = 0LL;
          v11[11] = 0LL;
          v11[12] = 0LL;
          v11[13] = 0LL;
          v11[14] = 0LL;
          v11[15] = 0LL;
          v11[16] = 0LL;
          v11[17] = 0LL;
          v11[18] = 0LL;
          v11[19] = 0LL;
          v11[20] = 0LL;
          v11[21] = 0LL;
          v11[22] = 0LL;
          v11[23] = 0LL;
          v11[24] = 0LL;
          v11[25] = 0LL;
          v11[26] = 0LL;
          v11[27] = 0LL;
          v11[28] = 0LL;
          v11[29] = 0LL;
          v11[30] = 0LL;
        }
        else
        {
          Value = 0LL;
        }
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 15) >= *((_DWORD *)Value + 14) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)Value + 8);
        ++*((_DWORD *)Value + 15);
        *((_QWORD *)Value + 8) = this;
      }
    }
  }
  return this;
}
