/*
 * XREFs of ??_ECDwm3DRECallbackRenderer@@UEAAPEAXI@Z @ 0x18017B924
 * Callers:
 *     ??_ECDwm3DRECallbackRenderer@@W7EAAPEAXI@Z @ 0x1800DDB10 (--_ECDwm3DRECallbackRenderer@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDwm3DRECallbackRenderer@@@Z @ 0x1801C6B04 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDwm3DRECallbackRenderer@@@Z.c)
 */

CDwm3DRECallbackRenderer *__fastcall CDwm3DRECallbackRenderer::`vector deleting destructor'(
        CDwm3DRECallbackRenderer *this,
        char a2)
{
  __int64 v4; // rcx
  struct CDwm3DRECallbackRenderer *v5; // rcx
  struct CObjectCache *ObjectCache; // rax

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v5);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
