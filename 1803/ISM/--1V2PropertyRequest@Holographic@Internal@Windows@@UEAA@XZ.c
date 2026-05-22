/*
 * XREFs of ??1V2PropertyRequest@Holographic@Internal@Windows@@UEAA@XZ @ 0x1800C17B4
 * Callers:
 *     ??_GV2PropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x1800C1C60 (--_GV2PropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GV2DevicePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x1800C2120 (--_GV2DevicePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_EV2NodePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x1800C21D0 (--_EV2NodePropertyRequest@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     _Windows::Internal::Holographic::V2DevicePropertyRequest::V2DevicePropertyRequest_::_1_::dtor$0 @ 0x1800E98B4 (_Windows--Internal--Holographic--V2DevicePropertyRequest--V2DevicePropertyRequest_--_1_--dtor$0.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertyRequests_::_1_::dtor$91 @ 0x1800E9994 (_Windows--Internal--Holographic--SpatialGraphDriverClient--AddNodePropertyRequests_--_1_--dtor$9.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

void __fastcall Windows::Internal::Holographic::V2PropertyRequest::~V2PropertyRequest(
        Windows::Internal::Holographic::V2PropertyRequest *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)this + 26) == -2147023899;
  *(_QWORD *)this = &Windows::Internal::Holographic::V2PropertyRequest::`vftable';
  if ( v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertyrequests.h",
      a4);
    JUMPOUT(0x1800C183DLL);
  }
  v6 = *((_QWORD *)this + 10);
  if ( v6 )
  {
    if ( *((_QWORD *)this + 12) - v6 >= 0x1000 )
    {
      if ( (v6 & 0x1F) != 0 || (v7 = *(_QWORD *)(v6 - 8), v7 >= v6) || (v6 = v6 - v7 - 8, v6 > 0x1F) )
      {
        _o__invalid_parameter_noinfo_noreturn(v6, a2);
        __debugbreak();
      }
      v6 = v7;
    }
    operator delete((void *)v6);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
}
