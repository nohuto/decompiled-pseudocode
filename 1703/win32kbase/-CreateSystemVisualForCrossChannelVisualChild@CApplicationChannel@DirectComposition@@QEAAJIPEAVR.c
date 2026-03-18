/*
 * XREFs of ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0019DBC
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C008ABFC (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C00149CC (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0014A94 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C0017F70 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00188E4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001A1F8 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C001B154 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateSystemVisualForCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        struct ResourceHandle *a3)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  int SystemResource; // edi
  DirectComposition::CApplicationChannel **v10; // rdx
  DirectComposition::CApplicationChannel *v11; // rax
  __int64 v12; // rax
  char v14; // [rsp+68h] [rbp+10h] BYREF

  v4 = (unsigned int)(a2 - 1);
  if ( a2 && v4 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v4 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 120LL))(v6, 31LL) )
    {
      v7 = Win32AllocPoolWithQuotaZInit(0x108uLL);
      v8 = v7;
      if ( v7 )
      {
        *(_DWORD *)(v7 + 24) = 0;
        *(_DWORD *)(v7 + 20) = 1;
        *(_QWORD *)v7 = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
        *(_DWORD *)(v7 + 240) = 0;
        *(_QWORD *)(v7 + 256) = v7 + 248;
        *(_QWORD *)(v7 + 248) = v7 + 248;
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        SystemResource = DirectComposition::CVisualMarshaler::Initialize((DirectComposition::CVisualMarshaler *)v8);
        if ( SystemResource >= 0 )
          SystemResource = DirectComposition::CConnection::CreateSystemResource(
                             *((DirectComposition::CConnection **)this + 5),
                             0x1Fu,
                             (struct ResourceHandle *)(v8 + 240));
        if ( SystemResource < 0
          || (SystemResource = DirectComposition::CApplicationChannel::RegisterResource(
                                 this,
                                 (struct DirectComposition::CResourceMarshaler *)v8),
              SystemResource < 0) )
        {
          (*(void (__fastcall **)(__int64, DirectComposition::CApplicationChannel *))(*(_QWORD *)v8 + 112LL))(v8, this);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 104LL))(v8, 1LL);
          v8 = 0LL;
        }
        else
        {
          v10 = (DirectComposition::CApplicationChannel **)*((_QWORD *)this + 34);
          v11 = (DirectComposition::CApplicationChannel *)(v8 + 248);
          if ( *v10 != (DirectComposition::CApplicationChannel *)((char *)this + 264) )
            __fastfail(3u);
          *(_QWORD *)v11 = (char *)this + 264;
          *(_QWORD *)(v8 + 256) = v10;
          *v10 = v11;
          *((_QWORD *)this + 34) = v11;
        }
        if ( SystemResource < 0
          || (v12 = *(_QWORD *)v8,
              v14 = 0,
              SystemResource = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, _QWORD, _QWORD, char *))(v12 + 240))(
                                 v8,
                                 this,
                                 v6,
                                 0LL,
                                 0LL,
                                 &v14),
              SystemResource < 0) )
        {
          if ( v8 )
            DirectComposition::CApplicationChannel::ReleaseResource(
              this,
              (struct DirectComposition::CResourceMarshaler *)v8);
        }
        else
        {
          if ( v14 )
            DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
              this,
              (struct DirectComposition::CResourceMarshaler *)v8);
          DirectComposition::CConnection::ReferenceSystemResource(*((_QWORD *)this + 5), *(_DWORD *)(v8 + 240));
          *(_DWORD *)a3 = *(_DWORD *)(v8 + 240);
        }
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)SystemResource;
}
