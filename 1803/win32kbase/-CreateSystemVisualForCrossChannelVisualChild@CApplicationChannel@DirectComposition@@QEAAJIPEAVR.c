/*
 * XREFs of ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C000AAF4
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0013D90 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0002138 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C000B938 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ @ 0x1C000C9A0 (-Initialize@CVisualMarshaler@DirectComposition@@UEAAJXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0016058 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C00467A8 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
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
  if ( a2 && v4 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v4 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 120LL))(v6, 151LL) )
    {
      v7 = Win32AllocPoolWithQuotaZInit(0x130uLL);
      v8 = v7;
      if ( v7 )
      {
        *(_DWORD *)(v7 + 24) = 0;
        *(_DWORD *)(v7 + 20) = 1;
        *(_QWORD *)v7 = &DirectComposition::CCrossChannelChildVisualMarshaler::`vftable';
        *(_DWORD *)(v7 + 280) = 0;
        *(_QWORD *)(v7 + 296) = v7 + 288;
        *(_QWORD *)(v7 + 288) = v7 + 288;
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
                             0x97u,
                             (struct ResourceHandle *)(v8 + 280));
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
          v10 = (DirectComposition::CApplicationChannel **)*((_QWORD *)this + 32);
          v11 = (DirectComposition::CApplicationChannel *)(v8 + 288);
          if ( *v10 != (DirectComposition::CApplicationChannel *)((char *)this + 248) )
            __fastfail(3u);
          *(_QWORD *)v11 = (char *)this + 248;
          *(_QWORD *)(v8 + 296) = v10;
          *v10 = v11;
          *((_QWORD *)this + 32) = v11;
        }
        if ( SystemResource < 0
          || (v12 = *(_QWORD *)v8,
              v14 = 0,
              SystemResource = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, _QWORD, _QWORD, char *))(v12 + 248))(
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
          DirectComposition::CConnection::ReferenceSystemResource(*((_QWORD *)this + 5), *(unsigned int *)(v8 + 280));
          *(_DWORD *)a3 = *(_DWORD *)(v8 + 280);
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
