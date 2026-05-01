/*
 * XREFs of ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x18004DBD8
 * Callers:
 *     RmtSrv_RM_AcquireResourceSet @ 0x18004D310 (RmtSrv_RM_AcquireResourceSet.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180011D10 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001E620 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_KK55PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180020840 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ??2@YAPEAX_K@Z @ 0x18003E450 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180062A18 (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_AcquireResourceSet(
        ResourceManagerServerProxy *this,
        struct _RM_ACTIVATOR *a2,
        struct RmResourceSetInfo *a3,
        char a4,
        unsigned __int16 *a5,
        SID *Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 a10,
        unsigned int a11,
        int *a12,
        unsigned __int64 a13,
        unsigned __int64 *a14)
{
  struct ExecutionModel::_ResourceSetInfo *v18; // r8
  _QWORD *v19; // rbx
  int v20; // edi
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int8 v24; // [rsp+70h] [rbp-1D8h] BYREF
  unsigned __int16 *v25; // [rsp+78h] [rbp-1D0h]
  _BYTE v26[384]; // [rsp+80h] [rbp-1C8h] BYREF

  v25 = a5;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v26);
  v19 = 0LL;
  if ( !Sid || a7 >= 0xC && a7 == RtlLengthSid(Sid) && RtlValidSid(Sid) )
  {
    ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(a3, (const struct RmResourceSetInfo *)v26, v18);
    v21 = HamObjectIdGenerate(1);
    if ( a4 )
    {
      v19 = operator new(0x20uLL);
      if ( v19 )
      {
        v22 = *((_QWORD *)this + 2);
        v19[1] = -1LL;
        *v19 = &ResourceSetCallback::`vftable';
        v19[2] = v22;
        *((_DWORD *)v19 + 6) = 1;
      }
      else
      {
        v19 = 0LL;
      }
      if ( !v19 )
        return (unsigned int)-2147024882;
      v19[1] = v21;
    }
    v24 = 0;
    v20 = RmSrvAcquireResourceSet(
            *((struct _RM_SERVICE_GLOBALS **)this + 2),
            (struct ExecutionModel::_ResourceSetInfo *)v26,
            (struct ExecutionModel::IResourceSetCallback *)v19,
            0LL,
            v25,
            Sid,
            a8,
            a9,
            a10,
            a11,
            a13,
            v21,
            a2,
            (bool *)((unsigned __int64)&v24 & -(__int64)(a12 != 0LL)));
    if ( v20 >= 0 )
    {
      if ( a12 )
        *a12 = v24;
      *a14 = v21;
      v20 = 0;
    }
    if ( v19 )
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v20;
}
